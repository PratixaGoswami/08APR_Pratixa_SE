//WAP to show difference between Structure and Union.
#include<stdio.h>

struct structure_example {
    int x;
    char y;
};


union union_example {
    int x;
    char y;
};

int main() {
    
    struct structure_example s;
    s.x = 10;
    s.y = 'A';

    printf("Structure - Size of x: %lu bytes\n", sizeof(s.x));
    printf("Structure - Size of y: %lu bytes\n", sizeof(s.y));
    printf("Size of structure: %lu bytes\n\n", sizeof(s));


    union union_example u;
    u.x = 10;
    u.y = 'A';

    printf("Union - Size of x: %lu bytes\n", sizeof(u.x));
    printf("Union - Size of y: %lu bytes\n", sizeof(u.y));
    printf("Size of union: %lu bytes\n", sizeof(u));

    
}
