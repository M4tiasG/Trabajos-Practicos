#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char buffer[50];
    int fd[2];
    pipe(fd);
    
    if (fork() == 0) {
        close(fd[0]);
        char mensaje[]= "Este mensaje se envio desde el hijo A.";  //  Crea el mensaje
        write(fd[1], mensaje, sizeof(mensaje));   //  Lo escribe en la tuberia
        close(fd[1]); //    Cierra el extremo de escritura
        printf("\n-- HIJO A --\nMensaje mandado a Hijo B.\n");
    }else {
        if (fork()==0) {
            close(fd[1]); //    Cierra el extremo de escritura
            read(fd[0], buffer, sizeof(buffer)); // Lee el mensaje del hijo A
            printf("\n-- HIJO B --\n Recibi del hijo A: %s\n", buffer); // Imprime el mensaje que se haya enviado en el padre
            close(fd[0]); //    Cierra el extremo de lectura
        }else {
            printf("\n-- PADRE --\nCreando hijos...\n\n");
        }
    }
    return 0;
}