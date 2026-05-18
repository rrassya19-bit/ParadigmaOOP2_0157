#include <iostream>
#include <string>
#include <iomanip>   
using namespace std;

class RekeningBank {
    protected:
        string namaNasabah;
        double saldo;

    public:
        RekeningBank(string pNama, double pSaldo) : namaNasabah(pNama), saldo(pSaldo) {}
        virtual void potongAdmin() = 0;

        double getSaldo()  
        { 
            return saldo; 
        }       
        string getNama()   
        {
            return namaNasabah; 
        }  

        void tampilInfo()
        {
            cout << "Nasabah : " << namaNasabah << endl;
            cout << "Saldo   : Rp " << saldo     << endl;
        }
        virtual ~RekeningBank() {}
};

class RekeningKonvensional : public RekeningBank {
    public:
        RekeningKonvensional(string pNama, double pSaldo) : RekeningBank(pNama, pSaldo) {}
        void potongAdmin() override 
        {
            saldo -= 15000;
            cout << "![Konvensional]-Biaya admin Rp 15.000 dipotong dari " << namaNasabah << endl;
        }
};

class RekeningSyariah : public RekeningBank {
    public:
        RekeningSyariah(string pNama, double pSaldo) : RekeningBank(pNama, pSaldo) {}
        void potongAdmin() override 
        {
            cout << "![Syariah]-Tidak ada potongan admin untuk " << namaNasabah << endl;
        }
};

class RekeningPremium : public RekeningBank {
    public:
        RekeningPremium(string pNama, double pSaldo) : RekeningBank(pNama, pSaldo) {}
        void potongAdmin() override 
        {
            if (saldo > 10000000) 
            {
                cout << "![Premium]-Saldo di atas Rp 10.000.000, " << namaNasabah << " bebas admin" << endl;
            } 

            else 
            {
                saldo -= 50000;
                cout << "![Premium]-Saldo di bawah Rp 10.000.000, biaya admin Rp 50.000 dipotong dari " << namaNasabah << endl;
            }
        }
};

int main() 
{
    RekeningBank* rekening[4];

    rekening[0] = new RekeningKonvensional("Andi", 500000);   
    rekening[1] = new RekeningSyariah("Rina", 200000);         
    rekening[2] = new RekeningPremium("Budi", 15000000);       
    rekening[3] = new RekeningPremium("Dewi", 5000000);        

    cout << fixed << setprecision(0);

    cout << "\n===================================================" << endl;
    cout << "|      PROSES AKHIR BULAN - BANK GIBRAN JAYA      |" << endl;
    cout << "===================================================" << endl;
    cout << endl;

for (int i = 0; i < 4; i++)
{
    double saldoAwal = rekening[i]->getSaldo();  

    cout << "Nasabah     : " << rekening[i]->getNama() << endl;
    cout << "Saldo Awal  : Rp " << saldoAwal            << endl;
    cout << "Saldo Akhir : Rp " << rekening[i]->getSaldo() << endl;
    rekening[i]->potongAdmin();
    cout << "________________________________________________________\n" << endl;
}

    for (int i = 0; i < 4; i++) 
    {
        delete rekening[i];
    }

    return 0;
}