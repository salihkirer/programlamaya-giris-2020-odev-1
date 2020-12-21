/****************************************************************************
**							SAKARYA �N�VERS�TES�
**			       B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**					  B�LG�SAYAR M�HEND�SL��� B�L�M�
**				        PROGRAMLAMAYA G�R��� DERS�
**
**					�DEV NUMARASI......:1
**					��RENC� ADI........:Salih K�rer
**					��RENC� NUMARASI...:G191210307
**					DERS GRUBU.........:2B
****************************************************************************/

#include <iostream>
#include <sstream>
using namespace std;

struct Zaman {
	int saat;
	int dakika;
	int saniye;
	long toplam_saniye;
};

int main() {
	Zaman vakit{};

	string cevap;
	cout << "Saat:Dakika:Saniye seklinde zamani giriniz: ";
	cin >> cevap;
	istringstream ss(cevap);
	
	int sayilar[] = { 0,0,0 };
	int hata = 0;
	int i = 0;

	string token;
	//klavyeden girilen degerler karakter karakter inceleniyor " : " i�areti sayesinde degerler s�n�fland�r�l�yor.
	while (getline(ss, token, ':')) {
		sayilar[i] = stoi(token);
		i++;
	}
	//saat degeri 0 dan k���k ya da 12 den b�y�k girilirse yanl�� girildi�ini mesaj verir.
	if (sayilar[0] < 0 || sayilar[0] > 12)
	{
		cout << "Girilen saat degeri " << sayilar[0] << " yanlis girilmistir" << endl;
		hata = 1;
	}
	//dakika degeri 0 dan k���k ya da 59 den b�y�k girilirse yanl�� girildi�ini mesaj verir.
	if (sayilar[1] < 0 || sayilar[1] > 59) {
		cout << "Girilen dakika degeri " << sayilar[1] << " yanlis girilmistir" << endl;
		hata : 1;
	}
	//saniye degeri 0 dan k���k ya da 59 den b�y�k girilirse yanl�� girildi�ini mesaj verir.
	if (sayilar[2] < 0 || sayilar[2] > 59) {
		cout << "Girilen saniye degeri " << sayilar[2] << " yanlis girilmistir" << endl;
		hata = 1;
	}
	//saat, dakika veya saniye hatal� girilmi�se program� sonland�r�r.
	if (hata == 1)
	{
		cout << endl << "Program Sonlandirildi" << endl << endl;
		system("pause");
	}
	// hatal� girilmemi�se toplam saniyeyi hesaplar.
	else {
		vakit.saat = sayilar[0];
		vakit.dakika = sayilar[1];
		vakit.saniye = sayilar[2];
		vakit.toplam_saniye = vakit.saat * 3600 + vakit.dakika * 60 + vakit.saniye;

		cout << "Saniye olarak hesaplanan deger: " << vakit.toplam_saniye << endl << endl;
		system("pause");
	}
}

