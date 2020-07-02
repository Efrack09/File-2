#include <stdio.h>
#include <stdlib.h>

const char *lista_n = "num.txt";
const char *lista_prim = "prim.txt";
const char *lista_imp = "imp.txt";
const char *lista_par = "par.txt";


int main(){

        FILE *original; 
        FILE *par;
        FILE *impar;
        FILE *primo;

        int number; 

        original = fopen(lista_n,"r");  
        if(original == NULL){
        fprintf(stderr,"Este %s no se puede abrir", lista_n);
        return(8);
        }

        par = fopen(lista_par,"w+");
        if(par == NULL){                                                                                                                                                                                                                                                                          return(8);                                                                                                                                                                                   }
		fprintf(stderr,"Este %s no se puede abrir", lista_par);    
		 
        impar = fopen(lista_imp,"w+");
        if(impar == NULL){
        fprintf(stderr,"Este %s no se puede abrir", lista_imp);
        return(8);
        }

        primo = fopen(lista_prim,"w+");
        if(primo == NULL){
        fprintf(stderr,"Este %s no se puede abrir", lista_prim);
        fclose(original);
        return(8);
        }

        while(feof(original)==0){   
        fscanf(original,"%d\n",&number);
	        if(number%2==0){
                fprintf(par,"%d\n",number);
                        for(int i=2; i<number/2; i++){
                                if(number %i ==0){
                                        fprintf(primo, "%d\n", number);
                                }
                        }
        }else{
                fprintf(impar,"%d\n",number);

        }

        }
        fclose(original); 
        fclose(primo);
        fclose(par);
        fclose(impar);

return 0;
}
