#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char buffer[50];
    int fd[2];
    pipe(fd);
    
    if (fork() == 0) {
        printf("\n-- HIJO --\n");
        close(fd[0]);//     cierra un extremo de lectura
        
        char mensaje[]= "Este mensaje se envio desde el hijo.";  //  Crea el mensaje
        write(fd[1], mensaje, strlen(mensaje)+1);   //  Lo escribe en la tuberia
        close(fd[1]); //    Cierra la tuberia
        printf("Mensaje mandado a padre.\n");
    }else {
        sleep(1);
        
        printf("\n-- PADRE --\n");
        close(fd[1]);//     Cierra el extremo de escritura
        read(fd[0], buffer, sizeof(buffer)); // Lee el mensaje del hijo
        printf("Recibi de mi hijo: %s\n", buffer); // Imprime el mensaje que se haya enviado en el padre
        close(fd[0]); //    Cierra el extremo de lectura   
    }
    return 0;
}