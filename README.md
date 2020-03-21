# Barcode Scanner

Barcode Scanner is an application for searching barcode with upc number.

We use this application to test the time performance of two data structures, array and binary search tree.

# Getting Started

## Run Application

1. Please copy and paste the following command line in your terminal to build the project.
```
g++ BarcodeScannerTest.cpp BinarySearchTree.cpp Array.cpp Barcode.cpp BarcodeArrayScanner.cpp BarcodeBSTScanner.cpp -o BarcodeScannerTest
```

2. Then run the application with the text file path specified
```
./BarcodeScannerTest [enter_input_file_path_here] (ex: ./BarcodeScannerTest /home/user/cs300_4/upc_corpus.txt)
```

## Run Performance Test

1. Please copy and paste the following command line in your terminal to build the project.
```
g++ ArrayAndBSTPerformance.cpp BinarySearchTree.cpp Array.cpp Barcode.cpp BarcodeArrayScanner.cpp BarcodeBSTScanner.cpp -o ArrayAndBSTPerformance
```

2. Then run the application with the text file path specified
```
./ArrayAndBSTPerformance [enter_input_file_path_here] (ex: ./ArrayAndBSTPerformance /home/user/cs300_4/upc_corpus.txt)
```
You will see the performance test result after running the test:

```
Loading file... Please wait.

Now search 100 times:
Time taken of searching 100 times in BST:   315 milliseconds
Time taken of searching 100 times in array: 2991864 milliseconds

Now search 200 times:
Time taken of searching 200 times in BST:   616 milliseconds
Time taken of searching 200 times in array: 5984024 milliseconds

Now search 300 times:
Time taken of searching 300 times in BST:   1136 milliseconds
Time taken of searching 300 times in array: 9099442 milliseconds

Now search 400 times:
Time taken of searching 400 times in BST:   1477 milliseconds
Time taken of searching 400 times in array: 11460447 milliseconds

Now search 500 times:
Time taken of searching 500 times in BST:   1621 milliseconds
Time taken of searching 500 times in array: 13938310 milliseconds

Now search 600 times:
Time taken of searching 600 times in BST:   2078 milliseconds
Time taken of searching 600 times in array: 16484603 milliseconds

Now search 700 times:
Time taken of searching 700 times in BST:   1867 milliseconds
Time taken of searching 700 times in array: 18344636 milliseconds

Now search 800 times:
Time taken of searching 800 times in BST:   2125 milliseconds
Time taken of searching 800 times in array: 20799212 milliseconds

Now search 900 times:
Time taken of searching 900 times in BST:   2415 milliseconds
Time taken of searching 900 times in array: 23065105 milliseconds

Now search 1000 times:
Time taken of searching 1000 times in BST:   2493 milliseconds
Time taken of searching 1000 times in array: 25274853 milliseconds

```

# Data Structure Performance Analysis
Here is the result of time performance.

<img width="800" alt="time performance graph BST" src="https://user-images.githubusercontent.com/23665164/49344548-b37bdb00-f62d-11e8-9923-640a0614dc1b.png">

<img width="800" alt="time performance graph Array" src="https://user-images.githubusercontent.com/23665164/49344549-b37bdb00-f62d-11e8-8f5b-8a04b63310f6.png">
