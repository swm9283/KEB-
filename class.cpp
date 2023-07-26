// class 06 OOP 캡슐화 - 정적멤버와 상수멤버.
# include <iostream>
# include <string>
using namespace std;

class Person
{
    private:
      string name_;
      int age_;
    public:
      static int person_count_;   // 정적 멤버 변수의 선언
      static int person_count();  // 정적 멤버 함수의 선언.
      Person(string name, int age);  // 생성자
      ~Person() { person_count_--; } // 소멸자.
      void ShowPersonInfo();
};

int Person ::person_count_ = 0; // 정적 멤버 변수의 정의 및 초기화.

int main(void)
{
      Person song("우민", 24);
      song.ShowPersonInfo();
      Person jang("서진", 21);
      jang.ShowPersonInfo();
      cout << "현재 우민이와 서진이 가족 구성원은 " << Person ::person_count()
           << "명 입니다." << endl;

      return 0;
}

Person :: Person(string name, int age)
{
    name_ = name;
    age_ = age;
    cout << ++person_count_ << " 번째 사람이 생성되었습니다." << endl;
}

void Person :: ShowPersonInfo()
{
    cout << "이름은 " << this->name_ << "이고"
         << " 나이는 " << this->age_ << "입니다." << endl;
}

int Person ::person_count() { return person_count_; }
