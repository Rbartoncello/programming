#include <iostream>
#include <fstream>
#include <string>

using namespace std;

typedef struct {
    string nombre;
    int cantidad;
} material_t ;

typedef struct {
    material_t* material;
    int cantidad_materiels;
} fabrica_t ;


int main(){
    fabrica_t* fabrica = new fabrica_t;

    fabrica->cantidad_materiels = 0;

    ifstream file("materiales.txt");

    string nombre, cantidad;

    material_t* material;

    while (file >> nombre){
        file >> cantidad;
        material = new material_t;
        material->nombre = nombre;
        material->cantidad =stoi(cantidad);
        int tope = fabrica->cantidad_materiels;
        material_t* nuevo_material = new material_t[tope + 1];

        for (int i = 0; i < fabrica->cantidad_materiels; i++){
            nuevo_material[i] = fabrica->material[i];
        }
        nuevo_material[tope] = material[0];

        if (fabrica->cantidad_materiels != 0){
            delete [] fabrica->material;
        }

        fabrica->material = nuevo_material;
        fabrica->cantidad_materiels++;
    }

    for (int i = 0; i < fabrica->cantidad_materiels; i++){
        cout << fabrica->material[i].nombre << endl;
    }

    return 0;
}
