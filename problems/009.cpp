// 모두의 약수(제한시간 1초)
// 시간복잡도 줄이기 : j = j + i (약수 n을 갖는다 == n의 배수는 모두 해당)
#include <stdio.h>

#define MAX_LENGTH (50001)

int main()
{
	freopen("input_009.txt", "rt", stdin);
	int num, i, j, cnt[MAX_LENGTH];

	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		// i를 약수로 갖는 숫자를 찾는 작업
		for (j = i; j <= num; j = j + i)
		{
			cnt[j]++;
		}
	}
	for (i = 1; i <= num; i++)
	{
		printf("%d ", cnt[i]);
	}
	return 0;
}
