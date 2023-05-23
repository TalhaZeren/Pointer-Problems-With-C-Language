#include<stdio.h>
#include<math.h>

void slitherdot(float *,float *,float*);

int main(){

float x,y,distance;

printf("x koordinatini giriniz :");
scanf("%f",&x);

	printf("y koordinatini giriniz :");
	scanf("%f",&y);
	
slitherdot(&x,&y,&distance);

printf("x : %.2f,y:%.2f,mesafe : %.2f",x,y,distance);

return 0;
}

void slitherdot(float *x,float *y,float *dst){
	float a,b,mx,my;
	
	printf("Kaydirmak istediginiz miktari giriniz(ilk once x sonra y)");
	scanf("%f%f",&a,&b);
	
	mx = *x;
	my = *y;	
	*x = *x + a;
	*y = *y + b;
	*dst = sqrt(pow(*x - mx,2) + pow(*y - my,2));
	
}
