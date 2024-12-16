#include<stdio.h>
int main(){
	int a=7;
	int b=9;
	printf("before:%d%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after:%d%d",a,b);
}
