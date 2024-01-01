#include <iostream>
using namespace std;
/*===================실습================*/
/*Time 클래스 완성본 . 생성자와 소멸자 다 포함됨.

class Time {
public :
	Time(int h, int m);
	void inc_hour();
	void print();

	int getHour() { return hour; }
	int getMinute() { return minute; }
	void setHour(int h) { 
		if (h < 0) hour = 0;
		else if (h < 23) hour = 23;
		else hour = h;
	}
	void setMinute(int m) {
		if (m < 0) minute = 0;
		else if (m > 60) minute = 0;
		else minute = m;
	}
	void setTime(int h, int m);


private:
	int hour;
	int minute;
};
void Time::setTime(int h, int m) {
	setHour(h);
	setMinute(m);
}

Time::Time(int h, int m) {
	setTime(h,m);
}
void Time::inc_hour() {
	++hour;
	if (hour > 23) hour = 0;
}

void Time::print() {
	cout << hour << ":" << minute << endl;
}

int main()
{
	Time a{ 0,0 };

	a.setHour(6);
	a.setMinute(30);

	a.print();
	return 0;
}
*/
/* pizza .

class Pizza {
public : 
	Pizza(int s):size (s){}
	int size;
};

void makeDouble(Pizza p) {
	p.size *= 2;
}
int main() {
	Pizza pizza(10);
	makeDouble(pizza); //makeDouble에 main 에 있는 pizza를 복사한 것임.
	cout << pizza.size << " 인치 피자" << endl; //복사한 것이므로 pizza는 아무런 영향 안 받았음. 그러므로 피자는 동일하게 10인치이다. 
	return 0;
}*/
/* pizza 클래스를 통한 접근방법 구분
class Pizza {
public:
	Pizza(int s) :size(s) {}
	int size;
};

void makeDouble(Pizza& p) { //reference 변수로 써주므로 별명이 되었음. 이러면 원본에 영향 받음. 
	p.size *= 2;
}
int main() {
	Pizza pizza(10);
	makeDouble(pizza); 
	cout << pizza.size << " 인치 피자" << endl; //객체를 연결할 때는 reference 형태로 값을 넘겨주는 것이 좋다. 참조자를 통해서 객체를 변경하면 본래(오리지날)자료를 변경할 수 있다. 복사하는 시간, 메모리 중복 없으니 좋음. but, 원 객체가 영향을 받으면 안되는 상황인지 check. 영향 받으면 안되면 const 붙이기.
	return 0;
}*/
/* 범위기반 for문을 이용한 랜덤 원 출력
class Circle{
public : 
	int x, y; //원점
	int radius; //반지름. 
	Circle() : x(0),y(0), radius(0){} //기본생성자. 인자가 없는 생성자. 이게 있어야 배열을 만들어서 쓸 수 있음. 
	Circle(int x, int y, int r):x(x),y(y),radius(r){} //이렇게 쓰지 말고 접근생성자 ? 추가해서 쓰면 좋을듯. Time 실습처럼.
	void print() {
		cout << "반지름: " << radius << " @(" << x << "," << y << ")" << endl; 
	}
};

int main(void) {
	Circle objArray[10];

	for (Circle& c : objArray) { //범위기반 for문임.
		c.x = rand() % 500;
		c.y = rand() % 300;
		c.radius = rand() % 100;
	}
	for (Circle& c : objArray) {
		c.print();
	}
	return 0;
}*/
/*===================과제================*/
/*
//숙제 1: 위에서 작성한 Circle 클래스에 대해서 화면 크기가 FULLHD 1920x1080 x,y범위일 때 이 x,y,radius를 private으로 바꾸고.
// 나머지 이 값을 바꿀 수 있는 설정자를 만들기. private변수에 설정자로 접근할 수 있도록.
#include <iostream>

using namespace std;

class Circle
{
private:
	int x, y;
	int radius;

public:
	Circle() : x(0), y(0), radius(0) {}
	Circle(int x, int y, int r) : x(x), y(y), radius(r) {}

	int const getX();
	int const getY();
	int const getRadius();
	void setX(int setX);
	void setY(int setY);
	void setRadius(int setRadius);

	void print()
	{
		cout << "반지름 : " << radius << " @(" << x << ", " << y << ")" << endl;
	}
};
int const Circle::getX() { return x; } //const 읽기 전용
int const Circle::getY() { return y; }
int const Circle::getRadius() { return radius; }
void Circle::setX(int setX) { x = setX; }
void Circle::setY(int setX) { x = setX; }
void Circle::setRadius(int setRadius) { radius = setRadius; }

int main(void)
{
	Circle objArray[10];
	for (Circle& c : objArray)
	{
		c.setX(rand() % 1920);
		c.setY(rand() % 1080);
		c.setRadius(rand() % 100);
	}

	for (Circle& c : objArray)
		c.print();

	return 0;
}
*/
/* 숙제2
//숙제2: 여러 권의 책을 저장할 수 ㅣㅇㅆ는 객체 배열 books를 생성. 
//책의 제목: 자료형은 string 
//책의 가격 : 자료형 string
//설정자와 접근자를 만들기. 그것에 대해 main함수에서 만드는 것까지.
class books {
public: 
	string getName();
	void setName(string n);
	string getPrice();
	void setPrice(string p);
	books() { //생성자
		name = "";
		price = "";
	}
	string name;
	string price;
};

string books::getName() {
	return name;
}
void books::setName(string n) {
	name = n;
}

string books::getPrice() {
	return price;
}
void books::setPrice(string p) {
	price = p;
}

int main(void) {
	cout << "소장하고 있는 책 정보" << endl;
	cout << "===================" << endl;
	books objArray[2] = {};
	
	objArray[0].setName("어서와 c++");
	objArray[0].setPrice("25000");
	objArray[1].setName("어서와 c  ");
	objArray[1].setPrice("22000");

	for (books& b : objArray) {
		cout << "제목 : " << b.getName() << "        가격 : " << b.getPrice()<<endl;
	}
	return 0;
}
*/
