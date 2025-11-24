#include<iostream>
#include <string>
#include<vector>
using namespace std;

string ChangeSpell(const string& s) {
    string result = s;
    for (int i = 0; i < (int)result.size(); i++) 
        if (result[i] >= 'A' && result[i] <= 'Z') 
            result[i] = result[i] - 'A' + 'a';
    return result;
}

int main(){
    vector<string> sv;
    string input;
 
    for (int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요:";
        getline(cin, input);
        sv.push_back(input);
    }

    string Word = sv[0];
    for (int i = 1; i < sv.size(); i++) if (ChangeSpell(Word) < ChangeSpell(sv[i])) Word = sv[i];
    cout << "사전에서 제일 뒤에 나오는 단어는 " << Word << "입니다." <<endl;
}