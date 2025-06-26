#include <stdio.h>

int main(void) {
  float moedas[5];

  printf("Digite o valor de 5 moedas:\n");

  for (int i = 0; i < 5; i++) {
    printf("Moeda %d: R$ ", i + 1);
    scanf("%f", &moedas[i]);
  }

  printf("\nValores digitados:\n");
  for (int i = 0; i < 5; i++) {
    printf("Moeda %d: R$ %.2f\n", i + 1, moedas[i]);
  }


}
