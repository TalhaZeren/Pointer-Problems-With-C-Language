#include<stdio.h>
#include<math.h>

void findAngle(int,int,float*,float*);
int main(){
	
	float smallang,largeang;
	int hour,minute;
	
	printf("enter the clock :");
	scanf("%d%d",&hour,&minute);
	
	findAngle(hour,minute,&smallang,&largeang);
	
	printf("Kucuk Aci = %.2f\n\nBuyuk Aci = %.2f",smallang,largeang);
		
	return 0;
}

void findAngle(int h,int m,float *k,float *b){
	
	float temp,spare;
	int i,minute,angle,caunt=0;
	
	temp = m * 6;
	spare = m * 0.5 + h * 30;

	*k = fabs(temp - spare);
	*b = 360 - *k;
	
	if(*k > *b){
		i = *b;
		*b = *k;
		*k = i;	
	} 
}

