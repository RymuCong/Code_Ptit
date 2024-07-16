#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    vector <int> a(n);
    stack < vector <int> > s;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        swap(a[i], a[min]);
        s.push(a);
    }  
    while (!s.empty())
    {
        vector <int> b = s.top();
        s.pop();
        cout << "Buoc " << s.size() + 1 << ": ";
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
}