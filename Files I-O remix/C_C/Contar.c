
#include<stdio.h>
#include<stdlib.h>

const char *contar_text ="c_c.txt";

int main(){

	FILE *text; 
	char ch; 
	int palabr =1;
	int caracter=1;

	text=fopen(contar_text,"r");
	if(text==NULL){
		fprintf(stderr,"\n %s no se localiza o no se puede abrir\n",contar_text);
	return(8);
	}else{
		ch=fgetc(text);
	while(ch !=EOF){
		printf("%c",ch);
		if(ch==' '|| ch=='\n'){
	palabr++;
	}else{
		caracter++;
	}
	ch=fgetc(text);
	}
	printf("\nPalabras son : %d\n",palabr-2);
	printf("\nCaracteres son: %d\n,", caracter);
	}
fclose(text);
return 0;

}
