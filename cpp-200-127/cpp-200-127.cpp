// cpp-200-127.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>

class TemplateData
{
public:
    void Add(T arg) 
    {
        data.push_back(arg);
    }

    int Size()
    {
        data.size();
    }

    void Print()
    {
        int size = data.size();
        for (int i = 0; i < size; i++)
            cout << "data : " << data.at(i) << endl;
    }

private:
    vector<T> data;
};

int main()
{
    TemplateData<int> dataInt;

    dataInt.Add(1);
    dataInt.Add(2);
    dataInt.Print();

    TemplateData<string> dataString;
    dataString.Add("Hello");
    dataString.Add("World");
    dataString.Add("!!k");
    dataString.Print();
}

