#include <stdio.h>
#include <stdlib.h>
//include something to let us time the program
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // //start a child process
    // pid_t pid = fork();
    // //have the child process build the submission
    // if (pid == 0) {
    //     //concatinate the path to the submission
    //     char path[100] = "./submissions/";
    //     strcat(path, argv[1]);
    //     printf("%s\n", path);
    //     chdir(path);
    //     //change directory to the submission
    //     //run make build using execl, and output the result to a string. then print the string
    //     char str[100];
    //     execl("/usr/bin/make", "make","build" (char *)str);
    //     //execl("usr/bin/make", "make", "build", (char *)str);
    //     //if we get here print an error
    //     printf("%s\n", str);
    //     //exit the child process
    //     exit(1);
    // }else {
    //     //wait for the child process to finish
    //     int status;
    //     waitpid(pid, &status, 0);
    //     //check if the child process exited with an error
    //     if (WIFEXITED(status)) {
    //         //if it did, then print an error
    //         printf("Error: could not build submission\n");
    //         //exit the parent process
    //         exit(1);
    //     }
    //     //else print success
    //     printf("Success: built submission\n");
    // }



    //build the submission
    //concatinate the path to the submission
    char path[100] = "./submissions/";
    strcat(path, argv[1]);
    //change directory to the submission
    chdir(path);
    //print the current directory
    system("pwd");
    //build the submission
    system("make build");
    //record time before running
    clock_t start = clock();
    //run the submission as a child process
    //TODO: need to figure out how to record memory usage...
    system("make run");
    //record time after running
    clock_t end = clock();
    //calculate the time it took to run in milliseconds
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC * 1000;
    //print the time
    printf("Time: %f\n", time_spent);
    //read the output of the program
    FILE *file = fopen("submission.csv", "r");
    //check if the first line in the file is three zeros
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    read = getline(&line, &len, file);
    if (strcmp(line, "0,0,0") == 0) {
        //if it is, then the submission is correct
        printf("PASSED\n");
    } else {
        //if it isn't, then the submission is incorrect
        printf("FAILED\n");
    }
    //cleanup
    fclose(file);
    if (line) {
        free(line);
    }
    system("make clean");
    // system("rm ./submission.csv");
    // system("cd ../..");






    return(0);
}