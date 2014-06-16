#include <iostream>
#include <cstring>
#include "classes.h"


using namespace std;



int main(int argc, char **argv)
{
//-------------------Syntax tests-------------------
 

    if(argc==1 || strcmp((char*)argv[1],"-h") || !strcmp((char*)argv[1],"-help")   )
    {     
        ShowHelp();
        return 0;
    }
/*        
    if( !IsItNumber((char*)argv[1]))
    {
        printf("\nERROR: Given argument is not a number\nUse -help command for more information\n\n"); 
        return 0;
    }
*/
//----------------------------------------------------------

    

	Cmacierz* kwadratowa = new Cmacierz(4,4);

	kwadratowa->Cmacierz_Reseter(3);
	kwadratowa->Cmacierz_Setter(0,0,4);
	kwadratowa->Cmacierz_Setter(2,1,8);

	kwadratowa->Cmacierz_ShowAll();

        delete kwadratowa;

return 0;

}

