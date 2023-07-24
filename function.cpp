//function.
# include <iostream>
using namespace std;

int SmallNum(int, int);
//main 함수 아래에 함수를 정의할 경우. compiler가 가장 먼저 main 함수를 compile하기 때문에
// SmallNum함수를 인식못할 수 있다. 따라서 이를 방지하고자 "한수의 원형 선언을 한다."

int main(void)
{
    int input1;
    int input2;
    cout << "숫자1을 입력해주세요 : " << endl;
    cin >> input1;
    cout << "숫자2를 입력해주세요 : " << endl;
    cin >> input2;
    cout << SmallNum(input1, input2) << endl;
    return 0;
}

int SmallNum(int num1, int num2)
{
    if (num1 < num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
};
