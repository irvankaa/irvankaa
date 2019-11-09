// Menghitung waktu tempuh 
#include <iostream>
using namespace std;
int main () { 

float Kecepatan ;
float Jarak ;
float Waktu ;

// MASUKAN DATA KE VARIABEL 

cout << "Selamat datang di aplikasi untuk mengetahui waktu tempuh " << endl << endl ;
cout << "Silahkan masukan nilai kecepatan dalam km/jam : " ;
cin >> Kecepatan ;
cout << "Silahkan masukan nilai Jarak dalam km " ;
cin >> Jarak ;

// OPERASI PENJUMLAHAN 

Waktu=Jarak/Kecepatan;

// MENAMPILKAN HASIL KE LAYAR 

cout << "Dalam kecepatan " << Kecepatan << " km/ jam dan Jarak " << Jarak << " km " << endl ; 
cout << "Maka, Waktu tempuh yang dibutuhkan adalah " << Waktu << " jam";
getchar(); 


return 0;}
