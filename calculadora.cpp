# include < iostream>
using namepace std;
int main ()
{
	float RYMG_n1,RYMG_n2,RYMG_s,RYMG_r,RYMG_m,RYMG_d;
	cout <<"ingrese el primer numero"; cin>>RYMG_n1;
	cout <<"ingrese el segundo numeeo"; cin>>RYMG_n2;
	RYMG_s=RYMG_n1+RYMG_n2;
	RYMG_r=RYMG_n1-RYMG_n2;
	RYMG_m=RYMG_n1*RYMG_n2;
	RYMG_d=RYMG_n1/RYMG_n2;
	cout <<"la suma de "<<RYMG_n1<<"y de "<<RYMG_n2<<"es igual a "<<RYMG_s<<endl;
	cout <<"la resta de "<<RYMG_n1<<"-"<<RYMG_n2<<"="<<endl;
	cout <<"la multiplicacion de "<<RYMG_n1<<"*"<<RYMG_n2<<"="<<RYMG_m<<endl;
	cout <<"la divison de "<<RYMG_n1<<"/"<<RYMG_n2<<"="<<RYMG_d<<endl;
	return 0; 
}
