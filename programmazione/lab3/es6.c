#include <stdio.h>

int main()
{
	char ch_inp;
	scanf("%c", &ch_inp);
	if (ch_inp >= 97 && ch_inp <= 122){
		printf("%c\n", ch_inp-32);
		return 0;
	}
	printf("invalid input\n");
	
}