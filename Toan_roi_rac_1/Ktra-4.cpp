/*
Trong tập các số từ 100 đến 200:

1. Áp dụng nguyên lý bù trừ để tính toán và in trên dòng 1 số các số không chia hết cho bất kỳ số nào trong 3 số 2, 5, 15.

2. Bắt đầu từ dòng 2, mỗi dòng in 10 số (2 số liền nhau cách nhau 1 khoảng trắng) thỏa mãn điều kiện ở ý 1.

3. Đếm số các số in được ở ý 2, sau đó in ở dòng cuối cùng.

(chú ý là bài làm đúng thì số ở dòng 1 và dòng cuối cùng phải bằng nhau)
*/
#include <iostream>
using namespace std;

void dem_so() {
    int dem = 0;
    int dem_dong = 0;
    for (int i = 100; i <= 200; i++) {
        if (i % 2 == 0 || i % 4 == 0 || i % 6 == 0) {
            cout << i << ' ';
            dem++;
            dem_dong++;
            if (dem_dong == 10) {
                cout << endl;
                dem_dong = 0;
            }
        }
    }
    if (dem_dong != 0) {
        cout << endl;
    }
    cout << dem << endl;
}

int main() {
	// nhung so k chia het tu 1 -> 200 roi tru di nhung so k chia het tu 1 -> 100
	cout << ((int(200/2) + int(200/4) + int(200/6) - int(200/4) - int(200/6) - int(200/12) + int(200/12)))
	- ((int(100/2) + int(100/4) + int(100/6) - int(100/4) - int(100/6) - int(100/12) + int(100/12))) + 1  << endl; // +1 do co ca 100 day la xet tu 101-200
    dem_so();
    return 0;
}

