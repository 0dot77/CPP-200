// cpp-200-087.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int data1[10]{ 0, };
	fill_n(data1, 2, 10);
	fill_n(data1 + 4, 3, 20);

	cout << "== dat1 ��� ==" << endl;

	for (int i = 0; i < 10; i++)
		cout << data1[i] << ", ";

	vector<int> data2({ 0,1,2,3,4,5,6,7 });

	fill_n(data2.begin(), data2.size() - 1, 30);
	fill_n(data2.begin(), 4, 40);

	cout << endl << endl << "== data2 ��� ==" << endl;
}

