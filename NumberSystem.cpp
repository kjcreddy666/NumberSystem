/*
                               ----------------
                                     Aim 
                               ----------------
      To convert a number from one number system to another number system.
      1. Binary to Octal, Decimal, Hexa Decimal, Excel
      2. Octal to Binary, Decimal, Hexa Decimal, Excel
      3. Decimal to Binary, Octal, Hexa Decimal, Excel
      4. Hexa Decimal to Binary, Octal, Decimal, Excel
      5. Excel to Binary, Octal, Decimal, Hexa Decimal

                                 ----------------
                                  Author Details
                                 ----------------
      Name : Kappeta Jaya Chandar Reddy
      Github ID : kjcreddy666
      LinkedIn URL : https://www.linkedin.com/in/kjcreddy666
*/

#include <iostream>
using namespace std;

void binary();
void octal();
void decimal();
void hexaDecimal();
void excel();
int binaryToDecimal(int binaryNumber);
int octalToDecimal(int octalNumber);
int hexaDecimalToDecimal(string hexaDecimalNumber);
int excelToDecimal(string excelNumber);
string decimalToBinary(int decimalNumber);
string decimalToOctal(int decimalNumber);
string decimalToHexaDecimal(int decimalNumber);
string decimalToExcel(int decimalNumber);

int main() {
    int option;
    do {
        cout << "**** MENU ****\n1.Binary     2.Octal     3.Decimal     4.Hexa Decimal     5.Excel     6.exit\n";
        cout << "Enter the option from which to convert : ";
        cin >> option;
        switch(option) {
            case 1 : 
                binary(); 
                break;
            case 2 : 
                octal();  
                break;
            case 3 : 
                decimal();
                break;
            case 4 :
                hexaDecimal();
                break;
            case 5 :
                excel();
                break;
            default :
                cout << "Invalid Choice!!!" << endl;
        }
    }
    while(option != 6);
}

void binary() {
    cout << "Enter the Binary number : ";
    int binaryNumber; cin >> binaryNumber;
    int decimalNumber;
    string result;
    cout << "**** MENU ****\n";
    cout << "1.Octal     2.Decimal     3.Hexa Decimal     4.Excel     5.Exit\n";
    cout << "Enter the option to which to convert : ";
    int option; cin >> option;
    switch(option) { 
        case 1 :
            decimalNumber = binaryToDecimal(binaryNumber);
            result = decimalToOctal(decimalNumber);
            cout << "Binary Number --> "<< binaryNumber << "\nOctal Number --> " << result << endl;
            break; 
        case 2 :
            decimalNumber = binaryToDecimal(binaryNumber);
            cout << "Binary Number --> "<< binaryNumber << "\nDecimal Number --> " << result << endl;
            break;
        case 3 :
            decimalNumber = binaryToDecimal(binaryNumber);
            result = decimalToHexaDecimal(decimalNumber);
            cout << "Binary Number --> "<< binaryNumber << "\nHexa Decimal Number --> " << result << endl;
            break;
        case 4 :
            decimalNumber = binaryToDecimal(binaryNumber);
            result = decimalToExcel(decimalNumber);
            cout << "Binary Number --> "<< binaryNumber << "\nExcel Number --> " << result << endl;
            break;
        case 5 :
            return;
        default :
            cout << "Invalid Option" << endl;
    }
}

