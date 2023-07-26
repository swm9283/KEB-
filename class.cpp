// class 09 OOP 다형성 - 추상클래스
# include <iostream>
# include <string>
using namespace std;

class Animal
{
    public:
      virtual ~Animal(){}; // 가상 소멸자의 선언.
      virtual void Cry() = 0; // pure virtual funciton 선언.
};

class Dog : public Animal
{
    public:
      virtual void Cry()
      {
        cout << "멍멍!!" << endl;
      }
};

class Cat : public Animal
{
    public:
      virtual void Cry() { cout << "야용 야용!!!!" << endl; }
};

int main (void)
{
    Dog dog;
    Cat cat;
    dog.Cry();
    cat.Cry();
    return 0;
}