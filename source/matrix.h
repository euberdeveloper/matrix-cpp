#ifndef MATRIX
#define MATRIX

#include <iostream>
#include <ctime>
#include "fract.h"
using namespace std;

class Matrix {

    private:
        Fract** matrix;
        int rows, cols;
        void _mStep(int row = 0, int col = 0);
        void _mRref(int r = 0, int c = 0);
        void _iStep(Matrix& inverse, int row = 0, int col = 0);
        void _iRref(Matrix& inverse, int r = 0, int c = 0);
        Fract _det(Matrix& m);

    public:
        Matrix(int dim = 1, const Fract& init = Fract());
        Matrix(int rows, int cols, const Fract& init = Fract());
        Matrix(int rows, int cols, Fract** matrix);
        Matrix(const Matrix& m);
        bool isNull();
        bool isSquare();
        bool isDiagonal();
        bool isIdentity();
        bool isStep();
        bool isRref();
        bool isInvertible();
        void mSwap(int x, int y);
        void mMult(int x, Fract k);
        void mComb(int x, int y, Fract k = Fract(1));
        Matrix swap(int x, int y);
        Matrix mult(int x, Fract k);
        Matrix comb(int x, int y, Fract k = Fract(1));
        Matrix transpost();
        void mStep();
        Matrix step();
        void mRref();
        Matrix rref();
        Matrix mInvert();
        Matrix invert();
        int rang();
        Matrix sub(int row, int col);
        Fract det();
        Matrix& operator=(const Matrix& m);
        Matrix operator-();
        Matrix& operator++();
        Matrix& operator--();
        Matrix operator++(int n);
        Matrix operator--(int n);
        Matrix operator+(const Matrix& matrix);
        Matrix operator-(const Matrix& matrix);
        Matrix operator*(const Matrix& matrix);
        Matrix operator*(Fract k);
        Matrix operator/(Fract k);
        Matrix operator|(const Matrix& matrix);
        Matrix operator+=(const Matrix& matrix);
        Matrix operator-=(const Matrix& matrix);
        Matrix operator*=(Fract k);
        Matrix operator/=(Fract k);
        bool operator==(const Matrix& matrix);
        bool operator!=(const Matrix& matrix);
        Fract* operator[] (int i);
        friend Matrix operator*(Fract k, const Matrix& m);
        friend ostream& operator<< (ostream& out, const Matrix& matrix);
        friend istream& operator>> (istream& in, Matrix& matrix);
        friend Matrix diagonal(int n = 1, Fract k = Fract(1));
        friend Matrix identity(int n = 1);
        
};

Matrix operator*(Fract k, const Matrix& m);
Matrix diagonal(int n, Fract k);
Matrix identity(int n);

#endif