#include <iostream>

using namespace std;

int main()
{
    int tahun;

cout <<"\n\t\tMENENTUKAN TAHUN KABISAT";
cout <<"\n\t-------------------------------------------";
cout <<"\n\nMasukkan tahun: "; cin >> tahun;

	if (tahun%400==0){
    	cout << "\n---> adalah tahun kabisat\n";
	}else if(tahun%4 == 0){
  		cout << "\n---> adalah tahun kabisat\n";
 	}else{
  		cout << "\n---> bukan tahun kabisat\n";
 }
  return 0;
}
