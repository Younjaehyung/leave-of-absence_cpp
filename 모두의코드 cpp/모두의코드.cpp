#include <iostream>
using namespace std;
/*
모두의코드# 1 
참조자(reference)
Dangling reference
지역변수 참조자

-----
함수 리턴값의 유형이 레퍼런스이지만 리턴값은 지역내에서만 존재 하기때문에
리턴할시 int b= function(); 는 a를 참조 못하게 된다
허나 비쥬얼스튜디오에서는 컴파일러가 알아서 하게 됨.
*/
int& function() {
	int a = 2;
	return a;
}

int main() {
	int b = function();
	b = 3;
	return 0;
}
