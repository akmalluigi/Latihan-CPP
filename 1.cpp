#include <iostream>

using namespace std;

class PersegiPanjang {
  private:
  int panjang, lebar;
  public:
  PersegiPanjang(int p, int l) : panjang(p), lebar(l) {}
 
  int luasPersegiPanjang(){
  return panjang * lebar;
  }
};




int main() {
  int p,l;
  cout<<"Masukan Panjang :";
  cin >> p;
  cout<<"Masukan Lebar :";
  cin >> l;

  PersegiPanjang bangunDatar(p, l);
  std::cout << "Luas Persegi Panjang : " << bangunDatar.luasPersegiPanjang()<< std::endl;
  return 0;
}
