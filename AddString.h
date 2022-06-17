#include <iostream>

#include "FileOperations.h"

using namespace std;

class AddString
{
    FileOperations fileOperations;

    int PARAMS;
    const char *METHOD;
    void openFile();
    void closeFile();
public:
    AddString(int params, char * method, string fileName)
    : PARAMS(params), METHOD(method), fileOperations(fileName) {

        openFile();
    };
    ~AddString(){
        closeFile();
    }
    void writeFile(int argc, char * argv[]);
};
