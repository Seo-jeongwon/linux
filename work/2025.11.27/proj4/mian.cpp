#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class Student{
	string name;
	int score;
public:
	Student(string n, int s);
	string getname() const;
	int getscore() const;
	bool operator<(const Student& other) const;
};

Student::Student(string n, int s) : name(n), score(s) {}

string Student::getname() const { return name; }

int Student::getscore() const { return score; }

bool Student::operator<(const Student& other) const { return score < other.score; }

int main() {
	vector< Student> st;

	for (int i = 0; i < 3; i++) {
		string name;
		int score;

		cout << "이름과 성적을 입력: ";
		cin >> name >> score;

		Student temp(name, score);
		st.push_back(temp);
	}

	vector<Student>::iterator it = max_element(st.begin(), st.end());

	cout << "최우수학생은" << endl;
	cout << "이름:" << it->getname() << endl;
	cout << "성적:" << it->getscore() << "점" << endl;

	return 0;
}