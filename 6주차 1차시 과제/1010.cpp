/*
#include <iostream>
#include <vector>

using namespace std;
/*
int main(void)
{
    vector<int> v =
    { 0,1,1,2,3,5,8,13,21,34,55,89 };

    for (auto& number : v) 
        cout << number << ' ';

    cout <<endl<< v.size() << endl;

    v.erase(v.begin() + 3); //앞에서부터 3번째 지우기
    for (auto& number : v)
        cout << number << ' ';

    /*
    v.push_back(1000); //요소 추가
    v.push_back(2000); // 요소 추가
  
    //vector<int> v1 = { 1,2,3,4,5 };
   
   // cout << "마지막 요소 = "<< *(v.end() - 1) << endl;
    cout << "마지막 요소 = " << *(v.begin()+3 )<< endl; 
    cout << "삭제 요소 =";

    while (v.empty() != true) {
        cout << v.back() << " "; //삭제될 요소 출력하고 pop
        v.pop_back();
    }

    for (auto& number : v)
        cout << number << ' ';
    cout <<endl << v.size();
 
   // cout << endl << v1.size(); //5개 . 객체마다 자기들이 가지고 있는 자료의 함수를 제공하기 때문에 쉽게 프로그래밍을 할 수 잇음.
    
    /*for (auto& number : v) // auto라고 하는 레퍼런스는, 타입을 자동으로 설정해줘. 
        cout << number << ' ' ;
   
    return 0;
}

int main(void)
{
    vector<int> v1 = { 0,1,2,3,4,5 };
    vector<int> v2;
    v2 = v1;

    v1[2] = 50;
    v2.push_back(100);
    cout << "v1 : ";
    for (auto e : v1) cout << e << " ";
    cout << endl << "v2 : ";
    for (auto e : v2) cout << e << " "; //완전한 값 카피 가능.
    return 0;
}*/