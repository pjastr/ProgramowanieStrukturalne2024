#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
   int n1, n2, n3;
};

int main()
{
   int i;
   struct threeNum num;
   FILE *fptr;

   if ((fptr = fopen("plik.bin","rb")) == NULL){
       printf("Bladd otwarcia pliku!");
       exit(-1);
   }

   for(i = 1; i < 5; i++)
   {
      fread(&num, sizeof(struct threeNum), 1, fptr);
      printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
   }
   fclose(fptr);

   return 0;
}
