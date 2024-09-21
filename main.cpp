#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //Szintaktikai hiba
    std::cout << '1-100 ertekek duplazasa' //Nincs ";" és "" kell a '' helyett
    for (int i = 0;) //Helytelen for ciklus, for(int i = 0; i < N_ELEMENTS; ++i)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //Helytelen for ciklus, for(int i = 0; i < N_ELEMENTS; ++i)
    {
        std::cout << "Ertek:" //Nincs érték meghatározva, std::cout << "Ertek: " << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //Nincs inicializálás
    for (int i = 0; i < N_ELEMENTS, i++) //Helytelen for ciklus, for(int i = 0; i < N_ELEMENTS; ++i);
    {
        atlag += b[i] //Nincs ";"
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
