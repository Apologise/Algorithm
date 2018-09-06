#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	freopen("sum.out", "w", stdout);
	if(a > b){
		int temp = a;
		a = b;
		b = temp;
	}
	if(a > c){
		int temp = a;
		a = c;
		c = temp;
	}
	if(b > c){
		int temp = b;
		b = c;
		c = temp;
	}
	cout<<b<<endl;
}