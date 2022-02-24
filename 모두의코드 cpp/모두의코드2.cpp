#include <iostream>
using namespace std;
/*
모두의코드# 2
동적할당 ( new / delete)

동적할당 배열
*/
int main() {
    int arr_size;
    std::cout << "array size : ";
    std::cin >> arr_size;
    int* list = new int[arr_size];
    for (int i = 0; i < arr_size; i++) {
        std::cin >> list[i];
    }
    for (int i = 0; i < arr_size; i++) {
        std::cout << i << "th element of list : " << list[i] << std::endl;
    }
    delete[] list;

}