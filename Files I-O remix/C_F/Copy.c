#include<stdio.h>
#include<stdlib.h>

const char *file_Read = "Read.txt";
const char *Copia_file = "Copia.txt";

int main(){

	FILE *lec; 
	FILE *esc;

	int k;

	lec = fopen(file_Read,"r"); 
	if(lec == NULL){
		fprintf(stderr,"Este %s no se puede abrir\n", file_Read);
	return(8);
	}

	esc=fopen(Copia_file,"w+"); 
	if(esc == NULL){
		fprintf(stderr,"Este %s no se puede abrir\n",Copia_file);
	fclose(lec);
	return(8);
	}
	k = fgetc(lec);
	while(k != EOF){
	fputc(k,esc); 
	k=fgetc(lec);
	}
	printf("\n Corrobore el otro archivo\n"); 

	fclose(lec);
	fclose(esc);
return 0;
}
