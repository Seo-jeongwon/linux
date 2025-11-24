#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Swap{
private:
    T1 data1;
    T2 data2;
public:
    Swap();
    void set(T1 a, T2 b);
    void get(T1& a, T2& b);
    void swap();
};

template <typename T1, typename T2>
Swap<T1, T2>::Swap() { data1 = 0; data2 = 0; }

template <typename T1, typename T2>
void Swap<T1, T2>::set(T1 a, T2 b) { data1 = a; data2 = b;}

template <typename T1, typename T2>
void Swap<T1, T2>::get(T1& a, T2& b) { a = data1; b = data2;} 

template <typename T1, typename T2>
void Swap<T1, T2>::swap() { T1 temp = data1; data1 = data2; data2 = temp;} 


int main() {
    int a, b;
    Swap<int, int> x;
    x.set(2, 5);
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;

    x.swap();
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;

    double c, d;
    Swap<double, double> y;
    y.set(3.14, 6.28);
    y.get(c, d);
    cout << "c=" << c << '\t' << "d=" << d << endl;

    y.swap();
    y.get(c, d);
    cout << "c=" << c << '\t' << "d=" << d << endl;
}