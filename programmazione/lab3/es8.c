#include <stdio.h>

int main(){
	double num1=0, num2=0, res=0;
	char operatore;
	scanf("%lf", &num1);
	scanf("%lf", &num2);
	scanf(" %c", &operatore);
	switch(operatore){
		case '+':
			res=num1+num2;
			break;
		case '-':
			res=num1-num2;
			break;
		case '%':
			res=(int)num1%(int)num2;
			break;
		case '/':
			res=num1/num2;
			break;
		default:
			printf("invalid operator\n", operatore);
			return 0;
	}
	printf("%.1lf\n", res);
}