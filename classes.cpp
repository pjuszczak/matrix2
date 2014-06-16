#include <iostream>
#include "classes.h" 

using namespace std;

Cmacierz::Cmacierz(unsigned r_w = 0, unsigned r_k=0) : rozmiar_w(r_w),rozmiar_k(r_k)
    {
        macierz = new unsigned* [r_w];
	    for (unsigned i=0; i<r_w; ++i)
	    {
        	macierz[i] = new unsigned[r_k];
	    }
    }


Cmacierz::~Cmacierz()
{
       for (unsigned i=0; i<rozmiar_w; ++i)
            {
              delete[] macierz[i];
            }
	    delete[] macierz;
}
unsigned Cmacierz::Cmacierz_Setter(unsigned wiersz, unsigned kolumna, unsigned wartosc)
{
    macierz[wiersz][kolumna] = wartosc;
}


unsigned Cmacierz::Cmacierz_Reseter(unsigned wartosc)
{
	for(unsigned i=0; i<rozmiar_w ; ++i )
		{				
		for(unsigned j=0; j<rozmiar_k; ++j)
			{
				macierz[i][j] = wartosc;
			}
		}
}

unsigned Cmacierz::Cmacierz_Getter(unsigned wiersz, unsigned kolumna) const 
{ 
    return macierz[wiersz][kolumna];
}

unsigned Cmacierz::Cmacierz_ShowAll() const
    {
	   for(unsigned i=0; i<rozmiar_w ; ++i )
           { 
             cout << endl;
             for(unsigned j=0; j<rozmiar_k; ++j) cout <<  macierz[i][j] << " ";      
           } 
           cout << endl << endl;
    }   
