#include<stdio.h>

void swap(int *a, int *b){
	int tg;
	tg=*a;
	*a=*b;
	*b=tg;
}

int main(){
	int a=5, b=10;
	swap(&a,&b);
	return 0;
}
