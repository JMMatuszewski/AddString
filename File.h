#include <iostream>

using namespace std;

class File
{
    const string FILENAME;

public:
    File(string fileName) : FILENAME(fileName){
    }
    string getFileName();
};
