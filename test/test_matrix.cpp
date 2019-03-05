#include <iostream>
#include "../source/matrix.h"
using namespace std;

Fract*** mockMatrix();

void testConstructor();
void testConstructor(int dim);
void testConstructor(int dim, Fract f);
void testConstructor(int rows, int cols);
void testConstructor(int rows, int cols, Fract f);
void testConstructor(int rows, int cols, Fract** m);
void testConstructors();

char* printBool(bool boolean);

void testIsNull(Matrix m);
void testIsSquare(Matrix m);
void testIsDiagonal(Matrix m);
void testIsIdentity(Matrix m);
void testIsStep(Matrix m);
void testIsRref(Matrix m);
void testIsInvertible(Matrix m);
void testStatus();

void testAssignment(Matrix m);
void testAssignments();

void testOpposite(Matrix m);
void testOpposites();

void testIncrement(Matrix m);
void testIncrements();

void testDecrement(Matrix m);
void testDecrements();

void testSum(Matrix x, Matrix y);
void testSums();

void testSub(Matrix x, Matrix y);
void testSubs();

void testProd(Matrix x, Matrix y);
void testFractProd(Matrix m, Fract k);
void testProds();

void testFractDiv(Matrix m, Fract k);
void testDivs();

void testMerge(Matrix x, Matrix y);
void testMerges();

void testAssignmentSum(Matrix x, Matrix y);
void testAssignmentSums();

void testAssignmentSub(Matrix x, Matrix y);
void testAssignmentSubs();

void testAssignmentProd(Matrix m, Fract k);
void testAssignmentProds();

void testAssignmentDiv(Matrix m, Fract k);
void testAssignmentDivs();

void testEqual(Matrix x, Matrix y);
void testEquals();

void testUnequal(Matrix x, Matrix y);
void testUnequals();

void testArrayOperator(Matrix m, int i, int j);
void testArrayOperators();

void testMSwap(Matrix m, int row, int col);
void testSwap(Matrix m, int row, int col);
void testMMult(Matrix m, int row, Fract k);
void testMult(Matrix m, int row, Fract k);
void testMComb(Matrix m, int row, int col, Fract k);
void testComb(Matrix m, int row, int col, Fract k);
void testMatrixOperations();

void testTranspost(Matrix m);
void testTransposts();

void testMStep(Matrix m);
void testStep(Matrix m);
void testRang(Matrix m);
void testSteps();

void testMRref(Matrix m);
void testRref(Matrix m);
void testRrefs();

void testMInvert(Matrix m);
void testInvert(Matrix m);
void testInverts();

void testSubMatrix(Matrix m, int row, int col);
void testSubMatrixs();

void testDet(Matrix m);
void testDets();

void test();

int main() {
    testConstructors();
    testStatus();
    testAssignments();
    testOpposites();
    testIncrements();
    testDecrements();
    testSums();
    testSubs();
    testProds();
    testDivs();
    testMerges();
    testAssignmentSums();
    testAssignmentSubs();
    testAssignmentProds();
    testAssignmentDivs();
    testEquals();
    testUnequals();
    testArrayOperators();
    testMatrixOperations();
    testTransposts();
    testSteps();
    testRrefs();
    testInverts();
    testSubMatrixs();
    testDets();
    test();
    cout << "Press a key to end the test ..." << endl;
    cin.get();
    return 0;
}

