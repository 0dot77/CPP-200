#include <iostream>

using namespace std;

int main()
{
	string sentence = "i like coding";
	string find_str = "coding";
	string replace_str = "histroy";

	sentence.replace(sentence.find(find_str), find_str.length(), replace_str);

	cout << sentence << endl;

	return 0;
}