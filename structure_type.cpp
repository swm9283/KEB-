# include <iostream>
# include <string>
using namespace std;

// 구조체를 가리키는 포인터를 인수로 전달하는 방식
// 구조체의 복사본이 아닌 주소 하나만을 전달하므로 빠르다는 장점.
// 원본 구조체에 직접 접근하므로, 원본 데이터의 보호 측면에서는 매우 위험.
//const를 통해 원본 데이터 수정을 막음.
struct prop
{
    int save;
    int loan;
};

prop InitProperty(void);
int CalcProperty(const prop *);


int main(void) 
{
    prop hong;
    int hong_prop;

    hong = InitProperty();
    hong_prop = CalcProperty(&hong);

    cout << hong_prop << endl;
}

prop InitProperty(void)
{
    prop hong_prop = {1000, 2000};
    return hong_prop;
}

int CalcProperty(const prop* money)
{
    // money->save = 100;
    return (money->save - money->loan);
}