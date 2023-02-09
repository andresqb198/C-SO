#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    printf("Hola mundo ");
    int pid, pid1, pid2;

    pid = fork();

    if(pid == 0){
        sleep(3);

        printf("Hijo 1 --> pid = %d and ppid = %d\n",getpid(),getppid());

    }else{
        pid1 = fork();
        if(pid1 == 0){
            sleep(3);

            printf("Hijo 2 --> pid = %d and ppid = %d\n",getpid(),getppid());

        }else{
            pid2 = fork();
            if(pid2 == 0){
                sleep(3);

                printf("Hijo 3 --> pid = %d and ppid = %d\n",getpid(),getppid());

            }else{
                sleep(3);

                printf("Padre --> pid = %d and ppid = %d\n",getpid(),getppid());
            }
        }
    }
    return 0;
}