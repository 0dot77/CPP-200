// cpp-200-089.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct Princess
{
    string name;
    string father;
    string birthday;
} jungso;

void Print(Princess* who) // ������ ������ �ּҸ� �޾Ƽ� ����Ѵ�.
{
    cout << "jungso.name = " << who->name << endl; // ������ ������ -> �� Ȱ���ؼ� �ɹ��� �ٷ� ������ �� �ִ�.
    cout << "jungso.father = " << who->father << endl;
    cout << "jungso.birthday = " << who->birthday << endl;
}

int main()
{
    jungso.name = "���Ұ���";
    jungso.father = "���� ����";
    jungso.birthday = "1412��";

    Print(&jungso); // ����ü�� �Ϲ� ����ó�� ��������. ���� �ּ� �����ڸ� ����ؼ� �ּҸ� �����Ѵ�.

    return 0;
}

