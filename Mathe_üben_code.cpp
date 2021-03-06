// Console.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//



#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
//Nun für Virsual Studio Optimirt
//Geschriben mit Notepad ++.
// compiler = Min Gw (Gnu Compiler Coloection(GCC))
/*
(-static ist damit datei auf anderen PC's Portable ausgefürt werden Kann.)
Ming GW Befehl in cmd eingeben:

g++ -static Mathe_Lernen.cpp -o Mathe_Lernen.exe
*/
//Programmiersprache C++

int main() {
	cout << "Mathe Lernen" << endl;
	cout << " " << endl;

	cout << "Pfad: " << endl;
	cout << "Mathe > Geometrie > Koerper und Flaechen > Aussagesaetze > Richtig oder Falsch" << endl;

	cout << " " << endl;
	cout << "Gebe 1 fuer Richtig ein und 2 fuer Falsch. Ueberspringen = 0. andere eingaben werden Nicht akzeptiert" << endl;
	cerr << "Dieses Produkt ist unter der GNU-Lizenz. Mehr Infos auf https://www.gnu.org/licenses/gpl.txt." << endl;

	cout << " " << endl;
	//Import datei
	ofstream data{ "Test_Ergebnisse.txt", std::ios::trunc };
	if (data.fail()) {
		cerr << "Fehler beim Öffnen" << endl;
		return -1;
	}

	//import ende
	//namenvergebung
	int afrage;
	int bfrage;
	int cfrage;
	int dfrage;
	int efrage;

	//+++++++
	cout << "1 fuer Richtig, zwei fuer Falsch und 0, zum ueberspringen der Frage." << endl;
	cout << "Satz 1:" << endl;
	cout << "Eine Pyramide hat immer 5 Seiten" << endl;
	cout << "Richtig 1 oder Falsch 2: ";
	cin >> afrage;
	cout << " " << endl;
	cout << "Satz 2:" << endl;
	cout << "Ein Wuerfel hat 6 Flaechen" << endl;
	cout << "Richtig 1 oder Falsch 2: ";
	cin >> bfrage;
	cout << " " << endl;

	cout << "Satz 3:" << endl;
	cout << "Bei einem Viereck sind alle Kanten gleichlang." << endl;
	cout << "Richtig 1 oder Falsch 2: ";
	cin >> cfrage;
	cout << " " << endl;

	cout << "Satz 4:" << endl;
	cout << "Eine Pyramide kann auch aus 5 Quadraten und 0 Dreiecken bestehen." << endl;
	cout << "Richtig 1 oder Falsch 2: ";
	cin >> dfrage;
	cout << " " << endl;

	cout << "Satz 5:" << endl;
	cout << "Ein Zylinder hat zwei runde Flaechen." << endl;
	cout << "Richtig 1 oder Falsch 2: ";
	cin >> efrage;
	cout << " " << endl;

	//Speichern
	data << "Mathe Lernen" << endl;
	data << "Mathe > Geometrie > Koerper und Flaechen > Aussagesaetze > Richtig oder Falsch" << endl;
	data << " " << endl;
	data << "Satz 1: " << endl;
	data << "Eine Pyramide hat immer 5 Seiten" << endl;
	data << "Sie haben geantwortet " << afrage << ". Richtig ist 2" << endl;
	data << " " << endl;


	data << "Satz 2: " << endl;
	data << "Ein Wuerfel hat 6 Flaechen" << endl;
	data << "Sie haben geantwortet " << bfrage << ". Richtig ist 1" << endl;
	data << " " << endl;

	data << "Satz 3: " << endl;
	data << "Bei einem Viereck sind alle Kanten gleichlang." << endl;
	data << "Sie haben geantwortet " << cfrage << ". Richtig ist 2" << endl;
	data << " " << endl;

	data << "Satz 4: " << endl;
	data << "Eine Pyramide kann auch aus 5 Quadraten und 0 Dreiecken bestehen." << endl;
	data << "Sie haben geantwortet " << dfrage << ". Richtig ist 2" << endl;
	data << " " << endl;

	data << "Satz 5: " << endl;
	data << "Ein Zylinder hat zwei runde Flaechen." << endl;
	data << "Sie haben geantwortet " << efrage << ". Richtig ist 1" << endl;
	data << " " << endl;
	data << "0 = Frage uebersprungen" << endl;
	data << " " << endl;
	data << "Diese Datei wurde erstellt mit MatheUeben." << endl;

	//ende datei

	data.close();
	//ende

	cerr << "Erstellt mit VirsualStudio" << endl;
	system("PAUSE");


	return 0;
}