#include <iostream>
#include <conio.h>

using namespace std;
main()
{
	
	int bil1,bil2;
	char menu;
	float hasil;
	
cout<<"\t======================================\n";
cout<<"\t\tPROGRAM KALKULATOR\n";
cout<<"\t======================================\n";	
	
cout<<"\n\tMENU : \n";
	cout<<"[A] Penjumlahan\n";
	cout<<"[B] Pengurangan\n";
	cout<<"[C] Perkalian\n";
	cout<<"[D] Pembagian\n";
	cout<<"[E] Modulo\n";
	
cout<<"\n\t*********";
cout<<"\nPilih menu [A/B/C/D/E] : "; cin>>menu;

switch(menu)
{
	case 'A' : cout<<"\n[penjumlahan]\n";
				cout<<"masukkan bilangan pertama: "; cin>>bil1;
				cout<<"masukkan bilangan kedua: "; cin>>bil2;
				hasil = bil1+bil2;
				cout<<"hasilnya adalah : " <<hasil;
				break;
	case 'B' : cout<<"\n[pengurangan]\n";
				cout<<"masukkan bilangan pertama: "; cin>>bil1;
				cout<<"masukkan bilangan kedua: "; cin>>bil2;
				hasil = bil1-bil2;
				cout<<"hasilnya adalah : " <<hasil;
				break;
	case 'C' : cout<<"\n[perkalian]\n";
				cout<<"masukkan bilangan pertama: "; cin>>bil1;
				cout<<"masukkan bilangan kedua: "; cin>>bil2;
				hasil = bil1*bil2;
				cout<<"hasilnya adalah : " <<hasil;
				break;
	case 'D' : cout<<"\n[pembagian]\n";
				cout<<"masukkan bilangan pertama: "; cin>>bil1;
				cout<<"masukkan bilangan kedua: "; cin>>bil2;
				hasil = bil1/bil2;
				cout<<"hasilnya adalah : " <<hasil;
				break;
	case 'E' : cout<<"\n[modulo]\n";
				cout<<"masukkan bilangan pertama: "; cin>>bil1;
				cout<<"masukkan bilangan kedua: "; cin>>bil2;
				hasil = bil1%bil2;
				cout<<"hasilnya adalah : " <<hasil;
				break;
				
	default : cout<<"Anda salah memilih menu.";
}

getch();

}

