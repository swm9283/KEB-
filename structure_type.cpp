// 공용체와 열거체
# include <iostream>
# include <string>
using namespace std;

enum Weather { SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30};

int main(void)
{
    int input;
    Weather weather;

    cout << "오늘의 날씨를 입력해주세요 : " << endl;
    cout << "(SUNNY=0, CLOUD=10, RAIN=20, SNOW=30)" << endl;
    cin >> input;
    weather = (Weather)input;
    
    switch(weather)
    {
        case SUNNY:
        cout << "오늘의 날씨는 아주 맑아요";
        break;

        case CLOUD:
        cout << "오늘의 날씨는 흐리네요";
        break;
        
        case RAIN:
        cout << "오늘의 날씨는 비가 주룩주룩 오네요!";
        break;
        case SNOW:
        cout << "오늘의 날씨는 하얀 눈이 내려요";
        break;

        default:
        cout << "제대로 입력해라 쉐이야";
        break;
     }
     return 0;
}