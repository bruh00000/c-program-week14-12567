#include <stdio.h>
int testPointer(){
    int *pc, c;
    c = 22;
    printf("Address of c : %p\n", &c); //Address of c : 0061FEFC
    printf("Value of c : %d\n", c); //22

    pc = &c;
    printf("Address of pointer pc : %p\n", pc); //Address of pc : 0061FEFC
    printf("Content of pointer pc : %d\n", *pc); //Content of pc : 22

    c = 11;
    printf("Address of pointer pc : %p\n", pc); //Address of pc : 0061FEFC
    printf("Content of pointer pc : %d\n", *pc); //Content of pc : 11

    *pc = 2;
    printf("Address of c : %p\n", &c); //Address of c : 0061FEFC
    printf("Value of c : %d\n", c); //Address of c : 11
}