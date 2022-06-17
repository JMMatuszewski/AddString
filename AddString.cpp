#include "AddString.h"

void AddString::openFile()
{
    if ((*METHOD) == '1')
    {
        fileOperations.openWin();
    }
    else if((*METHOD) == '0')
    {
        fileOperations.openLin();
    }
}

void AddString::writeFile(int argc, char * argv[])
{
    if ((*METHOD) == '1')
    {
        fileOperations.writeWin(argc,argv);
    }
    else if((*METHOD) == '0')
    {
        fileOperations.writeLin(argc,argv);
    }

}

void AddString::closeFile()
{
    if ((*METHOD) == '1')
    {
        fileOperations.closeWin();
    }
    else if((*METHOD) == '0')
    {
        fileOperations.closeLin();
    }
}
