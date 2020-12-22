// 소수의 개수(제한시간 1초)
#include <stdio.h>

int main()
{
	freopen("input_015.txt", "rt", stdin);
	int i, j, n, flag, cnt = 0;

	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		flag = 1;
		for (j = 2; j * j <= i; j++)
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		if (flag)
			cnt++;
	}

	printf("%d\n", cnt);
}
