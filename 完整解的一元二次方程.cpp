#include<stdio.h>
#include<math.h>
int main(){
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if(fabs(a) < 1e-5){
		printf("����һԪ���η���\n");
	}else{
		//��delta
		double delta = b*b - 4*a*c;
		if(fabs(delta) < 1e-5){
			printf("������2����ͬ�ĸ�");
		}else{
			
		}
	}
}