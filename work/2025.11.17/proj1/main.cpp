#include <iostream>
#include <string>
using namespace std;

class TV {
    int size; // 스크린 크기
public:
    TV() { 
        size = 20;
        cout << "TV 생성" << endl; 
    }
    TV(int size) { 
        this->size = size;
        cout << "TV 생성" << endl;
    }
    void setSize(int size) { this->size = size; }
    int getSize() { return size; }
};

class WideTV : public TV { // TV를 상속받는 WideTV
    bool videoIn;
public:
    WideTV() : TV() {
        videoIn = true;
        cout << "WideTV 생성" << endl;
    }
    WideTV(int size, bool videoIn) : TV(size) { 
        this->videoIn = videoIn;
        cout << "WideTV 생성" << endl;
    }
    void setWideTV(int size, bool videoIn) {
        setSize(size);
        this->videoIn = videoIn;
    }
    bool getVideoIn() { return videoIn; }
};

class SmartTV : public WideTV { // WideTV를 상속받는 SmartTV
    string ipAddr; // 인터넷 주소
public:
    SmartTV() : WideTV() {
        ipAddr = "0.0.0.0";
        cout << "SmartTV 생성" << endl;
    }
    SmartTV(string ipAddr, int size) : WideTV(size, true) {
        this->ipAddr = ipAddr;
        cout << "SmartTV 생성" << endl;
    }
    void setSmartTV(int size, bool videoIn, string ip) {
        setWideTV(size, videoIn);
        this->ipAddr = ip;
    }
    string getIpAddr() { return ipAddr; }
};

int main() {
    SmartTV htv;
    htv.setSmartTV(50, false, "192.0.0.2");
    cout << "size =" << htv.getSize() << endl;
    cout << "videoIn =" << boolalpha << htv.getVideoIn() << endl;
    cout << "IP ="<< htv.getIpAddr() << endl;
}
