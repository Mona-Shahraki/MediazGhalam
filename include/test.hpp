#ifndef TEST_H
#define TEST_H

#include "question.hpp"
#include <vector>
#include <memory>
#include <string>

using namespace std;

class Test
{
private:
    string name;
    vector<shared_ptr<Question>> questions;
    vector<int> userAnswers; // is it neseccery??

public:
    Test(string name_, const vector<shared_ptr<Question>> &quests_)
        : name(name_), questions(quests_) {}
};

#endif