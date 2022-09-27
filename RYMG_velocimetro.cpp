#include<iostream>
using namespace std;

int main()
{
	float RYMG_v,RYMG_d,RYMG_t;
	cout<<"ingrese la distancia(en km) RYMG_d= ";cin>>RYMG_d;
	cout<<"ingrese el tiempo(en horas) RYMG_t= "; cin>>RYMG_t;
	RYMG_v=RYMG_d/RYMG_t;
	cout<<"la velocidad calculada es de RYMG_v= "<<RYMG_t<<endl<<endl;
	return 0;
}

