/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI…...: 1
**				ÖĞRENCİ ADI...............: EMİRHAN AKSU
**				ÖĞRENCİ NUMARASI.: G221210058
**				DERS GRUBU…………: 2.ÖĞRETİM A GRUBU
****************************************************************************/






#include <iostream>	// Giriş çıkışlar için eklendi
#include <iomanip>	// Setw() fonksiyonunu kullanmak için eklendi
#include <locale.h> // Türkçe karakterler desteği için eklendi 
#include <cstring>	// String ifadeler için eklendi
#include <ctime>	// Time modülünü kullanmak için eklendi
#include <cmath>	// Matematiksel işlemleri kullanmak için eklendi

using namespace std; // Standart isim uzayı eklendi

struct Ogrenci // Ogrenci yapısı oluşturuldu ve yapı üyeleri belirtildi
{
	string isim;
	string soyisim;
	string no;

	float kisaSinav1;
	float kisaSinav2;
	float odev1;
	float odev2;
	float proje;
	float vize;
	float final;
	float basarinotu;
	float harfNotu;

	struct Tarih // Tarih yapısı oluşturuldu ve üyeleri belirtildi
	{
		int gun;
		int ay;
		int yil;
	};
};



float cevir(float basariNotu) // Başarı notunu harf notuna çeviren fonksiyon geliştirildi
{
	if (basariNotu <= 100 && basariNotu>=90) // 100 ve 90 aralığındaki notları AA harf notuna çevirir
	{
		cout << "AA";
	}
	if (basariNotu < 90 && basariNotu >= 80) // 90 ve 80 aralığındaki notları AA harf notuna çevirir
	{
		cout << "BA";
	}
	if (basariNotu < 80 && basariNotu >= 70) // 80 ve 70 aralığındaki notları AA harf notuna çevirir
	{
		cout << "BB";
	}
	if (basariNotu < 70 && basariNotu >= 60) // 70 ve 60 aralığındaki notları AA harf notuna çevirir
	{
		cout << "CB";
	}
	if (basariNotu < 60 && basariNotu >= 50)// 60 ve 50 aralığındaki notları AA harf notuna çevirir
	{
		cout << "CC";
	}
	if (basariNotu < 50 && basariNotu >= 40) // 50 ve 40 aralığındaki notları AA harf notuna çevirir
	{
		cout << "DC";
	}
	if (basariNotu < 40 && basariNotu >= 30) // 40 ve 30 aralığındaki notları AA harf notuna çevirir
	{
		cout << "DD";
	}
	if (basariNotu < 30 && basariNotu >= 0) // 30 ve 0 aralığındaki notları AA harf notuna çevirir
	{
		cout << "FF ";
	}
	return 0;
}


void kontrol(float kisaSinav1, float kisaSinav2, float odev1, float odev2, float proje, float vize, float final) // Not kontrol fonksiyonu geliştirildi
{
	if ((kisaSinav1 < 0 || kisaSinav1>100)) // 0-100 haricinde bir sayısal değer olarak girilmesi karşısında uyarı veren bir fonksiyon geliştirildi
	{
		cout << "1. Kısa sınav notunu yanlış girdin yada notunu girmedin"<< endl;
	}
	if ((kisaSinav2 < 0 || kisaSinav2>100))
	{
		cout << "2. Kısa sınav notunu yanlış girdin yada notunu girmedin"<<endl;
	}
	if ((odev1 < 0 || odev1>100))
	{
		cout << "1. Ödev notunu yanlış değer girdin yada notunu girmedin"<< endl;
	}
	if ((odev2 < 0 || odev2>100))
	{
		cout << "2. Ödev notunu yanlış değer girdin yada notunu girmedin"<< endl;
	}
	if ((proje < 0 || proje > 100))
	{
		cout << "Proje notunu yanlış değer girdin yada notunu girmedin"<< endl;
	}
	if ((vize < 0 || vize >100))
	{
		cout << "Vize notunu yanlış değer girdin yada notunu girmedin"<< endl;
	}
	if ((final < 0 || final > 100))
	{
		cout << "Final notunu yanlış değer girdin yada notunu girmedin"<< endl;
	}
}



