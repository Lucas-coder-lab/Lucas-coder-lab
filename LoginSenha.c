#include <stdio.h>

int login, senha;
int key;
int entrada(){

printf("Digite o Login: \n");
scanf("%d",&login);

printf("Digite a Senha: \n");
scanf("%d", &senha);

return 0;
}

int verificacao()
{
    if (login == 1345 && senha == 1234)
    {
     printf("Login e senha aprovado");
     key = 1;
    }
    else
    {
      printf("Login ou senha invalida!!! Tente novamente!!! \n");
      key = 0;
    }

    return key;

}

int main(){

key = 0;

while(key==0)
{

entrada();
key=verificacao();

}

return 0;
}