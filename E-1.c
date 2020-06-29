#include <stdio.h>
#include <stdlib.h>
const char av1_in [] = "list1.txt";
const char av1_out [] = "list2.txt";

int main()
{

FILE *avenum;   
FILE *avegp;

char line [100];
float number_line;
float averesult;

avenum = fopen(av1_in, "r");
	
	if(avenum == NULL)
	{
	printf("Error\n");
	return 8;
	}

avegp = fopen(av1_out, "w+");

	if(avegp == NULL)
	{
	printf("Impossible\n");
	return 8;
	}

while(fgets(line, sizeof(line), avenum))
{

	sscanf(line, "%f", &number_line);
	averesult += number_line;
			
}
fprintf(avegp, "The prom is %f\n", averesult/9);

fclose(avenum);
fclose(avegp);

return 0;
}
