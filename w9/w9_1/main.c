#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length(char * txt){
    int counter =0;
    for(int i=0;txt[i] != '\0';i++){
        counter++;
    }
    return counter;
}

int length2(char * txt){
    int counter =0;
    for(int i=0;txt[i] != 0;i++){
        counter++;
    }
    return counter;
}

int length3(char * txt){
    int i=0;
    while(txt[i] !=0){
        i++;
    }
    return i;
}

int length4(char * txt){
    int i=0;
    while(*(txt+i) !=0){
        i++;
    }
    return i;
}

int length5(char * txt){
    int i=0;
    while(*(txt+i)){
        i++;
    }
    return i;
}

int length6(char * txt){
    if (txt[0] == 0)
        return 0;
    return 1+length6(++txt);
}

int length7(char * txt){
    if (*txt == 0)
        return 0;
    return 1+length7(++txt);
}

int length8(char * txt){
    if (!*txt)
        return 0;
    return 1+length8(++txt);
}

int main()
{
    printf("%d\n", length("Olsztyn"));
    printf("%Iu\n", strlen("Olsztyn"));
    printf("%d\n", length2("Olsztyn"));
    printf("%d\n", length3("Olsztyn"));
    printf("%d\n", length4("Olsztyn"));
    printf("%d\n", length5("Olsztyn"));
    printf("%d\n", length6("Olsztyn"));
    printf("%d\n", length7("Olsztyn"));
    printf("%d\n", length8("Olsztyn"));
    return 0;
}
