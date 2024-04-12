#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// Hàm đảo ngược các từ trong xâu
string daoNguocTuTrongXau(string S) {
    stringstream ss(S); // Sử dụng stringstream để tách từ
    string tu;
    vector<string> tuV; // Vector để lưu trữ các từ

    // Tách từ và lưu vào vector
    while (ss >> tu) {
        tuV.push_back(tu);
    }

    // Đảo ngược thứ tự các từ và tạo xâu kết quả
    string ketQua = "";
    for (int i = tuV.size() - 1; i >= 0; i--) {
        ketQua += tuV[i];
        if (i > 0) ketQua += " "; // Thêm khoảng trắng giữa các từ
    }

    return ketQua;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Loại bỏ ký tự xuống dòng thừa sau khi nhập T
    while (T--) {
        string S;
        getline(cin, S); // Đọc xâu ký tự S
        cout << daoNguocTuTrongXau(S) << endl;
    }
    return 0;
}