void yazdir(Ogrenci ogrenci[100], int sira) { // Öğrenci listesini 20lik bir şekilde yazdıran fonskiyon geliştirildi

	if (sira < 100) // sira değişkeninin 100 den küçük olduğu durumda ogrenci dizisinin indekslerine rastgele atamalar yapar
	{
		for (int e = sira; e < sira + 20; e++)// Ve e değişkeni sira ile aynı sayısa ulaşana kadar artarak devam eder
		{
			ogrenci[e].basarinotu = ((ogrenci[e].vize * 50 / 100 + ogrenci[e].kisaSinav1 * 7 / 100 + ogrenci[e].kisaSinav2 * 7 / 100 +
				ogrenci[e].odev1 * 10 / 100 + ogrenci[e].odev2 * 10 / 100 + ogrenci[e].proje * 16 / 100) * 55 / 100) + ogrenci[e].final * 45 / 100;
			

			cout <<setw(15) << ogrenci[e].isim << setw(15) << ogrenci[e].soyisim << setw(15) << ogrenci[e].kisaSinav1 << setw(15) << ogrenci[e].kisaSinav2
				<< setw(15) << ogrenci[e].odev1 << setw(15) << ogrenci[e].odev2 << setw(15) << ogrenci[e].proje << setw(15) << ogrenci[e].vize
				<< setw(15) << ogrenci[e].final << setw(15) << ogrenci[e].basarinotu << cevir(ogrenci[e].basarinotu) ;
			cout << endl;
		}

	}
	else // sira değişkeni 100 e ulaştığında maksimum öğrenci sayısına ulaşıldığına dair bir uyarı alır
	{
		cout << "\n";
		cout << "\n";
		cout << "Maksimum öğrenci sayısına ulaşıldı! " << endl;
		cout << "\n";
		cout << "\n";
	}
}

void enB(Ogrenci ogrenci[100]) { // Öğrenci listesi içerisinde en yüksek başarı notuna sahip öğrenciyi belirlemek için bir fonksiyon geliştirildi

	float enB = ogrenci[0].basarinotu;

	for (int j = 1; j < 100; j++) // 100 öğrencinin başarı notlarının kontrol edilmesi sağlandı
	{
		if (ogrenci[j].basarinotu > enB) // Eğer 100 kişi içerisinden öncekilerden daha yüksek notu olanın en büyük not değişkenine sahip olması sağlandı
		{
			enB = ogrenci[j].basarinotu;
		}
	}
	cout << "En yüksek not : " << enB << endl; 
}


void enK(Ogrenci ogrenci[100]) { // Öğrenci listesi içerisinde en düşük başarı notuna sahip öğrenciyi belirlemek için bir fonksiyon geliştirildi
	float enK = ogrenci[0].basarinotu;

	for (int y = 0; y < 100; y++)  // 100 Öğrencinin başarı notunun kontrol edilmesi sağlandı
	{ 
		if (ogrenci[y].basarinotu < enK) // Eğer 100 kişi içerisinden öncekilerden daha düşük notu olanın en küçük not değişkenine sahip olması sağlandı
		{
			enK = ogrenci[y].basarinotu;
		}
	}
	cout << "En düşük not : " << enK << endl;
}


void ort(Ogrenci ogrenci[100]) // Öğrenci listesi içerisinde başarı notunun ortalamasını hesaplamak için bir fonksiyon geliştirildi
{
	float ortalama = 0.0;
	float toplam = 0.0;

	for (int f = 0; f < 100; f++) // 100 Öğrencinin başarı notlarının toplanması sağlandı
	{
		toplam += ogrenci[f].basarinotu;
	}
	ortalama = toplam / 100;
	cout << "Ortalama : " << ortalama;
}

