#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int tahmin = -1, min = 1, max = 1000, sayi = (min + max)/2;
	
	cout << " - AKLINDAKİ SAYI - by Serkan Sarp" << endl << endl;
	cout << " - C programlama dilini öğrenmeye başladığımda oluşturduğum projelerden" << endl;
	cout << "   biridir. Repositorylerim arasında yoktu, basit bir C++ remake olarak" << endl;
	cout << "   eklemek istedim." << endl;
	cout << " - Çok basit bir teknik kullanır ve en fazla 10 adımda bulur." << endl << endl;
	cout << " - Aklından 1 ile 1000 arasında bir tam sayı tut ve başlayalım..." << endl;
	cout << " - Daha küçük için 1, daha büyük için 2, bulduysam 0 girmen gerekiyor." << endl;
	
	for (int i = 1; i < 50; i++) {
		cout << endl <<" " << i << ". tahminim: " << sayi << endl << " = ";
		cin >> tahmin;

		if (tahmin == 1) {
			max = sayi - 1;
			sayi = (min + max) / 2;
		}
		else if (tahmin == 2) {
			min = sayi + 1;
			sayi = (min + max) / 2;
		}
		else if (tahmin == 0) {
			break;
		}
			
	}

	cout << endl << " - Benimle oynadığın için teşekkürler. -" << endl;

	return 0;
}