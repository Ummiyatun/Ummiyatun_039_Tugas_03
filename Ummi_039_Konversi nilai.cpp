#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int nilai;
	
cout<<"\n\t\t=============================================\n";
cout<<"\t\t\tProgram konversi nilai huruf";
cout<<"\n\t\t=============================================\n";
cout<<"\n\tMasukkan nilai anda: "; cin>>nilai;

if(nilai>=80 && nilai <=100)
	cout<<"\n\tAnda mendapatkan nilai : " <<"A";
	
else if(nilai>=65 && nilai <=79)
	cout<<"\n\tAnda mendapatkan nilai : " <<"B";

else if(nilai>=50 && nilai <=64)
	cout<<"\n\tAnda mendapatkan nilai : " <<"C";
	
else if(nilai>=35 && nilai <=49)
	cout<<"\n\tAnda mendapatkan nilai : " <<"D";
	
else if(nilai>=0 && nilai <=34)
	cout<<"\n\tAnda mendapatkan nilai : " <<"E";

	return 0;
}
