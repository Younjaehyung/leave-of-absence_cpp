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
}

int change(int* p) {
	*p = 3;

	return 0;
}