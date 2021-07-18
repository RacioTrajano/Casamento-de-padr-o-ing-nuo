#include<stdio.h>
#include<string.h>

void posicao(int tam_text, int tam_padrao, char* text, char* padrao)
{


int fim =0;


for (int i=0; i<=tam_text - tam_padrao; i++){
  if (fim == 0){
  for(int j=0; j<tam_padrao; j++){
    if(text[i+j]== padrao[j] || j != tam_padrao-1){
      printf("%c ", text[i+j]);
    }
    if(text[i+j] != padrao[j]){
      printf("%c não", text[i+j]);
      break;
    }
    if(j==tam_padrao-1){
      printf("sim \nAchei o padrão no índice %d", i);
      fim =1;
      break;
    }
  }
  printf("\n");
}
}
if (fim==0)
printf("Não achei o padrão");


}



int main() {


char text[50] ={0};
char padrao[5]= {0};

scanf(" %s", text);
scanf(" %s", padrao);

int tam_text =strlen(text);
int tam_padrao=strlen(padrao);

posicao(tam_text,tam_padrao, text,padrao);

 return 0;
}