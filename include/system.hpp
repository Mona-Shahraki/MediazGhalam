#ifndef SYSTEM_H
#define SYSTEM_H

#include <istream>
#include <iostream>
#include <fstream>
#include <sstream>
#include "user.hpp"
#include "questionBank.hpp"
#include "global.hpp"

using namespace std;

class System
{
private:
    vector<shared_ptr<Teacher>> teachers;
    vector<shared_ptr<Student>> students;
    shared_ptr<QuestionBank> questionBank;

public:
    void loadFromFile(const string &filePath);
    void signup(const map<string, string> &input);
    void signin(const map<string, string> &input);
    void signout(const map<string, string> &input);
};

#endif
