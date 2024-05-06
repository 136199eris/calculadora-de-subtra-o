#include <stdio.h>
#include <stdlib.h>

void main () {

int numero1;
int numero2;
int total;

puts("========== calculadora de subtração ==========");
puts("Insira o primeiro valor:");
scanf("%d",&numero1);
puts("Insira o valor a ser subtraído:");
scanf("%d", &numero2);
total= numero1-numero2;
printf("O número %d subtraído por %d resulta em: %d\n", numero1, numero2, total);
puts("Obrigado por usar a calculadora =D");


}
