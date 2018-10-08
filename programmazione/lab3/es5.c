#include <stdio.h>

int main() {
	int num_inp=0;
	scanf("%d", &num_inp);
	int pari = num_inp%2>0 ? 0 : 1;
	printf("%d\n", pari);
}