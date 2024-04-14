#include <stdio.h>

int main()
{
    char tekst1[]="abc";
    char tekst2[]= {'a','b','c'};
    char tekst3[]="xyz";
    printf("%p ", tekst1);
    puts(tekst1);
    printf("%p ", tekst2);
    puts(tekst2);
    printf("%p ", tekst3);
    puts(tekst3);
    return 0;
}
