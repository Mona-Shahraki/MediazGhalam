#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <iostream>
using namespace std;

class Question
{
private:
    string Qaddress;
    string Aaddress;
    int id;
    int correctOption;
    string subject;
    bool isAnswered;

public:
    Question(string Qaddress_, string Aaddress_, int id_, int correctzoption_, string subject_ = "", bool isAnswered_ = false)
    {
        // cout << "1" << endl;
        Qaddress = Qaddress_;
        // cout << "2" << endl;
        Aaddress = Aaddress_;
        // cout << "3" << endl;
        id = id_;
        // cout << "4" << endl;
        try
        {
            // cout << "5" << endl;
            if (correctzoption_ > 0 && correctzoption_ <= 4)
            {
                // cout << "6" << endl;
                correctOption = correctzoption_;
                // cout << "7" << endl;
            }
        }
        catch (const exception &e)
        {
            // cout << "8" << endl;
            cerr << e.what() << '\n';
        }

        // cout << "9" << endl;
        subject = subject_; // add some try to check typing for subjects
        // cout << "10" << endl;
        isAnswered = isAnswered_;
        // cout << "11" << endl;
    }
};

#endif