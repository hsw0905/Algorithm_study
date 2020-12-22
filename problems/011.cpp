// 숫자의 총 개수(small)
#include <stdio.h>

int main()
{
	freopen("input_011.txt", "rt", stdin);
	int num, i, cnt = 0, tmp;

	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		tmp = i;
		while (tmp > 0)
		{
			tmp = tmp / 10;
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
