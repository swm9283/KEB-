# include <iostream>
using namespace std;
int main() 
{
    cout << "집에 가고 싶다."<<endl;
    int arr[5] = {1, 3, 5, 7, 9};
    // 범위 기반의 for 문
    cout << "범위 기반 for문 예제" << endl;
    for(int element : arr)
    {
        cout << element << "" << endl;
    }
    // 일반적인 for 문
    cout << "일반적인 for문 예제" << endl;
    for (int i = 0; i <= 5; i++) {
        cout << i << "" << endl;

    }


    //인덱스를 이용한 배열의 초기화
    int sum = 0;
    int grade[3]; // 길이가 3인 int형 배열 선언
    grade[0] = 85; // 국어점수
    grade[1] = 65;
    grade[2] = 90;
    for (int element : grade)
    {
        cout << element << "" << endl;
    }

    // 배열이 차지하는 메모리의 크기.
    int grade1[] = {85, 65, 90};
    int len = sizeof(grade) / sizeof(grade[0]);
    cout << "배열 grade의 길이는" << len << "입니다.";

    // 배열 선언과 동시에 초기화
    int arr1[3] = {1, 2, 3};
    int arr2[3];
    // arr2[3] = {0, 1, 2};  // 배열이 먼저 선언된 후에는 인덱스를 이용한 배열의 초기화만 가능하다.
    // arr2 = arr1;  // 길이가 같더라도 하나의 배열을 다른 배열에 통째로 대입할 수는 없다.


    // 배열의 길이 자동 설정.
    int arr3[3] = {1, 2, 3};
    arr3[3] = 12; // 존재하지도 않는 arr3[3]이라는 배열의 요소의 초기화를 진행, 반복문을 통해 계산에도 이용.
    for(int element : arr3)
    {
        cout << element << "" << endl;
    }
    int sum1 = 0;
    for (int i = 0; i < 4; ++i) {
        cout << "배열의 첫번째 원소입니다." << arr[i] << "" << endl;
        sum += arr3[i];
    }
    cout << "배열에 속한 모든 원소의 합은 " << sum << " 입니다." <<endl;

    // 값을 명시하지 않고 {} 만을 사용하여, 모든 배열 요소를 0으로 초기화할 수 있다.
    int prac_array[3] = {};
    for(int element : prac_array)
    {
        cout << element;
    }

    // 2-dimentional array.
    int arr5[6] = {10, 20, 30, 40, 50, 60};

    // 1차원 배열의 초기화 형태를 따르는 방식.
    int arr6[2][3] = {10, 20, 30, 40, 50, 60};

    //배열의 모든 요소를 초기화하는 방식.
    // 보통 이 방식을 많이 사용한다.
    int arr7[2][3] = {{10, 20, 30}, {40, 50, 60}};

    // 배열의 일부 요소만을 초기화하는 방식.
    int col_len, row_len;
    int arr8[3][4] = {
        {10, 20}, 
        {30, 40, 50, 60},
         {0, 0, 70, 80}

    };

    col_len = sizeof(arr8[0]) / sizeof(arr8[0][0]); // 2차원 배열의 열의 길이
    row_len =
        (sizeof(arr8) / col_len) / sizeof(arr8[0][0]); // 2차원 배열의 행의 길이

    for (int i = 0; i < row_len; i++)
    {
        for (int j = 0; j < col_len; j++)
        {
            cout << "배열의 " << i << "번째 행의 " << j << "번째 원소입니다." << endl;
            cout << arr8[i][j] << "" << endl;
        }
    };

    // 포인터 동시 선언
    // 잘못된 예.
    int *ptr1, ptr2;
    // prt1 : 포인터로 지정, ptr2 : type이 int형인 일반 변수로 지정

    // 맞는 예제,
    int *ptr3, *ptr4;

    int x = 7;
    int *ptr = &x;
    int **pptr = &ptr;
    cout << x << endl;
    cout << ptr << endl;
    cout << pptr << endl;

    int num1 = 1234;
    double num2 = 3.14;

    int *ptr_num1 = &num1;
    double *ptr_num2 = &num2;
     cout << "포인터의 크기는 " << sizeof(ptr_num1) << "입니다." << endl;

    cout << "포인터 ptr_num1가 가리키고 있는 주소값은 " << ptr_num1 << "입니다." << endl;

    cout << "포인터 ptr_num1가 가리키고 있는 주소에 저장된 값은 " << *ptr_num1 << "입니다." << endl;

    cout << "포인터 ptr_num2가 가리키고 있는 주소값은 " << ptr_num2 << "입니다." << endl;

    cout << "포인터 ptr_num2가 가리키고 있는 주소에 저장된 값은 " << *ptr_num2 << "입니다.";

    int arr9[3] = {10, 20, 30};
    int *ptr_arr9 = arr9; // 포인터에 배열의 이름을 대입.
    cout << *ptr_arr9;
    cout << "배열의 이름을 이용하여 배열 요소에 접근" << endl;
    int len_arr9 = sizeof(arr9) / sizeof(arr9[0]);
    for (int i = 0; i < len_arr9; i++)
    {
        cout << arr9[i] << "";
        cout << ptr_arr9[i] << "";
    }
    cout << endl;
    cout << sizeof(arr9);
    cout << sizeof(ptr_arr9);

    cout << " 배열의 이름을 이용하여 배열 요소에 접근 : " << arr9[0] << ", " << arr9[1] << ", " << arr9[2] << endl;
    cout << " 배열의 이름으로 포인터 연산을 해 배열 요소에 접근 : " << *(arr9)
         << ", " << *(arr9 + 1) << ", " << *(arr9 + 2) << endl;

    return 0;
}
