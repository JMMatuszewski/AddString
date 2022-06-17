#include <iostream>
#include <fstream>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include "File.h"

using namespace std;

class FileOperations : public File
{
    fstream file;
    int fd;

public:
    FileOperations(string fileName) : File(fileName) {
    }
    void openWin();
    void writeWin(int argc, char * argv[]);
    void closeWin();

    void openLin();
    void writeLin(int argc, char * argv[]);
    void closeLin();
};
