// class 01 생성자(constructor)
#include <iostream>
# include <string>
using namespace std;
class Book
{
    private:
    int current_page;
    void set_percent();


    public:
    //   Book(const string &title = "웹프로그래밍", int total_page = 100); //defalt 인수를 이용한 디폴트 생성자의 정의
      Book();
      Book(const string &title, int total_page);
      string title_;
      int total_page_;
      double percent_;
      void Move(int page);
      void Open();
      void Read();
      const Book &ThickerBook(const Book &); // ThickerBook() 함수의 원형 선언.
};

int main(void)
{
    // Book web_book("HTML과 CSS", 350); // 생성자의 암시적 호출
    // Book web_book = Book("HTML과 CSS", 350);
    //   Book web_book; // default 생성자의 암시적 호출.
    Book web_book = Book(); // default 생성자의 명시적 호출.
    //   Book *ptr_book = new Book; // default 생성자의 명시적 호출.
      Book html_book = Book("HTML 레퍼런스", 200);
      cout << web_book.percent_ << endl;
      cout << html_book.percent_ << endl;

      cout << web_book.ThickerBook(html_book).title_ << endl;
      return 0;
}

Book ::Book()
{
      cout << "default constructor로 인한 book객체가 생성되었습니다." << endl;
}

Book :: Book(const string & title, int total_page)
{
    title_ = title; // 책의 제목을 초기화
    total_page_ = total_page; // 책의 total page를 초기화
    current_page = 0; // 현재 page를 0으로 최화
    set_percent(); // 책을 읽은 정도를 초기화함.
    cout << "default constructor를 overriding한 constructor로 book 객체가 생성되었습니다" << endl;
}

void Book :: set_percent()
{
    percent_ = (double)current_page / total_page_ * 100;
}

const Book& Book :: ThickerBook(const Book& comp_book)
{
    if (comp_book.total_page_ > this->total_page_)
    {
        return comp_book;
    }
    else
    {
        return *this;
    }
}