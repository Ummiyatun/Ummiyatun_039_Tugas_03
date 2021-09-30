#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>

using namespace std;
main()
{
char nama[10];
string nik;	
int jk,status,kendaraan,gaji_pokok,uang_makan,tunjangan,transport,gaji_kotor,pajak,gaji_bersih;

cout<<"\n\t========================================================\n";
cout<<"\n\t\tPROGRAM MENGHITUNG GAJI KARYAWAN\n";
cout<<"\n\t========================================================\n";
cout<<"\nnama karyawan \t: ";gets(nama);
cout<<"NIK \t\t: "; cin>>nik;
cout<<"jenis kelamin [0=perempuan,1=laki-laki] : "; cin>>jk;
cout<<"status [0=single, 1=menikah] \t\t: "; cin>>status;
cout<<"kendaraan [0=motor,1=mobil] \t\t: "; cin>>kendaraan;
cout<<"masukkan gaji pokok : "; cin>>gaji_pokok;
cout<<"masukkan uang makan : "; cin>>uang_makan;
cout<<"\n**********************************************\n";

//Tunjangan
if (jk==1 && status==1)
{
   tunjangan=500;
}
else
{
   tunjangan=0;
}

// Transport
if(kendaraan==1)
{
	transport=1000;
}
else if(kendaraan==0)
{
	transport=500;
}
else
{
	transport=0;
}

// Gaji kotor
gaji_kotor = gaji_pokok + tunjangan + uang_makan + transport;

//pajak
pajak = (0.05*gaji_kotor);

//gaji bersih
gaji_bersih = gaji_kotor - pajak;

cout<<"\n\tTunjangan \t: "<<tunjangan;
cout<<"\n\tTranspor \t: "<<transport;
cout<<"\n\tGaji Kotor \t: "<<gaji_kotor;
cout<<"\n\tPajak \t\t: "<<pajak;
cout<<"\n\tGaji Bersih \t: "<<gaji_bersih;

getch();

}
