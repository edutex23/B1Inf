#include <stdio.h>

int main(){
	int num1=0, num2=0, num3=0;

	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

	int temp1 = (num1>num2 ? num1 : num2);
	int temp2 = (num2>num3 ? num2 : num3);
	int max = temp1 >= temp2 ? temp1 : temp2 ;
	printf("%d\n", max);

}