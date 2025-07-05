#ifndef QUESTION_H
#define QUESTION_H

#include <string>
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
    Question(string Qaddress_, string Aaddress_, int id_, int correctzoption_, string subject_, bool isAnswered_)
        : Qaddress(Qaddress_), Aaddress(Aaddress_), id(id_), correctOption(correctzoption_), subject(subject_), isAnswered(isAnswered_)
        {
            //some try and catch for eror handeling
        }
};

#endif