//Amalia Putri Latifah
//123210109

#include <iostream>
using namespace std;
int main()
{
	int baris, kolom, matriks[100][100], i, j;
	
	cout<<"Masukkan jumlah baris : "; cin>>i;
	cout<<"Masukkan jumlah kolom : "; cin>>j;
	cout<<"\nMasukkan elemen matriks ";
	cout<<endl;
	for(baris=0; baris<i; baris++)
	{
		for(kolom=0; kolom<j; kolom++)
		{
			cout << "matriks[" << baris << "][" << kolom << "] = ";
			cin >> matriks[baris][kolom];
		}
		cout << endl;
	}
	cout << "Isi matriks : \n";
	for(baris=0; baris<i; baris++)
	{
		for(kolom=0; kolom<j; kolom++)
		{
		 cout << " " << matriks[baris][kolom];
		}
		 cout<<endl;
	}
}
