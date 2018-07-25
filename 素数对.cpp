#include<cstdio>


//ÅĞ¶ÏÊÇ·ñÎªËØÊı 
bool isPrime(int n){
	if((n == 0)||(n == 1)){
		return false;
	}
	for(int i = 2; i <= n/2; ++i){
		if(n%i ==0){
			return false;
		}
	} 
	return true;
} 

int main(){
	for(int i = 6; i < 106; ++i){
		for(int j = 2; j < i; ++j){
			if(isPrime(j) && isPrime(i-j)){
				printf("%d %d\n", j, i-j);
				break;
			}
		}
	}
	return 0;
} 
