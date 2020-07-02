#include<stdio.h>
#include<stdlib.h>

const char *linea_list = "C_L.txt";
const char *linea2 = "C_L2.txt";
int main(){

	FILE *text;
	FILE *t;
	int count;
	char str[100];
	char str1;
	int numb;
	printf("Infresa el numero de lineas que quieres: \n");
	scanf("%d", &numb); 	
	text=fopen(linea_list,"r");
	if(text==NULL){
		fprintf(stderr," %s no se puede abrir o no se encuentra\n", linea_list);
	}
	t=fopen(linea2,"w+"); 
	if(t==NULL){
		fprintf(stderr,"Este archivo %s no se puede abrir\n", linea2);
	}
	for(int i=0;i< numb+1; i++){ 
	fgets(str,sizeof str,stdin);
        fputs(str,text);
	}
//fclose(text);

	printf("El contenido de esta %s es: \n", str);
		str1= fgetc(text);
	while(str1 != EOF){
	printf("%c",str1);
	str1 =fgetc(text);
	}
	fprintf(t,"%s",str);
fclose(text);

return 0;
}