Fract*** mockMatrix() {
    Fract*** res = new Fract**[9];
    Fract** m;

    m = new Fract*[3];
    m[0] = new Fract[2];
    m[1] = new Fract[2];
    m[2] = new Fract[2];
    m[0][0] = 1;
    m[0][1] = 2;
    m[1][0] = 3;
    m[1][1] = 4;
    m[2][0] = 5;
    m[2][1] = 6;
    res[0] = m;

    m = new Fract*[3];
    m[0] = new Fract[2];
    m[1] = new Fract[2];
    m[2] = new Fract[2];
    m[0][0] = 3;
    m[0][1] = 2;
    m[1][0] = 1;
    m[1][1] = 5;
    m[2][0] = 7;
    m[2][1] = 5;
    res[1] = m;
    
    m = new Fract*[2];
    m[0] = new Fract[3];
    m[1] = new Fract[3];
    m[0][0] = 3;
    m[0][1] = 2;
    m[0][2] = 8;
    m[1][0] = 5;
    m[1][1] = 7;
    m[1][2] = 9;
    res[2] = m;

    m = new Fract*[5];
    m[0] = new Fract[5];
    m[1] = new Fract[5];
    m[2] = new Fract[5];
    m[3] = new Fract[5];
    m[4] = new Fract[5];
    m[0][0] = 3;
    m[0][1] = 1;
    m[0][2] = 2;
    m[0][3] = 0;
    m[0][4] = 4;
    m[1][0] = 0;
    m[1][1] = 1;
    m[1][2] = 3;
    m[1][3] = 0;
    m[1][4] = 0;
    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = 0;
    m[2][3] = 1;
    m[2][4] = 2;
    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 0;
    m[3][4] = 1;
    m[4][0] = 0;
    m[4][1] = 0;
    m[4][2] = 0;
    m[4][3] = 0;
    m[4][4] = 0;
    res[3] = m;

    m = new Fract*[5];
    m[0] = new Fract[5];
    m[1] = new Fract[5];
    m[2] = new Fract[5];
    m[3] = new Fract[5];
    m[4] = new Fract[5];
    m[0][0] = 3;
    m[0][1] = 1;
    m[0][2] = 2;
    m[0][3] = 0;
    m[0][4] = 4;
    m[1][0] = 0;
    m[1][1] = 1;
    m[1][2] = 3;
    m[1][3] = 0;
    m[1][4] = 0;
    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = 0;
    m[2][3] = 1;
    m[2][4] = 2;
    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 0;
    m[3][4] = 0;
    m[4][0] = 0;
    m[4][1] = 0;
    m[4][2] = 0;
    m[4][3] = 0;
    m[4][4] = 1;
    res[4] = m;

    m = new Fract*[6];
    m[0] = new Fract[5];
    m[1] = new Fract[5];
    m[2] = new Fract[5];
    m[3] = new Fract[5];
    m[4] = new Fract[5];
    m[5] = new Fract[5];
    m[0][0] = 3;
    m[0][1] = 1;
    m[0][2] = 0;
    m[0][3] = 0;
    m[0][4] = 4;
    m[1][0] = 0;
    m[1][1] = 1;
    m[1][2] = 0;
    m[1][3] = 0;
    m[1][4] = 0;
    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = 0;
    m[2][3] = 3;
    m[2][4] = 2;
    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 0;
    m[3][4] = 2;
    m[4][0] = 0;
    m[4][1] = 0;
    m[4][2] = 0;
    m[4][3] = 0;
    m[4][4] = 0;
    m[5][0] = 0;
    m[5][1] = 0;
    m[5][2] = 0;
    m[5][3] = 0;
    m[5][4] = 0;
    res[5] = m;

    m = new Fract*[6];
    m[0] = new Fract[5];
    m[1] = new Fract[5];
    m[2] = new Fract[5];
    m[3] = new Fract[5];
    m[4] = new Fract[5];
    m[5] = new Fract[5];
    m[0][0] = 1;
    m[0][1] = 0;
    m[0][2] = 0;
    m[0][3] = 0;
    m[0][4] = 0;
    m[1][0] = 0;
    m[1][1] = 1;
    m[1][2] = 0;
    m[1][3] = 0;
    m[1][4] = 0;
    m[2][0] = 0;
    m[2][1] = 0;
    m[2][2] = 0;
    m[2][3] = 1;
    m[2][4] = 0;
    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 0;
    m[3][4] = 1;
    m[4][0] = 0;
    m[4][1] = 0;
    m[4][2] = 0;
    m[4][3] = 0;
    m[4][4] = 0;
    m[5][0] = 0;
    m[5][1] = 0;
    m[5][2] = 0;
    m[5][3] = 0;
    m[5][4] = 0;
    res[6] = m;

    m = new Fract*[5];
    m[0] = new Fract[5];
    m[1] = new Fract[5];
    m[2] = new Fract[5];
    m[3] = new Fract[5];
    m[4] = new Fract[5];
    m[0][0] = 3;
    m[0][1] = 1;
    m[0][2] = 2;
    m[0][3] = 2;
    m[0][4] = 4;
    m[1][0] = 0;
    m[1][1] = 1;
    m[1][2] = 3;
    m[1][3] = 0;
    m[1][4] = 1;
    m[2][0] = 0;
    m[2][1] = 6;
    m[2][2] = 0;
    m[2][3] = 1;
    m[2][4] = 2;
    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 0;
    m[3][4] = 1;
    m[4][0] = 0;
    m[4][1] = 9;
    m[4][2] = 0;
    m[4][3] = -1;
    m[4][4] = 0;
    res[7] = m;

    m = new Fract*[4];
    m[0] = new Fract[4];
    m[1] = new Fract[4];
    m[2] = new Fract[4];
    m[3] = new Fract[4];
    m[0][0] = 1;
    m[0][1] = 2;
    m[0][2] = 3;
    m[0][3] = 4;
    m[1][0] = 5;
    m[1][1] = 6;
    m[1][2] = 0;
    m[1][3] = 8;
    m[2][0] = 9;
    m[2][1] = 9;
    m[2][2] = 8;
    m[2][3] = 7;
    m[3][0] = 6;
    m[3][1] = 5;
    m[3][2] = 4;
    m[3][3] = 0;
    res[8] = m;

    return res;
}

