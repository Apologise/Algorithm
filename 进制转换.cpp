#include<stdio.h>
#include<string.h>

//������תʮ���� 
double  DtoB_Convert(char *str){
	 double result = 0.0;
	 int len = strlen(str); 
	 //ȷ��С�����λ��
	 int index = strlen(str);
	 for(int i = 0; str[i]; ++i){
	 	if(str[i] == '.'){
			index = i; 
		}
	 }

	//�������� 
	double product = 1;
	for(int i = index -1; i >= 0; --i){
		result += (str[i]-'0')*product;
		product = product*2;
	}
	
	//С������
	/*
		���û��С�����֣�index = strlen(str),indexΪ�ַ���ĩβλ��
		forѭ������ִ�� 
	*/
	product = 0.5;
	for(int i = index +1; i < len ; ++i) {
		result += (str[i] - '0')*product;
		product = product*0.5;
	}
	return result;
}
//ʮ����ר������ 
char p[100];
//�����Ƿ���char����ָ�룬����Ҫ����һ��ȫ�ֱ���p[100] 
char * BtoD_Convert(double  number){
	 //��Ϊ�������ֺ�С������
	 //�ҵ�С����λ�� 
	 int num = (int)number;
	 double dotnum = number - num;

	 //������תΪ������
	 int index = 0;
	 do{
	 	p[index ++] = num%2+48; //����0��'0'���48 
	 	num = num/2;
	 }while(num!=0) ;
	 //������������С�����֣�����Ҫ�ֽ����תһ��˳��
	 for(int i = 0; i < index /2; ++i){
	 	char temp = p[i];
	 	p[i] = p[index - i-1];
	 	p[index - i - 1] = temp;
		  
	 } 
	//����С������
	if(dotnum != 0){
		p[index++] = '.';
		//ֱ��dotnumw=0��ﵽ���� 
		while((dotnum != 0) || (dotnum) > 0.00005){
			
			int flag = (int)(dotnum*2);
			p[index++] = flag + 48; 
			dotnum = dotnum*2 - flag;
		}
	} 
	return p; 	
} 



int main(){
	//������ת10���� 
	char *str = "110.11";
	double result = DtoB_Convert(str);
	printf("%f\n", result);
	//ʮ����ת������ 
	printf("%s\n", BtoD_Convert(72));
	return 0;
} 
