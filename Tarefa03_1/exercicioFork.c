#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int value = 5;

int main()
{
        pid_t pid;
        int pipes[2];
        pipe(pipes);
        pid = fork();

        if (pid == 0) { /* child process */
                close(pipes[0]);
                printf("Entrei no filho!\n");
                value += 15;
                write(pipes[1], &value, 1);
                printf ("CHILD: value = %d\n",value); /* LINE A */
                return 0;
        }
        else if (pid > 0) { /* parent process */
                wait(NULL);
                read(pipes[0], &value, sizeof(int));
                printf ("PARENT: value = %d\n",value); /* LINE A */
                return 0;
        }
}
