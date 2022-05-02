#include <stdio.h>
#define PRINT(n) printf("v" #n " = %d\n", v##n)
#define MAKE_NAME(n) v ## n


void main() {
    int MAKE_NAME(1) = 10;   // V1 = 10;
    int MAKE_NAME(2) = 20;   // V2 = 20;
    PRINT(1);
    PRINT(2);
    

}