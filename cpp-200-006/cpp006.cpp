#include <iostream>

using namespace std;

int main() {
	int two = 2;
	int eight = 8;
	int sum1 = 2;
	int sum2 = 2;

	sum1 = sum1 + two;
	sum2 += eight;

	cout << "sum1 = " << sum1 << endl; // 4
	cout << "sum2 = " << sum2 << endl; // 10

	sum1 = 2;
	sum2 = 8;
	sum1 *= two;
	sum2 /= eight;

	cout << "sum1 = " << sum1 << endl; // 4
	cout << "sum2 = " << sum2 << endl; // 1
	return 0;
}