#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<vector<int>>m = { { -5,2,35 }, { -20, 5, 100 }, { -75, 5, -25 } };

	cout << "수정행렬" << endl;
	for (int i = 0; i < m.size(); i++) {
		for (int j = 0; j < m.at(i).size(); j++) {
			if (m.at(i).at(j) <= 0) m.at(i).at(j) = 0;
			else m.at(i).at(j) = 255;
			cout << m.at(i).at(j) << '\t';
		}
		cout << endl;
	}

	return 0;
}