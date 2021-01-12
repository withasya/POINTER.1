#include<stdio.h>
void degerdegis(int *a, int *b){
	
	int gecici;
	gecici = *a;
	*a = *b;
	*b = gecici;
}


int main(){
	
	int x=5;
	int y=10;
	degerdegis(&x,&y);
	printf("x= %d , y= %d",x,y);
	return 0;
}
