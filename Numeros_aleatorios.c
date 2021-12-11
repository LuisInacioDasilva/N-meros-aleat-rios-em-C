#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
int x, y, tentativas;
setlocale(LC_ALL,"Portuguese_Brazil");
srand(time(NULL));

printf("\nTente acertar um número aleatório entre 1 e 100");

y = rand() % 100;

tentativas = 1;
while(tentativas <= 10){

printf("\nTente acertar o número: ");
scanf("%d", &x);

if (x > y){
    printf("MENOR");
}
if (x < y){
    printf("MAIOR");
}
if (x == y){
tentativas = tentativas + 10;
    printf("\nParabens! Você acertou.");

}
}
system("pause");
}
