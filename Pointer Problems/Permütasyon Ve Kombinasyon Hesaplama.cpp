#include<stdio.h>

void percom(double *,double *,int,int);

int main(){
	
	int n,r;
	double p,c;
	
	printf("n degerini giriniz :");
	scanf("%d",&n);
		
		printf("\nr degerini giriniz :");
		scanf("%d",&r);
		
printf("\n\n");

	percom(&p,&c,n,r);
	printf("Permutasyon = %.1lf,\n\nKombinasyon = %.1lf",p,c);
	
	return 0;
}
void percom(double *per,double *com,int n,int r){
	
	double i,toplam = 1,total = 1,temp = 1;
	double a;
	
	for(;n>1;n--){
		toplam *= n;	
	}

a = n-r;

		for(;a>1;a--){
			total *= a;	
		}
		
*per = toplam / total;

			for(;r>1;r--){
				temp *= r;	
			}	
	
	*com = *per / temp;
}


