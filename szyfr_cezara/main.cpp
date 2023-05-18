#include <iostream>
#include <fstream>

using namespace std;

string szyfr(string jawny, int klucz){
    for(int i=0;i<jawny.size();i++){
        jawny[i]=jawny[i]+klucz;
        if(jawny>90){
            jawny[i]=jawny[i]-26;
        }
    }
    return jawny;
}


int main()
{
    string jawny;
    int klucz=107%26;
    ifstream in("dane_6_1.txt");
    while(in>>jawny){
        cout << szyfr(jawny, klucz) << endl;
    }
    return 0;
}
