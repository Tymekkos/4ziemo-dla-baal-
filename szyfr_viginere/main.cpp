#include <iostream>

using namespace std;

string viginere(string tresc, string klucz){
    int n=tresc.length();
    cout << "dlugosc tekstu = " << n << endl;
    int nk = klucz.length();
    string q = "";
    int powtorzenia=1;
    int j=0;
    for(int i=0; i<n; i++){
        char c=tresc[i];
        if(c>='A' && c<='Z'){
            c = klucz[j];
            j++;
            if(j==nk){
                j=0;
                powtorzenia++;
            }+
        }
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
