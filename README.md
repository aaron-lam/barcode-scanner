# BarcodeScanner

BarcodeScanner is an application for searching barcode with upc number.

We use this application to test the time performance of two data structures, array and binary search tree.

# Getting Started

## Run Application

1. Please copy and paste the following command line in your terminal to build the project.
```
g++ BarcodeScannerTest.cpp BinarySearchTree.cpp BinarySearchTree.h Array.cpp Array.h Barcode.cpp Barcode.h BarcodeArrayScanner.cpp BarcodeArrayScanner.h BarcodeBSTScanner.cpp BarcodeBSTScanner.h -o BarcodeScannerTest
```

2. Then run the application with the text file path specified
```
./BarcodeScannerTest [enter_input_file_path_here] (ex: ./BarcodeScannerTest /home/user/cs300_4/upc_corpus.txt)
```

## Run Performance Test

1. Please copy and paste the following command line in your terminal to build the project.
```
g++ ArrayAndBSTPerformance.cpp BinarySearchTree.cpp BinarySearchTree.h Array.cpp Array.h Barcode.cpp Barcode.h BarcodeArrayScanner.cpp BarcodeArrayScanner.h BarcodeBSTScanner.cpp BarcodeBSTScanner.h -o ArrayAndBSTPerformance`
```

2. Then run the application with the text file path specified
```
./ArrayAndBSTPerformance [enter_input_file_path_here] (ex: ./ArrayAndBSTPerformance /home/user/cs300_4/upc_corpus.txt)
```
You will see the performance test result after running the test:

```
Loading file... Please wait.

Now search 10 times:
Time taken of searching 10 times in BST:   11500305 milliseconds
Time taken of searching 10 times in array: 11794052 milliseconds

Now search 100 times:
Time taken of searching 100 times in BST:   11794596 milliseconds
Time taken of searching 100 times in array: 14799054 milliseconds

Now search 1000 times:
Time taken of searching 1000 times in BST:   14802977 milliseconds
Time taken of searching 1000 times in array: 40189495 milliseconds
```

# Time analysis
Here is the result of time performance.
![image](https://user-images.githubusercontent.com/23665164/48855480-fbb31780-ed68-11e8-8afc-c84b967a8330.png)
