#include <iostream>
#include <vector>
using namespace std;
class canzoni {
private:
    int ncantanti;
    int nascoltati;
public:
    canzoni cantanti(){}
    void carica(vector <canzoni>& c){
   int settimane=15;
   c.resize(15);
   
   for( int i=0; i<c.size();i++){
       cout<<"metti il "<<i+1<<"  numero di cantanti e poi degli ascolti fatti ";
       cin>>c[i].ncantanti>>c[i].nascoltati;
   }
}
    float mediacantanti(vector <canzoni>& c){
    int conta=0;
    for( int i=0; i<c.size();i++){
       conta+=c[i].ncantanti;
   }
   
   float media=conta/c.size();
   return media;
}
    float mediaascolti(vector <canzoni>& c){
    int conta=0;
    for( int i=0; i<c.size();i++){
       conta+=c[i].nascoltati;
   }
   
   float media=conta/c.size();
   return media;
}
};

int main(){
    float m,min;
    canzoni c;
    vector <canzoni> cv;
    c.carica(cv);
    m=c.mediacantanti(cv);
    min=c.mediaascolti(cv);
    
    cout<<" la media dei cantanti è "<<m<<" \n";
    cout<<" quella degli ascolti è "<<min<<" \n";
}



