#include<cstdio> 
typedef long long int64;

int n, r;
int64 work(int64 n, int64 k){
	if(k > n/2) k = n-k;
	int64 a = 1, b = 1;
	for(int i = 1; i <= k; ++i){
		a*=n+1-i;
		b*=i;
		if(a%b==0){
			a/=b;
			b = 1;
		}
	}
	return a/b;
}
int get(){
	double  ans = 1;
	if(r > n/2){
		r = n-r;
	}
	for(int i = 1; i <= r; ++i){
		ans = ans*(n-r+i)/(r-i+1);
	}
	return ans;
} 

//·ÖÊýÔ¼¼ò
 
int main(){
	while(~scanf("%d %d", &n, &r)&&n){
		
		if(n == 0 && r == 0){
			break;
		}
		printf("%d\n", work(n,r));
	}
	return 0;
}