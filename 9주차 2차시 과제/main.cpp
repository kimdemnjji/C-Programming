#include "Box.h"

#include<iostream>
using namespace std;
int main() {
    Box box1(10, 20, 30);
    cout << "box1의 정보 ) ";
    printBox(box1);
    Box box2(8, 6, 4);
    cout << "box2의 정보 ) ";
    printBox(box2);

    Box result = box1 + box2;
    cout << "* 두 박스의 높이를 +연산자를 이용하여 더했습니다." << endl;
    cout << "더한 결과 값 ) ";
    printBox(result); 
    // 1번 결과. +연산자에 대한 중복 함수를 작성하라

    cout << endl;
    cout << "-------------------------" << endl;
    cout << endl;

    cout <<"box1의 부피 : "<< box1.getVolume() << endl;
    cout <<"box2의 부피 : "<< box2.getVolume() << endl;

    cout << "두 박스의 부피를 비교한 결과: ";
    if (box1 == box2) { //2. == 연산자 중복 함수
        cout << "박스의 부피가 같습니다." << endl;
    }
    else if (box1 < box2) { //3. < 연산자 중복 함수
        cout << "box1이 box2보다 부피가 작습니다." << endl;
    }
    else if (box1 > box2) { //3. > 연산자 중복 함수
        cout << "box1이 box2보다 큽니다." << endl;
    }
    else if (box1 <= box2) { //3. <= 연산자 중복 함수
        cout << "box1이 box2보다 부피가 작거나 같습니다." << endl;
    }
    else if (box1 >= box2) { //3. >= 연산자 중복 함수
        cout << "box1이 box2보다 부피가 크거나 같습니다" << endl;
    }
    cout << endl;
    cout << "-------------------------" << endl;
    cout << endl;

    Box box3(10, 10, 10);
    cout << "프렌즈 함수 정의를 통해 출력한 값 )" <<endl ;
    printBox(box3); //5. 프렌즈 함수 정의

    cout << "전위 연산자로 증가시킨 값 )" << endl;
    ++box3; 
    printBox(box3); // Box3 객체에 ++ 연산자 적용하고 프린트해보기

    return 0;
}