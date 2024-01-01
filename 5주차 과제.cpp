#include <iostream>
using namespace std;
/* 출력용 함수 생성하기
class Point {
public:
    int x;
    int y;

    void Print();
};

void Point::Print() {
    cout << "(" << x << ", " << y << ")" << endl;
}

int main()
{
    Point p1;
    p1.x = 100000000;
    p1.y = 200;

    p1.Print();
}*/

/* 초깃값. 생성자 함수
class Point {
private:
    int x;
    int y;

public:
    Point() { //생성자 함수로 x, y값을 초기화 하였다.
        x = 0;
        y = 0;
    }
    void Print();
};

void Point::Print() {
    cout << "(" << x << ", " << y << ")" << endl;
}

int main()
{
    Point p1;

    p1.Print();
}
*/
/* 생성자가 필요한 이유. time 클래스
#include <iostream>
using namespace std;

class Time {
public:
    int hour;
    int minute;

    void print() {
        cout << hour << ":" << minute << endl;
    }
};

int main()
{
    Time a;

    a.hour = 10;
    a.minute = 26; //일일히 적는 것은 불편.

    a.print();
}

*/
/*
#include <iostream>
using namespace std;

class Time {
public:
    int hour;
    int minute;

    void print() {
        cout << hour << ":" << minute << endl;
    }
};

void init_time(Time& obj, int h, int m) { //두 개의 정보를 한 번에 받는 기능
    obj.hour = h;
    obj.minute = m;
}

int main()
{
    Time a;

    // a.hour = 10;
    // a.minute = 26;
    init_time(a, 23, 50);

    a.print();
} //but. 객체 초기화를 깜빡하면, 쓰레기값이 출력될 것임. 이러한 것을 방지하기 위해 생성자 필요. 
*/
/* 개선된 버전
#include <iostream>
using namespace std;

class Time {
public:
    int hour;
    int minute;

    Time(int h, int m) { //클래스와 같은 이름
        hour = h;
        minute = m;
    }

    void print() {
        cout << hour << ":" << minute << endl;
    }
};

int main()
{
    // Time a;
    Time a(10, 25); //인자값을 넣어줌
    a.print();

}
*/
/* 생성자의 중복 정의
#include <iostream>
using namespace std;

class Time {
public:
    int hour;
    int minute;

    Time() { //a 객체 생성자
        hour = 0;
        minute = 0;
    }

    Time(int h, int m) { //b,c,d 객체 생성자
        hour = h;
        minute = m;
    }

    void print() {
        cout << hour << ":" << minute << endl;
    }
};

int main()
{
    Time a; 
    Time b(10, 25);
    Time c{ 11, 25 };
    Time d = { 12, 25 };

    a.print(); 
    b.print();
    c.print();
    d.print();

    return 0;
}
*/
/* 
#include <iostream>
using namespace std;

class Time {
public:
    int hour;
    int minute;

    //Time() {
    //    hour = 0;
    //    minute = 0;
    // } 
    

    Time(int h = 0, int m = 0) {
        hour = h;
        minute = m;
    }

    void print() {
        cout << hour << ":" << minute << endl;
    }
};

int main()
{
    Time a;
    Time b(10, 25);
    Time c{ 11, 25 };
    Time d = { 12, 25 };

    a.print();
    b.print();
    c.print();
    d.print();

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

class Time {
public:
    int hour;
    int minute;

    //Time() {
     //   hour = 0;
    //    minute = 0;
    //}

    //Time(int h = 0, int m = 0) {
    //    hour = h;
    //    minute = m;
    //}

    Time(int h = 0, int m = 0) 
        : hour{ h }, minute{ m }//초기화 리스트
    {
        // hour = h;
        // minute = m;
    }

    void print() {
        cout << hour << ":" << minute << endl;
    }
};

int main()
{
    Time a;
    Time b(10, 25);
    Time c{ 11, 25 };
    Time d = { 12, 25 };

    a.print();
    b.print();
    c.print();
    d.print();

    return 0;
}
*/

/* 생성자와 소멸자
#include <iostream>
using namespace std;

class MyString {
private:
    char* s;
    int size;

public:
    MyString(const char* c) { //생성자 함수는 반드시 public.
        size = strlen(c) + 1; //strlen은 문자열의 크기를 계산해줌.
        s = new char[size];
        strcpy_s(s, size, c); //s에다가 size의 갯수만큼 c를 카피함.
    }

    ~MyString() { //소멸자
        delete[] s; 
    }
};

int main()
{
    MyString str("qwrewqre");

    return 0;
}*/

/* rectangle 클래스에 생성자를 추가하기 report
#include <iostream>
using namespace std;

class Rectangle {
    int width;
    int height;
public:
    Rectangle(int w, int h);
    int calcArea();
};

Rectangle::Rectangle(int w, int h) {
    width = w;
    height = h;
}

int Rectangle::calcArea() {
    return width * height;

}

int main()
{
    Rectangle rect(3, 4);
    cout << "사각형의 넓이: " << rect.calcArea() << endl;
    return 0;
}
*/