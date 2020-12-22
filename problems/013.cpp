// 가장 많이 사용된 자릿수
#include <stdio.h>

int main()
{
	freopen("input_013.txt", "rt", stdin);
	int i, digit, res, max = -2147000000;
	char num[101], digit_cnt[10];

	scanf("%s", num);
	for (i = 0; i < 10; i++)
	{
		digit_cnt[i] = 0;
	}

	for (i = 0; num[i] != '\0'; i++)
	{
		digit = num[i] - 48;
		digit_cnt[digit]++;
	}

	for (i = 0; i < 10; i++)
	{
		if (digit_cnt[i] >= max)
		{
			max = digit_cnt[i];
			res = i;
		}
	}
	printf("%d\n", res);
}
