# Student_

Yapı üyeleri isim,soyisim,no,kisaSınav1,kisaSinav2,odev1,odev2,proje,vize,final ve başarı notu olan 
Ogrenci isimli bir struct veri tipi oluşturdum. Yapı üyeleri gün, ay, yıl olan Tarih isimli bir struct veri 
tipi oluşturdum. Belirlediğim 30 isim ve soyisim için iki string dizi oluşturdum. Öğrencilerin 100’lük 
notunu harfe çeviren bir fonksiyon yazdım. Girilen notun doğruluğunu kontrol eden bir fonksiyon 
yazdım. 

100 öğrenciyi atayabileceğim Ogrenci veri tipinden bir dizi oluşturdum.

Öğrenci dizi elemanları belirlenirken kullanıcıya iki format sundum: 

1- Kullanıcı formatı yani dizi elemanlarını kullanıcı manuel olarak girecek. Tüm notların kontrolü 
sağlanacak , Yıl içi notu hesap edilecek , Başarı notu hesap edilecek ve harf notuna dönüşüm 
sağlanacaktır. 

2 – Sistem formatı yani sistem dizi elemanları rastgele atayacak ve bu atamada notlar belli bir düzene 
göre atanacaktır . Her bir not değişkeni için,100 öğrenciden %10’unun notu 0-40 arasında,%50’ sinin 
40 ile 70, %15’inin 70 ile 80 ve %25’inin 80 ile 100 olacaktır. Rastgele notları verebilmek için de rand 
metodunu kullandım. 

Daha sonrasında bir menü oluşturdum ve her menü seçeneği için bir fonksiyon yazdım. 

1- Sınıfın listesi yazdırılması. Yazdırmada her 20 öğrenci yazdırıldıktan sonra bekletilmesi. Bir 
tuşa basıldıktan sonra ekran silinip sonraki 20 öğrenci yazdırılması. 

!! Diğer menü seçeneklerinin düzgün bir şekilde kullanılması için bu seçeneğin tamamen 
kullanılması yani 100 öğrencinin de yazdırılması gerekmektedir. 

2- Sınıfın en yüksek notu hesaplanması. 

3- Sınıfın en düşük notu hesaplanması. 

4- Sınıfın ortalaması hesaplanması. 

5- Sınıfın standart sapması hesaplanması. 

6- Başarı notu kullanıcının belirli bir aralıkta olanlar listelenmesi (örneğin 50<=notu<80 gibi) 

7- Başarı notu belirtilen bir değerin altında olan öğrencilerin listesi alınabilmesi ( örn. Notu<70) 

8- Başarı notu belirtilen bir değerin üstünde olan öğrencilerin listesi alınabilmesi ( örn. Notu>70)
