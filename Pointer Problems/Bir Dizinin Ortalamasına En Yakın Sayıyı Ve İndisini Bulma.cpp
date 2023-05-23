#include<stdio.h>
#include<math.h>

void findtheavarage(int*,int,float*,int*,int*);

int main(){
	
	int index,count;
	float avarage;
	int ar[9] = {9,7,3,4,11,67,25,56,34};
	
findtheavarage(ar,9,&avarage,&count,&index);

printf("Avarage = %.2f\n\nclose count = %d\n\nindex = %d",avarage,count,index);
				
	return 0;
}

void findtheavarage(int *ar,int size,float *avarage,int *count,int *index){
	
int i,j,total = 0;
float dif,ext;

	for(i=0;i<size;i++){
		total += ar[i];
	}
	
	*avarage = total / size;
	dif = fabs(*avarage - ar[0]);

		for(i=1;i<size;i++){
			
			ext = fabs(*avarage - ar[i]);
			
			if(ext < dif){
			dif=ext;	
			*count = ar[i];	
			}
			
		}
	
			for(i=0;i<size;i++){
			
				if(*count == ar[i]){
					*index = i;
				}
			}
}

