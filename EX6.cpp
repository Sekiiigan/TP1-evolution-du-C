#include <iostream>
using namespace std;

int main ()
{
    int a(1), b(2), c(3);
    bool lampe(true), diode(false);
    char lettre1('A'),lettre2('B'),lettre3('C');
    string chaine1("C'est une chaine"), chaine2("de caracteres");

    cout <<"Les 3 chiffres sont: "<< a <<" , " <<b<<" et "<<c<<"."<< endl;
    cout <<"La lampe est :" << lampe <<" et la diode est:"<< diode;
    cout << "(0 pour eteinte et 1 pour allumer)"<<endl;
    cout <<"Les lettres a afficher sont : "<< lettre1 <<" , "<< lettre2<<" et "<< lettre3<< "."<< endl;
    cout <<"Les chaines de caracteres a afficher sont : "<<chaine1 <<chaine2<<" ." <<endl;

    return 0;
}