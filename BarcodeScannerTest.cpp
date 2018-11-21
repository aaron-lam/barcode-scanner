/**
 * This is a main program for the Barcode Application
 * CS 300 Assignment 4
 * Professor Fatma Serce
 * @author: Aaron Lam
 * @date: 11-19-2018
 */

#include <iostream>
#include <limits>

#include "BarcodeArrayScanner.h"
#include "BarcodeBSTScanner.h"

using namespace std;

void runApplication(BarcodeArrayScanner& arrayScanner, BarCodeBSTScanner& bstScanner);

bool isUpc(string &s);

const string getUserInput();

int main(int argc, char** argv) {
    cout << "Loading file... Please wait." << endl;
    string fileName = argv[1];
    BarcodeArrayScanner arrayScanner(fileName);
    BarCodeBSTScanner bstScanner(fileName);
    runApplication(arrayScanner, bstScanner);
    return 0;
}

/**
 * @return true if the string is a valid upc number, else return false.
 */
bool isUpc(string &s) {
    for (char c : s) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

/**
 * @return the upc number that user entered.
 */
const string getUserInput() {
    string input;
    // when user typed in invalid operation, clear the bad input flag and discard input
    while (cout << "UPC Code (Enter 0 to quit the program): " && (!(cin >> input)) || (!isUpc(input))) {
        cin.clear();
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid operation. Please try again." << endl;
    }
    return input;
}

/**
 * Start the Barcode application.
 */
void runApplication(BarcodeArrayScanner& arrayScanner, BarCodeBSTScanner& bstScanner) {
    while (true) {
        string upc = getUserInput();

        if (upc == "0") {
            break;
        }

        clock_t arrayTimer = clock();
        Barcode barcode = arrayScanner.find(upc);
        arrayTimer = clock() - arrayTimer;

        clock_t bstTimer = clock();
        Barcode barcode2 = bstScanner.find(upc);
        bstTimer = clock() - bstTimer;

        if (barcode.getDescription().empty()) {
            cout << "The item was not found." << endl;
        } else {
            cout << barcode.getDescription() << endl;
        }
        cout << "BST time: " << bstTimer << " milliseconds" << endl;
        cout << "Array time: " << arrayTimer << " milliseconds\n" << endl;
    }
}
