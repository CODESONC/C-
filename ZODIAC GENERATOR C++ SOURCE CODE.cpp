#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int tanggal,bulan;
    cout << "========== ZODIAC GENERATOR ===========" << endl;
    cout << "Masukkan Tanggal Lahir Anda (01-31) = ";
    cin >> tanggal;
    cout << "Masukkan Bulan Lahir Anda (01-12) = ";
    cin >> bulan;

    if ((tanggal>=22&&tanggal<=31&&bulan==12)||(tanggal<=18&&tanggal>0&&bulan==1)){
        cout << "Zodiak Anda Adalah = CAPRICORN";
    }
    else if ((tanggal>=20&&tanggal<=31&&bulan==1)||(tanggal<=18&&tanggal>0&&bulan==2)){
        cout << "Zodiak Anda Adalah = AQUARIUS";
    }
    else if ((tanggal>=19&&tanggal<=29&&bulan==2)||(tanggal<=20&&tanggal>0&&bulan==3)){
        cout << "Zodiak Anda Adalah = PISCES";
    }
    else if ((tanggal>=21&&tanggal<=31&&bulan==3)||(tanggal<=19&&tanggal>0&&bulan==4)){
        cout << "Zodiak Anda Adalah = ARIES";
    }
    else if ((tanggal>=21&&tanggal<=30&&bulan==4)||(tanggal<=20&&tanggal>0&&bulan==5)){
        cout << "Zodiak Anda adalah = TAURUS";
    }
    else if ((tanggal>=21&&tanggal<=31&&bulan==5)||(tanggal<=22&&tanggal>0&&bulan==6)){
        cout << "Zodiak Anda Adalah = GEMINI";
    }
    else if ((tanggal>=21&&tanggal<=30&&bulan==6)||(tanggal<=22&&tanggal>0&&bulan==7)){
        cout << "Zodiak Anda Adalah = CANCER";
    }
    else if ((tanggal>=23&&tanggal<=31&&bulan==7)||(tanggal<=22&&tanggal>0&&bulan==8)){
        cout << "Zodiak Anda Adalah = LEO";
    }
    else if ((tanggal>=23&&tanggal<=31&&bulan==8)||(tanggal<=22&&tanggal>0&&bulan==9)){
        cout << "Zodiak Anda Adalah = VIRGO";
    }
    else if ((tanggal>=23&&tanggal<=30&&bulan==9)||(tanggal<=22&&tanggal>0&&bulan==10)){
        cout << "Zodiak Anda Adalah = LIBRA";
    }
    else if ((tanggal>=23&&tanggal<=31&&bulan==10)||(tanggal<=21&&tanggal>0&&bulan==11)){
        cout << "Zodiac Anda Adalah = SCORPIO";
    }
    else if ((tanggal>=22&&tanggal<=30&&bulan==11)||(tanggal<=21&&tanggal>0&&bulan==12)){
        cout << "Zodiak Anda Adalah = SAGITTARIUS";
    }
    else{
        cout << "============================/n";
        cout << "Anda Bukan Manusia";
        cout << "============================/n";
    }
    return 0;
}
