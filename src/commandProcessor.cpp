#include "commandProcessor.hpp"

using namespace std;

void CommandProcessor::loadFile(const string &filePath)
{
    system.loadFromFile(filePath);
}

void CommandProcessor::run()
{
    string line;
    while (getline(cin, line))
    {
        if (line.empty())
            continue;
        string response = process(line);
        if (!response.empty() && response.back() == '\n')
            cout << response;
        else
            cout << response << "\n";
    }
}

string CommandProcessor::process(const string &line)
{
    string method, resource;
    map<string, string> args;
    try
    {
        parseCommand(line, method, resource, args);
    }
    catch (const std::exception &e)
    {
        return BAD_REQUEST;
    }
    if (method != POST && method != GET && method != PUT && method != DELETE)
    {
        return BAD_REQUEST;
    }

    if (method == POST)
    {
        if (resource == SIGNUP)
        {
            // return system.signup(args);
        }
        else if (resource == LOGIN)
        {
            // return system.login(args);
        }
        else if (resource == LOGOUT)
        {
            // return system.logout();
        }
    }
}