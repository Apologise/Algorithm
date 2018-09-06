#include<stdio.h>
#include<math.h>
int main(){
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if(fabs(a) < 1e-5){
		printf("不是一元二次方程\n");
	}else{
		//求delta
		double delta = b*b - 4*a*c;
		if(fabs(delta) < 1e-5){
			printf("方程有2个相同的根");
		}else{
			
		}
	}
}