// 2018年12月1日 22:43:03  输出100内的素数。 
# include <stdio.h>
//判断函数，判断结果是输出ture，不是输出false 
bool IsPrime(int j)
{
	int i;
	
	for (i=2; i<j; ++i)			    //从2到小于判断数的计算 
		{
			if(0 == j%i)			//如果j取余i == 0说明可以被一个数整除，执行break跳出循环 
			break;					//如果不能整除，最后++j 会将j的值加至和i相等 	
		}
		if(i == j)
			return true;
		else
			return false;
}
//输出函数，根据判断的结果决定是否执行if语句 
void val(int m)
{
	int i;
	for(i=2; i<=m; ++i) 			 
	{
		if( IsPrime(i) )		
		printf("%-3d ", i);	 
	}
}

int main(void)
{
	
	int j; 
	do
	{
	printf("请输入要输出多少以内的素数：");
	scanf("%d", &j);
	val(j);
	printf("\n");
	}while(1);
	
	return 0;
}
