// 나이 계산
#include <stdio.h>

int main()
{
	freopen("input_005.txt", "rt", stdin);
	char str[15], sex;
	int year, age, present = 2019;

	scanf("%s", str);
	if (str[7] == '1' || str[7] == '2')
	{
		year = 1900 + (str[0] - 48) * 10 + (str[1] - 48);
	}
	else if (str[7] == '3' || str[7] == '4')
	{
		year = 2000 + (str[0] - 48) * 10 + (str[1] - 48);
	}

	if (str[7] == '1' || str[7] == '3')
	{
		sex = 'M';
	}
	else if (str[7] == '2' || str[7] == '4')
	{
		sex = 'W';
	}
	age = present - year + 1;

	printf("%d %c", age, sex);

	return 0;
}
