// 숫자만 추출
#include <stdio.h>

#define MAX_LENGTH (50)

int main()
{
	freopen("input_006.txt", "rt", stdin);
	char str[MAX_LENGTH];
	int i, res = 0, cnt = 0;

	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 57 && str[i] >= 48)
		{
			res = res * 10 + (str[i] - 48);
		}
	}
	printf("%d\n", res);
	for (i = 1; i <= res; i++)
	{
		if (res % i == 0)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
}
