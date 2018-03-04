//test2.c
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
    bool flag = false;
    int size = 10;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--flag") == 0 || strcmp(argv[i], "-f") == 0) {
            flag = true;
        }
        if (strcmp(argv[i], "--size") == 0 || strcmp(argv[i], "-s") == 0) {
            if (argc > (i + 1)) {
                i++;
                size = atoi(argv[i]); // convert string to int
            }
        }
    }
    printf("Size = %d (Default 10)\n", size);
    if (flag)
        printf("Flag set.\n");
    else
        printf("Flag not set.\n");
    return 0;
}
