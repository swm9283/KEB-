// function 02 인수 전달 방법 - 참조에 의한 전달.(call by reference).
# include <iostream>
using namespace std;

void Local(int&); // 함수 원형 선언.

int main(void)
{
    int var = 10;
    cout << "변수 var의 초깃값은 " << var << "입니다." << endl;

    Local(var);
    cout << "Local() 함수 호출 후 변수 var 값은 " << var << "입니다." << endl;
    return 0;
}

void Local(int& num) { num += 10; }