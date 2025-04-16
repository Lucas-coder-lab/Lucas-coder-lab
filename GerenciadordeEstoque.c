#include <stdio.h>

int main(){

 //variaveis para produto, estoque e valores.

char produtoA [30] = "Produto A";
char produtoB [30] = "Produto A";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.40;

unsigned int estoqueminimoA = 500;
unsigned int estoqueminimoB = 2500;

double valortotalA;
double valortotalB;

int resultadoA, resultadoB;

//Exibir informações

printf("Produto %s tem estoque %u e o valor unitario é %.2f\n", produtoA, estoqueA, valorA);
printf("Produto %s tem estoque %u e o valor unitario é %.2f\n", produtoB, estoqueB, valorB);

resultadoA = estoqueA > estoqueminimoA;
resultadoB = estoqueB > estoqueminimoB;

printf(" O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
printf(" O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

printf("Valor total de A (R$ %.2f) é maior que o valor total de B(R$ %.2f): %d\n",estoqueA * valorA, estoqueB * valorB,(estoqueA * valorA) > (estoqueB * valorB));



return 0;
}