#include<stdio.h>
#include<string.h>

//二进制转十进制 
double  DtoB_Convert(char *str){
	 double result = 0.0;
	 int len = strlen(str); 
	 //确定小数点的位置
	 int index = strlen(str);
	 for(int i = 0; str[i]; ++i){
	 	if(str[i] == '.'){
			index = i; 
		}
	 }

	//整数部分 
	double product = 1;
	for(int i = index -1; i >= 0; --i){
		result += (str[i]-'0')*product;
		product = product*2;
	}
	
	//小数部分
	/*
		如果没有小数部分，index = strlen(str),index为字符串末尾位置
		for循环不会执行 
	*/
	product = 0.5;
	for(int i = index +1; i < len ; ++i) {
		result += (str[i] - '0')*product;
		product = product*0.5;
	}
	return result;
}
//十进制专二进制 
char p[100];
//由于是返回char类型指针，所以要定义一个全局变量p[100] 
char * BtoD_Convert(double  number){
	 //分为整数部分和小数部分
	 //找到小数点位置 
	 int num = (int)number;
	 double dotnum = number - num;

	 //将整数转为二进制
	 int index = 0;
	 do{
	 	p[index ++] = num%2+48; //整型0与'0'相差48 
	 	num = num/2;
	 }while(num!=0) ;
	 //由于是逆序存放小数部分，所以要现将其调转一下顺序
	 for(int i = 0; i < index /2; ++i){
	 	char temp = p[i];
	 	p[i] = p[index - i-1];
	 	p[index - i - 1] = temp;
		  
	 } 
	//加上小数部分
	if(dotnum != 0){
		p[index++] = '.';
		//直到dotnumw=0或达到精度 
		while((dotnum != 0) || (dotnum) > 0.00005){
			
			int flag = (int)(dotnum*2);
			p[index++] = flag + 48; 
			dotnum = dotnum*2 - flag;
		}
	} 
	return p; 	
} 



int main(){
	//二进制转10进制 
	char *str = "110.11";
	double result = DtoB_Convert(str);
	printf("%f\n", result);
	//十进制转二进制 
	printf("%s\n", BtoD_Convert(72));
	return 0;
} 
