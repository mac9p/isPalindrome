#include <iostream>

using namespace std;

bool czyPalindrom(string wyraz){
    string placeholder;
    placeholder = wyraz;
    for (int i = 0; i <= wyraz.length() -1 ; i++) {
        placeholder[i] = wyraz[wyraz.length()-1-i];
    }
    if (wyraz == placeholder)
        return true;
    else
        return false;
}

int main() {
    string wyraz;
    cout << " podaj wyraz";
    cin >> wyraz;
    if(czyPalindrom(wyraz)){
        cout << "wyraz to palindrom";
    }else
        cout << "wyraz nie jest palindromem";

    return 0;
}
