#include <stdio.h>

int main() {
	int mes, dias;
	printf("Informe o numero equivalente ao mes:\n");
	scanf("%i", &mes);
	
	if (mes == 4 || mes == 6 || mes == 9 || mes ==11 )
                printf("O mes %i tem 30 dias", mes);
	else if (mes == 2)
	    printf("O mes %i tem 28 dias", mes);
	else
	    printf("O mes %i tem 31 dias", mes);
	
	
	/*switch (mes){
	case 1:printf("31 dias");break;
	case 2:printf("28 dias");break;
	case 3:printf("31 dias");break;
	case 4:printf("30 dias");break;
	case 5:printf("31 dias");break;
	case 6:printf("30 dias");break;
	case 7:printf("31 dias");break;
	case 8:printf("31 dias");break;
	case 9:printf("30 dias");break;
	case 10:printf("31 dias");break;
	case 11:printf("30 dias");break;
	case 12:printf("31 dias");break;
	}
	return 0;*/
};
