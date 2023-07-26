// class 07 OOP 상속성 - 파생 클래스.
#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age);	// 기초 클래스 생성자의 선언 
	void ShowPersonInfo();
};

class Student : public Person
{
private:
	int student_id_;
public:
	Student(int sid, const string& name, int age);	// 파생 클래스 생성자의 선언
        void ShowPersonInfo(); // 파생 클래스에서 상속받은 멤버 함수의 재정의.(override)
};

int main(void)
{
        Student song(12180000, "우민", 24);
        song.ShowPersonInfo();
        Student jang(1222, "서진", 21);
        jang.ShowPersonInfo();
        jang.Person::ShowPersonInfo(); // 범위 지정 연산자를 통해 기초클래스 원래 멤버함수 호출 가능.

        return 0;
}

Person::Person(const string& name, int age)	// 기초 클래스 생성자의 정의 
{
	name_ = name;
	age_ = age;
}

void Person::ShowPersonInfo()
{
	cout << this->name_ << "의 나이는 " << this->age_ << "살입니다." << endl;
}

Student::Student(int sid, const string& name, int age) : Person(name, age)	// 파생 클래스 생성자의 정의 
{
	student_id_ = sid;
}

void Student::ShowPersonInfo()
{
        cout << "이 학생은 인하대학교 학생이며 학번은 " << this->student_id_
             << " 입니다." << endl;
}