void octal() {
    cout << "Enter the Octal number : ";
    int octalNumber; cin >> octalNumber;
    int decimalNumber;
    string result;
    cout << "**** MENU ****\n";
    cout << "1.Binary     2.Decimal     3.Hexa Decimal     4.Excel     5.Exit\n";
    cout << "Enter the option to which to convert : ";
    int option; cin >> option;
    switch(option) { 
        case 1 :
            decimalNumber = octalToDecimal(octalNumber);
            result = decimalToBinary(decimalNumber);
            cout << "Octal Number" << octalNumber << "Binary Number --> " << result << endl;
            break; 
        case 2 :
            decimalNumber = octalToDecimal(octalNumber);
            cout << "Octal Number" << octalNumber << "Decimal Number --> "  << decimalNumber << endl; 
            break;
        case 3 :
            decimalNumber = octalToDecimal(octalNumber);
            result = decimalToHexaDecimal(decimalNumber);
            cout << "Octal Number" << octalNumber << "Hexa Decimal Numberr --> " << result << endl; 
            break;
        case 4 :
            decimalNumber = octalToDecimal(octalNumber);
            result = decimalToExcel(decimalNumber);
            cout << "Octal Number --> " << octalNumber << "Excel --> " << result << endl; 
            break;
        case 5 :
            return;
        default :
            cout << "Invalid Option" << endl;
    }
}

void decimal() {
    cout << "Enter the Decimal number : ";
    int decimalNumber; cin >> decimalNumber;
    string result;
    cout << "**** MENU ****\n";
    cout << "1.Binary     2.Octal     3.Hexa Decimal     4.Excel     5.Exit\n";
    cout << "Enter the option to which to convert : ";
    int option; cin >> option;
    switch(option) { 
        case 1 :
            result = decimalToBinary(decimalNumber);
            cout << "Decimal Number --> " << decimalNumber << "Binary Number --> " << result << endl;
            break; 
        case 2 :
            result = decimalToOctal(decimalNumber);
            cout << "Decimal Number --> " << decimalNumber << "Octal Number --> " << result << endl; 
            break;
        case 3 :
            result = decimalToHexaDecimal(decimalNumber);
            cout << "Decimal Number --> " << decimalNumber << "Hexa Decimal Numberr --> " << result << endl; 
            break;
        case 4 :
            result = decimalToExcel(decimalNumber);
            cout << "Decimal Number --> " << decimalNumber << "Excel --> " << result << endl; 
            break;
        case 5 :
            return;
        default :
            cout << "Invalid Option" << endl;
    }
}

void hexaDecimal() {
    cout << "Enter the Hexa Decimal number : ";
    string hexaDecimalNumber; cin >> hexaDecimalNumber;
    int decimalNumber;
    string result;
    cout << "**** MENU ****\n";
    cout << "1.Binary     2.Octal     3.Decimal     4.Excel     5.Exit\n";
    cout << "Enter the option to which to convert : ";
    int option; cin >> option;
    switch(option) { 
        case 1 :
            decimalNumber = hexaDecimalToDecimal(hexaDecimalNumber);
            result = decimalToBinary(decimalNumber);
            cout << "Hexa Decimal Number --> " << hexaDecimalNumber << "Binary Number --> " << result << endl;
            break; 
        case 2 :
            decimalNumber = hexaDecimalToDecimal(hexaDecimalNumber);
            result = decimalToOctal(decimalNumber);
            cout << "Hexa Decimal Number --> " << hexaDecimalNumber << "Octal Number --> " << result << endl; 
            break;
        case 3 :
            decimalNumber = hexaDecimalToDecimal(hexaDecimalNumber);
            cout << "Hexa Decimal Number --> " << hexaDecimalNumber << "Decimal Number --> " << decimalNumber << endl; 
            break;
        case 4 :
            decimalNumber = hexaDecimalToDecimal(hexaDecimalNumber);
            result = decimalToExcel(decimalNumber);
            cout << "Hexa Decimal Number --> " << hexaDecimalNumber << "Excel --> " << result << endl; 
            break;
        case 5 :
            return;
        default :
            cout << "Invalid Option" << endl;
    }
}

