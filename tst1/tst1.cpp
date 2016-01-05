#include <iostream>
using namespace std;

template<class param>
class zwierz
{
public:
	param a = 1;
	param b;
};


int main()
{
	zwierz<short> zw1;
	zwierz<double> zw2;

	cout << sizeof(zw1.a)<<" " << sizeof(zw2.a) << endl;
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;


	getchar();
    return 0;
}

