#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<vector<int>>m = { {-5,2,35} ,{-20,5,100} ,{-75,5,-25} };
	int max = m[0][0], min = m[0][0];
	int maxx, maxy;

	for (int i = 0; i < m.size(); i++) {
		for (int j = 0; j < m[i].size(); j++) {
			if (max < m[i][j]) {
				max = m[i][j];
				maxx = i + 1;
				maxy = j + 1;
			}
		}
	}

	cout << "최대값은 " << max << endl;
	cout << "위치는 " << maxx << "행 " << maxy << "열" << endl;
	return 0;
}