// 올바른 괄호
#include <stdio.h>

#define MAX_LENGTH (101)
int main()
{
	freopen("input_008.txt", "rt", stdin);
	char arr[MAX_LENGTH];
	int i, cnt = 0;

	scanf("%s", arr);
	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == '(')
			cnt++;

		else if (arr[i] == ')')
			cnt--;

		if (cnt < 0)
			break;
	}
	if (cnt == 0)
		printf("YES\n");
	else
		printf("NO");
}
