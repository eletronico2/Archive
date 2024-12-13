/*
 * Il professor Random ha un'età casuale tra 20 e 60 anni. Realizzare un
 * programma che permetta all’utente di provare a indovinare l'età del
 * professore.
 * Il programma deve memorizzare in una variabile l'eta' del professor Random,
 * che equivale ad un numero random tra 20 e 60.
 * L’utente avrà a disposizione   ......   tentativi in cui:
 * 	Se l’utente inserisce proprio l'eta' del professor Random:
 *		il programma mostrerà la scritta “......” e poi terminerà.
 * 	Se l’utente inserisce un numero più piccolo rispetto all'eta'
 * 		il programma mostrerà la scritta “Il professor Random è più grande”.
 *  Se l’utente inserisce un numero più grande rispetto all'eta' del prof
 * 		il programma mostrerà la scritta “Il professor Random è più giovane”.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	int etaProfRandom; //eta del professor Random calcolata dal programma
	int etaIpotizzata; //eta del professor Random ipotizzata dall'utente
	int c=0;

	cout << "Benvenuto nel programma che ti permette di indovinare l'eta' del ";
	cout << "professor Random. Ricorda che il professor Random puo' avere un'";
	cout << "eta' compresa tra 20 e 60. \n\n";

	srand(time(0));
	etaProfRandom = 20 + rand() % 80 ;

	do {
		cout << "Quale pensi sia l'eta' del professor Random?\n";
		cin >> etaIpotizzata;
		if(etaIpotizzata < etaProfRandom) {
			cout << "Il professor Random e' piu' grande.\n";
		} else if (etaIpotizzata > etaProfRandom) {
			cout << "Il professor Random e' piu' piccola.\n";
		}
		c++;
	} while ((etaIpotizzata != etaProfRandom)&&(c!=5));

	if (c!=5) {
        cout << "\nEsatto! L'eta' del professor Random e' " << etaProfRandom <<	endl;
	}
	else {
        cout << "\nNon hai indovinato! L'eta' del professor Random e' " << etaProfRandom << endl;
	}
	return 0;
}
