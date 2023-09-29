#include <stdio.h>

int main () {
float n1,n2;
int opera;
char jogardnv;
 do {
  printf("--------------------------------\n");
  printf("CALCULADORA PROGRAMADA EM C\n");
  printf("--------------------------------\n");
  printf("\n");
  printf("Digite dois número para a operação\n");
  scanf("%f,%f", &n1, &n2);
  printf("Digite o número da operação que se deseja fazer:\n");
  printf("1 -> Soma\n");
  printf("2 -> subtracao\n");
  printf("3 -> multiplicacao\n");
  printf("4 -> divisao\n");
  scanf("%d", &opera);

  if (opera == 1) {
    float soma = n1 +n2;
    printf("A soma dos números é: %.2lf\n", soma);
  } else if (opera == 2) {
    float subtracao = (n1 - n2);
    printf("A substração dos números é: %.2lf\n", subtracao);
  } else if (opera == 3){
    float multiplic = (n1 * n2);
    printf("A multiplicação dos número é: %.2lf\n", multiplic);
  } else if (opera == 4) {
      if (n2 == 0) {
        printf("Não existe divisão por 0\n");
      } else {
        float divisao = n1/n2;
        printf("A divisão do primeiro pelo segundo foi: %.2lf\n", divisao);
        }
  } else {
  printf("Operação inválida\n");
  }
  printf("Deseja jogar novamente? (S/N)\n");
  scanf(" %c", &jogardnv);

 } while (jogardnv == 'S'|| jogardnv == 's');

if (jogardnv == 'N' || jogardnv == 'n') {
  printf("Calculadora encerrada.\n");
}


  return 0;
}