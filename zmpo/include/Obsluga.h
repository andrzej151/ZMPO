#ifndef OBSLUGA_H
#define OBSLUGA_H


class Obsluga
{
    public:
        Obsluga();
        virtual ~Obsluga();

    protected:

    private:
        Kelner * listaKelnerow;
        Kucharz * listaKurzarzow;
        Stolik * listaStolikow;
        //KolejkaPriorytetowaZamowien kolejkaZamowien;
        //KolejkaPriorytetowaPzycji kolejkaPozycjiDoWykonania;
        //KolejkaPriorytetowaPzycji kolejkaPozycjiDoZaniesienia;
        //KolejkaPriorytetowaZadan kolejkaZamowienDoWykonania;
};

#endif // OBSLUGA_H
