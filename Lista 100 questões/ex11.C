#include <stdio.h>
int main(){
   float nota1, nota2, nota3, nota4, mediab1, mediab2, mediaSemestral;
   printf("Informe quais foram as 2 notas do aluno no primeiro bimestre:\n");
   scanf("%f %f", &nota1, &nota2);
   printf("Informe quais foram as 2 notas do aluno no segundo bimestre:\n");
   scanf("%f %f", &nota3, &nota4);
   
   mediab1 = (nota1 + nota2) / 2;
   mediab2 = (nota3 + nota4) / 2;
   mediaSemestral = (mediab1 + mediab2) / 2;
   
   printf("A nota semestral do aluno é: %.2f", mediaSemestral);
};
