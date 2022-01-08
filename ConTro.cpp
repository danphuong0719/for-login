#include <iostream>
using namespace std;

int main()
{
	// bien -> [dia chi (Địa chỉ chứa giá trị) -> giá trị]
	int a = 5;

	int& c = a;

	int *b = &a;

	// b = &a = @abasadadasasd
	// 	*b = *(&a) => a = 5 = > *b = 5

	cout <<  *b  << ", " << &a; // 


}

