#include <iostream>
#include "student.h"
#include "ucla_student.h"
#include "usc_student.h"
#include <vector>

using namespace std;

int main(){
    string input;
    vector<student* > m;
    ifstream data;
    data.open("UCLA.txt");
    getline(data,input);
    while(getline(data,input)){
        student* st = new ucla_student();
        st->get_info(input);
        m.push_back(st);
    }
    data.close();

    data.open("USC.txt");
    getline(data,input);
    while(getline(data,input)){
        student* st = new usc_student();
        st->get_info(input);
        m.push_back(st);
    }
    data.close();
    cout<<"Name\t\t"<<"Gender\t"<<"Birthday\t"<<"First_Gen_College_Student "<<" Scholarship"<<endl;
    for(size_t i = 0; i<4; i++){
        cout<<m[i]->get_name()<<"\t"<<m[i]->get_gender()<<'\t'<<m[i]->get_birth()<<"\t"<<m[i]->get_mark()<<endl;
    }
    for(size_t i = 4; i<8; i++){
        cout<<m[i]->get_name()<<"\t"<<m[i]->get_gender()<<'\t'<<m[i]->get_birth()<<"\t\t\t\t"<<m[i]->get_mark()<<endl;
    }


    return 0;
}