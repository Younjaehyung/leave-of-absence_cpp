#include <iostream>
using namespace std;
/*
모두의코드# 1 
참조자(reference)
Dangling reference
외부변수 참조자

-----
위와 같이 인자로 받은 레퍼런스를 그대로 리턴 하고 있습니다.

function(b) 를 실행한 시점에서 a 는 main 의 b 를 참조하고 있게 됩니다. 
따라서 function 이 리턴한 참조자는 아직 살아있는 변수인 b 를 계속 참조 합니다.

int c = function(b);
결국 위 문장은 그냥 c 에 현재의 b 의 값인 5 를 대입하는 것과 동일한 문장이 됩니다.
*/
int& function(int& a) {
	a = 5;
	return a;
}

int main() {
	int b = 2;
	int c = function(b);
	return 0;
}