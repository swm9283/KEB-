// class 03 연산자 오버로딩 - operator function
// 문법
// operator오버로딩할연산자(매개변수목록.)
# include <iostream>
# include <string>
using namespace std;

class Position
{
    private:
      double x_;
      double y_;
    
    public:
      Position(); // 기본 생성자 원형 선언
      Position(double x, double y); // 생성자 원형 선언
      ~Position(); // 소멸자 원형 선언.
      void Display();
    //   Position operator-(const Position &other); // - 연산자 함수 원형 선언
      friend Position operator-(const Position &pos1, const Position &pos2); // - 연산자 함수.
};

int main(void)
{
      Position pos1 = Position(3.3, 12.5);
      Position pos2(-14.4, 7.8);
      Position pos3 = pos1 - pos2;

      pos3.Display();
      cout << sizeof(pos3);
      return 0;
}

// 기본 생성자
Position ::Position() { cout << "나는 기본 생성자입니다.";}

// 생성자.
Position :: Position(double x, double y)
{
      cout << "나는 생성자입니다." <<endl;
      x_ = x;
      y_ = y;
}

// 소멸자
Position ::~Position(){};

// Display 함수
 void Position :: Display()
{
    cout << this << " 객체의 "
         << " x 좌표 : " << this->x_ << " y 좌표 : " << this->y_ << " 입니다."
         << endl;
}

// - 연산자 오버로딩.
// Position Position :: operator-(const Position& other)
// {
//     return Position((x_ + other.x_) / 2, (y_ + other.y_) / 2);
// }
// - 연산자 오버로딩 : 전역함수 선언.
Position operator-(const Position& pos1, const Position& pos2)
{
    return Position((pos1.x_ + pos2.x_) / 2, (pos1.y_ + pos2.y_) / 2);
}