void testConstructor() {   
    Matrix m = Matrix();
    cout << "Matrix()" << endl;
    cout << m << endl;
    cout << endl;
}

void testConstructor(int dim) {   
    Matrix m = Matrix(dim);
    cout << "Matrix(" << dim << ")" << endl;
    cout << m << endl;
    cout << endl;
}

void testConstructor(int dim, Fract f) {   
    Matrix m = Matrix(dim, f);
    cout << "Matrix(" << dim << ", " << f << ")" << endl;
    cout << m << endl;
    cout << endl;
}

void testConstructor(int rows, int cols) {   
    Matrix m = Matrix(rows, cols);
    cout << "Matrix(" << rows << ", " << cols << ")" << endl;
    cout << m << endl;
    cout << endl;
}

void testConstructor(int rows, int cols, Fract f) {   
    Matrix m = Matrix(rows, cols, f);
    cout << "Matrix(" << rows << ", " << cols << ", " << f << ")" << endl;
    cout << m << endl;
    cout << endl;
}

void testConstructor(int rows, int cols, Fract** f) {
    Matrix m = Matrix(rows, cols, f);
    cout << "M" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matrix(" << rows << ", " << cols << ", M)" << endl;
    cout << m << endl;
    cout << endl;
}

void testConstructors() {
    cout << "***** Test - Constructors *****" << endl << endl;
    testConstructor();
    testConstructor(3);
    testConstructor(3, Fract(1, 2));
    testConstructor(2, 3);
    testConstructor(3, 2, Fract(-7, 6));
    testConstructor(3, 2, mockMatrix()[0]);
}

char* printBool(bool boolean) {
    return (char*)(boolean ? "true" : "false");
}

void testIsNull(Matrix m) {
    cout << "Matrix" << endl;
    cout << m;
    cout << "Is null: " << printBool(m.isNull()) << endl;
    cout << endl; 
}

void testIsSquare(Matrix m) {
    cout << "Matrix" << endl;
    cout << m;
    cout << "Is square: " << printBool(m.isSquare()) << endl;
    cout << endl; 
}

void testIsDiagonal(Matrix m) {
    cout << "Matrix" << endl;
    cout << m;
    cout << "Is diagonal: " << printBool(m.isDiagonal()) << endl;
    cout << endl; 
}

void testIsIdentity(Matrix m) {
    cout << "Matrix" << endl;
    cout << m;
    cout << "Is identity: " << printBool(m.isIdentity()) << endl;
    cout << endl; 
}

void testIsStep(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Is step: " << printBool(m.isStep()) << endl;
    cout << endl;
}

void testIsRref(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Is rref: " << printBool(m.isRref()) << endl;
    cout << endl;
}

void testIsInvertible(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Is invertible: " << printBool(m.isInvertible()) << endl;
    cout << endl;
}

