#pragma once

struct element
{
	element* suivant = nullptr;
	void* contenu = nullptr;
};

class liste
{
protected:
	element* debut;
	int cursor;

public:
	liste();
	~liste();

	void ajoute(void*);
	void* premier();
	void* prochain();
	int fini();
};

