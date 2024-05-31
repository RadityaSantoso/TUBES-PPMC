#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

typedef struct testStruct{
    char testChar;
    int testInt;
    struct testStruct* next;
}testStruct;