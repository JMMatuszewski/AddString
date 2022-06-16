#include "Validation.h"

bool Validation::checkMethod(char * method)
{
    if (isdigit(*method) & ((*method) == '0' | (*method) == '1'))
        return true;
    else
        return false;
}

bool Validation::checkFileName(char * fileName)
{
    regex pattern(R"(.\S*[.]txt)");
    if (regex_search((fileName), pattern))
        return true;
    else
        return false;
}
