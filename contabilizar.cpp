# include<iostream>
using namespace std;
int main ()
{
	int RYMG_i=RYMG_0,RYMG_l;
	float RYMG_x,RYMG_s=RYMG_0;
	cout<<"ingrese el limite RYMG_l="; cin>>RYMG_l;
	do{
		cout<<"ingrese el numero RYMG_x=";cin>>RYMG_x;
		RYMG_i=RYMG_i+RYMG_1;
		RYMG_s=RYMG_s+RYMG_x;
	}while(RYMG_i<RYMG_l);
	cout<<"se ingresaron "<<RYMG_l<<"numeros "<<"que sumaron"<<endl;
	return 0;
}
