#include <iostream>
#include "lib.h"
using namespace std;


int main(){
   
char a=0,b=0;
   cin>>a;
   
   carattere(a,b);
   if (carattere(a,b))
   {
      cout << b;
     
   }
   else{
       cout << "errore";
   }
   return 0;
}
