#include <iostream>
#include <fstream>

using namespace std;

string szyfr(string jawny, int a, int b){
    for(int i=0; i<jawny.size(); i++){
        int c=jawny[i]-'a';
        c=c*a+b;
        c=c%26;
        jawny[i]=c+'a';
        }
        return jawny;
}

int main()
{
    string a;
    ifstream in("tekst.txt");

    cout << "zad1." << endl;
    while(in>>a){ //1
        if(a[0]=='d' && a[a.size()-1]=='d'){
            cout << a << endl;
        }
    }

    string b;
    ifstream in2("tekst.txt");
    cout << "zad2." << endl;
    while(in2>>b){ //2
        if(b.size()>=10){
            cout << szyfr(b,5,2) << endl;
        }
    }

    string c;
    ifstream in3("tekst.txt");
    cout << "zad3." << endl;
    while(in2>>b){ //2
        for(int i=0; i<26; i++){
            for(int j=0; j<26; j++){

        }
    }
    return 0;
}
