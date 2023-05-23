#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
Kendisine gönderilen 4 adet tam sayýyý Saat yönünde ya da saat yönünün tersinde yerlerini istenildiði kadar deðiþtiren 
çevir adlý fonksiyonu yazalým. Bu fonksiyon 4 adet tam sayýyý döndürme yönünü 
(D deðeri verildiðinde saat yönünde T deðeri verildiðinde saat yönünün tersinde) ve ne kadar çevrileceðini parametre olarak alýr.
Deðiþkenlerin içindeki deðerleri istenilen sayýda istenilen yönde yerlerini deðiþtirir. 4 adet sayýyý çevirme yönü ve kaç kere çevrileceðini
ana fonksiyon içinde klavyeden giriniz Deðiþkenlerin ilk hallerini ve fonksiyondan 
sonraki deðiþmiþ hallerini yeni ana fonksiyon içerisinde yazalým.
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


