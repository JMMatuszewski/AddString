#include "FileOperations.h"

// C++ STANDARD LIBRARIES
void FileOperations::openWin()
{
    file.open(getFileName(),fstream::app);
    if (file.good() == true){}
    else exit(0);
}

void FileOperations::writeWin(int argc, char * argv[])
{
    for (int i=3;i<argc;i++)
        file << argv[i] << endl;
}

void FileOperations::closeWin()
{
    file.close();
}

// LINUX USERSPACE FUNCTIONS

void FileOperations::openLin()
{
    fd = open(getFileName().c_str(), O_CREAT | O_RDWR | O_APPEND, 0600);
    if (fd!=-1) {}
    else exit(0);
}

void FileOperations::writeLin(int argc, char * argv[])
{
    int nrd = 0;
    string str;
    for (int i=3;i<argc;i++)
    {
        str = argv[i];
        str += "\n";
        nrd = str.length();

        write(fd,str.c_str(),nrd);
    }
}

void FileOperations::closeLin()
{
    close(fd);
}
