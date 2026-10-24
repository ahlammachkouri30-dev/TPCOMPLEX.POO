// TPCOMPLEX.POO.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Complex.h"
#include<iostream>
using namespace std;


int main()
{
    Complex* c1 = new Complex(3, 4);
    c1->afficher();

    Complex* c2 = new Complex(2, 3);
    c2->afficher();

    Complex c3 = *c1 + *c2;
    cout << "l'addition c3 est:" << endl;
    c3.afficher();

    c3 = *c1 - *c2;
    cout << "la soustraction c3 est : " << endl;
    c3.afficher();

    c3 = (*c1) * (*c2);
    cout << "la multiplication c3 est:" << endl;
    c3.afficher();

    c3 = (*c1) / (*c2);
    cout << "la divition c3 est:" << endl;
    c3.afficher();

    Complex* c4 = new Complex((c3)+*c2);
    cout << "l'addition c4 est:" << endl;
    c4->afficher();
    *c4 = (c3)-*c2;
    cout << "la soustraction c4 est : " << endl;
    c4->afficher();
    *c4 = (c3) * (*c2);
    cout << "la multiplication c4 est:" << endl;
    c4->afficher();
    *c4 = (c3) / (*c2);
    cout << "la divition c4 est:" << endl;
    c4->afficher();

    double a = 2.0;
    Complex c5 = *c4 + a;
    cout << "l'addition c5 est : " << endl;
    c5.afficher();
    c5 = (*c4) - a;
    cout << "la soustraction c5 est : " << endl;
    c5.afficher();
    c5 = (*c4) * a;
    cout << "la multiplication c5  est : " << endl;
    c5.afficher();
    c5 = (*c4) / a;
    cout << "la divition c5 est : " << endl;
    c5.afficher();

    // test des operateurs de comparaison 
    cout << "Tests de comparaison " << endl;

    // c1 = 3+4i (module carre = 25), c2 = 2+3i (module carre = 13)
    cout << "c1 : ";
    c1->afficher();
    cout << "c2 : ";
    c2->afficher();

    cout << "c1 == c2 : " << ((*c1 == *c2) ? "vrai" : "faux") << endl;
    cout << "c1 != c2 : " << ((*c1 != *c2) ? "vrai" : "faux") << endl;
    cout << "c1 <  c2 : " << ((*c1 < *c2) ? "vrai" : "faux") << endl;
    cout << "c1 >  c2 : " << ((*c1 > *c2) ? "vrai" : "faux") << endl;
    cout << "c1 <= c2 : " << ((*c1 <= *c2) ? "vrai" : "faux") << endl;
    cout << "c1 >= c2 : " << ((*c1 >= *c2) ? "vrai" : "faux") << endl;

    // un objet compara a lui meme
    cout << "\nc1 == c1 : " << ((*c1 == *c1) ? "vrai" : "faux") << endl;
    cout << "c1 != c1 : " << ((*c1 != *c1) ? "vrai" : "faux") << endl;
    cout << "c1 <= c1 : " << ((*c1 <= *c1) ? "vrai" : "faux") << endl;
    cout << "c1 >= c1 : " << ((*c1 >= *c1) ? "vrai" : "faux") << endl;
    cout << "c1 <  c1 : " << ((*c1 < *c1) ? "vrai" : "faux") << endl;
    cout << "c1 >  c1 : " << ((*c1 > *c1) ? "vrai" : "faux") << endl;

    // Avec c3 c4 c5
    c3.afficher();
    c4->afficher();
    c5.afficher();
    cout << "nc3 == c4 : " << ((c3 == *c4) ? "vrai" : "faux") << endl;
    cout << "c3 != c5 : " << ((c3 != c5) ? "vrai" : "faux") << endl;
    cout << "c4 <  c5 : " << ((*c4 < c5) ? "vrai" : "faux") << endl;
    cout << "c4 >  c5 : " << ((*c4 > c5) ? "vrai" : "faux") << endl;

    //deux complexes differents mais de meme module
    Complex c6(1, 0);
    Complex c7(0, 1);
    c6.afficher();
    c7.afficher();
    cout << "c6 == c7 : " << ((c6 == c7) ? "vrai" : "faux") << endl;
    cout << "c6 <= c7 : " << ((c6 <= c7) ? "vrai" : "faux") << endl;
    cout << "c6 >= c7 : " << ((c6 >= c7) ? "vrai" : "faux") << endl;
    cout << "c6 <  c7 : " << ((c6 < c7) ? "vrai" : "faux") << endl;


    delete c1;
    c1 = nullptr;
    delete c2;
    c2 = nullptr;
    delete c4;
    c4 = nullptr;

    return 0;
}
// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
