// ConsoleApplication6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    // zadanie 4

    /*
        float a, b;
    cout << "wprowadz dwie liczby zmiennoprzecinkowe i znak działania - ’+’ lub ’-’ lub ’*’ lub ’/’" << endl;
    cin >> a >> b;
    char znak;
    cin >> znak;
    if (znak == '+')
    {
        cout << a + b << endl;
    }
    else if (znak == '-')
    {
        cout << a - b << endl;
    }
    else if (znak == '*')
    {
        cout << a * b << endl;
    }
    else if (znak == '/')
    {
        if (b != 0)
        {
            cout << a / b << endl;
        }
        else
        {
            cout << "Nie dziel przez zero" << endl;
        }

    }
    else
    {
        cout << "Niepoprawny znak działania" << endl;
    }
    */



    //zadanie 5
    //a)
    /*
    int i = 0;

    while (true)
    {
        i > -1; i++;
        cout << i;

    }
    return 0;
    */

    //b)
    /*
    bool zmienna_logiczna = true;

    if (zmienna_logiczna == true)
        cout << "PRAWDA" << endl;
    else
        cout << "FALSZ" << endl;
    return 0;
    */

    //zadanie 6

    
    /*
    float a, b;
    while (true) {

        cout << "wprowadz dwie liczby zmiennoprzecinkowe i znak działania - ’+’ lub ’-’ lub ’*’ lub ’/’" << endl;
        cin >> a >> b;
        char znak;
        cin >> znak;
        if (znak == '+')
        {
            cout << a + b << endl;
        }
        else if (znak == '-')
        {
            cout << a - b << endl;
        }
        else if (znak == '*')
        {
            cout << a * b << endl;
        }
        else if (znak == '/')
        {
            if (b != 0)
            {
                cout << a / b << endl;
            }
            else
            {
                cout << "Nie dziel przez zero" << endl;
            }

        }
        else
        {
            cout << "Niepoprawny znak działania" << endl;
        }
        cout << "kontynuowac? (t/ n)" << endl;
        if (cin.get() == 't') {
            continue;
        }

        else if (cin.get() == 'n') {
            break;
        }
    }
            
*/



//zadanie 7

/*
for (int i = 0; i <=200; i++)
{
    
    if
        (i % 2 == 0)
       
        cout << i - 1 << endl;
}
*/


//zadanie 9 

/*
int r;
cout << "Podaj temperature" << endl;
cin >> r;
if (r<0)
{
    cout << "Mroz" << endl;
}
else if (r>=0 && r<10)
{
    cout << "zimno" << endl;
}
else if (r >=10 && r < 20)
{
    cout << "umiarkowanie" << endl;
}
else if (r>=20 && r<30)
{
    cout << "cieplo" << endl;
}
else if (r>=30)
{
    cout << "goraco" << endl;
}
*/

//zadanie 10

/*
int a, b,c;
cout << "Podaj trzy liczby" << endl;
cin >> a >> b >> c;
if (a > b && a > c)
{
    cout << a << endl;
}
else if (a==b && a==c && b==c)
{
    cout << a << " " << b << " " << c<<endl;
}
else if (a>=b && a>c)
{
    cout << a << " " << b<<endl;
}
else if (b > a && b > c)
{
    cout << b << endl;
}
else if (c > a && c > b)
{
    cout << c << endl;
}
else if (b>=a && b >c)
{
    cout << b << endl;
}
else if (b >= a && b == c)
{
    cout << b << " " << c << endl;
}
else if (a >= b && a == c)
{
    cout << a << " " << c << endl;
}
*/










}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
