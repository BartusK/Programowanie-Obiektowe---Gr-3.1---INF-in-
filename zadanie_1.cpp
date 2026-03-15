#include <iostream>

using namespace std;

int main() {
    
    
    // Użytkownik ma wpisać wartość, wartość określoną jako zmienną 'int' dla programu.
    int value;
    cin >> value;
    
    // Zadanie nr.2 - value to wartość początkowa od użytkownika i ma być dodane 10 do tej wartości.
    value = value + 10;
    
    
    //Zdjęcie które Pan dołączył do zadania odlicza się do 5 wliczając 0 a ma się odliczać do pięciu pozycji, dlatego górną granice ustawiłem na 4 a "++" dodaje 1 tak jak  C#.
    //Jednak sie pomyłiłem i powinno być 5 a nie 4 w pętli.
    
    for (int start = 0; start < 5; start++) {
        
    
    
    cout << "This is " << start << " iteraction and this is my value: " << value << endl;
    }

    return 0;
}