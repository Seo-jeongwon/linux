#include<iostream>
using namespace std;

int main() {
	int m[3][3] = { -5,2,35,-20,5,100,-75,5,-25 };

	cout << "수정행렬" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (m[i][j] <= 0) m[i][j] = 0;
			else m[i][j] = 255;
			cout << m[i][j]<<'\t';
		}
		cout << endl;
	}

	return 0;
}