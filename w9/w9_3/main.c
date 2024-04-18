#include <stdio.h>
#include <stdlib.h>

char* foo()
{
    return "abc";
}

int main()
{
    printf("%s\n",foo());
    return 0;
}
