#include <iostream>
using namespace std;
int main()
{
    string nom_prenom;
    int age_utilisateur;
    cout << "Quel est votre age ? " <<endl;
    cin >> age_utilisateur;
    cin.ignore();
    cout << "Quel est votre nom et prenom ? "<<endl;
    getline(cin,nom_prenom);
    cout << "Votre age est :" << age_utilisateur <<"ans et votre nom et prenom sont :"<< nom_prenom<<"."<<endl;
    return 0;
}