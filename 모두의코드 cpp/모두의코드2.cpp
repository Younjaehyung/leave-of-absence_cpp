#include <iostream>

using namespace std;
/*
모두의코드# 2
동적할당 ( new / delete)

동물(public Animal) 이라는 구조체를 정의해서 이름(char name[30]), 나이(int age),체력(int health), 배부른 정도(int food), 깨끗한 정도의(int clean) 값을 가진다.

처음에 동물 구조체의 포인터 배열(public Animal* list[30])을 만들어서 사용자가 동물을 추가할 때 마다 하나씩 생성한다.

play 라는 함수를 만들어서 동물의 상태를 변경하고 show_stat 함수를 만들어서 지정하는 동물의 상태를 출력한다.

1 턴이 지날 때 마다 동물의 상태를 변경한다.
*/

class Animal {
	char name[30];
	int age;
	int health;
	int food;
	int clean;

public:
	void play() {
		cin >> name;
		cin >> age;
		cin >> health;
		cin >> food;
		cin >> clean;
	}


	void show_stat() {
		cout<< name << endl;
		cout<<  age<< endl;
		cout<<  health << endl;
		cout << food << endl;
		cout << clean << endl;
	}
};
int main() {
	Animal* list=new Animal[30];

	for (int i = 0; i < 2; i++) {
		list[i].play();
		list[i].show_stat();
	}

}
