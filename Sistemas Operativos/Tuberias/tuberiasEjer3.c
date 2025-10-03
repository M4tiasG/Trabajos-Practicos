#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char buffer[100];
    int fd1[2], fd2[2];
    pipe(fd1);
    pipe(fd2);
    
    if (fork() == 0) {
        printf("\n-- HIJO --\n");
        close(fd1[1]);//     cierra el extremo de escritura

        read(fd1[0], buffer, sizeof(buffer)); // Lee el mensaje del padre
        printf("Recibi de mi padre: %s\n", buffer); // Imprime el mensaje que se haya enviado en el padre
        close(fd1[0]); //    cierra el extremo de lectura

        /*Respuesta*/
        close(fd2[0]);//     cierra el extremo de lectura
        char mensaje2[]= "Mensaje recibido! Te mando mi confirmacion.";  //  Crea el mensaje
        write(fd2[1], mensaje2, sizeof(mensaje2));
        close(fd2[1]); //    Cierra el extremo de escritura
        printf("Respuesta mandada a padre.\n");

    }else {
        printf("\n-- PADRE --\n");
        close(fd1[0]);//     cierra el extremo de lectura

        char mensaje[]= "Este mensaje se envio desde el padre";  //  Crea el mensaje
        write(fd1[1], mensaje, strlen(mensaje)+1);   //  Lo escribe en la tuberia
        close(fd1[1]); //    Cierra el extremo de escritura
        printf("Mensaje mandado a hijo.\n");
        
        sleep(1);

        /*Mostrar respuesta*/
        close(fd2[1]);//     Cierra el extremo de escritura
        read(fd2[0], buffer, sizeof(buffer)); // Lee el mensaje del hijo
        printf("PADRE -- Respuesta de mi hijo: %s\n", buffer);
        close(fd2[0]); //    Cierra el extremo de lectura
    }
    return 0;
}