#include <stdio.h>
void main()
{
	int i, n, co=0;
	printf("Enter an integer.\n");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n%i==0)
			co++;
	}
	if (co==2)
		printf("prime");
	else
		printf("not prime");

}