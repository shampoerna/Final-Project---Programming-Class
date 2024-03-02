#include <iostream>
#include <cmath>

using namespace std;

double kelilingpersegi(double sisi) {
    return 4 * sisi;
}

double luaspersegi(double sisi) {
    return sisi * sisi;
}

double kelilingpersegipanjang(double panjang, double lebar) {
    return (2 * panjang) + (2 * lebar);
}

double luaspersegipanjang(double panjang, double lebar) {
    return panjang * lebar;
}

double kelilingjajargenjang(double alas, double sisimiring) {
    return (2 * alas) + (2 * sisimiring);
}

double luasjajargenjang(double alas, double tinggi) {
    return (alas * tinggi) / 2;
}

double kelilingsegitiga(double a, double b, double c) {
    double s;
    s = (a + b + c) / 2;
    return a + b + c;
}

double luassegitiga(double a, double b, double c) {
    double s;
    s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double kelilingbelahketupat(double sisi) {
    return 4 * sisi;
}

double luasbelahketupat(double d1, double d2) {
    return (d1 * d2) / 2;
}

double kelilinglayanglayang(double sisipanjang, double sisipendek) {
    return (2 * sisipanjang) + (2 * sisipendek);
}

double luaslayanglayang(double d1, double d2) {
    return (d1 * d2) / 2;
}

double kelilingtrapesium(double atas, double bawah, double samping) {
    return atas + bawah + (2 * samping);
}

double luastrapesium(double atas, double bawah, double tinggi) {
    return (atas + bawah) / 2 * tinggi;
}

double kelilinglingkaran(double diameter) {
    return 3.14 * diameter;
}

double luaslingkaran(double diameter) {
    return 3.14 * (diameter / 2) * (diameter / 2);
}

double luaskubus(double rusuk) {
    return 6 * rusuk * rusuk;
}

double volumekubus(double rusuk) {
    return rusuk * rusuk * rusuk;
}

double luasbalok(double p, double l, double t) {
    return (2 * p * l) + (2 * p * t) + (2 * l * t);
}

double volumebalok(double p, double l, double t) {
    return p * l * t;
}

double luaslimassegitiga(double a, double b, double c) {
    double s;
    s = (a + b + c) / 2;
    return 4 * sqrt(s * (s - a) * (s - b) * (s - c));
}

double volumelimassegitiga(double a, double b, double c, double tinggi) {
    double s;
    s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c)) * tinggi / 3;
}

double luaslimassegiempat(double alas, double t) {
    return (alas * alas) + 4 * (alas * t / 2);
}

double volumelimassegiempat(double alas, double T) {
    return alas * alas * T / 3;
}

double luasprismasegitiga(double a, double b, double c, double t) {
    double s;
    s = (a + b + c) / 2;
    return (2 * sqrt(s * (s - a) * (s - b) * (s - c))) + ((a + b + c) * t);
}

double volumeprismasegitiga(double a, double b, double c, double t) {
    double s;
    s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c)) * t;
}

double luastabung(double r, double t) {
    return (2 * 3.14 * r * t) + (2 * 3.14 * r * r);
}

double volumetabung(double r, double t) {
    return 3.14 * r * r * t;
}

double luaskerucut(double r, double s) {
    return (3.14 * r * s) + (3.14 * r * r);
}

double volumekerucut(double r, double t) {
    return (3.14 * r * r * t) / 3;
}

double luasbola(double r) {
    return 4 * 3.14 * r * r;
}

double volumebola(double r) {
    return (4 * 3.14 * r * r * r) / 3;
}

