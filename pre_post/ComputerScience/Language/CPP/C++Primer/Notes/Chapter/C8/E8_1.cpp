#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
using namespace std;

istream& f(istream& in){
    int v;
    while(in >> v, !in.eof()){
        if(in.bad())
            throw runtime_error("IO������");
        if(in.fail()){
            cerr << "���ݴ��� �����ԣ� " << endl;
            in.clear();
            in.ignore(100, '\n');
            continue;
        }
    cout << v;
    }
    in.clear();
    return in;
}

istream& f2(istream& in){
    int v;
    while (in >> v)
    {
        cout << v << endl;
    }
    in.clear();
    return in;
}


int main(){
    cout << "������һЩ�������� Ctrl + Z ����" << endl;
    //f2(cin);
    cout << "������������ " << endl;
    char v;
    cin >> v;
    cout << v << endl;
    fstream in;
    string t;
    getline(in, t);
    return 0;
}
