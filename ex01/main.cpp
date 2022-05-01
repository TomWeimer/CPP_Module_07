/*Le premier paramètre est l’adresse d’un tableau.
•Le second est la taille du tableau.
•Le troisième est une fonction qui sera appelée sur chaque élément du tableau. */
#include "iter.hpp"

int main()
{
	int tab[] = {0, -1, 2, 3, 5, 4};
	iter<int>(tab, 6, print<int>);
}