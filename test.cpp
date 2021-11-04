#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include<vector>

using namespace std;
 int main(){
    const char ch = '\t';
    ifstream data;
    string input, fname, mname, lname, birth, gender, fgen;
    string name;
    data.open("test.txt");
    while(getline(data,input)){
        int pos = input.find(ch);
        name = input.substr(0,pos);
        input = input.substr(pos,99);
        gender = input.substr(0,pos);
    }
    // while(!data.eof()){
    //     getline(data,input,'\t');
    //     istringstream instr(input);
    //     instr >> name;
    // }
    data.close();
    cout << name << endl;
    cout << gender << endl;
//     cout << birth << endl;
//     cout