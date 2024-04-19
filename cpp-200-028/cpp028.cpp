#include <iostream>
#include <bitset>

using namespace std;

int main() 
{
	unsigned int x(10);
	// >> right shift

	// 1010 


	// << left shift

	// ~a

	// &a

	// |a

	bitset<8> bit1;
	bit1.reset(); // 0000 0000
	bit1 = 127; // 0111 1111 signed
	
	bitset<8> bit2;
	bit2.reset();
	bit2 = 0x20; // 16*2 + 16*0 = 32
	
	bitset<8> bit3 = bit1 & bit2;
	// 0111 1111
	// 0010 0000 
	// and = 0010 0000 
	
	cout << "and" << " " << bit3 << endl; // 32 

	bitset<8> bit4 = bit1 | bit2;
	// 0111 1111
	// 0010 0000
	// or = 0111 1111 = 64 + 32 + 16 + 8 + 4 + 2 + 1 = 127

	cout << "or" << " " << bit4 << endl; // 127

	bitset<8>bit5 = bit1 ^ bit2;
	// XOR
	// 0111 1111
	// 0010 0000
	// 0101 1111
	// XOR = 95

	cout << "XOR" << " " << bit5 << endl; // 95

	bitset<8>bit6 = ~bit1;

	//NOT
	// 1000 0000 

	cout << "NOT" << " " << bit6 << endl; // 64

	bitset<8>bit7 = bit2 << 1;
	
	//left shift
	// 0010 0000 << 1 = 0100 0000 = 64

	cout << "left shit" << " " << bit7 << endl; // 64

	bitset<8> bit8 = bit2 >> 1;
	// right shift
	// 0010 0000 >> 1 = 0001 0000 // 16
	cout << "right shit" << " " << bit8 << endl; // 16


	cout << "----" << endl;

	cout << "bit1 & bit2 : " << bit3 << ", " << bit3.to_ulong() << endl;
	cout << "bit1 | bit2 : " << bit4 << ", " << bit4.to_ulong() << endl;
	cout << "bit1 ^ bit2 : " << bit5 << ", " << bit5.to_ulong() << endl;
	cout << "~bit1 : " << bit6 << ", " << bit6.to_ulong() << endl;
	cout << "bit2 << 1 : " << bit7 << ", " << bit7.to_ulong() << endl;
	cout << "bit12 >> 1 : " << bit8 << ", " << bit8.to_ulong() << endl;
}