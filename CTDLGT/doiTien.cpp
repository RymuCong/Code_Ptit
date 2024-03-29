#include <iostream>
using namespace std;

void DoiTien (int a[], int n)
{
    int dem = 0;
	for (int i = 9; i >= 0; i--)
	{
		if (n == 0)
			break;
		while (n >= a[i])
		{
			n -= a[i];
			dem++;
		}
	}
    cout << dem << endl;	
}

int main ()
{
	int a[10] = {1,2,5,10,20,50,100,200,500,1000};
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		DoiTien(a,n);
	}
}
