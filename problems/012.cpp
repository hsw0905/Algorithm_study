// 숫자의 총 개수(large : 제한시간 1초)
#include <stdio.h>

int main()
{
	freopen("input_012.txt", "rt", stdin);
	int num, sum = 0, digit_cnt = 1, last_digit = 9, res = 0;

	scanf("%d", &num);
	while (sum + last_digit < num)
	{
		res = res + digit_cnt * last_digit;
		sum = sum + last_digit;
		digit_cnt++;
		last_digit = last_digit * 10;
	}
	res = res + (num - sum) * digit_cnt;
	printf("%d\n", res);
	return 0;
}
