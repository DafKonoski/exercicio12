//Receber um nome do teclado e imprimí-lo de trás pra frente.

#include <stdio.h>

int main() {

  char nome[20];
  
  printf("Nome:\n");
  gets(nome);

  for(int i = strlen(nome); i >= 0; i--){
    printf("%c", nome[i]);
  }
}