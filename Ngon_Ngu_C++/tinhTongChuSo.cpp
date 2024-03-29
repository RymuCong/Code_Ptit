// code chat GPT chứ thật ra cũng không hiểu lắm =)))
#include <iostream>
using namespace std;

int rutGon (long a)
{
    int sum = a % 9;
    if (sum == 0 && a != 0)
        return 9;
    else
        return sum;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        long a;
        cin >> a;
        cout << rutGon(a) << endl;        
    }
}