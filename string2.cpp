# include <iostream>
# include <string>
using namespace std;

int main(void)
{
    // string address, name; // 문자열의 길이, 띄어쓰기 등에 상관없이 string class를 이용하면 입력받고 출력할 수 있다.

    // cout << "현재 거주중 인 곳을 적어주세요 : ";
    // getline(cin, address); // 첫 번째 매개변수 : cin 객체, 두 번째 매개변수 : 문자열을 저장할 string객체
    // cout << "본인의 성함을 작성해주세요 : ";
    // getline(cin, name);

    // string result = address + "에 살고 있는 " + name + "입니다";
    // cout << result;


    // string class의 메소드에 대해서 배워자.
    string str1 = "C++ is very nice";
    string str2 = "nice";
    string str3 = "awesome";

    string::size_type index = str1.find(str2);
    if (index != string::npos)
    {
        str1.replace(index, str2.length(), str3);
    }
    cout << str1;
}