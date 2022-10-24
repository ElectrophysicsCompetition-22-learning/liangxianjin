#include<stdio.h>
int main()
{
	int heighter(int x, int y);
	int a[10], b[10], n=0, m=0, k=0,i;
	printf("选a队\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a);
	printf("选b队\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &b);

	for (i = 0; i < 10; i++)
	{
		if (heighter(a[i], b[i] == 1))
			n++;
		else  if (heighter(a[i], b[i] == 0))
			m++;
		else k++;
	}
	if (n < k)
		printf("a\n");
	else if (n > k)
		printf("b\n");
	else printf("yiyang");
	return 0;	 
}
heighter(int x, int y)
{

	int flag;
	if (x > y)flag = 0;
	else if (x < y)flag = -1;
	else flag = 0;
	return flag;
}