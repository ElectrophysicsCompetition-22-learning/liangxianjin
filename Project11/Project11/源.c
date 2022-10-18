#include<stdio.h>
#include<math.h>
int main()

{
	int b, s, g, n;
	for (n = 100; n < 1000; n++)
	{
		b = n / 100;
		s = (n - b * 100) / 10;
		g = n % 10;
		if (n == s * s * s + b * b * b + g * g * g)
			printf("%d ", n);

	}
	printf("\n");
	return 0;
}