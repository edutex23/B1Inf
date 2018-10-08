#include <stdio.h>

int main(){
	double num1=0, num2=0, num3=0;

	scanf("%lf", &num1);
	scanf("%lf", &num2);
	scanf("%lf", &num3);

	float media = ((num1+num2+num3) / 3);
	printf("%.3lf\n", media);

}