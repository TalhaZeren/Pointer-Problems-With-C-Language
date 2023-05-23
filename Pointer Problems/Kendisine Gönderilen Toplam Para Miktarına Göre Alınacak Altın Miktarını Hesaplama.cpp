#include<stdio.h>
#include<math.h>

void findResult(float*,float,float,float,int*,int*,int*);

int main(){
	
	float count,full,half,quar;
	int c1=0,c2=0,c3=0;
	
	printf("Para Miktarini Giriniz :");
	scanf("%f",&count);
	
		printf("\nTam ziynet degerini giriniz :");
		scanf("%f",&full);
	
	half = full / 2;
	quar = full / 4;
	
	findResult(&count,full,half,quar,&c1,&c2,&c3);	
	
	printf("\nElinizdeki Para ile ;\n%d tam altin,\n%d yarim altin,\n%d ceyrek altin alabilirsiniz.\n",c1,c2,c3);
		printf("\n\n Kalan Paraniz : %.21000f",count);
	return 0;
}
void findResult(float *ct,float fl,float hf,float qr,int *s1,int *s2,int *s3){
	
	while(*ct >= fl){
		*ct = *ct - fl;
		*s1 = *s1 + 1;
	}
	
		while(*ct >= hf){
			*ct = *ct - hf;
			*s2 = *s2 + 1;
		}
		
			while(*ct >= qr){
				*ct = *ct - qr;
				*s3 = *s3 + 1;
			}		
}




