#include <iostream>
#include <string>
using namespace std;

class baju{
		public:
				void ukuran(string XL);
				string warna;
				double harga;
};

int main() {
	baju oblong;
	
	oblong.warna ="kuning";
	oblong.harga =100000;
	
	cout<<"Jenis warna yang digunakan "<< (oblong.warna)<<endl;
	cout<<"Harga nya terjangkau "<< (oblong.harga)<<endl;
	
	oblong.ukuran("s m l xl xxl");
}
void baju::ukuran(string XL){
		cout<<"warna nya banyak "<<XL<<"bahanya bagus dan hargaya terjangkau"<<endl;
}
