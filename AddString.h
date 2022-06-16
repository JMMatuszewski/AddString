#include <iostream>

#include "FileOperations.h"

using namespace std;

class AddString
{
    FileOperations fileOperations;

    int PARAMS;
    const char *METHOD;
    const string FILENAME;
    void openFile();//char *str[] | char * method
public:
    AddString(int params, char * method, string fileName)//, char *strings[]|char *strings[]
    : PARAMS(params), METHOD(method), FILENAME(fileName)// , STRINGS(*strings
    {
        openFile();//strings | METHOD, FILENAME
    };

};
