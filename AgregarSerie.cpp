#include<iostream>
#include<string.h>
#include"SerieTV.h"
using namespace std;
void agregarSerie(SerieTV series[], int &n){
    n++;
    cin.ignore();
    cout<<"Ingrese el titulo de la serie: ";
    cin.getline(series[n].titulo, 100);
    cout<<"Ingrese el genero de la serie: ";
    cin.getline(series[n].genero, 50);
    cout<<"Ingrese el anio de estreno: ";
    cin>>series[n].anio;
    cout<<"Ingrese el numero de temporadas: ";
    cin>>series[n].temporadas;
    cin.ignore();
    cout<<"Ingrese la plataforma de streaming: ";
    cin.getline(series[n].plataforma, 50);
}