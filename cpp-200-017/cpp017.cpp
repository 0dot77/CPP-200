#include <string>
#include <iostream>

using namespace std;

int main() {
	string my_country = "Korea";
	string my_job = "Developer";

	cout << "Country : " << my_country << endl;
	cout << "My Job : " << my_job << endl;

	string my_info = my_country + ", " + my_job;
	
	cout << "My Info : " << my_info << endl;

	return 0;
}