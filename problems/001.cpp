// 1부터 N까지의 M의 배수 합
#include <iostream>

using namespace std;
int main()
{
	int m, n, i, sum = 0;
	cin >> n >> m;
	for (i = 0; i <= n; i++)
	{
		if (i % m == 0)
		{
			sum = sum + i;
		}
	}
	cout << sum;
	return 0;
}
