#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int separate(int ,int *,int *,int *,int *);

int main(){
	int count,bb,yb,ob,birb,i;
	
printf("Sayiyi Giriniz :");
scanf("%d",&count);	
	
	separate(count,&bb,&yb,&ob,&birb);

	printf("%d sayisinin,\nBinler basamagi : %d\nYuzler Basamagi : %d\nOnlar Basamagi : %d\nBirler Basamagi : %d\n",count,bb,yb,ob,birb);
	
	return 0 ;
}

int separate(int ct,int *pbb,int *pyb,int *pob,int *pbirb){
	
	int spare;
	*pbb = ct / 1000;
	spare = ct / 100;
	*pyb = spare % 10;
	spare = ct / 10;
	*pob = spare % 10;
	*pbirb = ct % 10;
	
}