void excel() {
    cout << "Enter the Excel number : ";
    string excelNumber; cin >> excelNumber;
    int decimalNumber;
    string result;
    cout << "**** MENU ****\n";
    cout << "1.Binary     2.Octal     3.Decimal     4.Hexa Decimal     5.Exit\n";
    cout << "Enter the option to which to convert : ";
    int option; cin >> option;
    switch(option) { 
        case 1 :
            decimalNumber = excelToDecimal(excelNumber);
            result = decimalToBinary(decimalNumber);
            cout << "Excel Number --> "<< excelNumber << "\nBinary Number --> " << result << endl;
            break; 
        case 2 :
            decimalNumber = excelToDecimal(excelNumber);
            result = decimalToOctal(decimalNumber);
            cout << "Excel Number --> " << excelNumber << "Octal Number --> " << result << endl; 
            break;
        case 3 :
            decimalNumber = excelToDecimal(excelNumber);
            cout << "Excel Number --> " << excelNumber << "Decimal Number --> " << decimalNumber << endl; 
            break;
        case 4 :
            decimalNumber = excelToDecimal(excelNumber);
            result = decimalToHexaDecimal(decimalNumber);
            cout << "Excel Number" << excelNumber << "Hexa Decimal Numberr --> " << result << endl; 
            break;
        case 5 :
            return;
        default :
            cout << "Invalid Option" << endl;
    }
}

int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0;
    int base = 1;
    while(binaryNumber > 0) {
        int lastDigit = binaryNumber % 10;
        decimalNumber += lastDigit * base;
        base *= 2;
        binaryNumber /= 10;
    }
    return decimalNumber;
}

int octalToDecimal(int octalNumber) {
    int decimalNumber = 0;
    int base = 1;
    while(octalNumber > 0) {
        int lastDigit = octalNumber % 10;
        decimalNumber += lastDigit * base;
        base *= 8;
        octalNumber /= 10;
    }
    return decimalNumber;
}

int hexaDecimalToDecimal(string hexaDecimalNumber) {
    int decimalNumber = 0;
    int base = 1;
    int size = hexaDecimalNumber.size();
    for(int i = size - 1; i >= 0; i--) {
        if(hexaDecimalNumber[i] >= '0' && hexaDecimalNumber[i] <= '9') {
            decimalNumber += (hexaDecimalNumber[i] - '0') * base;
        }
        else if(hexaDecimalNumber[i] >= 'A' && hexaDecimalNumber[i] <= 'F') {
            decimalNumber += (hexaDecimalNumber[i] - 'A' + 10) * base;
        }
        base *= 16;
    }
    return decimalNumber;
}

int excelToDecimal(string excelNumber) {
    int decimalNumber = 0;
    int base = 1;
    int size = excelNumber.size();
    for(int i = size - 1; i >= 0; i--) {
        decimalNumber += (excelNumber[i] - 'A' + 1) * base;
        base *= 26;
    }
    return decimalNumber;
}

string decimalToBinary(int decimalNumber) {
    int binaryNumber = 0;
    int base = 1;
    while(decimalNumber > 0) {
        int lastDigit = decimalNumber % 2;
        binaryNumber += lastDigit * base;
        base *= 10;
        decimalNumber /= 2;
    }
    return to_string(binaryNumber);
}

string decimalToOctal(int decimalNumber) {
    int octalNumber = 0;
    int base = 1;
    while(decimalNumber > 0) {
        int lastDigit = decimalNumber % 8;
        octalNumber += lastDigit * base;
        base *= 10;
        decimalNumber /= 8;
    }
    return to_string(octalNumber);
}

string decimalToHexaDecimal(int decimalNumber) {
    string hexaDecimalNumber = "";
    while(decimalNumber > 0) {
        int lastDigit = decimalNumber % 16;
        if(lastDigit >= 0 && lastDigit <= 9) {
            hexaDecimalNumber += (char)(lastDigit + 48);
        }
        else {
            hexaDecimalNumber += (char)(lastDigit + 55);
        }
        decimalNumber /= 16;
    }
    return hexaDecimalNumber;
}

string decimalToExcel(int decimalNumber) {
    string excelNumber = "";
    while(decimalNumber > 0) {
        int lastDigit = decimalNumber % 26;
        excelNumber += (char)(lastDigit + 65);
        decimalNumber /= 26;
    }
    return excelNumber;
}