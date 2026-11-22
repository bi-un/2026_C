#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    string tel;
    string addr;
};

int main() {
    Person p[3];

    for (int i = 0; i < 3; i++) {
        cin >> p[i].name >> p[i].tel >> p[i].addr;
    }

    int min_idx = 0;
    for (int i = 1; i < 3; i++) {
        if (p[i].name < p[min_idx].name) {
            min_idx = i;
        }
    }

    cout << "name : " << p[min_idx].name << '\n';
    cout << "tel : " << p[min_idx].tel << '\n';
    cout << "addr : " << p[min_idx].addr << '\n';

    return 0;
}