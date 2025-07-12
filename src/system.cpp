#include "system.hpp"

using namespace std;

void System::loadFromFile(const string &filePath)
{
    if (!questionBank)
    {
        questionBank = make_shared<QuestionBank>();
    }
    questionBank->loadFromCSV(filePath);
}

void System::signup(const map<string, string> &input)
{
    auto itUser = input.find(USERNAME);
    auto itPass = input.find(PASSWORD);
}