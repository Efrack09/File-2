#include <stdio.h>
#include <stdlib.h>

const char multipli_in [] = "colum1.txt";
const char multipli_out[] = "colum2.txt";

int main() 
{

FILE *numlist;
FILE *resul;

char line [200];
int one;
int two;
int multip;


numlist = fopen(multipli_in, "r");
	if(numlist == NULL)
	{
	printf("Impossible\n");
	return 8;
	}

resul = fopen(multipli_out, "w+");
	if(resul == NULL)
	{
	printf("Not possible\n");
	return 8;
	}


while(feof(numlist)==0)
{

fscanf(numlist, "%d %d", &one, &two);

multip = one*two;

fprintf(resul, "%d\n", multip);

}



fclose(numlist);
fclose(resul);

return 0;
}
