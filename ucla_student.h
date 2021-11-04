#ifndef  UCLA_STUDENT_H
#define  UCLA_STUDENT_H
#include "student.h"
#include <string>
#include<fstream>
#include<sstream>
#include<vector>

class ucla_student : public student {
    public:
                ucla_student();
                std::string get_name();
                std::string get_birth();
                std::string get_gender();
                std::string get_fgen();
                void get_info(std::string input);
    protected:
                std::string fgen;
                student* st = nullptr;
};

#endif