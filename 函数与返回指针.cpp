#include<stdio.h>

int *func(){
	int *p;
	int a = 1;
	p = a;
	return p;
} 
int main(){
	int *p = func();
	printf("%d", *p);
	return 0;
}
