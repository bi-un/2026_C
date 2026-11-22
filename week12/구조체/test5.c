#include <iostream>
using namespace std;

struct Student
{
    string name;
    int score[3];
    int total;   // 총점
};

void input(Student arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].score[0] >> arr[i].score[1] >> arr[i].score[2];
        arr[i].total = arr[i].score[0] + arr[i].score[1] + arr[i].score[2];
    }
}

void sort(Student arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].total < arr[j].total) {
                Student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void output(Student arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i].name << " "
             << arr[i].score[0] << " "
             << arr[i].score[1] << " "
             << arr[i].score[2] << " "
             << arr[i].total << '\n';
    }
}