#ifndef  STUDENT_H
#define  STUDENT_H
#include <string>
#include <fstream>

class student{
    protected:
                std::string name, gender, birth;
    public:
                virtual std::string get_fgen() = 0;
                //  std::string get_scholar();
                virtual std::string get_birth() = 0;
                virtual std::string get_gender() = 0;
                virtual std::string get_name() = 0;
                virtual void get_info(std::string input) = 0;                   
};

#endif