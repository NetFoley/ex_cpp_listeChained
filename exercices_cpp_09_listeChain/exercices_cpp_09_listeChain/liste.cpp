#include "liste.h"

liste::liste()
{
	this->debut = nullptr;
	cursor = 0;
}

liste::~liste()
{
	delete (debut);
}

void liste::ajoute(void* newCont)
{
	element* el = new element;
	el->suivant = this->debut;
	el->contenu = newCont;

	this->debut = el;
}

void* liste::premier()
{
	this->cursor = 0;
	return this->debut->contenu;
}

void* liste::prochain()
{
	int i = 0;
	cursor++;
	element* el = this->debut;
	while (i < cursor)
	{
		if (el->suivant == nullptr)
			return el->contenu;
		el = el->suivant;
		i++;
	}
	return el->contenu;
}

int liste::fini()
{
	int i = 0;
	element* el = this->debut;
	while (el->suivant != nullptr)
	{
		el = el->suivant;
		i++;
	}
	return (cursor == i) ;
}
