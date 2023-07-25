// function 04 구조체의 참조.
# include <iostream>
# include <string>
using namespace std;

struct Book
{
    string title;
    string author;
    int price;
};

void Display(const Book &); // 함수 원형 선언. call by reference

int main(void)
{
    Book web_book = {"HTML과 CSS","홍길동",28000};
    Display(web_book);
    return 0;
}

// const 키워드를 사용하여 원본 구조체에 대한 변경을 허용하지 않는 것이 좋다.
void Display(const Book& bk) 
{
    cout << "책 제목 : " <<bk.title << endl;
    cout << "저자명  : " << bk.author << endl;
    cout << "책 가격 : " << bk.price << endl;
}