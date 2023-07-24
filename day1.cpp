#include <iostream>
#define TEXT "Welcome to C++ Programming!!\n"
using namespace std; //  std란 네임스페이스에 속한 정의들은 네임스페이스 이름을 붙이지 않아도 사용할 수 있음.

int main()
{
    // std::cout << TEXT;
    std::cout << TEXT;
    int age;

    std::cout << "당신의 나이를 입력해주세요 : ";
    // 나이 입력
    std::cin >> age;
    // 나치 출력
    cout << "여러분의 나이는" << age << "살입니다" << endl;

    return 0;
    }