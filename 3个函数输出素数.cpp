// 2018��12��1�� 22:43:03  ���100�ڵ������� 
# include <stdio.h>
//�жϺ������жϽ�������ture���������false 
bool IsPrime(int j)
{
	int i;
	
	for (i=2; i<j; ++i)			    //��2��С���ж����ļ��� 
		{
			if(0 == j%i)			//���jȡ��i == 0˵�����Ա�һ����������ִ��break����ѭ�� 
			break;					//����������������++j �Ὣj��ֵ������i��� 	
		}
		if(i == j)
			return true;
		else
			return false;
}
//��������������жϵĽ�������Ƿ�ִ��if��� 
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
	printf("������Ҫ����������ڵ�������");
	scanf("%d", &j);
	val(j);
	printf("\n");
	}while(1);
	
	return 0;
}
