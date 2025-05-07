#include <stdio.h>

int main(){

 int opcao;
 int carro;
 int dias;

 printf("Bem-vindo a locadora de carros importados, como posso ajudar? \n");
 printf("1 - Ver carros para Alugar?\n");
 printf("2 - cadastro do cliente \n");
 scanf("%d",&opcao);
  
 switch (opcao) {
 
 case 1:
   printf("1 - McLaren Senna 200mil 10 dias \n");
   printf("2 - Ferrari Roma Spider - 150mil 10 dias \n");
   printf("3 - Porshe 911 GT3 RS 180mil 10 dias \n");
 
   scanf("%d", &carro);

     switch (carro) {

       case 1:
      
      printf("1 - 10 dias 200mil \n");
      printf("2 - 20 dias 400mil \n");
      printf("3 - 30 dias 550mil \n");
   
     scanf("%d",&dias);

     break;
     

     }
     
 break;
default:

 printf("Finalizado atendimento");
     

 }

 
 

 return 0;

}

 