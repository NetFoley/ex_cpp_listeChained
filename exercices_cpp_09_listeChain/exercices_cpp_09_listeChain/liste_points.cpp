#include "liste_points.h"

liste_points::liste_points() : liste()
{
}


point* liste_points::premier()
{
	element* p = this->debut;
	return static_cast<point*>(p->contenu);
}

point* liste_points::prochain()
{

	return static_cast<point*>(liste::prochain());
}

void liste_points::affiche()
{
	point* ptr = this->premier();
	ptr->affiche();
	while (!this->fini())
	{
		ptr = this->prochain();
		ptr->affiche();
	}
}