void testStatus() {
    cout << "***** Test - Status *****" << endl << endl;
    cout << "-> Is null" << endl;
    testIsNull(Matrix(3, 2));
    testIsNull(Matrix(3, 2, 5));
    cout << "-> Is square" << endl;
    testIsSquare(Matrix(3));
    testIsSquare(Matrix(3, 2));
    cout << "-> Is diagonal" << endl;
    testIsDiagonal(Matrix(2, 2));
    testIsDiagonal(diagonal(3, 2));
    cout << "-> Is identity" << endl;
    testIsIdentity(Matrix(2, 2));
    testIsIdentity(diagonal(3, 2));
    testIsIdentity(identity(3));
    cout << "-> Is step" << endl;
    testIsStep(Matrix(5, 5, mockMatrix()[3]));
    testIsStep(Matrix(5, 5, mockMatrix()[4]));
    testIsStep(Matrix(6, 5, mockMatrix()[5]));
    testIsStep(Matrix(3));
    cout << "-> Is rref" << endl;
    testIsRref(Matrix(5, 5, mockMatrix()[3]));
    testIsRref(Matrix(5, 5, mockMatrix()[4]));
    testIsRref(Matrix(6, 5, mockMatrix()[5]));
    testIsRref(Matrix(6, 5, mockMatrix()[6]));
    testIsRref(identity(3));
    testIsRref(Matrix(3));
    cout << "-> Is invertible" << endl;
    testIsInvertible(Matrix(3));
    testIsInvertible(Matrix(3, 2));
    testIsInvertible(Matrix(6, 5, mockMatrix()[5]));
    testIsInvertible(Matrix(5, 5, mockMatrix()[3]));
    testIsInvertible(diagonal(3, 5));
}

void testAssignment(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    Matrix n = m;
    cout << "Matrix N (=M)" << endl;
    cout << n;
    cout << endl;
}

void testAssignments() {
    cout << "***** Test - Assignment *****" << endl << endl;
    testAssignment(Matrix(2, 3, 1));
}

void testOpposite(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix -M" << endl;
    cout << -m;
    cout << endl;
}

void testOpposites() {
    cout << "***** Test - Opposites *****" << endl << endl;
    testOpposite(Matrix(3));
    testOpposite(Matrix(3, 1));
    testOpposite(Matrix(3, Fract(-1)));
    testOpposite(Matrix(3, 2, mockMatrix()[0]));
}

void testIncrement(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix M++" << endl;
    cout << m++;
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix ++M" << endl;
    cout << ++m;
    cout << "Matrix M" << endl;
    cout << m;
    cout << endl;
}

void testIncrements() {
    cout << "***** Test - Increments *****" << endl << endl;
    testIncrement(Matrix());
    testIncrement(Matrix(2));
    testIncrement(Matrix(2, Fract(2)));
    testIncrement(Matrix(2, 3));
    testIncrement(Matrix(2, 3, 2));
    testIncrement(Matrix(3, 2, mockMatrix()[0]));
}

void testDecrement(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix M--" << endl;
    cout << m--;
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix --M" << endl;
    cout << --m;
    cout << "Matrix M" << endl;
    cout << m;
    cout << endl;
}

void testDecrements() {
    cout << "***** Test - Decrements *****" << endl << endl;
    testDecrement(Matrix());
    testDecrement(Matrix(2));
    testDecrement(Matrix(2, 2));
    testDecrement(Matrix(2, 3));
    testDecrement(Matrix(2, 3, 2));
    testDecrement(Matrix(3, 2, mockMatrix()[0]));
}

void testSum(Matrix x, Matrix y) {
    cout << "Matrix X" << endl;
    cout << x;
    cout << "Matrix Y" << endl;
    cout << y;
    cout << "Matrix X + Y" << endl;
    cout << x + y;
    cout << endl;
}

void testSums() {
    cout << "***** Test - Sums *****" << endl << endl;
    testSum(Matrix(2, Fract(1)), Matrix(2, Fract(-3)));
    testSum(Matrix(3, 2, Fract(2)), Matrix(3, 2, mockMatrix()[0]));
    testSum(identity(3), diagonal(3, 2));
    testSum(Matrix(3, 2, mockMatrix()[0]), Matrix(3, 2, mockMatrix()[1]));
}

void testSub(Matrix x, Matrix y) {
    cout << "Matrix X" << endl;
    cout << x;
    cout << "Matrix Y" << endl;
    cout << y;
    cout << "Matrix X - Y" << endl;
    cout << x - y;
    cout << endl;
}

void testSubs() {
    cout << "***** Test - Subtractions *****" << endl << endl;
    testSub(Matrix(2, Fract(1)), Matrix(2, Fract(-3)));
    testSub(Matrix(3, 2, Fract(2)), Matrix(3, 2, mockMatrix()[0]));
    testSub(identity(3), diagonal(3, 2));
    testSub(Matrix(3, 2, mockMatrix()[0]), Matrix(3, 2, mockMatrix()[1]));
}

