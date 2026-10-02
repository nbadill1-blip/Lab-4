#include <stdio.h>
#include <string.h>
#include <stdlib.h>
extern int sum_nums(int *arr, int size);

int main(int argc, char *argv[]) {

    FILE *fp = NULL;

    FILE *file = fopen(argv[1], "r");

    char buff[400];

    int number;

    fscanf(file, "%d", &number);

    int numArray[number];

    int val1;
    int index = 0;
    while (index < number && fscanf(file, "%d", &val1) == 1) {
        //printf("%d\n", val1);
        numArray[index] = val1;
        index++;
    }
    
    
    int total = sum_nums(numArray, number);

    printf("Total: %d\n", total);

    fclose(file);

    return 0;
}