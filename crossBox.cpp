// crossBox will print a box with a cross through it for "nicely" dividing integers.
#include <iostream>
#include <string>
using namespace std;

int main() {
    //Only use values that divide "nicely"
    int row = 3;
    int col = 2;

    while (col%row != 0) {
    cout << "Enter the number of rows: ";
    cin  >> row;
    cout << "Enter the number of columns: ";
    cin  >> col;
    }

    string crossBox = "";

    for (int i = 0; i < row; i++){

        for (int j = 0; j < col; j++) {

        //    Top/Bottom                Right/Left                 Decreasing line      Increasing line
        if (((i == 0 || i == row-1) || (j == 0 || j == col-1)) || ((col/row)*i == j || (col/row)*(row - i - 1) == j)        ) {
            crossBox += "*";
        }
        else {
            crossBox += " ";
        }

        }
        crossBox += "\n";
    }

    cout << crossBox;
    return 0;
}
