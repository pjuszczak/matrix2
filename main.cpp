#include <iostream>
#include <cstring>
#include "classes.h"
#include <stdlib.h>

using namespace std;


  
int main(int argc, char **argv)
{
int x,y,v;
//-------------------Syntax tests-------------------
 

    if(argc!=4 || !strcmp((char*)argv[1],"-h") || !strcmp((char*)argv[1],"-help")   )
    {     
        ShowHelp();
        return 0;
    }
        
   for(int i=1;i<4;i++)
    {
         if( !IsItNumber((char*)argv[i]))
         {
             cout << "\nERROR: Given argument is not a number\nUse -help command for more information\n\n"; 
             return 0;
         }
    }
//----------------------------------------------------------
     

x = atoi(argv[1]);
y = atoi(argv[2]);
v = atoi(argv[3]);

	Cmacierz* kwadratowa = new Cmacierz(x,y);


	kwadratowa->Cmacierz_Reseter(v);
//	kwadratowa->Cmacierz_Setter(0,0,4);
//	kwadratowa->Cmacierz_Setter(2,1,8);

	kwadratowa->Cmacierz_ShowAll();

        delete kwadratowa;

return 0;

}

