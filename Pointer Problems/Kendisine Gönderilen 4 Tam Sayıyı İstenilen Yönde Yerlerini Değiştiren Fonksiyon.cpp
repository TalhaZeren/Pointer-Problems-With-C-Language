#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
Kendisine g�nderilen 4 adet tam say�y� Saat y�n�nde ya da saat y�n�n�n tersinde yerlerini istenildi�i kadar de�i�tiren 
�evir adl� fonksiyonu yazal�m. Bu fonksiyon 4 adet tam say�y� d�nd�rme y�n�n� 
(D de�eri verildi�inde saat y�n�nde T de�eri verildi�inde saat y�n�n�n tersinde) ve ne kadar �evrilece�ini parametre olarak al�r.
De�i�kenlerin i�indeki de�erleri istenilen say�da istenilen y�nde yerlerini de�i�tirir. 4 adet say�y� �evirme y�n� ve ka� kere �evrilece�ini
ana fonksiyon i�inde klavyeden giriniz De�i�kenlerin ilk hallerini ve fonksiyondan 
sonraki de�i�mi� hallerini yeni ana fonksiyon i�erisinde yazal�m.
*/


void cevir(int *,int *,int *,int *,char,int);

int main(){
	
	int s1,s2,s3,s4,trans;
	char direct;
	
	printf("\nNe tarafa dondurmek istiyorsunuz ? :");
	scanf("%c",&direct);
	
		printf("4 Tam Sayi Giriniz :");
		scanf("%d%d%d%d",&s1,&s2,&s3,&s4);;
		
			printf("\nKac kez cevirmek istiyorsunuz ? :");
			scanf("%d",&trans);
			
				printf("Sayilarin cevrilmeden onceki halleri :\na\tb\tc\td\n");
				printf("%d\t%d\t%d\t%d\n",s1,s2,s3,s4);
				
	cevir(&s1,&s2,&s3,&s4,direct,trans);
	
	printf("Sayilarin cevrildikten sonraki halleri :\na\tb\tc\td\n");
	printf("%d\t%d\t%d\t%d\n",s1,s2,s3,s4);

	return 0;
}

void cevir(int *c1,int *c2,int *c3,int *c4,char drt,int ts){
	int i,yedek;
	if(drt == 'D'){
		
		for(i=0;i<ts;i++){
			yedek = *c1;
			*c1 = *c2;
			*c2 = *c3;
			*c3 = *c4;
			*c4 = yedek;	
		}
	}
	else if(drt == 'T'){
		for(i=0;i<ts;i++){
			
			yedek = *c1;	
			*c1 = *c4;
			*c4 = *c3;
			*c3 = *c2;
			*c2 = yedek;
}
	}
	
	
	
 }


