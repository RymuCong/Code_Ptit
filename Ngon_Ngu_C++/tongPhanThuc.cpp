#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += (double)1 / i;
    printf("%.4f", sum);
}