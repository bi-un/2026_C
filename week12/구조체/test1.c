#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    string tel;
    string addr;
};

int main() {
    Person p;
    cin >> p.name >> p.tel >> p.addr;

    cout << "name : " << p.name << '\n';
    cout << "tel : " << p.tel << '\n';
    cout << "addr : " << p.addr << '\n';

    return 0;
}