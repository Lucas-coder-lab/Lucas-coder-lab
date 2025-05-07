#include <stdio.h>

int main(){

 int opcao, pagamento, carro;
 int Mclaren, Ferrari, Porshe;
 int alugado1, alugado2, alugado3;
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

       case 1:

      printf("Escolha quantos dias pretente ficar com o carro \n");

      printf("1 - McLaren Senna por 10 dias a 200mil \n");
      printf("2 - McLaren Senna por 20 dias a 400mil \n");
      printf("3 - McLaren Senna por 30 dias a 550mil \n");
   
     scanf("%d",&Mclaren);

     switch (Mclaren) {
    case 1: 
      
      printf("%s, você alugou nossa McLaren por 10 dias, com o valor total de 200mil, contando a partir da presente data! \n", nome);
      
      printf("Qual forma de pagamento? \n");
      printf("1 - Dinheiro ou Pix \n");
      printf("2 - Cartão Credito \n");
      printf("3 - Cartão debito \n");
      scanf("%d", &pagamento);

       switch(pagamento){
     
       case 1:
       printf("Muito obrigado pelo pagamento, faça um bom aproveito");
       break;
       case 2:
       printf("Pode inserir ou aproximar e digitar a senha, muito obrigado, faça um ótimo aproveito");
       break;
       case 3:
       printf("Pode inserir ou aproximar e digitar a senha, muito obrigado, faça um ótimo aproveito");
       break;
       }
    break;

    case 2:
      printf("%s, você alugou nossa McLaren por 20 dias, com o valor total de 400mil, contando a partir da presente data! \n", nome);
      printf("Qual forma de pagamento? \n");
      printf("1 - Dinheiro ou Pix \n");
      printf("2 - Cartão Credito \n");
      printf("3 - Cartão debito \n");
      scanf("%d", &pagamento);
       switch(pagamento){
     
       case 1:
       printf("Muito obrigado pelo pagamento, faça um bom aproveito");
       break;
       case 2:
       printf("Pode inserir ou aproximar e digitar a senha, muito obrigado, faça um ótimo aproveito");
       break;
       case 3:
       printf("Pode inserir ou aproximar e digitar a senha, muito obrigado, faça um ótimo aproveito");
       break;
       }

    break;
    case 3:
       printf("%s, você alugou nossa McLaren por 30 dias, com o valor total de 550mil, contando a partir da presente data! \n", nome);
       printf("Qual forma de pagamento? \n");
       printf("1 - Dinheiro ou Pix \n");
       printf("2 - Cartão Credito \n");
       printf("3 - Cartão debito \n");
       scanf("%d", &pagamento);
       switch(pagamento){
     
       case 1:
       printf("Muito obrigado pelo pagamento, faça um bom aproveito");
       break;
       case 2:
       printf("Pode inserir ou aproximar e digitar a senha, muito obrigado, faça um ótimo aproveito");
       break;
       case 3:
       printf("Pode inserir ou aproximar e digitar a senha, muito obrigado, faça um ótimo aproveito");
       break;
      
    break;
      
    


     }

     }
     
  
     break;
     

     }
     
 break;
default:

 printf("Obrigado por ter entrado em contato, qualquer duvida ficamos a disposição");
     

 }

 return 0;

}

