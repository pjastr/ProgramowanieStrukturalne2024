#include <stdio.h>
#include <stdlib.h>

int doOperation(int (*func)(int),int a){
    return func(a);
}

int square(int arg){
    return arg *arg;
}

int cube(int arg){
    return arg *arg*arg;
}

int main()
{
    printf("%d\n", doOperation(square,6));
    printf("%d\n", doOperation(cube,6));
    return 0;
}
