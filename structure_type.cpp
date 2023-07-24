# include <iostream>
# include <string>
using namespace std;

struct Name
{
    string first;
    string last;
};


struct Friends
{
    Name first_name; // 중첩된 구조체.
    string address;
    string job;
};

int main(void)
{
    Friends hong = {
        {"우민", "송"}, "인천광역시 미추홀구", "Bioinfomatics researcher"};

    cout << hong.address << endl << endl;
    cout << hong.first_name.last << hong.first_name.first << "에게" << endl;
    cout << "그동안 잘 지냈니? 아직도" << hong.job << "이니" << endl;
    cout << "다음에 꼭 한 번 만나자." << endl << "잘 지내" <<endl ;
    cout << sizeof(Friends); // 구조체의 크기 : 멤버변수에 영향을 받음.
    return 0;
}