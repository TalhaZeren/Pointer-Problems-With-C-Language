#include<stdio.h>

void collate(int*,int*,int*);

int main(){
	
int ar1[5],ar2[5],end[10],i,j;

printf("Enter factors of first array :");

for(i=0;i<5;i++){
	scanf("%d",&ar1[i]);
}

printf("Enter factors of second array :");

	for(i=0;i<5;i++){
		scanf("%d",&ar2[i]);
	}
	
	collate(ar1,ar2,end);
	
		for(i=0;i<10;i++){
			printf("%d\t",end[i]);
		}
		
	return 0;
	
	}
	void collate(int *p1,int *p2,int *ptr){
		
		int i=0,temp,j=0,a;
		
		for(a=0;a<5;a++){
			
			*(ptr + i) = p1[a];
			*(ptr + j+1) = p2[a];
			j=j+2;
			i=i+2;	
		}
	}
