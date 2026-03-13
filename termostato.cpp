/* si ha un oggetto termostato e l utente puo fare due cose vedere la temperatura in celsius e in fahrenheit*/
#include <iostream>
#include <vector>
using namespace std;
class termostato {
private:// una private puo essere usata solo all interno della classe e non puo essere chiamata ( e dunque modificata) da fuori la classe
	float celsius;
	float fahrenheit;
public:
	termostato() { //costruttore
	}
	void calcolofarenheit(float n) {
		fahrenheit=(n*1.8)+32;
		cout<<" la temperatura in fahrenheit e "<<fahrenheit<<"\n";
	}
	void calcolocelsius(float n) {

		celsius=(n-32)/1.8;
		cout<<" la temperatura in celsius e "<<celsius<<"\n";
	}
	void messaggiodierror(int scelta) {

		cout<<" hai sbagliato a scrivere la scelta  puoi fare solo celsius o fahrenheit"<<"\n";
		cin>>scelta;//non potevo usare termostato.scelta perche puo essere usata solo se viene creato una istanza
	}
};

int main() {
	termostato t;//esistono metodi che una volta creata la classe si possono chiamare in automatico si dichiarano senza tipo e con lo stesso nome della classe

	//in questo caso chiamo tutti i metodi ma la variabile col calcolo sta nel if quindi non sporca la memoria se non viene mai chiamata
	float n;
	int scelta;
	cout<<" inserisci la temperatura da convertire "<<"\n";
	cin>>n;
	cout<<" vorresti vedere la temperatura in celsius o in fahrenheit? \n 1 per fahrenheit, 2 per celsius\n";
	cin>>scelta;
	while(scelta!=1 && scelta!=2) {
		t.messaggiodierror(scelta);
	}
	if(scelta==1) {
		t.calcolofarenheit(n);
	}
	else if(scelta==2) {
		t.calcolocelsius(n);
	}
}
