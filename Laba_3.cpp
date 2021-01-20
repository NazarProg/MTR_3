// Laba_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

//Variant 2
int main()
{
    double x1, p1, y1;
    double x2, p2, y2;
    double x3, p3, y3;
    double  L1, L2, L3, UL1, UL2, UL3, D1, D2, D3, pi1, pi2, pi3;
    cout << "Input first lottery" << endl;
    cout << " Enter x minimum:  " << endl;
    cin >> x1;
    cout << "Enter p: " << endl;
    cin >> p1;
    cout << "Enter x maximum: " << endl;
    cin >> y1;
    cout << "Input second lottery" << endl;
    cout << " Enter x minimum:  " << endl;
    cin >> x2;
    cout << "Enter p: " << endl;
    cin >> p2;
    cout << "Enter x maximum: " << endl;
    cin >> y2;
    cout << "Input third lottery" << endl;
    cout << " Enter x minimum:  " << endl;
    cin >> x3;
    cout << "Enter p: " << endl;
    cin >> p3;
    cout << "Enter x maximum: " << endl;
    cin >> y3;
    L1 = (x1 + y1) * p1;
    L2 = (x2 + y2) * p2;
    L3 = (x3 + y3) * p3;
    UL1 = p1 * log(30 + x1) + p1 * log(30 + y1);
    UL2 = p2 * log(30 + x2) + p2 * log(30 + y2);
    UL3 = p3 * log(30 + x3) + p3 * log(30 + y3);
    D1 = exp(UL1) - 30;
    D2 = exp(UL2) - 30;
    D3 = exp(UL3) - 30;
    pi1 = L1 - D1;
    pi2 = L2 - D2;
    pi3 = L2 - D3;
    cout << "Lottery 1 : " << endl;
    cout << " Spodivany vygrash: " << L1 << endl;
    cout << " Spodivana korysnist: " << UL1 << endl;
    cout << "Determinovany ekvivalent:  " << D1 << endl;
    cout << " Premiya za ryzyk: " << pi1 << endl;
    cout << "Lottery 2 : " << endl;
    cout << " Spodivany vygrash: " << L2 << endl;
    cout << " Spodivana korysnist: " << UL2 << endl;
    cout << "Determinovany ekvivalent:  " << D2 << endl;
    cout << " Premiya za ryzyk: " << pi2 << endl;
    cout << "Lottery 3 : " << endl;
    cout << " Spodivany vygrash: " << L3 << endl;
    cout << " Spodivana korysnist: " << UL3 << endl;
    cout << "Determinovany ekvivalent:  " << D3 << endl;
    cout << " Premiya za ryzyk: " << pi3 << endl;
    double ma[3] = { UL1, UL2, UL3 };
    double max = ma[0];

    for (int i = 0; i < 3; ++i) {
        if (ma[i] > max) {
            max = ma[i];
        }
    }

    cout << "Player will choose lottery : " << max << endl;

    if (L1 > UL1 || L2 > UL2 || L3 > UL3) {
        cout << "Person is risk avers " << endl;
    }
    else if (L1 < UL1 || L2 < UL2 || L3 < UL3) {
        cout << "Person is risk lover" << endl;
    }
    else {
        cout << "Person is risk neutral" << endl;
    }

   
    return 0;

}



