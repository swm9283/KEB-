// class 04 OOP 캡슐화 - friend
# include <iostream>
# include <string>
using namespace std;

class Rect
{
    private:
      double height_;
      double width_;

    public:
      Rect(); // 기본 constructor
      Rect(double height, double width); // 생성자
      void DisplaySize();
      Rect operator*(double mul) const; // const keyword -> 상수 멤버함수 선언 : 상수 멤버함수란 자신이 호출하는 객체를 수정하지 않는 읽기 전용 함수.
      friend Rect operator*(double mul, const Rect &origin); // 프렌드 함수.
};

int main(void)
{
    Rect origin_rect(10, 20);
    // Rect changed_rect = origin_rect * 2;
    Rect changed_rect = 3 * origin_rect;

    changed_rect.DisplaySize();
    return 0;
}

//기본 생성자
Rect ::Rect(){};
//생성자.
Rect :: Rect(double height, double width)
{
    height_ = height;
    width_ = width;
}

// DisplaySize 함수 선언
void Rect :: DisplaySize()
{
    cout << " 높이 : " << this->height_ << " 넓이 : " << this->width_ << endl;
}

// Rect 멤버함수 - * 연산자 overload
Rect Rect::operator*(double mul) const
{
    return Rect(height_ * mul, width_ * mul);
}

// 전역 함수 - * 연산자 overload
//프렌드 함수.
Rect operator*(double mul, const Rect& origin)
{
    return Rect(mul * origin.height_, mul * origin.width_);
}