int main() {
    int pilihan;

    do {
        cout << "===============================================" << endl;
        cout << "     KALKULATOR KELILING, LUAS, DAN VOLUME     " << endl;
        cout << "===============================================" << endl;
        cout << endl;
        cout << "Silakan pilih jenis bangun: " << endl;
        cout << "1. Bangun datar" << endl;
        cout << "2. Bangun ruang" << endl;
        cout << "0. Keluar" << endl;
        cout << endl;
        cout << "Jenis bangun yang dipilih : ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan) {
            case 1: {
                int bangundatar;
                cout << "Silakan pilih jenis bangun datar: " << endl;
                cout << "1. Persegi" << endl;
                cout << "2. Persegi panjang" << endl;
                cout << "3. Jajar genjang" << endl;
                cout << "4. Segitiga" << endl;
                cout << "5. Belah ketupat" << endl;
                cout << "6. Layang-layang" << endl;
                cout << "7. Trapesium" << endl;
                cout << "8. Lingkaran" << endl;
                cout << "0. Kembali" << endl;
                cout << "Bangun datar yang dipilih: ";
                cin >> bangundatar;
                cout << endl;

                switch (bangundatar) {
                    case 1: {
                        double sisi;
                        cout << "Masukkan sisi persegi: ";
                        cin >> sisi;

                        cout << "Keliling persegi: " << kelilingpersegi(sisi) << endl;
                        cout << "Luas persegi: " << luaspersegi(sisi) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 2: {
                        double panjang, lebar;
                        cout << "Masukkan panjang persegi panjang: ";
                        cin >> panjang;
                        cout << "Masukkan lebar persegi panjang: ";
                        cin >> lebar;

                        cout << "Keliling persegi panjang: " << kelilingpersegipanjang(panjang, lebar) << endl;
                        cout << "Luas persegi panjang: " << luaspersegipanjang(panjang, lebar) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 3: {
                        double alasjg, sisimiringjg, tinggijg;
                        cout << "Masukkan alas jajar genjang: ";
                        cin >> alasjg;
                         cout << "Masukkan sisi miring jajar genjang: ";
                        cin >> sisimiringjg;
                        cout << "Masukkan tinggi jajar genjang: ";
                        cin >> tinggijg;

                        cout << "Keliling jajar genjang: " << kelilingjajargenjang(alasjg, sisimiringjg) << endl;
                        cout << "Luas jajar genjang: " << luasjajargenjang(alasjg, tinggijg) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 4: {
                        double a, b, c, s;
                        cout << "Masukkan sisi ke-1 segitiga : ";
                        cin >> a;
                        cout << "Masukkan sisi ke-2 segitiga: ";
                        cin >> b;
                        cout << "Masukkan sisi ke-3 segitiga: ";
                        cin >> c;

                        cout << "Keliling segitiga: " << kelilingsegitiga(a, b, c) << endl;
                        cout << "Luas segitiga: " << luassegitiga(a, b, c) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 5: {
                        double sisibk, d1bk, d2bk;
                        cout << "Masukkan sisi belah ketupat: ";
                        cin >> sisibk;
                        cout << "Masukkan diagonal 1: ";
                        cin >> d1bk;
                        cout << "Masukkan diagonal 2: ";
                        cin >> d2bk;

                        cout << "Keliling belah ketupat: " << kelilingbelahketupat(sisibk) << endl;
                        cout << "Luas belah ketupat: " << luasbelahketupat(d1bk, d2bk) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 6: {
                        double sisipanjang, sisipendek, d1ll, d2ll;
                        cout << "Masukkan sisi panjang layang-layang: ";
                        cin >> sisipanjang;
                        cout << "Masukkan sisi pendek layang-layang: ";
                        cin >> sisipendek;
                        cout << "Masukkan diagonal 1: ";
                        cin >> d1ll;
                        cout << "Masukkan diagonal 2: ";
                        cin >> d2ll;

                        cout << "Keliling layang-layang: " << kelilinglayanglayang(sisipanjang, sisipendek) << endl;
                        cout << "Luas layang-layang: " << luaslayanglayang(d1ll, d2ll) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 7: {
                        double atas, bawah, samping, tinggi;
                        cout << "Masukkan sisi atas trapesium: ";
                        cin >> atas;
                        cout << "Masukkan sisi bawah trapesium: ";
                        cin >> bawah;
                        cout << "Masukkan sisi samping trapesium: ";
                        cin >> samping;
                        cout << "Masukkan tinggi trapesium: ";
                        cin >> tinggi;

                        cout << "Keliling trapesium: " << kelilingtrapesium(atas, bawah, samping) << endl;
                        cout << "Luas trapesium: " << luastrapesium(atas, bawah, tinggi) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 8: {
                        double diameter;
                        cout << "Masukkan diameter lingkaran: ";
                        cin >> diameter;

                        cout << "Keliling lingkaran: " << kelilinglingkaran(diameter) << endl;
                        cout << "Luas lingkaran: " << luaslingkaran(diameter) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 0: {
                        system("cls");
                        break;
                    }   
                    default: {
                        cout << "Pilihan tidak valid. Coba lagi." << endl;
                    }
                }
                break;
            }
            case 2: {
                int bangunruang;
                cout << "Silakan pilih jenis bangun ruang: " << endl;
                cout << "1. Kubus" << endl;
                cout << "2. Balok" << endl;
                cout << "3. Limas segitiga" << endl;
                cout << "4. Limas segiempat" << endl;
                cout << "5. Prisma segitiga" << endl;
                cout << "6. Tabung" << endl;
                cout << "7. Kerucut" << endl;
                cout << "8. Bola" << endl;
                cout << "0. Kembali" << endl;
                cout << "Bangun ruang yang dipilih: ";
                cin >> bangunruang;
                cout << endl;

                switch (bangunruang) {
                    case 1: {
                        double rusuk;
                        cout << "Masukkan rusuk kubus: ";
                        cin >> rusuk;

                        cout << "Luas permukaan kubus: " << luaskubus(rusuk) << endl;
                        cout << "Volume kubus: " << volumekubus(rusuk) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 2: {
                        double pbalok, lbalok, tbalok;
                        cout << "Masukkan panjang balok: ";
                        cin >> pbalok;
                        cout << "Masukkan lebar balok: ";
                        cin >> lbalok;
                        cout << "Masukkan tinggi balok: ";
                        cin >> tbalok;

                        cout << "Luas permukaan balok: " << luasbalok(pbalok, lbalok, tbalok) << endl;
                        cout << "Volume balok: " << volumebalok(pbalok, lbalok, tbalok) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 3: {
                        double alimas, blimas, climas, tlimas;
                        //Keempat sisi limas segitiga sama
                        cout << "Masukkan rusuk ke-1 limas segitiga: ";
                        cin >> alimas;
                        cout << "Masukkan rusuk ke-2 limas segitiga: ";
                        cin >> blimas;
                        cout << "Masukkan rusuk ke-3 limas segitiga: ";
                        cin >> climas;
                        cout << "Masukkan tinggi limas segitiga: ";
                        cin >> tlimas;

                        cout << "Luas permukaan limas segitiga: " << luaslimassegitiga(alimas, blimas, climas) << endl;
                        cout << "Volume limas segitiga: " << volumelimassegitiga(alimas, blimas, climas, tlimas) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 4: {
                        double alaslimas, t, T;
                        cout << "Masukkan rusuk alas limas segiempat: ";
                        cin >> alaslimas;
                        cout << "Masukkan tinggi sisi miring limas segiempat: ";
                        cin >> t;
                        cout << "Masukkan tinggi limas segiempat: ";
                        cin >> T;

                        cout << "Luas permukaan limas segiempat: " << luaslimassegiempat(alaslimas, t) << endl;
                        cout << "Volume limas segiempat: " << volumelimassegiempat(alaslimas, T) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 5: {
                        double aprisma, bprisma, cprisma, tprisma;
                        //Prisma berdiri(alas segitiga di posisi bawah dan atas)
                        cout << "Masukkan rusuk ke-1 alas prisma segitiga: ";
                        cin >> aprisma;
                        cout << "Masukkan rusuk ke-2 alas prisma segitiga: ";
                        cin >> bprisma;
                        cout << "Masukkan rusuk ke-3 alas prisma segitiga: ";
                        cin >> cprisma;
                        cout << "Masukkan tinggi prisma segitiga: ";
                        cin >> tprisma;

                        cout << "Luas permukaan prisma segitiga: " << luasprismasegitiga(aprisma, bprisma, cprisma, tprisma) << endl;
                        cout << "Volume prisma segitiga: " << volumeprismasegitiga(aprisma, bprisma, cprisma, tprisma) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 6: {
                        double rtabung, ttabung;
                        cout << "Masukkan jari-jari alas tabung: ";
                        cin >> rtabung;
                        cout << "Masukkan tinggi tabung: ";
                        cin >> ttabung;

                        cout << "Luas permukaan tabung: " << luastabung(rtabung, ttabung) << endl;
                        cout << "Volume tabung: " << volumetabung(rtabung, ttabung) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 7: {
                        double rkerucut, skerucut, tkerucut;
                        cout << "Masukkan jari-jari alas kerucut: ";
                        cin >> rkerucut;
                        cout << "Masukkan garis pelukis kerucut: ";
                        cin >> skerucut;
                        cout << "Masukkan tinggi kerucut: ";
                        cin >> tkerucut;

                        cout << "Luas permukaan kerucut: " << luaskerucut(rkerucut, skerucut) << endl;
                        cout << "Volume kerucut: " << volumekerucut(rkerucut, tkerucut) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 8: {
                        double rbola;
                        cout << "Masukkan jari-jari bola: ";
                        cin >> rbola;

                        cout << "Luas permukaan bola: " << luasbola(rbola) << endl;
                        cout << "Volume bola: " << volumebola(rbola) << endl;
                        cout << endl;
                        cout << "Ingin menghitung lagi?" << endl;
                        system("pause");
                        system("cls");
                        break;
                    }
                    case 0: {
                        system("cls");
                        break;
                    }   
                    default: {
                        cout << "Pilihan tidak valid. Coba lagi." << endl;
                    }
                }
                break;
            }
            case 0: {
                system("cls");
                break;
            }    
            default: {
                cout << "Pilihan tidak valid. Coba lagi." << endl;
            }
        }

    } while (pilihan != 0);
    cout << "===================" << endl;
    cout << "     THANK YOU     " << endl;
    cout << "===================" << endl;

    return 0;
}