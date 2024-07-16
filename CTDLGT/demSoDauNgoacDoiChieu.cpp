#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int open = 0, close = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                open++;
                st.push(s[i]);
            }
            else
            {
                if (!st.empty() && st.top() == '(')
                {
                    open--;
                    st.pop();
                }
                else
                {
                    close++;
                    st.push(s[i]);
                }
            }
        }
        // )((( -> open = 3, close = 1
        // ans = 1 + 0 = 1
        // ans += 1 + 1 -> ans = 3
        int ans = open / 2 + close / 2; // mỗi cặp đóng mở ngoặc chỉ cần đảo ngược 1 dấu
        ans += open % 2 + close % 2;    // nếu có cặp ngoặc trái hướng, cần đảo cả 2
        cout << ans << endl;
    }
}