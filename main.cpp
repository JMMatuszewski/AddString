#include <iostream>

#include "Validation.h"
#include "AddString.h"

using namespace std;

int main(int argc, char * argv[])
{
    Validation validation;
    if (argc >= 4)
    {

        bool status;
        status = validation.checkMethod(argv[1]);
        if (status!=true)
        {
            cout << "Wrong Method, Only 0/1 is accaptable.\n";
            return 0;
        }

        status = validation.checkFileName(argv[2]);
        if (status!=true)
        {
            cout << "Wrong file name format. Only txt is accaptable\n";
            return 0;
        }

        AddString addString(argc, argv[1], argv[2]);
        addString.writeFile(argc, argv);
    }
    else
    {
        cout << "ERROR: not enough parameters.\n";
        cout << "Only <program name> <filename> <strings> is accaptable.\n";
        cout << "There may be more than one <string>. \n";
    }

    return 0;
}
