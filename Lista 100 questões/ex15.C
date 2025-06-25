#include <stdio.h>
int main(){
  float alturaP, alturaPre, sombraP, sombraPre;
  printf("Informe a sombra da pessoa e a sombra do prédio:\n");
  scanf("%f %f", &sombraP, &sombraPre);
  printf("Informe a altura da pessoa:\n");
  scanf("%f", &alturaP);
  
  alturaPre = (alturaP * sombraPre) / sombraP;
  
  printf("A altura do prédio é %.2f", alturaPre);
  return 0;
};
