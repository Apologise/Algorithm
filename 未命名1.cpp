#include<stdio.h>
void fun(int c[100])
{
	int a;
	int i,j;
	for(a=6;a<=106;a=a+2)
	{
		for(i=0;i<=100;i++)
		{
			int flag = 0;
			for(j=i;j<=100;j++){
				if(c[i]+c[j]==a)
				{
					printf("%d=%d+%d\n",a,c[i],c[j]);
					flag = 1;
					break;
				}
			}
			if(flag == 1)
				break;

		}
	
	}
} 
int main()
{
	int c[100];
	int i,a,b,t;
	i=0;
	for(a=2;a<=106;a++)
	{
		t=1;
		for(b=2;b<=a-1;b++)
		{
			if(a%b==0)
			{
				t=0;
				break;
			}
		}
		if(t==1)
		{
		i++;
		c[i]=a;
		}
	}
	fun(c);
   return 0; 
}












#include<stdio.h>
#include<math.h>
void fun(int a)
{
	if(a==1)
		printf("           1.二进制转十进制      \n");
	else if(a==2)
		printf("           2.十进制转换二进制\n");
	else if(a==3)
		printf("           3.退出\n");
}
void DotB_Convert(double b)
{
	int a,i,z;
	int x,y;
	int e;
	double f,c,k,j,d,g,h;
	x=0;i=1;d=0,j=0.015625;
	a=(int)b;
	c=b-a;
	printf("%lf\n",c);
	k=c*1000000;
	z=(int)k;
	do
	{
		y=a%10;
		a=a/10;
		x=x+y*i;
		i=i*2;
	}while(a!=0);
	do
	{
		e=z%10;
		z=z/10;
		d=d+e*j;
		j=j*2;
	}while(z!=0);
	h=(double)x;
	f=h+d;
	printf("%lf\n",f);
}
void BtoD_Convert(double b)
{
	int a;
	double c,d,e;
	printf("===========二进制十进制转换===========\n");
	printf("           1.二进制转十进制      \n");
	printf("           2.十进制转换二进制\n");
	printf("           3.退出\n");
	printf("=====================================\n");
	scanf("%d",&a);
	fun(a);
	if(a==1)
	{
		scanf("%lf",&b);
		DotB_Convert(b);
	}
	/*else if(a==2)
	{
		scanf("%lf",&c);
		BtoD_Convert(c);
	}*/
}

