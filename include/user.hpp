#ifndef USER_HPP
#define USER_HPP

#include <string>
#include <map>
#include <memory>
#include <vector>
#include "test.hpp"
#include "template.hpp"

using namespace std;

class User
{
protected:
    string type;
    string username;
    string password;

public:
};

class Student : public User
{
private:
    string teachersName;
    vector<shared_ptr<Test>> attendedTest;
    vector<shared_ptr<Test>> notAttendedTest;
};

class Teacher : public User
{
private:
    vector<shared_ptr<Student>> students;  
    vector<shared_ptr<TestTemplate>> tamplates;  


public:
};

#endif