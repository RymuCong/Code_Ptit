#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
	int n = 5;
	vector <int> a(n);
	a[0] = 5;
	a[1] = 4;
	a[2] = 3;
	
	a[3] = 1;
	a[4] = 2;
	next_permutation(a.begin(),a.end());
	for (int x : a)
		cout << x << " ";
}
