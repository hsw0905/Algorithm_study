// 나이 차이
#include <iostream>

using namespace std;
int main()
{
	freopen("input_004.txt", "rt", stdin);
	int n, a, i, min = 2147000000, max = -2147000000;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		if (a > max)
			max = a;
		if (a < min)
			min = a;
	}
	cout << max - min;
	return 0;
}
