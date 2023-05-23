#include<stdio.h>

void serialNoResolve(int,int*,int*,int*,char*);

int main(){
	
	int count,blok,dno,car,ek;
	char letter;
	
while(true){
		
	printf("Seri Numarasini Giriniz :");
	scanf("%d",&count);
	
	blok = count / 1000;
	
		if(blok > 0 == blok < 4){
		serialNoResolve(count,&blok,&dno,&car,&letter);	
		printf("\nBu arac %c blokta, %d nolu dairenin %d. aracidir. \n",letter,dno,car);
		}
		else{
			printf("\nTanimli bir Blok Numarasi Girilmeli.\n");
			continue;
		}
		
	while(true){
		
	printf("\n1)Seri Numarasi Gir **  2)Cikis Yap\n");
	scanf("%d",&ek);
	
		if(ek == 1){
			break;
		}
		else if(ek == 2){
			break;
		}
		else{
			printf("\nLutfen tarif edilenden baska bir deger girmeyiniz\n");
			continue;
		}
	}
	
	if(ek == 1){
		continue;
	}
	break;
	}
	
printf("\n\nProgram Sonlandiriliyor...");	

	return 0;
}

void serialNoResolve(int ct,int *s1,int *s2,int *s3,char *s4){
	
	int spare;
	
	*s1 = ct / 1000;
	spare = ct / 10;
	*s2 = spare % 100;
	*s3 = ct % 10;
	
	if(*s1 == 1){
		*s4 = 'A';
	}
	else if(*s1 == 2){
		*s4 = 'B';
	}
	else if(*s1 == 3){
		*s4 = 'C';
	}
}

