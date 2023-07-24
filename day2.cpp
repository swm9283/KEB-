// 2장 type
# include <iostream>  // python import라고 생각하면 되겠구나1
using namespace std;


int main() {
    
    // 변수의 선언만 하는 방법 : 메모리 공간만 할당
    int num;
    num = 20;
    std::cout << num;

    // 변수 선언과 동시에 초기화
    double num3 = 1.23, num4 = 4.56;
    cout << num3 << num4;

    int a = 10;

    cout << "숫자 10을 10진수로 표현하면" << a << "입니다." << endl;
    cout << oct;
    cout << "숫자 10을 8진수로 표현하면" << a << "입니다" << endl;
    cout << hex;
    cout << "숫자 10을 16진수로 표현하면" << a << "입니다" << endl;

    const int abc = 12;
    cout << dec;
    cout << abc;


    int bob = 2147483647;
    cout << "변수 num에 저장된 값은" << bob << "입니다." << endl;

    bob = 2147;
    cout << "변수 num에 저장된 값은" << bob << "입니다." << endl;

    float num01 = 3.1415836535897932;  // float 타입의 유효 자릿수는 소수점 6자리

    cout << "변수 num01에 저장된 값은 " << num01 << "입니다." << endl;  

    double num02 = 3.1415926535897932; // double 타입의 유효 자릿수는 소수점 15자리
    cout << "변수 num02에 저장된 값은 " << num02 << "입니다." << endl;

    int i;
    float sum = 0;

    for (i = 0; i < 1000; i ++)
    {
        sum += 0.1;
    }

    cout << "0.1dmf 1000번 더한 합계는" << sum << "입니다.";

    int num1 = 1;
    int num2 = 4;

    double result1 = num1 / num2;
    double result2 = (double) num1 / num2;
    double result3 = double(num1) / num2;

    cout << result1;
    cout << result2;
    cout << result3;


    // 삼항 연산자
    int n1 = 11;
    int n2 = 10;
    int result;

    result = (num1 < num2) ? num1 : num2;
    cout << "결과는!!!!!!" << result << "입니다" << endl;
    cout << sizeof(short);

    return 0;
}
