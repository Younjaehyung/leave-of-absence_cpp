﻿#include <iostream>
using namespace std;
/*
모두의코드# 1 
참조자(reference)
배열들의 레퍼런스o
래퍼런스 배열X

*/


int main() {
	int arr[3] = { 1, 2, 3 };
	int(&ref)[3] = arr;
	/*
    int &ref[3]={1,2,3}; >>래퍼런스 배열 x
	*/
	ref[0] = 2;
	ref[1] = 3;
	ref[2] = 1;

	std::cout << arr[0] << arr[1] << arr[2] << std::endl;
}