void testProd(Matrix x, Matrix y) {
    cout << "Matrix X" << endl;
    cout << x;
    cout << "Matrix Y" << endl;
    cout << y;
    cout << "Matrix X * Y" << endl;
    cout << x * y;
    cout << endl;
}

void testFractProd(Matrix m, Fract k) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "k = " << k << endl;
    cout << "Matrix M * k" << endl;
    cout << m * k;
    cout << "Matrix k * M" << endl;
    cout << k * m;
    cout << endl;
}

void testProds() {
    cout << "***** Test - Products *****" << endl << endl;
    cout << "-> Matrix and Matrix" << endl;
    testProd(Matrix(2, Fract(1)), identity(2));
    testProd(Matrix(2, Fract(1)), diagonal(2, 4));
    testProd(Matrix(3, 2, mockMatrix()[0]), Matrix(2, 3, mockMatrix()[2]));
    testProd(Matrix(2, 3, mockMatrix()[2]), Matrix(3, 2, mockMatrix()[0]));
    testProd(Matrix(3, 2, mockMatrix()[1]), Matrix(2, 3, mockMatrix()[2]));
    testProd(Matrix(2, 3, mockMatrix()[2]), Matrix(3, 2, mockMatrix()[1]));
    cout << "-> Matrix and fraction" << endl;
    testFractProd(Matrix(3, 2, mockMatrix()[0]), 3);
    testFractProd(Matrix(3, 2, mockMatrix()[1]), -2);
}

void testFractDiv(Matrix m, Fract k) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "k = " << k << endl;
    cout << "Matrix M / k" << endl;
    cout << m / k;
    cout << endl;
}

void testDivs() {
    cout << "***** Test - Divisions *****" << endl << endl;
    testFractDiv(Matrix(3, 2, mockMatrix()[0]), 3);
    testFractDiv(Matrix(3, 2, mockMatrix()[1]), -2);
}

void testMerge(Matrix x, Matrix y) {
    cout << "Matrix X" << endl;
    cout << x;
    cout << "Matrix Y" << endl;
    cout << y;
    cout << "Matrix X | Y" << endl;
    cout << (x | y);
    cout << endl;
}

void testMerges() {
    cout << "***** Test - Divisions *****" << endl << endl;
    testMerge(Matrix(3, 4, 1), Matrix(3, 2, mockMatrix()[0]));
    testMerge(Matrix(3, 2, mockMatrix()[0]), Matrix(3, 4, 1));
}

void testAssignmentSum(Matrix x, Matrix y) {
    cout << "Matrix X" << endl;
    cout << x;
    cout << "Matrix Y" << endl;
    cout << y;
    cout << "X += Y" << endl;
    x += y;
    cout << "Matrix X" << endl;
    cout << x;
    cout << endl;
}

void testAssignmentSums() {
    cout << "***** Test - Assignment sums *****" << endl << endl;
    testAssignmentSum(Matrix(3, Fract(-1)), identity(3));
    testAssignmentSum(Matrix(3, 2, mockMatrix()[0]), Matrix(3, 2, mockMatrix()[1]));
}

void testAssignmentSub(Matrix x, Matrix y) {
    cout << "Matrix X" << endl;
    cout << x;
    cout << "Matrix Y" << endl;
    cout << y;
    cout << "X -= Y" << endl;
    x -= y;
    cout << "Matrix X" << endl;
    cout << x;
    cout << endl;
}

void testAssignmentSubs() {
    cout << "***** Test - Assignment subtractions *****" << endl << endl;
    testAssignmentSub(Matrix(3, Fract(-1)), identity(3));
    testAssignmentSub(Matrix(3, 2, mockMatrix()[0]), Matrix(3, 2, mockMatrix()[1]));
}

void testAssignmentProd(Matrix m, Fract k) {
    cout << "Matrix m" << endl;
    cout << m;
    cout << "k = " << k << endl;
    cout << "X *= k" << endl;
    m *= k;
    cout << "Matrix m" << endl;
    cout << m;
    cout << endl;
}

void testAssignmentProds() {
    cout << "***** Test - Assignment products *****" << endl << endl;
    testAssignmentProd(Matrix(3, Fract(-1)), 3);
}

