#include "global.hpp"
#include "commandProcessor.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    // cout <<"3"<<endl;
    (void)argc;
    // cout <<"4"<<endl;
    CommandProcessor cp;
    // cout <<"5"<<endl;
    cp.loadFile(argv[1]);
    // cout <<"6"<<endl;
    cp.run();
    return 0;
}