float stSapma(Ogrenci ogrenci[100]) // Öğrenci listesi içerisinde başarı notlarının standart sapmasını hesaplamak için bir fonksiyon geliştirildi
{	
	float sapma = 0.0;
	float ortalama = 0.0;
	float toplam = 0.0;

	for (int f = 0; f < 100; f++) // 100 Öğrencinin başarı notlarının toplanması sağlandı
	{
		toplam += ogrenci[f].basarinotu;
	}
	ortalama = toplam / 100;
	for (int i = 0; i < 100; i++) // Her öğrencinin başarı notundan ortalamanın çıkarılması ve sonucun karesinin alınıp toplanması sağlandı
	{
		sapma += (ogrenci[i].basarinotu - ortalama) * (ogrenci[i].basarinotu - ortalama);

	}
	sapma = sqrt(sapma / 99); // Sonucumuzun 99'a bölünüp karekökü alınması sağlandı

	cout << "Standart sapma : " << sapma;


	return sapma;
}
void Aralik(Ogrenci ogrenci[100]) // Öğrenci listesi içerisinde belirtilen aralıklar içerisinde başarı notu olanları listeyen bir fonksiyon geliştirildi
{
	int ara1, ara2;
	cout << "Küçük olan aralığı belirleyiniz: ";
	cin >> ara1;
	cout << "Büyük olan aralığı belirleyiniz: ";
	cin >> ara2;
	cout << "\n";


	for (int i = 0; i < 100; i++) // Belirtilen aralıklar içerisinde başarı notu olanların listenmesi sağlandı
	{
		if (ara1 < ogrenci[i].basarinotu && ogrenci[i].basarinotu < ara2)
			cout << ogrenci[i].isim << " " << ogrenci[i].soyisim << " " << ogrenci[i].basarinotu <<endl;
	}

}

void NotAltı(Ogrenci ogrenci[100]) // Belirtilen değerin altındaki başrı notlarının bulunması ve bu öğrencilerin listelenmesi sağlandı
{
	int ustdeger;
	cout << "Üst değeri giriniz: ";
	cin >> ustdeger;
	cout << "\n";
	for (int i = 0; i < 100; i++)
	{
		if (ogrenci[i].basarinotu < ustdeger)
			cout << ogrenci[i].isim << " " << ogrenci[i].soyisim << " " << ogrenci[i].basarinotu << endl;
	}


}


void NotUstu(Ogrenci ogrenci[100])// Belirtilen değerin üstündeki başarı notlarının bulunması ve bu öğrencilerin listelenmesi sağlandı
{
	int altdeger;
	cout << "Alt değeri giriniz: ";
	cin >> altdeger;
	cout << "\n";
	for (int i = 0; i < 100; i++)
	{
		if (ogrenci[i].basarinotu > altdeger)
			cout << ogrenci[i].isim << " " << ogrenci[i].soyisim << " " << ogrenci[i].basarinotu << endl;
	}
}



