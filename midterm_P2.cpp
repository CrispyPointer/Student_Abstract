#include <iostream>
#include "student.h"
#include "ucla_student.h"

using namespace std;

int main(){
    string s;
    vector<student> m;
    ucla_student  ucla;
    ifstream data("UCLA.txt");
    data.seekg(0, ios::beg);
    while(!data.eof()){
    }
    cout << m[10].name<<endl;
    cout << m[10].birth;

    return 0;
}