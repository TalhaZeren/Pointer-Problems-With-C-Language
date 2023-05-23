#include<stdio.h>

void findBursar(float,float,int,int,int,int,float*,int*,int*);

int main(){
	
float n1,n2,eb1;
int g1,g2,y1,y2,eb2,eb3;

printf("Birinci ogrencinin bilgileri (ilk not ortalamasi,sonra giris yili,daha sonra ise dogum tarihini giriniz.):");
scanf("%f%d%d",&n1,&g1,&y1);
	printf("Ikinci ogrencinin bilgileri (ilk not ortalamasi,sonra giris yili,daha sonra ise dogum tarihini giriniz.):");
	scanf("%f%d%d",&n2,&g2,&y2);	
findBursar(n1,n2,g1,g2,y1,y2,&eb1,&eb2,&eb3);
	printf("\n\nDaha Basarili Olan ;\n\nOrtalamasi %.2f, giris yili %d ve %d yilinda dogandir.",eb1,eb2,eb3);
	return 0;
}
void findBursar(float n1,float n2,int g1,int g2,int y1,int y2,float *eb1,int *eb2,int *eb3){
	while(true){
		if(n1 != n2){
			
			if(n1 > n2){
				*eb1 = n1;
				*eb2 = g1;
				*eb3 = y1;
			}
			else if(n2 > n1){
				
				*eb1 = n2;
				*eb2 = g2;
				*eb3 = y2;
			}
		}
		else if(g1 != g2){
			
			if(g1>g2){
				
				*eb1 = n1;
				*eb2 = g1;
				*eb3 = y1;
			}
			else if(g2>g1){
				
				*eb1 = n2;
				*eb2 = g2;
				*eb3 = y2;
			}
		}
		else if(y1 != y2){
			
			if(y1 > y2){
				*eb1 = n1;
				*eb2 = g1;
				*eb3 = y1;
			}
			else if(y2 > y1){
				
				*eb1 = n2;
				*eb2 = g2;
				*eb3 = y2;
			}
		}
		break;
	}
}

