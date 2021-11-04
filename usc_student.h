#ifndef  USC_STUDENT_H
#define  USC_STUDENT_H
#include "student.h"
#include <string>
#include<fstream>
#include<sstream>
#include<vector>

class usc_student : public student {
    public:
                usc_student();
                std::string get_name();
                std::string get_birth();
                std::string get_gender();
                std::string get_mark();
                void get_info(std::string input);
};

#endif