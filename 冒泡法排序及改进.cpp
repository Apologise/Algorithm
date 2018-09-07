#include<iostream>

using namespace std;

void BubbleSort(int num[], int n){
	for(int i = 0; i < n-1; ++i){
		for(int j = 0; j < n-i-1; ++j){
			if(num[j] > num[j+1]){
				int temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
}

//改进的BubbleSort
//从后面开始比较，记录每趟中交换的最后一个位置，下次从最后一个位置开始交换
void ImprovedBubbleSort(int num[], int n){

	for(int i = 0; i < n - 1; ++i){
		int tempflag;
		for(int j = n-1; j > i; --j){
			if(num[j] < num[j-1]){
				tempflag = j;
				int temp = num[j];
				num[j] = num[j-1];
				num[j-1] = temp;
			}
		}
		i = tempflag;
	}
}

int main(){
	int num[10] = {2, 1, 3,5,7,9,8,4,0,6};
	int num1[10] = {4,0,6,5,7,9,8,2,1,3};
	BubbleSort(num, 10);
	for(int i = 0; i < 10; ++i){
		printf("%d ", num[i]);
	}
	printf("\n====\n");
	ImprovedBubbleSort(num1, 10);
	printf("\n====\n");
	for(int i = 0; i < 10; ++i){
		printf("%d ", num1[i]);
	}
	return 0;
}