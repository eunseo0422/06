#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n, int r)
{
	int div1, div2;
	
	div1 = factorial(n); // n!
	div2 = factorial(n-r) * factorial(r); // (n-r)! 곱하기 r!  
	
	// 분모, 분자 나누기 연산 
	return (div1/div2);
}

int factorial(int n)
{
	int i,res = 1;
	for (i=1; i<=n; i++)
		res *=i;
	return res;
}

int main()
{
	int n, r; 
	int div1, div2; // div1 : 분자, div2 : 분모 
	int result;
	 
	//1. 입력값 받음
	// 메시지 출력
	printf("input n : ");
	// n 입력 
	scanf("%d", &n);
	
	// 메시지 출력 
	printf("input r : ");
	// r 입력 
	scanf("%d", &r);
	
	//2. 분모, 분자 나누기  계산
	result = combination(n,r);
	
	//3. 최종 값  출력 
	printf("result is %i\n", result);
}
