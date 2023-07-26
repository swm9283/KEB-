// class 02 복사생성자(copy constructor)
# include <iostream>
# include<string>
using namespace std;

class Book
{
    private:
      int current_page_;
      void set_percent();

    public:
    Book(const string &title, int total_page);
    Book(const Book &); //  복사 생성자의 원형 정의.
    string title_;
    int total_page_;
    double percent_;
    void Move(int page);
    void Open();
    void Read();
    
};

int main(void)
{
	Book web_book("HTML과 CSS", 350);
	Book html_book(web_book); // 복사 생성자를 사용해서, web_book를 참조해서 html_book을 초기화.
	
	cout << "첫 번째 책의 제목은 " << web_book.title_ << "이고, 총 페이지는 " << web_book.total_page_ << "장입니다." << endl;
	cout << "두 번째 책의 제목은 " << html_book.title_ << "이고, 총 페이지는 " << html_book.total_page_ << "장입니다.";
	return 0;
}

Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}

Book::Book(const Book& origin)	// 복사 생성자의 선언 
{
	title_ = origin.title_;
	total_page_ = origin.total_page_;
	current_page_ = origin.current_page_;
	percent_ = origin.percent_;
}

void Book::set_percent()
{
	percent_ = (double) current_page_ / total_page_ * 100;
}