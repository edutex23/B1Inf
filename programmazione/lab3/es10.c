#include <stdio.h>

int main(){
	int iva_or_sconto;
	double prezzo, percentuale, res, temp;
	char* str_in = "Prezzo_Init";
	char* str_pr = "Percentuale";

	scanf("%d", &iva_or_sconto);
	scanf("%lf", &prezzo);
	scanf("%lf", &percentuale);
	temp = (prezzo*percentuale)/100;
	if (prezzo<0 || percentuale>100 || percentuale <0){
		printf("invalid input\n");
		return 0;
	}
	switch(iva_or_sconto){
		case 0:
			printf("%20s%20s%20s\n", str_in, str_pr, "Prezzo_scontato");
			res=prezzo-temp;
			break;
		case 1:
			printf("%20s%20s%20s\n", str_in, str_pr, "Prezzo_ivato");
			res=prezzo+temp;
			break;
		default:
			printf("invalid input\n");
			return 0;
	}
	printf("%20.2lf%20.2lf%20.2lf\n", prezzo, percentuale, res);
}