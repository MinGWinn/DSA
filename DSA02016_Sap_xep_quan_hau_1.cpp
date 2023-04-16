#include <bits/stdc++.h>
using namespace std;
/*
Cho một bàn cờ vua có kích thước n * n,
ta biết ràng quân hậu có thể di chuyển theo chiều ngang, dọc, chéo.
Vấn đề đặt ra rằng, có n quân hậu, bạn cần đếm số cách đặt n quân hậu này lên bàn cờ 
sao cho với 2 quân hậu bất kì, chúng không “ăn” nhau.

Input: Dòng đầu ghi số bộ test T (T<5). Mỗi bộ test ghi một số nguyên dương n duy nhất (không quá 10)
Output:  Ghi kết quả mỗi bộ test trên một dòng. Số cách đặt quân hậu.
*/
int a[20], b[20], n, chinh[20], phu[20], dem;
void quaylui(int i)
{
	int j;
	for (j = 1; j <= n; j++)
	{
		// j chua dc xet va cac duong cheo chua j van = 0
		if (b[j] == 0 && chinh[i - j + n] == 0 && phu[i + j - 1] == 0)
		{
			// dat quan hau vao o [i,j]
			a[i] = j;
			// j da duoc xet, 2 duong cheo chua j da duoc xet
			b[j] = 1;
			chinh[i - j + n] = 1;
			phu[i + j - 1] = 1;
			if (i == n)
			{
				// for(int i = 1; i <= n; i++) cout << [i] << " ";
				// cout << "\n";
				dem++;
			}
			else
				quaylui(i + 1);
			// xet xong thi j va cac duong cheo chua j reset thanh chua dc xet
			b[j] = 0;
			chinh[i - j + n] = 0;
			phu[i + j - 1] = 0;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		dem = 0;
		cin >> n;
		quaylui(1);
		cout << dem << "\n";
	}
}
