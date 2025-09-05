#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    pid_t retornoFork1, retornoFork2, retornoFork3;

    printf("PADRE: Esperando a que los hijos terminen de dormir\n");
    if ((retornoFork1 = fork()) == 0) { // proceso hijo 1
        printf("Soy el hijo 1, mi PID es %d y mi PPID es %d\n durmiendo...\n\n", getpid(), getppid());
        sleep(2);
        printf("Hijo 1 de despertado y mi PID es %d\n", getpid());
        exit(0);

    }else{
        if ((retornoFork2 = fork()) == 0) { // proceso hijo 2
        printf("Soy el hijo 2, mi PID es %d y mi PPID es %d\n durmiendo...\n\n", getpid(), getppid());
        sleep(4);
        printf("Hijo 2 de despertado y mi PID es %d\n", getpid());
        exit(0);
        }else{
            if ((retornoFork3 = fork()) == 0) { // proceso hijo 3
                printf("Soy el hijo 3, mi PID es %d y mi PPID es %d\n durmiendo...\n\n", getpid(), getppid());
                sleep(6);
                printf("Hijo 3 de despertado y mi PID es %d\n", getpid());
                exit(0);
            }else { // proceso padre
                wait(NULL);
                wait(NULL);
                wait(NULL);
                printf("PADRE: Todos los hijos han terminado\n");
            }
        }  
    }
    return 0;
}