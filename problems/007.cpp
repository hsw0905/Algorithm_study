// 영어 단어 복구(문자열 컨트롤)
#include <stdio.h>

#define MAX_LENGTH (101)

int main()
{
	freopen("input_007.txt", "rt", stdin);
	char arr1[MAX_LENGTH], arr2[MAX_LENGTH];
	int i, position = 0;

	fgets(arr1, MAX_LENGTH, stdin);
	for (i = 0; arr1[i] != '\0'; i++)
	{
		if (arr1[i] != ' ')
		{
			if (arr1[i] >= 97 && arr1[i] <= 122)
			{
				arr2[position++] = arr1[i];
			}
			else if (arr1[i] >= 65 && arr1[i] <= 90)
			{
				arr2[position++] = arr1[i] + 32;
			}
		}
	}
	arr2[position] = '\0';

	printf("%s\n", arr2);
}
