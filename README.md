# matrix-cpp
A C++ Matrix of Fraction class implementation

## Project purpose

This library was made to avoid me wasting time with calculus when I studied Linear Algebra. It implements the most important Matrix methods. 

## Example

With this code:

```c++
#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
    Matrix m;
    int rows, cols;
    cout << "Righe: ";
    cin >> rows;
    cout << "Colonne: ";
    cin >> cols;
    m = Matrix(rows, cols);
    cout << "Matrice:" << endl;
    cin >> m;
    cout << "******************" << endl;
    cout << "Matrice:" << endl;
    cout << m << endl;
    cout << "Scalini:" << endl;
    cout << m.step() << endl;
    cout << "Rref:" << endl;
    cout << m.rref() << endl;
    if(m.isInvertible()) {
        cout << "Inversa:" << endl;
        cout << m.invert() << endl;
        cout << "M * Inv:" << endl;
        cout << m * m.invert() << endl; 
    } 
    if(m.isSquare()) {
        cout << "det = " << m.det() << endl;
    }
}
```
The result could be:

![Example Result](https://github.com/euberdeveloper/matrix-cpp/blob/master/matrix_example.png)

## Run tests

On windows, you can use these three batch file to build/run/build&run tests:

* __build_test.bat__
* __run_test.bat__
* __test.bat__

## TODO

- [ ] Add algebric (variable parameters) support
- [ ] Add a cli commandline
- [ ] Add missing matrix functions
