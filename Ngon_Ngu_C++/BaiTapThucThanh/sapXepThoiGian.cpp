#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ThoiGian {
    int gio, phut, giay;
    
    // Hàm khởi tạo
    ThoiGian(int gio, int phut, int giay) : gio(gio), phut(phut), giay(giay) {}
    
    // Hàm so sánh để sắp xếp
    bool operator < (const ThoiGian& tg) const {
        if (gio != tg.gio) return gio < tg.gio;
        if (phut != tg.phut) return phut < tg.phut;
        return giay < tg.giay;
    }
};

int main() {
    int N;
    cin >> N;
    vector<ThoiGian> danhSachTG;
    
    for (int i = 0; i < N; i++) {
        int gio, phut, giay;
        cin >> gio >> phut >> giay;
        danhSachTG.push_back(ThoiGian(gio, phut, giay));
    }
    
    // Sắp xếp danh sách
    sort(danhSachTG.begin(), danhSachTG.end());
    
    // In danh sách sau khi đã sắp xếp
    for (const auto& tg : danhSachTG) {
        cout << tg.gio << " " << tg.phut << " " << tg.giay << endl;
    }
    
    return 0;
}