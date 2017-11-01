#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/*
//1.
int main()
{
	for (;;)
	{

	}
	while (true)
	{

	}
	do
	{

	} while(true);
	return 0;
}
*/

/*
//2.
int main()
{
	int num=0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}
/*

/*
//3.
int main()
{
	int n;

	for (int i = 0; i < 100; i++)
	{
		scanf("%d",&n);

		if ((n % 2 == 0)&&(n%5==0))
		{
			printf("FizzBuzz\n");
		}
		else if (n % 2 == 0)
		{
			printf("Fizz\n");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz\n");
		}
	}

	return 0;
}
*/

/*
//4.
int main()
{
	int arr[7] = { 6,0,9,8,3,4,7 };
 	int max=0, mini=1000;
	int n = 7, n_copy=0;
	
	n_copy = n;

	for (int i = 1; i <= 7; i++)	
	{
		if (arr[n_copy - i] > max)
		{
			max = arr[n_copy - i];
		}
		if (arr[n_copy - i] < mini)
		{
			mini = arr[n_copy - i];
		}
	}
	printf("max = %d, mini = %d\n\n", max, mini);

	return 0;
}
*/

/*
//5.
int main()
{
	int input = -1;
	int count = 0;
	int arr[10000];
	int sum = 0;
	int j = 0;


	while (true)
	{
		puts("(1000 > N > 0) N : ");
		scanf(" %d", &input);
		if (input > 0 && input < 1000)
			break;
	}
	for (int i = 1; i <= input; i++)
	{
		if (input%i == 0)
		{
			arr[j] = i;
			count++;
			j++;
		}
	}
	
	for (int i = 0; i < count; i++)
		printf("%d ",arr[i]);

	printf("\n%d", count);
	
	for (int i = 0; i < count; i++)
		sum += arr[i];
	
	printf("\n%d", sum);
	printf("\n%d\n", sum % 10);
	
	return 0;
}
*/