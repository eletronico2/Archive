#include <iostream>

using namespace std;

int main ()
{
    setlocale(LC_ALL,"");
    float reddito,tassazione;
    const float PERC_0_10K = 0;
    const float PERC_10_20K = 12;
    const float PERC_20_35K = 18;
    const float PERC_35_60K = 27;
    const float PERC_60_100K = 48;
    const float PERC_100PK = 60;
    cout << "Quant'è il reddito?: ";
    cin >> reddito;
     if ((reddito>0)&&(reddito<=10000))
     {
        tassazione = reddito-((reddito*PERC_0_10K)/100);
     }
     if ((reddito>10000)&&(reddito<=20000))
     {
        tassazione = reddito-((reddito*PERC_10_20K)/100);
     }
     if ((reddito>20000)&&(reddito<=35000))
     {
        tassazione = reddito-((reddito*PERC_20_35K)/100);
     }
     if ((reddito>35000)&&(reddito<=60000)) 
     {
        tassazione = reddito-((reddito*PERC_35_60K)/100);
     }
     if ((reddito>60000)&&(reddito<=100000))
     {
        tassazione = reddito-((reddito*PERC_60_100K)/100);
     }
     if (reddito>100000)
     {
        tassazione = reddito-((reddito*PERC_100PK)/100);
     }
    cout << "Si deve pagare " << tassazione << endl;
    return 0;
}