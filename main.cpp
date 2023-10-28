#include <iostream>

using namespace std;

float inputNumbers(int zahl)//input of numbers you want to calculate with
{ 
    cout << "\nGib die " << zahl << ". Zahl an: ";
    float input = 0;
    cin >> input;
    cout << endl;
    return input;
}

void menue();//making compiler aware that there is a function named "menue" coming

void printResult(float result)//printing the result and clearing screen into menue-loop
{
    cout << "Das Resultat ist: " << result << "\n\n\n";
    
    system("PAUSE");
    system("CLS");
    menue();
}

void addition()//simple addition of 2 numbers
{
    float zahl1 = inputNumbers(1), zahl2 = inputNumbers(2);
    float result = zahl1 + zahl2;
    printResult(result);
}

void subtraktion()//simple subtraction of 2 numbers
{
    float zahl1 = inputNumbers(1), zahl2 = inputNumbers(2);
    float result = zahl1 - zahl2;
    printResult(result);
}

void multiplikation()//simple multiplication of 2 numbers
{
    float zahl1 = inputNumbers(1), zahl2 = inputNumbers(2);
    float result = zahl1 * zahl2;
    printResult(result);
}

void division()//simple division of 2 numbers
{
    float zahl1 = inputNumbers(1), zahl2 = inputNumbers(2);
    float result = zahl1 / zahl2;
    printResult(result);
}

void menue()
{
    char eingabe = ' ';

    cout << "\t\t TASCHENRECHNER \n\n";
    cout << "\tTriff deine Auswahl:\n";
    cout << "\t (1) Addieren\n";
    cout << "\t (2) Subtrahieren\n";
    cout << "\t (3) Multiplizieren\n";
    cout << "\t (4) Dividieren\n\n";
    cout << "\t (q) Beenden\n";

    cin >> eingabe;

    switch(eingabe)
    {
        case ('1'):
            addition();
            break;
        case ('2'):
            subtraktion();
            break;
        case ('3'):
            multiplikation();
            break;
        case ('4'):
            division();
            break;
        case ('q'):
            break;
        default :
        cout << "Eingabe nicht erkannt\n\n";
        system("PAUSE");
        system("CLS");
        menue();
        break;
    }
}

int main()
{   
    menue();
    system("CLS");

    return 0;
}