#include <stdio.h>

int main(){
	double tempo_int=0, ore=0,minuti=0;
	scanf("%lf", &tempo_int);
	if (!(tempo_int>=0)){
		printf("invalid input\n");
		return 0;
	}
	for (; tempo_int >= 3600; tempo_int-=3600)
	{
		ore++;
	}
	for (; tempo_int>=60; tempo_int-=60){
		minuti++;
	}
	printf("%.0lf h %.0lf min %.0lf s\n", ore, minuti, tempo_int);

}