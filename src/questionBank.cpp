#include "questionBank.hpp"
#include "global.hpp"

using namespace std;

bool QuestionBank::loadFromCSV(const string &filePath)
{
    ifstream questionFile(filePath);
    if (!questionFile.is_open())
        return false;
    string line;
    getline(questionFile, line);
    int idCounter = 1;
    while (getline(questionFile, line))
    {
        if (line.empty())
            continue;
        istringstream iss(line);
        string token;
        vector<string> tokens;
        while (getline(iss, token, ','))
            tokens.push_back(token);
        if (tokens.size() < NUMBER_OF_COLS)
            continue;
        string Qaddress = tokens[0];
        string Aaddress = tokens[1];
        int correctOption = stoi(tokens[3]);
        string diff = tokens[4];
        string subject = tokens[5];
        questions.push_back(shared_ptr<Question>(Qaddress, Aaddress, idCounter++,
                                                 correctOption, subject, false));
    }
    return true;
}
