#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void withinfind(int *,int *,int,int,int);

int main(){
	
int mx,my,r,x,y;

printf("Cemberin Merkez Noktasinin kordinatlarini ve yaricap uzunlugunu giriniz\nonce merkezi x sonra y sonra yaricap uzunlugu girilecektir :\n");
scanf("%d%d%d",&mx,&my,&r);

withinfind(&x,&y,mx,my,r);

	printf("\n\n(x,y) = (%d,%d)",x,y);
	
	return 0;
}

void withinfind(int *x,int *y,int mx,int my,int r){ 

srand(time(NULL));
*x = mx-r + rand() % mx+r;
*y = my-r + rand() % my+r;

}
