// cpp-200-070.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int PointerFunc(vector<string>* info)
{
    if (info->empty() == true)
    {
        return 0;
    }
    else 
    {
        return sizeof(info);
    }
}

int main()
{
    vector<string> message;
    message.push_back("��� �屺");
    message.push_back("ô�ذ�!");
    message.push_back("��ģ �̸���");
    message.push_back("... �����ϱ�");
    

    //for (const string msg : message) {
    //    cout << msg << endl;
    //}

    cout << "������ ���� ũ�� : " << PointerFunc(&message) << endl;
    cout << "���� ���� ũ�� : " << sizeof(message) << endl;

}

