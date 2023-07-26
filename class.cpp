// class 08 OOP 다형성 - 가상함수
# include <iostream>
using namespace std;

class A
{
    public:
      virtual void Print() { cout << "A class의 Print 함수 입니다." << endl; };
};

class B : public A
{
    public :
      virtual void Print() { cout << "B class의 Print 함수 입니다." << endl; };
};

int main(void)
{
    A* ptr;
    A obj_A;
    B obj_B;
    ptr = &obj_A;
    ptr->Print();

    ptr = &obj_B;
    ptr->Print();
    return 0;
}