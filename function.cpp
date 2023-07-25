// function 04 참조자.
// C++에서 함수의 인수로 참조자를 사용하는 방법의 특징
//1. 함수 내에서 참조 연산자(*)를 사용하지 않으므로, 함수 내부의 코드가 깔끔하고 직관적
//2. 함수의 호출이 값에 의한 전달(call by value)방법과 같은 형태가 되어, 코드를 읽기가 쉽지 않다.
// 결론:
// C++에서 크기가 큰 구조체나 클래스를 다룰 때만에만 참조자를 사용하고,
// 간단한 함수에서는 call by reference보다는 call by value가 가독성이 좋을 수도 있다.


# include <iostream>
using namespace std;
void Swap(int &, int &);

int main(void)
{
    int x = 10; // 변수의 선언
    int &y = x; // 참조자의 선언.

    int num1 = 3, num2 = 7;
    cout << "변경 전 num1의 값은 " << num1 << "이며, num2의 값은 " << num2 << "입니다." << endl;
    Swap(num1, num2);
	cout << "변경 후 num1의 값은 " << num1 << "이며, num2의 값은 " << num2 << "입니다." << endl;
	return 0;

}

void Swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}