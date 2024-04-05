#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Person {
    string name;
    int day, month, year;
};

bool compareAge(const Person &a, const Person &b) {
    if (a.year != b.year) {
        return a.year < b.year;
    } else if (a.month != b.month) {
        return a.month < b.month;
    } else {
        return a.day < b.day;
    }
}

int main() {
    int N;
    cin >> N;
    vector<Person> people(N);

    for (int i = 0; i < N; ++i) {
        cin >> people[i].name >> people[i].day;
        char slash;
        cin >> slash >> people[i].month >> slash >> people[i].year;
    }

    sort(people.begin(), people.end(), compareAge);

    cout << people[N-1].name << endl; // Người trẻ nhất
    cout << people[0].name << endl; // Người già nhất

    return 0;
}