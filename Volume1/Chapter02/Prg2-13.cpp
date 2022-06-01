// Prg2-13.cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first;
    string inital;
    string last;
    string space = " ";
    string dot = " ";
    string fullName;

    cout << "이름(first name) 입력하기: ";
    cin >> first;
    cout << "이니셜(inital) 입력하기: ";
    cin >> inital;
    cout << "성(last name) 입력하기: ";
    cin >> last;

    fullName = first + space + inital + dot + space + last;

    cout << "전체 이름(full name): " << fullName;

    return 0;
}
