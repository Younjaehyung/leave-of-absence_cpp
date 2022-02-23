#include <iostream>
using namespace std;
/*
모두의코드# 1 
참조자(reference)
*/

int change(int*);

int main() {
	int number = 5;

	cout << number << endl;
	change(&number);
	cout << number << endl;
	/*참조자*/
	int a = 3;
	int& another_a = a;

	another_a = 5;
	std::cout << "a : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;
	/*참조자*/
}

int change(int* p) {
	*p = 3;

	return 0;
}