int main()
{
	setlocale(LC_ALL, "turkish"); 
	srand(time(0));

	Ogrenci ogrenci[100];


	string isim[] = { "Ahmet","Mehmet","Tahir","Osman","Doğu","Demir","Ayhan","Mustafa","Emine","Zehra","Emirhan","Semih","Recep","Polat","Fatma","Merve","Özlem","Gülsüm","Aybüke","Derya",
    "Elif","Kübra","Mahmut","Fatih","Timur","Baybars","Alparslan","Melek","İlayda","Selin" };


	string soyisim[] = { "Öztürk","Arıcı","Özdemir","Gökler","Üçüncü","Akça","Akdemir","Çevik","Usta","Kılıç","Uzun","Özhan","Özkan","Genç",
	"Baktay","Kaba","Varol","Kışkoymaz","Hiçdurmaz","Çakır","Alemdar","Çoban","Eylül","Pala","Ulubey","Cerrahpaşalı","Akbey","Eşrefoğlu","Candan","Karahanlı" };
	
	Ogrenci o1;
	
	float yilIci = (o1.vize / 2) + (o1.kisaSinav1 * (7 / 100)) + (o1.kisaSinav2 * (7 / 100)) +
		(o1.odev1 * 10 / 100) + (o1.odev2 * 10 / 100) + (o1.proje * 16 / 100);
	float basariNotu = (yilIci * 55 / 100) + (o1.final * 45 / 100);

	int format;


	cout << "1-- Kullanıcı Formatı\n2-- Sistem Formatı "<< endl;
	cout << "Çıkış için 1 ve 2 hariç herhangi bir tuşa basınız" << endl;
	cin >> format;

	if (format == 1) {// Formatın 1 seçilirse Kullanıcı Formatının uygulanması sağlandı

		cout << "Öğrenci ismi: ";
		cin >> o1.isim;

		cout << "Öğrenci soyismi: ";
		cin >> o1.soyisim;

		cout << "Öğrenci no: ";
		cin >> o1.no;

		cout << "Birinci kısa sınav notu: ";
		cin >> o1.kisaSinav1;

		cout << "İkinci kısa sınav notu: ";
		cin >> o1.kisaSinav2;

		cout << "Birinci ödev notu: ";
		cin >> o1.odev1;

		cout << "İkinci ödev notu: ";
		cin >> o1.odev2;

		cout << "Proje notu: ";
		cin >> o1.proje;

		cout << "Vize notu: ";
		cin >> o1.vize;

		cout << "Final notu: ";
		cin >> o1.final;

		cout << "\n";
		cout << "\n";


		float yilIci = (o1.vize / 2) + (o1.kisaSinav1 * (7 / 100)) + (o1.kisaSinav2 * (7 / 100)) +
			(o1.odev1 * 10 / 100) + (o1.odev2 * 10 / 100) + (o1.proje * 16 / 100);
		cout << "Yıl içi notu: " << yilIci << endl;

		float basariNotu = (yilIci * 55 / 100) + (o1.final * 45 / 100);
		
		cout << "\n";
		cout << "Başarı notu: " << basariNotu << endl;


		kontrol(o1.kisaSinav1, o1.kisaSinav2, o1.odev1, o1.odev2, o1.proje, o1.vize, o1.final);
		cout << "\n";
		cevir(basariNotu);
		cout << "\n";
		cout << "\n";

	}
	if (format == 2) // Formatın 2 seçilirse Sistem Formatının uygulanması sağlandı
	{
		int randomisim = 0;
		int randomsoyisim = 0;
		for (int i = 0; i < 100; i++) {// İsim ve soyisim dizilerimizden 100 tane rastgele kişi bilgisi oluşturulması ve bunların ogrenci dizisine tanımlanması sağlandı

			int randomisim = rand() % 30;
			int randomsayisim = rand() % 30;
			ogrenci[i].isim = isim[randomisim];
			ogrenci[i].soyisim = soyisim[randomsayisim];
		}


		for (int c = 0; c < 10; c++) // Sınıfın %10'unun 1.Kısa sınavdan 0-40 arası bir not alması sağlandı
		{
			ogrenci[c].kisaSinav1 = rand() % 41;
		}

		for (int d = 10; d < 60; d++) // Sınıfın %10'unun 1.Kısa sınavdan 0-40 arası bir not alması sağlandı
		{
			ogrenci[d].kisaSinav1 = 41 + rand() % 30;
		}

		for (int a = 60; a < 75; a++)// Sınıfın %10'unun 1.Kısa sınavdan 0-40 arası bir not alması sağlandı
		{
			ogrenci[a].kisaSinav1 = 71 + rand() % 10;
		}

		for (int b = 75; b < 100; b++) // Sınıfın %10'unun 1.Kısa sınavdan 0-40 arası bir not alması sağlandı
		{
			ogrenci[b].kisaSinav1 = 81 + rand() % 20;
		}
		for (int c = 0; c < 10; c++) // Sınıfın %10'unun 2.Kısa sınavdan 0-40 arası bir not alması sağlandı
		{
			ogrenci[c].kisaSinav2 = rand() % 41;
		}

		for (int d = 10; d < 60; d++) // Sınıfın %50'sinin 2.Kısa sınavdan 41-70 arası bir not alması sağlandı
		{
			ogrenci[d].kisaSinav2 = 41 + rand() % 30;
		}

		for (int a = 60; a < 75; a++) // Sınıfın %15'inin 2.Kısa sınavdan 71-80 arası bir not alması sağlandı
		{
			ogrenci[a].kisaSinav2 = 71 + rand() % 10;
		}

		for (int b = 75; b < 100; b++) // Sınıfın %25'inin 2.Kısa sınavdan 81-100 arası bir not alması sağlandı
		{
			ogrenci[b].kisaSinav2 = 81 + rand() % 20;
		}
		for (int c = 0; c < 10; c++) // Sınıfın %10'unun 1.Ödev' den 0-40 arası bir not alması sağlandı
		{
			ogrenci[c].odev1 = rand() % 41;
		}

		for (int d = 10; d < 60; d++) // Sınıfın %50'sinin 1.Ödev' den 41-70 arası bir not alması sağlandı
		{
			ogrenci[d].odev1 = 41 + rand() % 30;
		}

		for (int a = 60; a < 75; a++)// Sınıfın %15'inin 1.Ödev' den 71-80 arası bir not alması sağlandı
		{
			ogrenci[a].odev1 = 71 + rand() % 10;
		}

		for (int b = 75; b < 100; b++) // Sınıfın %25'inin 1.Ödev' den 81-100 arası bir not alması sağlandı
		{
			ogrenci[b].odev1 = 81 + rand() % 20;

		}

		for (int c = 0; c < 10; c++) // Sınıfın %10'unun 2.Ödev' den 0-40 arası bir not alması sağlandı
		{
			ogrenci[c].odev2 = rand() % 41;
		}

		for (int d = 10; d < 60; d++) // Sınıfın %50'sinin 2.Ödev' den 41-70 arası bir not alması sağlandı
		{
			ogrenci[d].odev2 = 41 + rand() % 30;
		}

		for (int a = 60; a < 75; a++) // Sınıfın %15'inin 2.Ödev' den 71-80 arası bir not alması sağlandı
		{
			ogrenci[a].odev2 = 71 + rand() % 10;
		}

		for (int b = 75; b < 100; b++) // Sınıfın %25'inin 2.Ödev' den 81-100 arası bir not alması sağlandı
		{
			ogrenci[b].odev2 = 81 + rand() % 20;
		}
		for (int c = 0; c < 10; c++) // Sınıfın %10'unun Proje' den 0-40 arası bir not alması sağlandı
		{
			ogrenci[c].proje = rand() % 41;
		}

		for (int d = 10; d < 60; d++) // Sınıfın %50'sinin Proje' den 41-70 arası bir not alması sağlandı
		{
			ogrenci[d].proje = 41 + rand() % 30;
		}

		for (int a = 60; a < 75; a++) // Sınıfın %15'inin Proje' den 71-80 arası bir not alması sağlandı
		{
			ogrenci[a].proje = 71 + rand() % 10;
		}

		for (int b = 75; b < 100; b++) // Sınıfın %10'unun Proje' den 81-100 arası bir not alması sağlandı
		{
			ogrenci[b].proje = 81 + rand() % 20;
		}
		for (int c = 0; c < 10; c++) // Sınıfın %10'unun Vize sınavdan 0-40 arası bir not alması sağlandı
		{
			ogrenci[c].vize = rand() % 41;
		}

		for (int d = 10; d < 60; d++) // Sınıfın %50'sinin Vize sınavdan 41-70 arası bir not alması sağlandı
		{
			ogrenci[d].vize = 41 + rand() % 30;
		}

		for (int a = 60; a < 75; a++) // Sınıfın %10'unun Vize sınavdan 71-80 arası bir not alması sağlandı
		{
			ogrenci[a].vize = 71 + rand() % 10;

		}

		for (int b = 75; b < 100; b++) // Sınıfın %25'inin Vize sınavdan 81-100 arası bir not alması sağlandı
		{
			ogrenci[b].vize = 81 + rand() % 20;

		}
		for (int c = 0; c < 10; c++) // Sınıfın %10'unun Final sınavdan 0-40 arası bir not alması sağlandı
		{
			ogrenci[c].final = rand() % 41;
		}

		for (int d = 10; d < 60; d++) // Sınıfın %50'sinin Final sınavdan 41-70 arası bir not alması sağlandı
		{
			ogrenci[d].final = 41 + rand() % 30;
		}

		for (int a = 60; a < 75; a++) // Sınıfın %15'inin sınavdan 71-80 arası bir not alması sağlandı
		{
			ogrenci[a].final = 71 + rand() % 10;
		}

		for (int b = 75; b < 100; b++) // Sınıfın %25'inin Final sınavdan 81-100 arası bir not alması sağlandı
		{
			ogrenci[b].final = 81 + rand() % 20;
		}


		int sira = 0;
		int number;
		char secim = 'a';

		do
		{
			cout << "\n";
			cout << "1-- Öğrenci listesi\n2-- Sınıfın en yüksek notu\n3-- Sınıfın en düşük notu\n4-- Sınıf ortalaması\n";
			cout << "5--Sınıfın standart sapması\n6-- Notu belirli aralıklar arasında olan öğrencileri listele\n";
			cout << "7--Notu belli bir değerin altında olan öğrencileri listele \n8-- Notu belli bir değerin üzerinde olan öğrencileri listele\n";
			cout << "9-- Çıkış" << endl;



			cout << "Seçim: ";
			cout << "\n";
			cout << "\n";
			cin >> number;



			switch (number) // Menü oluşturuldu
			{
			case 1: // Öğrenci listesini yazdıran fonksiyon çağırıldı
				cout << "Listeyi yazdırmak için c tuşuna basınız." << endl;
				cin >> secim;
				if (secim == 'c')
				{
					system("cls");
					cout << "HARF NOTU" << setw(15) << "İSİM" << setw(15) << "SOYİSİM" << setw(15) << "KISA SINAV-1" << setw(15) << "KISA SINAV-2" << setw(15) << "ÖDEV-1" << setw(15) << "ÖDEV-2" << setw(15) << "PROJE" << setw(15) << "VİZE" << setw(15) << "FİNAL" << setw(15) << "BAŞARI NOTU" << endl;
					cout << "\n";
					cout << "\n";
					cout << "\n";
					yazdir(&ogrenci[0], sira);
					cout << "\n";
					cout << "Listeyi yazdırmaya devam etmek için tekrar 1 e basınız " << endl;
					cout << "Diğer seçenekleri kullanmak için tüm öğrencileri yazdırmanız gerekmektedir" << endl;
					cout << "\n";
					sira += 20;
				}
				break;
			case 2: // En yüksek notu belirleyen fonksiyon çağırıldı
				enB(&ogrenci[0]);
				break;
			case 3: // En küçük notu belirleyen fonksiyon çağırıldı
				enK(&ogrenci[0]);
				break;
			case 4:// Ortalamayı belirleyen fonksiyon çağırıldı
				ort(&ogrenci[0]);
				break;
			case 5: // Standart sapmayı belirleyen fonksiyon çağırıldı
				stSapma(&ogrenci[0]);
				break;
			case 6: // Belirli aralıktaki notları getiren fonksiyon çağırıldı
				Aralik(&ogrenci[0]);
				break;
			case 7: // Belirli değerin altındaki notları getiren fonksiyon çağırıldı
				NotAltı(&ogrenci[0]);
				break;
			case 8: // Belirli değerin üstündeki notları getiren fonksiyon çağırıldı
				NotUstu(&ogrenci[0]);
				break;
			default:
				cout << "Bir değer seçilmedi. \n"
					<< "Tekrar seçiniz.\n";
				break;
			}

		} while (number != 9); // Çıkış 
		{
			cout << "Çıkış yapıldı";
		}

	}
	if (format != 1 && format != 2) // Çıkış
	{
		return 0 ;
	}
}
