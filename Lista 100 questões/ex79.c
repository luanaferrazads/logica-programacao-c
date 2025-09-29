#include <stdio.h>
#define MAX 1024
int main(){
    char str[MAX];
    char str2[MAX];
    int iCont;
    
    printf("Informe a string:\n");
    fgets(str, MAX, stdin);
    
    for(iCont = 0; str[iCont] != '\0'; iCont++){
        str2[iCont] = str[iCont];
    }
    str2[iCont] = '\0';
    printf("A substring é %s", str2);
    return 0;
}

