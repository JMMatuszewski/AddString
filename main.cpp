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
            cout << "Wrong Method, It have to be 0/1 number.\n";
            return 0;
        }

        status = validation.checkFileName(argv[2]);
        if (status!=true)
        {
            cout << "Wrong file name format.\n";
            return 0;
        }


        AddString addString(argc, argv[1], argv[2]);//, argv | ,argv[2],argv





        cout << "wszystko git\n";
    }
    else
        cout << "ERROR: not enough parameters. \n";

/*
    for (int i=0;i<=3;i++)
    {
        if(argv[i] == NULL)
        {
            string command;
            switch(i)
            {
            case 1:
                command = "metody.";
                break;
            case 2:
                command = "pliku.";
                break;
            case 3:
                command = "ciagu znakow.";
                break;
            default:
                break;
            }

            cout << "brak " << command << endl;
            break;
        }
        else
            cout << "argv[i]: " << argv[i] << endl;
    }
*/
    //AddString addString()
/*
    for (int i=0;i<argc;i++)
    {
        cout << "i: " << i << endl;
        cout << "argv[i]: " << argv[i] << endl;
    }
*/
    return 0;
}
