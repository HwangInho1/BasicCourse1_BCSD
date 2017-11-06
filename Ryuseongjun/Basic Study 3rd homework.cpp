/*
1. 형 변환이란 무엇인가?

타입(ex. int, double, char 등등)을 바꾸는 것

2. double에서 int로 변환 시 어떤 일이 일어나는가?

double은 실수형이고 int는 정수형이다. int로 형변환을 할 경우
지수부분만 나오고 가수부분은 손실되게된다.

3. 
#include <stdio.h>

int main(void)
{
	int a_16, a_8, a_10;

	printf("16진수를 입력해주세요 : ");
	scanf("%x", &a_16);
	printf("8진수를 입력해주세요 : ");
	scanf("%o", &a_8);
	printf("10진수를 입력해주세요 : ");
	scanf("%d", &a_10);

	printf("%#4x %-11s convert to %d decimal\n", a_16, "hexadecimal", a_16);
	printf("%#4o %-11s convert to %d decimal\n", a_8, "octal", a_8);
	printf("%#4d %-11s convert to %d decimal\n", a_10, "decimal", a_10);

	return 0;
}

4. 

#include <stdio.h>

int main(void)
{
	int a;
	char b;
	double c;
	double d;

	

	scanf("%d", &a);
	fflush(stdin);
	scanf("%c", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);

	printf("%d %c %lf %lf \n", a,b,c,d);

	return 0;
}

*/