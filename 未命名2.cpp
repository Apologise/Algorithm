#include<cstdio>

int main(){
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	for(int i = 2; i <= n1/2;){
		if((n1%i == 0)&&(n2%i) == 0){
			n1 = n1/i;
			n2 = n2/i;
		}else{
			i++;
		}
	}
	printf("%d %d", n1, n2);
}
