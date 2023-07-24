# include <iostream>
using namespace std;

int main()
{
    cout << "문자열을 공부해보자!";
   
    const int SIZE = 20;
    char address[SIZE];
    char name[SIZE];
    cout << "자신의 이름을 적어주세요 : ";
    // cin >> name; // cin 객체는 띄어쓰기, 탭 문자 등 모두 문자열의 끝으로 인식.
    cin.get(name, SIZE).ignore(SIZE,'\n'); // size에 해당하는 값만큼
    cout << "자신이 살고 있는 도시를 적어주세요 : ";
    // cin >> address;
    cin.get(address, SIZE).ignore(SIZE,'\n');
    cout << address << "에 살고 있는 " << name << "입니다.";

    return 0;
}