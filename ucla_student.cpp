#include "ucla_student.h"
#include <iostream>

using namespace std;

ucla_student::ucla_student(){
}

string ucla_student::get_name(){
    return name;
}

string ucla_student::get_birth(){
    return birth;
}

string ucla_student::get_gender(){
    return gender;
}

string ucla_student::get_fgen(){
    return fgen;
}

void ucla_student::get_info(string input){
    const char ch = '\t';
    int pos = input.find(ch);
    name = input.substr(0,pos);
    input = input.erase(0,name.length()+1);
    gender = input.substr(0,1);
    input = input.erase(0,2);
    pos = input.find(ch);
    birth = input.substr(0,pos);
    input = input.erase(0,birth.length()+1);
    fgen = input.substr(0,1);
}
