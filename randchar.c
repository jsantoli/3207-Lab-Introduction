#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randchar(){
    int num = rand() % 26;
    num = num + 65;
    //printf("%d\n", num);

    return num;
}