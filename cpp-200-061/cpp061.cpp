#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string sentence = "i like coding";

	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());
	//remove(sentence.begin(),sentence.end(), ' ');
	cout << sentence << endl;
	return 0;
}