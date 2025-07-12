#ifndef COMMANDPROCESSOR_H
#define COMMANDPROCESSOR_H

#include <istream>
#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <cctype>
#include <fstream>
#include <sstream>
#include "system.hpp"
#include "global.hpp"

using namespace std;

class CommandProcessor
{
private:
    System system;

public:
    void loadFile(const string &fileName);
    void run();
    string process(const string &line);
    bool parseCommand(const string &line, string &method,
                      string &resource, map<string, string> &args);
};

#endif