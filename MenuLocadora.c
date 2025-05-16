#include <stdio.h>

int main(){

 int opcao, pagamento, carro;
 int Mclaren, Ferrari, Porshe;
 float telefone;
 char nome[30];


 printf("Bem-vindo a locadora de carros importados, poderia digitar seu nome e telefone, para avançarmos nosso menu. \n");

 printf("Digite seu nome: \n");
 scanf("%s", nome);
 printf("Digite seu telefone: \n");
 scanf("%f",&telefone); 

 printf("1 - Ver carros para Alugar?\n");
 printf("2 - Consultar formas de pagamento? \n");
 printf("3 - Sair \n");
 scanf("%d",&opcao);



 switch (opcao) {
 
 case 1:
   printf("1 - McLaren Senna \n");
   printf("2 - Ferrari Roma Spider \n");
   printf("3 - Porshe 911 GT3 RS \n");
 
   scanf("%d", &carro);

     switch (carro) {

       case 1: {

       printf("Escolha quantos dias pretente ficar com o carro \n");

       printf("1 - McLaren Senna por 10 dias a 200mil \n");
       printf("2 - McLaren Senna por 20 dias a 400mil \n");
       printf("3 - McLaren Senna por 30 dias a 550mil \n");
   
       scanf("%d",&Mclaren);
       break;
       }
       case 2: {
       printf("Escolha quantos dias pretente ficar com o carro \n");

       printf("1 - Ferrari por 10 dias a 200mil \n");
       printf("2 - Ferrari por 20 dias a 400mil \n");
       printf("3 - Ferrari por 30 dias a 550mil \n");
   
       scanf("%d",&Ferrari);
       break;
       }
       case 3: {
     
       printf("Escolha quantos dias pretente ficar com o carro \n");

       printf("1 - Porshe por 10 dias a 200mil \n");
       printf("2 - Porshe por 20 dias a 400mil \n");
       printf("3 - Porshe por 30 dias a 550mil \n");
   
      scanf("%d",&Porshe);
      break; 
       }





    break; 
      
    


     }  
 } 


return 0;
    
}