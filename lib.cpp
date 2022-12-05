#include "lib.h"
char b=0;

bool carattere (char &a)
{
   if (a==0||(a>90&&a<97)||(a<65)||a>123){
       return false;
      
   }
   else{
       if (a>=65&&a<=90)
       {
           b=a+32;
           
       }
        else{
           b=a-32; 
           
        }
       
       
       return true;
   }
}
