#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

bool czy_cyfry(string haslo){
    for(int i=0; i<haslo.size(); i++){
        if(haslo[i]>='0' && haslo[i]<='9'){
            return true;
        }
    }
    return false;
}

bool czy_male(string haslo){
    for(int i=0; i<haslo.size(); i++){
        if(haslo[i]>='a' && haslo[i]<='z'){
            return true;
        }
    }
    return false;
}

bool czy_duze(string haslo){
    for(int i=0; i<haslo.size(); i++){
        if(haslo[i]>='A' && haslo[i]<='Z'){
            return true;
        }
    }
    return false;
}

bool ascii(string a){
    char znak[4];
    for(int i=3; i<a.size(); i++){
        znak[0]=a[i-3];
        znak[1]=a[i-2];
        znak[2]=a[i-1];
        znak[3]=a[i];
        sort(znak, znak+4);
        if(znak[0]+1==znak[1]&& znak[1]+1==znak[2] && znak[2]+1==znak[3]){
            return true;
        }
    }
    return false;
}


int main()
{
    ifstream in("hasla.txt");
    string hasla[200];
    for(int i=0; i<200; i++){
        in >> hasla[i];
    }
    sort(hasla,hasla+200);
    cout << "2. " << endl;
    for(int j =0; j<200; j++){
        if(hasla[j]==hasla[j-1]){
            cout << hasla[j] << endl;
        }
    }
    cout << "3. " << endl;
    ifstream in1("hasla.txt");
    string a;
    int ile=0;
    while(in1 >> a){
        if(ascii(a)){
            ile++;
        }
    }
    cout << ile << endl;

    cout << "4. " << endl;
    ifstream in2("hasla.txt");
    string haslo;
    int ile2=0;
    while(in2 >> haslo){
        if(czy_cyfry(haslo) && czy_duze(haslo) && czy_male(haslo)){
            ile2++;
        }
    }
    cout << ile2  << endl;

    return 0;
}
