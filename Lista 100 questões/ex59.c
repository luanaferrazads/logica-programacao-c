#include <stdio.h>

int main(){
    double e; 
	int numero, iCont, jCont, fatorial;
	e = 1.0;
	
   	printf("Informe o numero:\n");
   	scanf("%d", &numero);
    
    for(iCont = 1; iCont <= numero; iCont++){
    	fatorial = 1;
    	for(jCont = 1; jCont <= iCont; jCont++){
    		fatorial *= jCont;
		}
		
		e += 1.0 / fatorial;
	}
	printf("%d! = %.8f", numero, e);
	return 0;
}
