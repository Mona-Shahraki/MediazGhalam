#ifndef QUESTIONBANK_H
#define QUESTIONBANK_H

#include "question.hpp"
#include <vector>
#include <string>
#include <memory>
#include <fstream>
#include <sstream>
#include <iostream>
#include <map>

using namespace std;

class QuestionBank
{
private:
    map<int, shared_ptr<Question>> questions;

public:
    bool loadFromCSV(const string &filepath);
};

#endif