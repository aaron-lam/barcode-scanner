/**
 * This file is for testing the performance of Array and Binary Search Tree
 * CS 300 Assignment 4
 * Professor Fatma Serce
 * @author: Aaron Lam
 * @date: 11-19-2018
 */

#include <iostream>
#include <limits>
#include <vector>

#include "BarcodeArrayScanner.h"
#include "BarcodeBSTScanner.h"

using namespace std;

void testPerformance(BarcodeArrayScanner &, BarCodeBSTScanner &bstScanner, vector<string> &list, int loopTimes);

int main(int argc, char** argv) {
    cout << "Loading file... Please wait.\n" << endl;
    string fileName = argv[1];
    BarcodeArrayScanner arrayScanner(fileName);
    BarCodeBSTScanner bstScanner(fileName);
    vector<string> list;
    // read input file and saved upc numbers in vector for testing.
    ifstream infile(fileName);
    string upc;
    string info;
    while (getline(infile, info)) {
        upc = info.substr(0, info.find(','));
        list.push_back(upc);
    }
    // test array and bst performance based on different number of looping times.
    testPerformance(arrayScanner, bstScanner, list, 10);
    testPerformance(arrayScanner, bstScanner, list, 100);
    testPerformance(arrayScanner, bstScanner, list, 1000);
}x

/**
 * Print the time performance for both array and BST in certain looping times.
 */
void testPerformance(BarcodeArrayScanner& arrayScanner, BarCodeBSTScanner& bstScanner, vector<string>& list, int loopTimes) {
    clock_t arrayTotalTime = clock();
    clock_t bstTotalTime = clock();

    cout << "Now search " << loopTimes << " times:" << endl;
    for (int i = 0; i < loopTimes; i++) {
        string res = list.at(i);

        clock_t arrayTimer = clock();
        Barcode barcode = arrayScanner.find(res);
        arrayTimer = clock() - arrayTimer;

        clock_t bstTimer = clock();
        Barcode barcode2 = bstScanner.find(res);
        bstTimer = clock() - bstTimer;

        arrayTotalTime += arrayTimer;
        bstTotalTime += bstTimer;
    }

    cout << "Time taken of searching " << loopTimes << " times in BST:   " << bstTotalTime << " milliseconds" << endl;
    cout << "Time taken of searching " << loopTimes << " times in array: " << arrayTotalTime << " milliseconds\n" << endl;
}
