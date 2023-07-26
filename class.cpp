// class 05 OOP 캡슐화 - 다양한 프렌드
# include <iostream>
# include <string>
# include <cmath>
using namespace std;

class Rect; // 전방선언(forward declaration. - circular reference를 피하기 위해!

// friend 멤버 함수를 선언할 때에는 각 클래스의 선언 위치도 신경써야한다.


class Display
{
    public:
      void ShowSize(const Rect& target);
      void ShowDiagnol(const Rect& target);
};


class Rect
{
    private:
      double height_;
      double width_;
    
    public:
      Rect(double height, double width); // 생성자
      void height() const;
      void width() const;
    //   friend class Display; // 프렌드 클래스 선언. -> data hiding 및 encapsulation에 불리
      friend void Display::ShowDiagnol(const Rect &target); // 프렌드 멤버 함수 선언.
};

int main(void)
{
    Rect rect01(10,20);

    Display rect_display;
    rect_display.ShowSize(rect01);
    rect_display.ShowDiagnol(rect01);

    return 0;
}
Rect ::Rect(double height, double width) {
    height_ = height;
    width_ = width;
}

void Rect :: height() const
{
    cout << "이 사각형의 높이 : " << this->height_ << endl;
}

void Rect :: width() const
{
    cout << "이 사각형의 넓이 : " << this->width_ << endl;
}

void Display :: ShowSize(const Rect& target)
{
    target.height();
    target.width();
}

void Display :: ShowDiagnol(const Rect& target)
{
    double diagnol;
    diagnol = sqrt(pow(target.height_, 2) + pow(target.width_, 2));
    cout << "이 사각형의 대각선의 길이 : " << diagnol << endl;
}
