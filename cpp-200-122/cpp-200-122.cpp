// cpp-200-122.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int GetOne() 
{
    return 1;
}

int Plus(int x, int y = GetOne(), int z = 1)
{
    return x + y + z;
}

int main()
{
    int n1 = Plus(1);
    int n2 = Plus(1, 2);
    int n3 = Plus(1, 2, 3);

    cout << "°á°ú°ª : " << n1 << ", " << n2 << ", " << n3 << endl;
}

