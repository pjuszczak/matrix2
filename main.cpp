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
<<<<<<< HEAD
//komutacja  szmato   
=======
//bleble     
>>>>>>> parent of 7ee4376... programista plakal jak commitowal

    x = atoi(argv[1]);
    y = atoi(argv[2]);
    v = atoi(argv[3]);

	Cmacierz* Macierz_1 = new Cmacierz(x,y);
    Cmacierz* Macierz_2 = new Cmacierz(x,y);
    Cmacierz* Macierz_3 = new Cmacierz(x,y);
    
  
    unsigned* r_wymiary = Macierz_1->Cmacierz_JakiRozmiar();
     

    cout << "\n Wymiary: X:" << r_wymiary[0]  <<  " Y: " << r_wymiary[1];

	Macierz_1->Cmacierz_Reseter(v);
//	kwadratowa->Cmacierz_Setter(0,0,4);
//	kwadratowa->Cmacierz_Setter(2,1,8);
//
	Macierz_1->Cmacierz_ShowAll();

    delete Macierz_1;
    delete Macierz_2;
    delete Macierz_3;

   
return 0;

}

