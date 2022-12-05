#include "lib.h"
bool carattere (char r, char &t)
{
    if (r==0||(r>90&&r<97)||(r<65)||r>123){
       
        return false;

    }
    else{
        if (r>=65&&r<=90)
        {
            t=r+32;

        }
        else{
            t=r-32;

        }


        return true;
    }
}
