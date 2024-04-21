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
    message.push_back("고려 장군");
    message.push_back("척준경!");
    message.push_back("절친 이름은");
    message.push_back("... 무엇일까");
    

    //for (const string msg : message) {
    //    cout << msg << endl;
    //}

    cout << "포인터 인자 크기 : " << PointerFunc(&message) << endl;
    cout << "원래 변수 크기 : " << sizeof(message) << endl;

}

