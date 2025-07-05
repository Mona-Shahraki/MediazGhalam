#ifndef QUESTIONBANK_H
#define QUESTIONBANK_H

#include "question.hpp"
#include <vector>
#include <string>
#include <memory>
#include <fstream>
#include <sstream>

using namespace std;

class QuestionBank
{
private:
    vector<shared_ptr<Question>> questions;
    bool loadFromCSV(const string &filepath); 
};

#endif