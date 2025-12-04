#include<iostream>
#include<vector>
using namespace std;

class M {
    vector<vector<int>> a;
public:
    M(int x, int y, int z, int w);
    M operator+(const M&);
    void print();
};

M::M(int x, int y, int z, int w) {
    a = vector<vector<int>>(2, vector<int>(2));
    a[0][0] = x; a[0][1] = y;
    a[1][0] = z; a[1][1] = w;
}

M M::operator+(const M& o) {
    return M(
        a[0][0] + o.a[0][0], a[0][1] + o.a[0][1],
        a[1][0] + o.a[1][0], a[1][1] + o.a[1][1]
    );
}

void M::print() {
    cout << a[0][0] << " " << a[0][1] << "\n"
        << a[1][0] << " " << a[1][1] << "\n";
}

int main() {
    M C = M(2, 4, 5, -5) + M(-2, 3, 0, -5);
    C.print();
    return 0;
}