#include <iostream>
using namespace std;
/*
������ڵ�# 1 
������(reference)
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