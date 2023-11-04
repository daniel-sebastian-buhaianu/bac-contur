#include <iostream>
#define VMIN 2
#define VMAX 100
using namespace std;
int main()
{
	int a[VMAX][VMAX], n, i, j, nr, x;
	cout << "n = "; cin >> n;
	cout << "Introdu " << n*n << " numere din intervalul [" << VMIN << ", " << VMAX << "]:\n";
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "x = "; cin >> x;
	for (nr = i = 0; i < n; i++)
	{
		if (a[i][0]%x == 0)
			nr++;
		if (a[i][n-1]%x == 0)
			nr++;
		if (i > 0 && i < n-1)
		{
			if (a[0][i]%x == 0)
				nr++;
			if (a[n-1][i]%x == 0)
				nr++;	
		}
	}
	cout << "rezultat = " << nr;
	return 0;
}
