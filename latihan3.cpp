#include <iostream>
using namespace std;

int main (){
    double nilM, nilB, rerata;
    string status;
    cout << "masukan nilai matematika= ";
    cin >> nilM;
    cout << "masukan nilai bahasa indonesia= ";
    cin >> nilB;
    rerata = (nilM+nilB)/2; 
    if (rerata >= 60) 
    status= "lulus";
    else 
    status = "gagal";
    cout << "status kelulusan= " << status;
    return 0;

}