#include <iostream>
#include <string>
using namespace std;
#include <fstream>

int main(){
	
	string ruc, producto;
	int unidades;
	double precio;
	char aux;
	ofstream archivo;
	
	archivo.open("output.txt");
	
	cout<<"RUC del cliente (X para terminar): ";
	cin>>ruc;
	
	while(ruc!="X"){
		//pendiente la intro anterior
		cin.get(aux);
		cout<<"Producto; ";
		getline(cin,producto);
		cout<<"Unidades: ";
		cin>>unidades;
		cout<<"Precio: ";
		cin>>precio;
		//escribir datos en una linea del archivo , con un espacio
		archivo<<ruc<<" "<<unidades<<" "<<precio<<" "<<producto<<endl;
		cout<<"RUC DEL CLIENTE(X PARA TERMINAR)";
		cin>>ruc;
		
	}
	//centinela final
	archivo<<"X";
	archivo.close(); //cerrando archivo
	return 0;
}