void testAssignmentDiv(Matrix m, Fract k) {
    cout << "Matrix m" << endl;
    cout << m;
    cout << "k = " << k << endl;
    cout << "X /= k" << endl;
    m /= k;
    cout << "Matrix m" << endl;
    cout << m;
    cout << endl;
}

void testAssignmentDivs() {
    cout << "***** Test - Assignment divisions *****" << endl << endl;
    testAssignmentDiv(Matrix(3, Fract(-1)), 3);
}

void testEqual(Matrix x, Matrix y) {
    cout << "Matrix X" << endl;
    cout << x;
    cout << "Matrix Y" << endl;
    cout << y;
    cout << "X == Y => " << printBool(x == y) << endl;
    cout << endl;
}

void testEquals() {
    cout << "***** Test - Equals *****" << endl << endl;
    testEqual(Matrix(), Matrix());
    testEqual(Matrix(4), Matrix(4));
    testEqual(Matrix(4, Fract(3)), Matrix(4));
    testEqual(Matrix(4, Fract(3)), Matrix(4, Fract(3)));
    testEqual(Matrix(2), Matrix(2, 3));
    testEqual(Matrix(3, 2, mockMatrix()[0]), Matrix(3, 2, mockMatrix()[0]));
    testEqual(Matrix(3, 2, mockMatrix()[0]), Matrix(3, 2, mockMatrix()[1]));
}

void testUnequal(Matrix x, Matrix y) {
    cout << "Matrix X" << endl;
    cout << x;
    cout << "Matrix Y" << endl;
    cout << y;
    cout << "X != Y => " << printBool(x != y) << endl;
    cout << endl;
}

void testUnequals() {
    cout << "***** Test - Unequals *****" << endl << endl;
    testUnequal(Matrix(), Matrix());
    testUnequal(Matrix(4), Matrix(4));
    testUnequal(Matrix(4, Fract(3)), Matrix(4));
    testUnequal(Matrix(4, Fract(3)), Matrix(4, Fract(3)));
    testUnequal(Matrix(2), Matrix(2, 3));
    testUnequal(Matrix(3, 2, mockMatrix()[0]), Matrix(3, 2, mockMatrix()[0]));
    testUnequal(Matrix(3, 2, mockMatrix()[0]), Matrix(3, 2, mockMatrix()[1]));
}

void testArrayOperator(Matrix m, int i, int j) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "M[" << i << "][" << j << "] = " << m[i][j] << endl;
    cout << endl;
}

void testArrayOperators() {
    cout << "***** Test - Matrix array operator *****" << endl << endl;
    testArrayOperator(Matrix(3, 2, mockMatrix()[0]), 0, 0);
    testArrayOperator(Matrix(3, 2, mockMatrix()[0]), 1, 1);
}

void testMSwap(Matrix m, int row, int col) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "S(" << row << ", " << col << ")" << endl;
    m.mSwap(row, col);
    cout << "Matrix M" << endl;
    cout << m;
    cout << endl;
}

void testSwap(Matrix m, int row, int col) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix M -> " << "S(" << row << ", " << col << ")" << endl;
    cout << m.swap(row, col);
    cout << "Matrix M" << endl;
    cout << m;
    cout << endl;
}

void testMMult(Matrix m, int row, Fract k) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "D(" << row << ", " << k << ")" << endl;
    m.mMult(row, k);
    cout << "Matrix M" << endl;
    cout << m;
    cout << endl;
}

void testMult(Matrix m, int row, Fract k) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix  M -> " << "D(" << row << ", " << k << ")" << endl;
    cout << m.mult(row, k);
    cout << "Matrix M" << endl;
    cout << m;
    cout << endl;
}

void testMComb(Matrix m, int row, int col, Fract k) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "E(" << row << ", " << col << ", " << k << ")" << endl;
    m.mComb(row, col, k);
    cout << "Matrix M" << endl;
    cout << m;
    cout << endl;
}

void testComb(Matrix m, int row, int col, Fract k) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix M -> " << "E(" << row << ", " << col << ", " << k << ")" << endl;
    cout << m.comb(row, col, k) << endl;
    cout << "Matrix M" << endl;
    cout << m;
    cout << endl;
}

