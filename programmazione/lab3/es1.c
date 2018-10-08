#include <stdio.h>

int main(){
	int num_inp;
    scanf("%d", &num_inp);
    printf("%d\n", (sizeof(num_inp)*num_inp));
}