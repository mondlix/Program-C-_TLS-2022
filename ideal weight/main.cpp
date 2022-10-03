#include <iostream>

using namespace std;

int main()
{
    string gender;
    float tb, bb, bbi;
    cout << "Jenis kelamin (tulis dalam L/P) \t: ";
    cin >> gender;

    cout << "Masukkan tinggi badan (dalam cm) \t: ";
    cin >> tb;

    cout << "Masukkan berat badan (dalam kg) \t: ";
    cin >> bb;


    if(gender=="L"){
        bbi = (tb - 100) - ((tb-100) * 0.1);
    }
    else if(gender=="P"){
        bbi = (tb - 100) - ((tb-100) * 0.15);
    }
    else {
        cout << "Jenis kelamin salah, masukkan dalam bentuk L/P (huruf besar)"<< endl;
        bbi = 0;
    }


    if (bbi != 0) {
        if(bbi==bb){
            cout<< "berat badan ideal \t \t \t: "<<bbi<< " kg"<< endl;
            cout<< "berat badan Anda ideal"<<endl;
        } else if (bbi<bb){
            cout<< "berat badan ideal \t \t \t: "<<bbi<< " kg"<< endl;
            cout<< "berat badan Anda melebihi berat badan ideal"<<endl;
            cout<< "kelebihan berat badan \t \t \t: "<<(bb-bbi)<<" kg"<<endl;
        }  else if (bb<bbi){
            cout<< "berat badan ideal \t \t \t: "<<bbi<< " kg"<< endl;
            cout<< "berat badan Anda kurang dari berat badan ideal"<<endl;
            cout<< "kekurangan berat badan \t \t \t: "<<(bbi-bb)<<" kg"<<endl;
        }
    }
    return 0;
}
