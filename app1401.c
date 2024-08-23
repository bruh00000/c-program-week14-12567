#include <stdio.h>

int testPointerAddress(){
    int varA = 5, varB = 10;
    printf("varA : %d\n",varA); // varA:5
    printf("varB : %d\n",varB); // varB:10

    printf("Address of varA : %p\n", &varA);
    printf("Address of varB : %p", &varB);
    return 0;
    
}