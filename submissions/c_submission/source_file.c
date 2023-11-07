#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main() {
    // Create an array of length 10,000 filled with zeros
    int data[10000];
    memset(data, 0, sizeof(data));

    // Sleep for 3 seconds
    sleep(3);

    // Write "0,0,0" to a CSV file
    FILE *csvFile = fopen("submission.csv", "w");
    if (csvFile != NULL) {
        fprintf(csvFile, "0,0,0\n");
        fclose(csvFile);
    } else {
        fprintf(stderr, "Failed to open the CSV file.\n");
        return 1;
    }

    return 0;
}