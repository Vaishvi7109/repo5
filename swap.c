#include<stdio.h>
int main(){
	int a=7;
	int b=9;
	int temp;
	printf("before:%d%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after:%d%d",a,b);
}
