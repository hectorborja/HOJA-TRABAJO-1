#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
//void lectura();
int main(){
	//variables del programa
	int horas, cant, opcion;
	float pago;
	
	//Funcionalidad del archivo
	fflush(stdin);
	ofstream archivo;
	string filename, amenor, amayor, apromedio;
	cout<<"Indique nombre de archivo: ";
	getline(cin,filename);
	
	//apertura del archivo
	archivo.open(filename.c_str(),ios::app);
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	


	//Men�
	cout<<"Bienvenido, favor seleccionar 1 opci�n del siguiente men�: "<<endl;
	cout<<"Opci�n 1: Ingresar datos cantidad de horas trabajadas y valor "<<endl;
	cout<<"Opci�n 2: Leer datos ya agregados anteriormente "<<endl;
	cout<<"Opci�n 3: Mostrar datos de planilla de IGSS "<<endl;
	cin>>opcion;
	
	
	
	switch (opcion){
		case 1: cout<<"Ingrese el valor de la hora ordinaria: "<<endl;
				//getline(cin,aval);
				cout<<"Ingrese la cantidad de horas trabajadas: "<<endl;
				cin>>cant;
				if(cant<=40){
					pago = cant * horas;
					cout<<"Cantidad a pagar: Q "<<pago;
				}
				else{
					pago = ((cant-40)*(horas*1.5))+(40*horas);
					cout<<"Cantidad a pagar: Q "<<pago;
				}
		case 2:	cout<<"En proceso"<<endl;
	}
		

}
}
