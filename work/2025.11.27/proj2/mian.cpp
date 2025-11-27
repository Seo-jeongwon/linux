#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	vector <string> v;
	
	for (int i = 0; i < 5; i++) {
		cout << "문자열을 입력하세요: ";
		string n;
		cin >> n;
		v.push_back(n); // 키보드에서 읽은 정수를 벡터에 삽입
	}

	vector<string>::iterator it;

	it = max_element(v.begin(), v.end());
	cout << "사전에서 제일 뒤에 나오는 단어는 " << *it << endl;

	return 0;
}