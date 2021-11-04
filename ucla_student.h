#ifndef  UCLA_STUDENT_H
#define  UCLA_STUDENT_H
#include "student.h"
#include <string>
#include<fstream>
#include<sstream>
#include<vector>

class ucla_student : public student {
    public:
                std::string get_name();
                std::string get_birth();
                std::string get_gender();
                std::string get_fgen();
                std::vector<student* > ucla_st;
                void get_info();
                void add_student(student st);
};

#endif