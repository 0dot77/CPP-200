#include <iostream>

using namespace std;

namespace silla 
{
	int year = 935;

	void CentralArea() {
		cout << "���" << endl;
	}
}

namespace baekjae
{
	int year = 660;

	void CentralArea() {
		cout << "��û��" << endl;
	}

	int is_over = 100;
}

using namespace silla;
using namespace baekjae;

int main() {

	cout << "�Ŷ� �߽��� : ";
	silla::CentralArea();
	cout << "�Ŷ� ��� ���� : " << silla::year << endl;

	cout << "���� �߽��� : ";
	baekjae::CentralArea();
	cout << "���� ��� ���� : " << baekjae::year << endl;


	return 0;
}