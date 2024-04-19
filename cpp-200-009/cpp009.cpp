#include <iostream>

using namespace std;
int main() {
	int sum1 = 0;
	int sum2 = 0;

	int one = 1;
	int two = 2;

	for (int i = 0; i < 5; i++) {
		sum1 += one; // 1 2 3 4 5
		sum2 += two; // 2 4 6 8 10
	}

	cout << "합산 결과 : " << sum1 << ", " << sum2 << endl;

	return 0;
}