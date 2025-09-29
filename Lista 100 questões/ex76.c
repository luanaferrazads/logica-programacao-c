#include <stdio.h>
#define N 256
int main(){
    char str[N];
    int iCont;
    int vogais;
    
    printf("Informe a string: \n");
    fgets(str, N, stdin);
    
    vogais = 0;
    for(iCont = 0; str[iCont] != '\0'; iCont++){
        if((str[iCont] == 'a') || (str[iCont] == 'e') || (str[iCont] == 'i') || (str[iCont] == 'o') || (str[iCont] == 'u') ||
            (str[iCont] == 'A') || (str[iCont] == 'E') || (str[iCont] == 'I') || (str[iCont] == 'O') || (str[iCont] == 'U')){
            vogais++;
        }
    }

    printf("A string tem %d vogais", vogais);

    return 0;
}
