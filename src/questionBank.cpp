#include "questionBank.hpp"
#include "global.hpp"

using namespace std;

bool QuestionBank::loadFromCSV(const string &filePath)
{
    // cout << "7" << endl;
    ifstream questionFile(filePath);
    // cout << "8" << endl;
    if (!questionFile.is_open())
        return false;
    // cout << "9" << endl;
    string line;
    // cout << "10" << endl;
    getline(questionFile, line);
    // cout << "11" << endl;
    int idCounter = 1;
    // cout << "12" << endl;
    while (getline(questionFile, line))
    {
        // cout << "13" << endl;
        if (line.empty())
            continue;
        istringstream iss(line);
        string token;
        vector<string> tokens;
        while (getline(iss, token, ','))
            tokens.push_back(token);
        if (tokens.size() < NUMBER_OF_COLS)
            continue;
        int id = stoi(tokens[0]);
        string Qaddress = tokens[1];
        string Aaddress = tokens[2];
        int correctOption = stoi(tokens[3]);
        string diff = tokens[4];
        string subject = tokens[5];
        // cout << "14" << endl;
        shared_ptr<Question> newQuestion = make_shared<Question>(Qaddress, Aaddress, id,
                                                                 correctOption, subject, false);
        // cout << "15" << endl;
        // cout << "&questions: " << &questions << endl;
        // cout << "questions.size() before push: " << questions.size() << endl;
        // cout << "15" << endl;

        questions[id] = newQuestion;
        // cout << "17" << endl;
    }
    // cout << "16" << endl;
    return true;
}
