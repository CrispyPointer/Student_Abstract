#include "usc_student.h"
#include <iostream>

using namespace std;

usc_student::usc_student(){
}

string usc_student::get_name(){
    return name;
}

string usc_student::get_birth(){
    return birth;
}

string usc_student::get_gender(){
    return gender;
}

string usc_student::get_mark(){
    return mark;
}


void usc_student::get_info(string input){
    const char ch = '\t';
    int pos = input.find(ch);
    name = input.substr(0,pos);
    input = input.erase(0,name.length()+1);
    gender = input.substr(0,1);
    input = input.erase(0,2);
    pos = input.find(ch);
    birth = input.substr(0,pos);
    input = input.erase(0,birth.length()+1);
    mark = input.substr(0,1);
}
