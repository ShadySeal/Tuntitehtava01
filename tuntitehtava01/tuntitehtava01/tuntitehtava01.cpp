#include <iostream>
using namespace std;

class Solmu
{
public:
	int _data;
	Solmu* _next;
};

// Tulostaa listan kaikkien solmujen arvot.
void tulosta_lista(const Solmu* s)
{
	while (s != nullptr)
	{
		cout << s->_data << "\n";
		s = s->_next;
	}
}


// Lisää uuden solmun listan alkuun.
Solmu* lisaa_alkuun(Solmu* alku, int arvo)
{
	Solmu* uusi = new Solmu;
	uusi->_data = arvo;
	uusi->_next = alku;

	return uusi;
}

// Poistaa listan kaikki solmut.
void tuhoa_lista(Solmu* s)
{
	while (s) {
		Solmu* seuraava = s->_next;
		delete s;
		s = seuraava;
	}
}

int main()
{
	Solmu* s1 = new Solmu;
	Solmu* s2 = new Solmu;
	Solmu* s3 = new Solmu;
	Solmu* s4 = new Solmu;

	s1->_data = 3;
	s2->_data = 10;
	s3->_data = 2;
	s4->_data = 1;

	s1->_next = s2;
	s2->_next = s3;
	s3->_next = s4;
	s4->_next = nullptr;

	Solmu* head = s1;

	head = lisaa_alkuun(head, 115);
	head = lisaa_alkuun(head, 127);

	tulosta_lista(head);

	tuhoa_lista(head);

	return 0;
}