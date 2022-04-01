#include <iostream>
using namespace std;

class Pembeli 
{
	public:
	string Nama;
	int TL, TH;
};

struct {
	
}; main

int main() 
{
  Pembeli pembeli;
  int Pe, Px, a;
  Pe = 7000;
  Px = 9000;
  cout<<" SPBU "<<endl;
  cout<<" Masukkan Nama Pembeli : ";
  getline(cin, pembeli.Nama);
  cout<<" Pilih Jenis Bensin "<<endl;
  cout<<" 1. Pertalite."<<endl;
  cout<<" 2. Pertamax."<<endl;
  cout<<" Masukkan Pilihan : ";
  cin>>a;
  cout<<"Berapa liter yang ingin anda beli? : ";
  cin>>pembeli.TL;
  pembeli.TH = Pe * pembeli.TL;
  pembeli.TH = Px * pembeli.TL; 
  cout<<"=============================="<<endl;
  cout<<"----------Struk SPBU----------"<<endl;
  cout<<"=============================="<<endl;
  cout<<" Nama Pembeli  : "<<pembeli.Nama<<endl;
  cout<<" Total Liter   : "<<pembeli.TL<<" Liter"<<endl;
  cout<<" Jenis Bensin  : ";
  if (a == 1){
    cout<<"Pertalite"<<endl;
  }
  else if (a == 2){
    cout<<"Pertamax"<<endl;
  }
  cout<<"------------------------------"<<endl;
  cout<<" Total Harga   : Rp. "<<pembeli.TH<<endl;
  cout<<"------------------------------"<<endl;
}
