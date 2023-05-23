#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double sort(float *,int);

int main(){
	
	int sayi,i;
	printf("Kac Tane Sayi Girmek Istiyorunuz ?:");
	scanf("%d",&sayi);
	
	float ar[sayi];
	
	printf("Sayilari Giriniz :\n");
	for(i=0;i<sayi;i++){
		scanf("%f",&ar[i]);
	}
	
	sort(ar,sayi);
	printf("Sayilarin sirali hali : \n");
	
	for(i=0;i<sayi;i++){
		printf("%.2f\t",ar[i]);
	}
	
	return 0;
}

double sort(float *ptr,int size){
	int i,j,yedek;
	
	for(i=0;i<size;i++){
		for(j=0;j<size-1;j++){
			if(ptr[j] > ptr[j+1]){
				yedek = ptr[j];
				ptr[j] = ptr [j+1];
				ptr[j+1] = yedek;	
			}
		}
	}
}




