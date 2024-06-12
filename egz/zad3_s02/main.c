#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Telefon{
    char marka[15];
    int liczbaPolaczen;
};

struct Telefon * initTelefon(char marka2[], int liczbaPolaczen2){
    if (strlen(marka2) <3 || liczbaPolaczen2 <=50){
        return NULL;
    }
    struct Telefon * temp = malloc(sizeof(struct Telefon));
    strcpy(temp->marka, marka2);
    temp->liczbaPolaczen = liczbaPolaczen2;
    return temp;
}

void zwiekszLiczbePolaczen(struct Telefon * wsk){
    wsk->liczbaPolaczen +=10;
}

int main()
{
    struct Telefon * t1 = initTelefon("Samsung", 60);
    if (t1!=NULL){
        printf("%s %d\n", t1->marka, t1->liczbaPolaczen);
        zwiekszLiczbePolaczen(t1);
        printf("%s %d\n", t1->marka, t1->liczbaPolaczen);
    }
    return 0;
}
