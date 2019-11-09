// Konversi mata uang 
#include <iostream>
using namespace std;
int main () { 

float Rupiah ;
float Hasil ;
float Dollar ;
Dollar = 9600 ;

// MASUKAN DATA KE VARIABEL 

cout << "Selamat datang di aplikasi untuk konversi mata uang Rupiah ke Dollar  " << endl << endl ;
cout << "Silahkan masukan nilai uang yang ingin dikonversi (Rupiah) : " ;
cin >> Rupiah ; 

// OPERASI PENJUMLAHAN 

Hasil=Rupiah/Dollar;

// MENAMPILKAN HASIL KE LAYAR 

cout << endl << "Maka dari nilai rupiah sebesar " << Rupiah << " Rupiah dapat ditukar dengan " << Hasil << " dollar " << endl ; 
cout << "Terima kasih";
getchar(); 


return 0;}
