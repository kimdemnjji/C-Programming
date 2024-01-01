#include "Box.h"

#include<iostream>
using namespace std;
int main() {
    Box box1(10, 20, 30);
    cout << "box1�� ���� ) ";
    printBox(box1);
    Box box2(8, 6, 4);
    cout << "box2�� ���� ) ";
    printBox(box2);

    Box result = box1 + box2;
    cout << "* �� �ڽ��� ���̸� +�����ڸ� �̿��Ͽ� ���߽��ϴ�." << endl;
    cout << "���� ��� �� ) ";
    printBox(result); 
    // 1�� ���. +�����ڿ� ���� �ߺ� �Լ��� �ۼ��϶�

    cout << endl;
    cout << "-------------------------" << endl;
    cout << endl;

    cout <<"box1�� ���� : "<< box1.getVolume() << endl;
    cout <<"box2�� ���� : "<< box2.getVolume() << endl;

    cout << "�� �ڽ��� ���Ǹ� ���� ���: ";
    if (box1 == box2) { //2. == ������ �ߺ� �Լ�
        cout << "�ڽ��� ���ǰ� �����ϴ�." << endl;
    }
    else if (box1 < box2) { //3. < ������ �ߺ� �Լ�
        cout << "box1�� box2���� ���ǰ� �۽��ϴ�." << endl;
    }
    else if (box1 > box2) { //3. > ������ �ߺ� �Լ�
        cout << "box1�� box2���� Ů�ϴ�." << endl;
    }
    else if (box1 <= box2) { //3. <= ������ �ߺ� �Լ�
        cout << "box1�� box2���� ���ǰ� �۰ų� �����ϴ�." << endl;
    }
    else if (box1 >= box2) { //3. >= ������ �ߺ� �Լ�
        cout << "box1�� box2���� ���ǰ� ũ�ų� �����ϴ�" << endl;
    }
    cout << endl;
    cout << "-------------------------" << endl;
    cout << endl;

    Box box3(10, 10, 10);
    cout << "������ �Լ� ���Ǹ� ���� ����� �� )" <<endl ;
    printBox(box3); //5. ������ �Լ� ����

    cout << "���� �����ڷ� ������Ų �� )" << endl;
    ++box3; 
    printBox(box3); // Box3 ��ü�� ++ ������ �����ϰ� ����Ʈ�غ���

    return 0;
}