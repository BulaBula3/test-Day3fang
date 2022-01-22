#include <iostream>
using namespace std;
#include<string>

int main()
{
    bool flag1 = true;
    cout << flag1 << endl;//true代表真

    flag1 = false;//false代表假
    cout << flag1 << endl;

   //本质上 1代表真 0代表假

    cout << "bool类型所占内存空间：" << sizeof(bool) << endl;

    int a = 0;
    cout << "请给整型变量 a赋值" << endl;
    cin >> a;
    cout << "整型变量a=" << a << endl;
    
    float f = 3.14f;
    cout << "请给浮点型变量 f赋值：" << endl;
    cin >> f;
    cout << "浮点型变量f" << f << endl;

    char ch = 'a';
    cout << "请给字符串 ch赋值" << endl;
    cin >> ch;
    cout << "字符型变量ch=" << ch << endl;

    string str = "hello";
    cout << "请给字符串 str赋值" << endl;
    cin >> str;
    cout << "字符串str=" << str << endl;

    bool flag2= false;
    cout << "请给布尔类型 flag2赋值" << flag2 << endl;
    cin >> flag2;
    cout << "布尔类型flag=" << endl;

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

    //两个小数可以相除
    double d1 = 0.5;
    double d2 = 0.22;
    cout << d1 / d2 << endl;

    //取模（只有整型可以做取模运算）
    int a4 = 10;
    int b4 = 3;
    cout << a4 % b4 << endl;

    //两个数相除不可以为0，所以不能做取模运算
    //两个小数是不可以做取模运算的

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