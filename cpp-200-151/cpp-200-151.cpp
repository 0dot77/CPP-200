// cpp-200-151.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <tuple>

struct TupleExam
{
	TupleExam(std::tuple<int, std::string>)
	{
		std::cout << "Tuple로 인자 전달" << std::endl;
	}

	TupleExam(int n, std::string s)
	{
		std::cout << "############################" << "\n";
		std::cout << n << s << std::endl;
		std::cout << "piecewis_construct로 인자 전달" << std::endl;
	}
};

int main()
{
	std::tuple<int, std::string> data(1, "str");

	std::pair<TupleExam, TupleExam> data1(data, data);
	std::pair<TupleExam, TupleExam> data2(std::piecewise_construct, data, data);
	std::pair<TupleExam, TupleExam> data3(std::make_tuple(2, "str"), std::make_tuple(2, "str"));
	std::pair<TupleExam, TupleExam> data4(std::piecewise_construct, std::make_tuple(2, "str"), std::make_tuple(2, "str"));

	return 0;
}

