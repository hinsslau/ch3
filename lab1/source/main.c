#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);	
int TotalSum(int U);

int main(void)
{
	int n, Sum;
	char AddChoice;
	printf("1+2+...+n=?plz typen=");
	scanf_s("%d", &n);
	getchar();
	printf("If you want odd,even or totalsum?plz choice:");
	scanf_s("%c", &AddChoice);

	switch (AddChoice)
	{
	case '0':
		Sum = Odd(n);
		break;
	case 'E':
		Sum = Even(n);
		break;
	case 'I':
		Sum = TotalSum(n);
		break;
	default:
		printf("damn worng\n");
		return -1;

	}
	printf("total is%d\n",Sum);
	system("pause");
	return 0;

}
int Odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;
}

int Even(int U)
{
	int i, total = 0;
	for(i=1;i<=U;i++)
		if(i%2==0)
		    total=total + i;
	return total;
}

int TotalSum(int U)
{
	return Odd(U)+Even(U);
}