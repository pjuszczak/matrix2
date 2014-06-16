#ifndef classess_h
#define classess_h


int ShowHelp();

 
class Cmacierz
{
    protected:
    unsigned rozmiar_w;
    unsigned rozmiar_k;

    unsigned** macierz;
    //pola:
    public:

    //konstruktor:
    Cmacierz(unsigned, unsigned);

    //destruktor
    ~Cmacierz();
    

//metody dostępowe:
    unsigned Cmacierz_Setter(unsigned, unsigned, unsigned);
    unsigned Cmacierz_Reseter(unsigned);
    unsigned Cmacierz_Getter(unsigned, unsigned) const; 
    unsigned Cmacierz_ShowAll() const;
};

#endif
