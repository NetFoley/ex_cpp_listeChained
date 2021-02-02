// exercices_cpp_09_listeChain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "liste.h"
#include "liste_points.h"
#include "point.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    liste l;
    int a = 2;
    float b = 5.23f;
    l.ajoute(&a);
    l.ajoute(&b);

    cout << l.premier() << endl;
    while (!l.fini())
    {
        void* ptr;
        ptr = l.prochain();
        cout << ptr << endl;
    }

    liste_points lp;
    point pa(4, 2);
    point pb(44536, 242);
    lp.ajoute(&pa);
    lp.ajoute(&pa);
    lp.ajoute(&pb);

    lp.affiche();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
