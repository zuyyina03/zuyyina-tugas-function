#include <iostream>
using namespace std;

int luas = 0;
int keliling = 0;
int panjang = 0;
int lebar = 0;
int alas = 0;
int tinggi = 0;
double Jarijari = 0;

void Persegi(double sisi) {
	double luas = sisi * sisi;
	double keliling = 4 * sisi;
	cout << "Hitung luas dan keliling Persegi" << "\n";
	cout << "Luas: " << luas << "\n";
	cout << "Keliling: " << keliling << "\n\n";
}

void Persegipanjang(double panjang, double lebar) {
	double luas = panjang * lebar;
	double keliling = 2 * (panjang + lebar);
	cout << "Hitung luas dan keliling persegi panjang" << "\n";
	cout << "Luas: " << luas << "\n";
	cout << "Keliling: " << keliling << "\n\n";
}

void Segitigasikusiku(double alas, double tinggi) {
	double luas = 0.5 * alas * tinggi;
	double sisimiring = sqrt((alas * alas) + (tinggi * tinggi));
	double keliling = alas + tinggi + sisimiring;
	cout << "Hitung luas dan keliling segitiga siku-siku" << "\n";
	cout << "Luas: " << luas << "\n";
	cout << "keliling: " << keliling << "\n\n";
}

void Lingkaran(double Jarijari) {
	const double pi = 3.14;
	double luas = pi * Jarijari * Jarijari;
	double keliling = 2 * pi * Jarijari;
	cout << "Hitung luas dan keliling lingkaran" << "\n";
	cout << "Luas: " << luas << "\n";
	cout << "keliling: " << keliling << "\n";
}

void main() {
	Persegi(8);
	Persegipanjang(10, 6);
	Segitigasikusiku(3, 5);
	Lingkaran(14);

}
