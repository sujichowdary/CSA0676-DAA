#include <stdio.h>
int main()
{
	int list[100] = { 0 };
	int i, x, pos, n = 10;
	for (i = 0; i < 10; i++)
		list[i] = i + 1;
	for (i = 0; i < n; i++)
		printf("%d ", list[i]);
	printf("\n");
	x = 50;
	pos = 5;
	n++;
	for (i = n - 1; i >= pos; i--)
		list[i] = list[i - 1];
	list[pos - 1] = x;
	for (i = 0; i < n; i++)
		printf("%d ", list[i]);
	printf("\n");

	return 0;
}

