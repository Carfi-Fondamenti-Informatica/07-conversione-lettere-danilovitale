#include "lib.h"
#include "lib.cpp"
#include <iostream>

using namespace std;
int main()
{
    char a=0,b=0;
        bool f;
        cin>>a;
        f= carattere(a,b);
        if (f)
        {
            cout << b;

        }
        else{
            cout << "errore";
        }
       return 0;
}