void testMatrixOperations() {
    cout << "***** Test - Matrix operations *****" << endl << endl;
    cout << "-> Mutable swap" << endl;
    testMSwap(Matrix(3, 2, mockMatrix()[0]), 0, 2);
    cout << "-> Swap" << endl;
    testSwap(Matrix(3, 2, mockMatrix()[0]), 0, 2);
    cout << "-> Mutable mult" << endl;
    testMMult(Matrix(3, Fract(2)), 1, -3);
    cout << "-> Mult" << endl;
    testMult(Matrix(3, Fract(2)), 1, 3);
    cout << "-> Mutable linear combination" << endl;
    testMComb(Matrix(3, 2, mockMatrix()[0]), 0, 1, -2);
    cout << "-> Linear combination" << endl;
    testComb(Matrix(3, 2, mockMatrix()[0]), 0, 1, -2);
}

void testTranspost(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m << endl;
    cout << "Matrix M^T" << endl;
    cout << m.transpost() << endl;
}

void testTransposts() {
    cout << "***** Test - Matrix transpost *****" << endl << endl;
    testTranspost(Matrix(3, 2, mockMatrix()[1]));
}

void testMStep(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix M -> step" << endl;
    m.mStep();
    cout << "Matrix M" << endl;
    cout << m;
    cout << endl;
}

void testStep(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix M -> step" << endl;
    cout << m.step();
    cout << "Matrix M" << endl;
    cout << m;
    cout << endl;
}

void testRang(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "rang = " << m.rang() << endl;
    cout << endl;
}

void testSteps() {
    cout << "***** Test - Matrix step *****" << endl << endl;
    cout << "-> Mutable" << endl;
    testMStep(Matrix(5, 5, mockMatrix()[7]));
    cout << "-> Immutable" << endl;
    testStep(Matrix(5, 5, mockMatrix()[7]));
    cout << "-> Rang" << endl;
    testRang(Matrix(5, 5, mockMatrix()[7]));
}

void testMRref(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix M -> rref" << endl;
    m.mRref();
    cout << "Matrix M" << endl;
    cout << m;
    cout << endl;
}

void testRref(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix M -> rref" << endl;
    cout << m.rref();
    cout << "Matrix M" << endl;
    cout << m;
    cout << endl;
}

void testRrefs() {
    cout << "***** Test - Matrix rref *****" << endl << endl;
    cout << "-> Mutable" << endl;
    testMRref(Matrix(5, 5, mockMatrix()[7]));
    cout << "-> Immutable" << endl;
    testRref(Matrix(5, 5, mockMatrix()[7]));
}

void testMInvert(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix M^-1" << endl;
    cout << m.mInvert();
    cout << "Matrix M" << endl;
    cout << m;
    cout << endl;
}

void testInvert(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix M^-1" << endl;
    Matrix inverse = m.invert();
    cout << inverse;
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix M * M^-1" << endl;
    cout << m * inverse; 
    cout << endl;
}

void testInverts() {
    cout << "***** Test - Matrix invert *****" << endl << endl;
    cout << "-> Mutable" << endl;
    testMInvert(Matrix(4, 4, mockMatrix()[8]));
    testMInvert(diagonal(3, 2));
    cout << "-> Immutable" << endl;
    testInvert(Matrix(4, 4, mockMatrix()[8]));
}

void testSubMatrix(Matrix m, int row, int col) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "Matrix M sub (" << row << ", " << col << ")" << endl;
    cout << m.sub(row, col);
    cout << endl;
}

void testSubMatrixs() {
    cout << "***** Test - Matrix subs *****" << endl << endl;
    testSubMatrix(Matrix(3, Fract(4)), 1, 1);
    testSubMatrix(Matrix(3, 2, mockMatrix()[1]), 2, 1);
    testSubMatrix(Matrix(6, 5, mockMatrix()[5]), 4, 3);
}

void testDet(Matrix m) {
    cout << "Matrix M" << endl;
    cout << m;
    cout << "|M| = " << m.det() << endl;
    cout << "Matrix M" << endl;
    cout << m;
    cout << endl;
}

void testDets() {
    cout << "***** Test - Matrix dets *****" << endl << endl;
    testDet(Matrix(3, 3));
    testDet(Matrix(5, 5, mockMatrix()[4]));
    testDet(diagonal(4, -2));
}

void test() {
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