#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

string linea;
string texto;
int main (){
    ifstream archivo("documento.txt");
    while (getline(archivo, linea)){
        texto = texto + linea + "\n";

    }


     archivo.close();
     cout<< texto <<endl;

    ofstream archivo2("documento.txt");
    archivo2<< texto << "nueva linea de texto ";
        system("pause");
        

}

