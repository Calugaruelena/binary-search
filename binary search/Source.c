#include <stdio.h>
int main()
{
	int i, n, A[100], k, li, lf, x;

	printf("Introduceti nr de elemente \n");
	scanf("%d",&n);
	for (i =0 ; i <n; i++)
	{
		printf("A[%d]= ", i+1);
		scanf("%d", &A[i]);
	}
	printf("Introduceti elementul cautat\n");
	scanf("%d", &x);

	li = 0;
	lf= n - 1;
	k = (li+lf) / 2;

	while (li <= lf) 
	{
		if (A[k] <x)
			li= k+ 1;
		else if (A[k] ==x) 
		{
			printf("%d", k+ 1);
			break;
		}
		else
			lf = k- 1;

	k= (li+lf) / 2;
	}
	if (li > lf)
		printf("0");

	return 0;
}