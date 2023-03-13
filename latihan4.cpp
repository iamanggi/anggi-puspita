#include <iostream>
using namespace std;

double rerata (double a, double b){
    return (a+b)/2;
}
string status (double rata){
    if (rata >= 60)
    return "lulus";
    else 
    return "gagal";
}
string status2 (double rata, double nilM){
    if (rata >= 60 || nilM>=70)
    return "lulus";
    else 
    return "gagal";
}

int main (){
    double nilM, nilB;
    cout << "nilai matematika = ";
    cin >> nilM;
    cout << "nilai bahasa indonesia = ";
    cin >> nilB;
    cout << "status kelulusan = " << status(rerata (nilM,nilB)) << endl;
    cout << "status kelulusan = " << status2(rerata (nilM,nilB), nilM);
    return 0;

}