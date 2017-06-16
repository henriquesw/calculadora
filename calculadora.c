#include <stdio.h>
#include <stdlib.h>

int soma (int a, int b) {
	return a+b;
}

int subtrai (int a, int b) {
	return a-b;
}

int mumltiplica (int a, int b) {
	return a*b;
}
int divisao (int a, int b) {
    printf("Aqui È a divis„o");
	return a/b;
}

int main(){
	printf("Hello world!\n");
	printf("Soma: %d\n", soma(10, 5));
	printf("Subtra√ß√£o: %d\n", subtrai(10, 5));
	printf("Multiplica: %d\n", multiplica(10,5));
	printf("Divis√£o: %d\n", divisao(10, 5));
}
