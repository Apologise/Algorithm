#include<cstdio>
#include<stdlib.h>
#include<time.h>


int main(){
	/*���Բ�*/
	int n;
	scanf("%d", &n);
	srand((unsigned )time(NULL));
	int left = 0, right = 100;
	int cnt = 0;
	 
	while(1){
		int mid = rand()%(right - left+1)+left;
			cnt++;
		if(mid == n){
			printf("�¶���%d,������%d��\n",mid,cnt);
			break;
		}else if (mid < n){
			printf("%dС��\n",mid);
			left = mid+1;
		}else{
			printf("%d����\n",mid);
			right = mid-1;
		}
	}
	return 0;
} 
