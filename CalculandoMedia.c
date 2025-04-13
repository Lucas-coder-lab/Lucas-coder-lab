#include <stdio.h>
// Programa para calculo de média
int main(){

 int nota1, nota2, nota3;
 float media;

 printf("Escreva a primeira nota: \n");
 scanf("%d",&nota1);

 printf("Escreva a segunda nota: \n");
 scanf("%d",&nota2);

 printf("Escreva a terceira nota: \n");
 scanf("%d",&nota3);

 media = (float)(nota1 + nota2 + nota3) / 3;


 printf("A media e: %1.f \n", media);


 return 0;





}