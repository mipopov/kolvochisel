#include<iostream>
#include<cmath>

unsigned long long fibo(unsigned long long n);

int main()
{
	unsigned long long n;
	std::cin >> n;
	std::cout << fibo(n);
	//system("pause");
	return 0;
}
unsigned long long fibo(unsigned long long n)
{
	const unsigned long long MAXN = 100000;
	static unsigned long long c[MAXN];
	if (n == 1) return 2;
	if (n == 2) return 3;
	if (c[n] > 0) return c[n];
	return c[n] = fibo(n - 1) + fibo(n - 2);
}