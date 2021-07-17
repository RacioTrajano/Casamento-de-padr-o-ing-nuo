#include<stdio.h>
#include<string.h>

void posicao(char* text, char* padrao){

int tam_text =strlen(text);
int tam_padrao=strlen(padrao);


for (int i=0; i<=tam_text - tam_padrao; i++){
  for(int j=0; j<tam_padrao; j++){
    while(text[i+j]== padrao[j]){
      printf("%c", text[i+j]);

    }
    if(j==tam_padrao-1){
      printf("Achei o padrão no íncie: %d", i);
    }
  }
  printf("\n");
}


}



int main() {

char text[] = "AAAABAAA";
char chave[]= "BAAA";

char* substring;





  return 0;
}