#include <iostream>
#include <fstream>
//#include "registro.h"
using namespace std;

const int MAX = 80;
struct tRegistro{
	int codigo;
	char item[MAX];
	double valor;
};
int size = sizeof(tRegistro);

void mostrar(tRegistro &reg){
	cout << "Codigo: " << reg.codigo << endl;
	cout << "Nombre: " << reg.item << endl;
	cout << "Precio: " << reg.valor << endl;
}

int main(){
	tRegistro registro;
	fstream archivo;
	archivo.open("db.dat",ios::in|ios::binary); //CAMBIOOOO
	archivo.read((char*)&registro,size);
	int cuantos=archivo.gcount();
	
	//bool seguir=true;
	
	while(cuantos==size){
		mostrar(registro); //funcion mostrar registros
		archivo.read((char*)&registro,size);
		cuantos=archivo.gcount();
		
	}
	
	archivo.close();
	return 0;
}