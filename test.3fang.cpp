#include <iostream>
using namespace std;
#include<string>

int main()
{
    bool flag1 = true;
    cout << flag1 << endl;//true������

    flag1 = false;//false�����
    cout << flag1 << endl;

   //������ 1������ 0�����

    cout << "bool������ռ�ڴ�ռ䣺" << sizeof(bool) << endl;

    int a = 0;
    cout << "������ͱ��� a��ֵ" << endl;
    cin >> a;
    cout << "���ͱ���a=" << a << endl;
    
    float f = 3.14f;
    cout << "��������ͱ��� f��ֵ��" << endl;
    cin >> f;
    cout << "�����ͱ���f" << f << endl;

    char ch = 'a';
    cout << "����ַ��� ch��ֵ" << endl;
    cin >> ch;
    cout << "�ַ��ͱ���ch=" << ch << endl;

    string str = "hello";
    cout << "����ַ��� str��ֵ" << endl;
    cin >> str;
    cout << "�ַ���str=" << str << endl;

    bool flag2= false;
    cout << "����������� flag2��ֵ" << flag2 << endl;
    cin >> flag2;
    cout << "��������flag=" << endl;

    int a1 = 10;
    int b1 = 5;
    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl;

    int a2 = 10;
    int b2 = 20;
    cout << a2 / b2 << endl;

    int a3 = 10;
    int b3 = 0;
   //  cout << a3 / b3 << endl;//

    //����С���������
    double d1 = 0.5;
    double d2 = 0.22;
    cout << d1 / d2 << endl;

    //ȡģ��ֻ�����Ϳ�����ȡģ���㣩
    int a4 = 10;
    int b4 = 3;
    cout << a4 % b4 << endl;

    //���������������Ϊ0�����Բ�����ȡģ����
    //����С���ǲ�������ȡģ�����

    int a5 = 10;
    ++a5;
    cout << "a5=" << a5 << endl;
    
    int b5 = 10;
    b5++;
    cout << "b5" << b5 << endl;

    int a6 = 10;
    int b6 = ++a6 * 10;
    cout << "a6=" << a6 << endl;
    cout << "b6=" << b6 << endl;

    int a7 = 10;
    int b7 = a7++ * 10;
    cout << "a7=" << a7 << endl;
    cout << "b7=" << b7 << endl;

    int a8 = 10;
    a8 += 2;//a=a+2
    cout << "a8=" << a8 << endl;

    a8 = 10;
    a8 -= 2;//a=a-2
    cout << "a8=" << a8 << endl;

    a8 = 10;
    a8 *= 2;//a=a/2
    cout << "a8=" << a8 << endl;

    a8 = 10;
    a8 /= 2;//a=a/2
    cout << "a8=" << a8 << endl;

    a8 = 10;
    a8 %= 2;//a=a%2
    cout << "a8=" << a8 << endl;




    system("pause");

    return 0;
}