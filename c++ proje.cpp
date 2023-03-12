#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Depo {
public:
    // ürün ekleme 
    void urunEkle(string urunAdi, int adet) {
        urunler.push_back(make_pair(urunAdi, adet));
        cout << urunAdi << " depoya eklendi." << endl;
    }

    //  ürün silme 
    void urunSil(string urunAdi, int adet)
    {
        cin >> adet;
        for (auto it = urunler.begin(); it != urunler.end(); ++it) {
            if (it->first == urunAdi) {
                urunler.erase(it);
                cout << urunAdi <<
                    cout << urunAdet2 << "depodan silindi." << endl;
                return;
            }
        }
        cout << urunAdi << " depoda bulunamadi." << endl;
    }

    //  ürünleri listeleme 
    void urunleriListele() {
        cout << "Depodaki urunler:" << endl;
        for (auto urun : urunler) {
            cout << urun.first << ": " << urun.second << endl;
        }
    }

private:
    vector<pair<string, int>> urunler;
};

int main() {
    Depo depo;
    int secim = 0;
    string urunAdi;
    int urunAdet;

    while (true) {
        cout << "Islem seciniz: " << endl;
        cout << "1- Urun ekle" << endl;
        cout << "2- Urun sil" << endl;
        cout << "3- Urunleri listele" << endl;
        cout << "4- Cikis" << endl;
        cin >> secim;

        if (secim == 1) {
            cout << "Urun adi girin: ";
            cin >> urunAdi;
            cout << "Urun adeti girin: ";
            cin >> urunAdet;
            depo.urunEkle(urunAdi, urunAdet);
        }
        else if (secim == 2) {
            cout << "Silmek istediginiz urun adi girin: ";
            cin >> urunAdi;
            cout << "Urun adeti girin: ";
            cin >> urunAdet2;
            depo.urunSil(urunAdi, urunAdet2);
        }
        else if (secim == 3) {
            depo.urunleriListele();
        }
        else if (secim == 4) {
            break;
        }
        else {
            cout << "Gecersiz secim." << endl;
        }
    }

    return 0;
}