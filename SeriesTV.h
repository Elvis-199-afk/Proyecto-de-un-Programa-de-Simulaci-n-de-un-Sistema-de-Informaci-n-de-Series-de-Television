#ifndef SERIETV_H
#define SERIETV_H
struct SerieTV {
    char titulo[100];
    char genero[50];
    int anio;
    int temporadas;
    char plataforma[50];
};
void agregarSerie(SerieTV series[], int &n);
#endif