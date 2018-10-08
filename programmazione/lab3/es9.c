#include <stdio.h>

int main(){
	for (int i = 0; i < 10; ++i)
	{
		char mid_char = (i==0||i==9) ? '*' : 'X';
		printf("*%c*\n", mid_char);
	}
}