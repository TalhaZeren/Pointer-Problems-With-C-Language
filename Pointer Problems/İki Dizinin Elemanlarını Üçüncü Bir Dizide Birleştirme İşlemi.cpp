#include<stdio.h>

void add(int*,int,int*,int);

int main(){
	
int ar[5],ar1[5],i,j,arend;

printf("Ilk dizilerin elemanlarini giriniz :\n");

for(i=0;i<5;i++){
	scanf("%d",&ar[i]);
}
printf("Ikinci dizilerin elemanlarini giriniz :\n");

	for(i=0;i<5;i++){
		scanf("%d",&ar1[i]);
	}	
	
	add(ar,5,ar1,5);

	return 0;
}
void add(int *c1,int size1,int *c2,int size2){

		int i,j;
		
		for(j=0;j<5;j++){
		printf("%d\t",*(c1 + j));
		}
		
			for(i=0;i<5;i++){
			printf("%d\t",*(c2 + i));	
			}	
}

