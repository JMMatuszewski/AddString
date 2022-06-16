#include "AddString.h"

void AddString::openFile()// char *str[] | char * method, char * fileName
{
    /*
    cout << "method: " << METHOD << endl;
    cout << "fileName: " << FILENAME << endl;
    cout << "params: " << PARAMS << endl;
    for(int i=0;i<PARAMS;i++)
    {
        cout << "string: " << str[i] << endl;
    }*/

    if ((*METHOD) == '1')
    {
        cout << "FILENAME: " << FILENAME << endl;
        fileOperations.openWin(FILENAME);
    }

}
