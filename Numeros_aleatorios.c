#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
int x, y, tentativas;
setlocale(LC_ALL,"Portuguese_Brazil");
srand(time(NULL));

printf("\nTente acertar um n�mero aleat�rio entre 1 e 100");

y = rand() % 100;

tentativas = 1;
while(tentativas <= 10){

printf("\nTente acertar o n�mero: ");
scanf("%d", &x);

if (x > y){
    printf("MENOR");
}
if (x < y){
    printf("MAIOR");
}
if (x == y){
tentativas = tentativas + 10;
    printf("\nParabens! Voc� acertou.");

}
}
system("pause");
}
