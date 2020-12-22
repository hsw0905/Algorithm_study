// 뒤집은 소수
#include <stdio.h>
#include <stdbool.h>

int reverse(int n)
{
	int tmp, res = 0;
	while (n > 0)
	{
		tmp = n % 10;
		res = res * 10 + tmp;
		n /= 10;
	}
	return res;
}

bool isPrime(int n)
{
	int i;
	bool flag = true;

	if (n == x)
		return false;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

int main()
{
	freopen("input_014.txt", "rt", stdin);
	int i, n, num, tmp;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		tmp = reverse(num);
		if (isPrime(tmp))
			printf("%d ", tmp);
	}
}
