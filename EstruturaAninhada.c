#include <stdio.h>

int entrada(){


char nome;
int CPF;
int datanascimento;
float planomed;

    printf("Digite seu nome: \n");
    scanf("%s \n", nome);
    printf("Digite seu CPF: \n");
    scanf("%d\n", &CPF);
    printf("Digite a data de nascimento \n");
    scanf("%d\n", &datanascimento);
    printf("Sera pelo plano de saude? digite apenas sim ou não \n");
    scanf("%f\n", &planomed);

 return 0;

}

 