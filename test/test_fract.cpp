#include <iostream>
#include "../source/fract.h"
using namespace std;

void testConstructor(int n, int d);
void testConstructors();

void testIntAssign(int n);
void testIntAssigns();

void testFractAssign(int n, int d);
void testFractAssigns();

void testOpposite(int n, int d);
void testOpposites();

void testIncrement(int n, int d);
void testIncrements();

void testDecrement(int n, int d);
void testDecrements();

void testSum(int n1, int d1, int n2, int d2);
void testIntSum(int n, int d, int k);
void testSums();

void testSub(int n1, int d1, int n2, int d2);
void testIntSub(int n, int d, int k);
void testSubs();

void testProd(int n1, int d1, int n2, int d2);
void testIntProd(int n, int d, int k);
void testProds();

void testDiv(int n1, int d1, int n2, int d2);
void testIntDiv(int n, int d, int k);
void testDivs();

void testExp(int n, int d, int exp);
void testExps();

void testAssignmentSum(int n1, int d1, int n2, int d2);
void testIntAssignmentSum(int n, int d, int k);
void testAssignmentSums();

void testAssignmentSub(int n1, int d1, int n2, int d2);
void testIntAssignmentSub(int n, int d, int k);
void testAssignmentSubs();

void testAssignmentProd(int n1, int d1, int n2, int d2);
void testIntAssignmentProd(int n, int d, int k);
void testAssignmentProds();

void testAssignmentDiv(int n1, int d1, int n2, int d2);
void testIntAssignmentDiv(int n, int d, int k);
void testAssignmentDivs();

char* printBool(bool boolean);

void testEqual(int n1, int d1, int n2, int d2);
void testIntEqual(int n, int d, int k);
void testEquals();

void testUnequal(int n1, int d1, int n2, int d2);
void testIntUnequal(int n, int d, int k);
void testUnequals();

void testLower(int n1, int d1, int n2, int d2);
void testIntLower(int n, int d, int k);
void testLowers();

void testLowerEqual(int n1, int d1, int n2, int d2);
void testIntLowerEqual(int n, int d, int k);
void testLowerEquals();

void testGreater(int n1, int d1, int n2, int d2);
void testIntGreater(int n, int d, int k);
void testGreaters();

void testGreaterEqual(int n1, int d1, int n2, int d2);
void testIntGreaterEqual(int n, int d, int k);
void testGreaterEquals();

void testInputStream(int n);
void testInputStreams();

int main() {
    testConstructors();
    testFractAssigns();
    testIntAssigns();
    testOpposites();
    testIncrements();
    testDecrements();
    testSums();
    testSubs();
    testProds();
    testDivs();
    testExps();
    testAssignmentSums();
    testAssignmentSubs();
    testAssignmentProds();
    testAssignmentDivs();
    testEquals();
    testUnequals();
    testLowers();
    testLowerEquals();
    testGreaters();
    testGreaterEquals();
    testInputStreams();
    cout << "Press a key to end the test ..." << endl;
    cin.get();
    return 0;
}

void testConstructor(int n, int d) {   
    Fract fract = Fract(n, d);
    cout << "Fract(" << n << ", " << d << ") = ";
    cout << fract << endl << endl;
}

void testConstructors() {
    cout << "***** Test - Constructors *****" << endl << endl;
    testConstructor(0, 1);
    testConstructor(0, 2);
    testConstructor(0, 10);
    testConstructor(0, 11);
    testConstructor(0, 10000);
    testConstructor(0, -1);
    testConstructor(0, -1000);
    testConstructor(1, 1);
    testConstructor(2, 1);
    testConstructor(3, 1);
    testConstructor(10, 1);
    testConstructor(500, 1);
    testConstructor(1, 5);
    testConstructor(1, 10001);
    testConstructor(1, 6);
    testConstructor(1, -1);
    testConstructor(1, -10);
    testConstructor(2, 3);
    testConstructor(-2, 3);
    testConstructor(2, -3);
    testConstructor(4, 6);
    testConstructor(95, 5);
    testConstructor(-2, -5);
    testConstructor(-2, -6);
    testConstructor(2, -5);
    testConstructor(2, -6);
}

void testFractAssign(int n, int d) {
    Fract x = Fract(n, d);
    cout << "x = " << x << endl;
    Fract y = x;
    cout << "y = " << y << endl << endl;
}

void testFractAssigns() {
    cout << "***** Test - Fract Assigns *****" << endl << endl;
    testFractAssign(1, 1);
    testFractAssign(0, 1);
    testFractAssign(10, -2);
    testFractAssign(5, -15);
}

void testIntAssign(int n) {
    cout << "n = " << n << endl;
    Fract f = n;
    cout << "f = " << f << endl << endl;
}

void testIntAssigns() {
    cout << "***** Test - Int Assigns *****" << endl << endl;
    testIntAssign(0);
    testIntAssign(1);
    testIntAssign(-1);
    testIntAssign(2);
    testIntAssign(-2);
    testIntAssign(3);
    testIntAssign(-3);
}

void testOpposite(int n, int d) {
    Fract f = Fract(n, d);
    cout << "f = " << f << endl;
    cout << "-f = " << -f << endl;
    cout << endl;
}

void testOpposites() {
    cout << "***** Test - Opposites *****" << endl << endl;
    testOpposite(2, 4);
    testOpposite(2, -4);
}

void testIncrement(int n, int d) {
    Fract f = Fract(n, d);
    cout << "f = " << f << endl;
    cout << "f++ = " << f++ << endl;
    cout << "f = " << f << endl;
    cout << "++f = " << ++f << endl;
    cout << "f = " << f << endl;
    cout << endl;
}

void testIncrements() {
    cout << "***** Test - Increment *****" << endl << endl;
    testIncrement(1, 2);
    testIncrement(5, 1);
    testIncrement(-1, 3);
}

void testDecrement(int n, int d) {
    Fract f = Fract(n, d);
    cout << "f = " << f << endl;
    cout << "f-- = " << f-- << endl;
    cout << "f = " << f << endl;
    cout << "--f = " << --f << endl;
    cout << "f = " << f << endl;
    cout << endl;
}

void testDecrements() {
    cout << "***** Test - Increment *****" << endl << endl;
    testDecrement(1, 2);
    testDecrement(5, 1);
    testDecrement(-1, 3);
}

void testSum(int n1, int d1, int n2, int d2) {
    Fract x = Fract(n1, d1);
    Fract y = Fract(n2, d2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x + y = " << x + y << endl;
    cout << endl; 
}

void testIntSum(int n, int d, int k) {
    Fract f = Fract(n, d);
    cout << "k = " << k << endl;
    cout << "f = " << f << endl;
    cout << "f + k = " << f + k << endl;
    cout << "k + f = " << k + f << endl;
    cout << endl;
}

void testSums() {
    cout << "***** Test - Sums *****" << endl << endl;
    cout << "-> Fract and Fract" << endl << endl;
    testSum(1, 1, 0, 1);
    testSum(1, 1, 1, 1);
    testSum(2, 1, 3, 1);
    testSum(1, 2, -10, 15);
    testSum(-10, 15, 1, 2);
    testSum(-1, 3, 3, -1);
    cout << "-> Fract and int" << endl << endl;
    testIntSum(4, 20, -3);
    testIntSum(1, -3, 2);
}

void testSub(int n1, int d1, int n2, int d2) {
    Fract x = Fract(n1, d1);
    Fract y = Fract(n2, d2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x - y = " << x - y << endl;
    cout << endl; 
}

void testIntSub(int n, int d, int k) {
    Fract f = Fract(n, d);
    cout << "k = " << k << endl;
    cout << "f = " << f << endl;
    cout << "f - k = " << f - k << endl;
    cout << "k - f = " << k - f << endl;
    cout << endl;
}

void testSubs() {
    cout << "***** Test - Subtractions *****" << endl << endl;
    cout << "-> Fract and Fract" << endl << endl;
    testSub(1, 1, 0, 1);
    testSub(1, 1, 1, 1);
    testSub(2, 1, 3, 1);
    testSub(1, 2, -10, 15);
    testSub(-10, 15, 1, 2);
    testSub(-1, 3, 3, -1);
    cout << "-> Fract and int" << endl << endl;
    testIntSub(4, 20, -3);
    testIntSub(1, -3, 2);
}

void testProd(int n1, int d1, int n2, int d2) {
    Fract x = Fract(n1, d1);
    Fract y = Fract(n2, d2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x * y = " << x * y << endl;
    cout << endl; 
}

void testIntProd(int n, int d, int k) {
    Fract f = Fract(n, d);
    cout << "k = " << k << endl;
    cout << "f = " << f << endl;
    cout << "f * k = " << f * k << endl;
    cout << "k * f = " << k * f << endl;
    cout << endl;
}

void testProds() {
    cout << "***** Test - Products *****" << endl << endl;
    cout << "-> Fract and Fract" << endl << endl;
    testProd(1, 1, 0, 1);
    testProd(1, 1, 1, 1);
    testProd(2, 1, 3, 1);
    testProd(1, 2, -10, 15);
    testProd(-10, 15, 1, 2);
    testProd(-1, 3, 3, -1);
    cout << "-> Fract and int" << endl << endl;
    testIntProd(4, 20, -3);
    testIntProd(1, -3, 2);
    testIntProd(1, -6, 2);
}

void testDiv(int n1, int d1, int n2, int d2) {
    Fract x = Fract(n1, d1);
    Fract y = Fract(n2, d2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x / y = " << x / y << endl;
    cout << endl; 
}

void testIntDiv(int n, int d, int k) {
    Fract f = Fract(n, d);
    cout << "k = " << k << endl;
    cout << "f = " << f << endl;
    cout << "f / k = " << f / k << endl;
    cout << "k / f = " << k / f << endl;
    cout << endl;
}

void testDivs() {
    cout << "***** Test - Divisions *****" << endl << endl;
    cout << "-> Fract and Fract" << endl << endl;
    testDiv(1, 1, 1, -9);
    testDiv(1, 1, 1, 1);
    testDiv(2, 1, 3, 1);
    testDiv(1, 2, -10, 15);
    testDiv(-10, 15, 1, 2);
    testDiv(-1, 3, 3, -1);
    cout << "-> Fract and int" << endl << endl;
    testIntDiv(4, 20, -3);
    testIntDiv(1, -3, 2);
    testIntDiv(1, -6, 2);
    testIntDiv(-5, 1, 1);
}

void testExp(int n, int d, int exp) {
    Fract f = Fract(n, d);
    cout << "f = " << f << endl;
    cout << "exp = " << exp << endl;
    cout << "f ^ exp = " << (f ^ exp) << endl;
    cout << endl;
}

void testExps() {
    cout << "***** Test - Exponents *****" << endl << endl;
    testExp(0, 1, -3);
    testExp(0, 1, 0);
    testExp(3, 4, 3);
    testExp(3, 4, 0);
    testExp(3, 4, -3);
}

void testAssignmentSum(int n1, int d1, int n2, int d2) {
    Fract x = Fract(n1, d1);
    Fract y = Fract(n2, d2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    x += y;
    cout << "x += y => x= " << x << endl;
    cout << endl; 
}

void testIntAssignmentSum(int n, int d, int k) {
    Fract f = Fract(n, d);
    cout << "f = " << f << endl;
    cout << "k = " << k << endl;
    f += k;
    cout << "f += k => f = " << f << endl;
    cout << endl; 
}

void testAssignmentSums() {
    cout << "***** Test - Assignment sums *****" << endl << endl;
    cout << "-> Fract and Fract" << endl << endl;
    testAssignmentSum(1, 1, 1, -9);
    testAssignmentSum(1, 1, 1, 1);
    testAssignmentSum(2, 1, 3, 1);
    testAssignmentSum(1, 2, -10, 15);
    testAssignmentSum(-10, 15, 1, 2);
    testAssignmentSum(-1, 3, 3, -1);
    cout << "-> Fract and int" << endl << endl;
    testIntAssignmentSum(4, 20, -3);
    testIntAssignmentSum(1, -3, 2);
    testIntAssignmentSum(1, -6, 2);
}

void testAssignmentSub(int n1, int d1, int n2, int d2) {
    Fract x = Fract(n1, d1);
    Fract y = Fract(n2, d2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    x -= y;
    cout << "x -= y => x= " << x << endl;
    cout << endl; 
}

void testIntAssignmentSub(int n, int d, int k) {
    Fract f = Fract(n, d);
    cout << "f = " << f << endl;
    cout << "k = " << k << endl;
    f -= k;
    cout << "f -= k => f = " << f << endl;
    cout << endl; 
}

void testAssignmentSubs() {
    cout << "***** Test - Assignment subtractions *****" << endl << endl;
    cout << "-> Fract and Fract" << endl << endl;
    testAssignmentSub(1, 1, 1, -9);
    testAssignmentSub(1, 1, 1, 1);
    testAssignmentSub(2, 1, 3, 1);
    testAssignmentSub(1, 2, -10, 15);
    testAssignmentSub(-10, 15, 1, 2);
    testAssignmentSub(-1, 3, 3, -1);
    cout << "-> Fract and int" << endl << endl;
    testIntAssignmentSub(4, 20, -3);
    testIntAssignmentSub(1, -3, 2);
    testIntAssignmentSub(1, -6, 2);
}

void testAssignmentProd(int n1, int d1, int n2, int d2) {
    Fract x = Fract(n1, d1);
    Fract y = Fract(n2, d2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    x *= y;
    cout << "x *= y => x= " << x << endl;
    cout << endl; 
}

void testIntAssignmentProd(int n, int d, int k) {
    Fract f = Fract(n, d);
    cout << "f = " << f << endl;
    cout << "k = " << k << endl;
    f *= k;
    cout << "f *= k => f = " << f << endl;
    cout << endl; 
}

void testAssignmentProds() {
    cout << "***** Test - Assignment multiplications *****" << endl << endl;
    cout << "-> Fract and Fract" << endl << endl;
    testAssignmentProd(1, 1, 1, -9);
    testAssignmentProd(1, 1, 1, 1);
    testAssignmentProd(2, 1, 3, 1);
    testAssignmentProd(1, 2, -10, 15);
    testAssignmentProd(-10, 15, 1, 2);
    testAssignmentProd(-1, 3, 3, -1);
    cout << "-> Fract and int" << endl << endl;
    testIntAssignmentProd(4, 20, -3);
    testIntAssignmentProd(1, -3, 2);
    testIntAssignmentProd(1, -6, 2);
}

void testAssignmentDiv(int n1, int d1, int n2, int d2) {
    Fract x = Fract(n1, d1);
    Fract y = Fract(n2, d2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    x /= y;
    cout << "x /= y => x= " << x << endl;
    cout << endl; 
}

void testIntAssignmentDiv(int n, int d, int k) {
    Fract f = Fract(n, d);
    cout << "f = " << f << endl;
    cout << "k = " << k << endl;
    f /= k;
    cout << "f /= k => f = " << f << endl;
    cout << endl; 
}

void testAssignmentDivs() {
    cout << "***** Test - Assignment divisions *****" << endl << endl;
    cout << "-> Fract and Fract" << endl << endl;
    testAssignmentDiv(1, 1, 1, -9);
    testAssignmentDiv(1, 1, 1, 1);
    testAssignmentDiv(2, 1, 3, 1);
    testAssignmentDiv(1, 2, -10, 15);
    testAssignmentDiv(-10, 15, 1, 2);
    testAssignmentDiv(-1, 3, 3, -1);
    cout << "-> Fract and int" << endl << endl;
    testIntAssignmentDiv(4, 20, -3);
    testIntAssignmentDiv(1, -3, 2);
    testIntAssignmentDiv(1, -6, 2);
}

char* printBool(bool boolean) {
    return (char*)(boolean ? "true" : "false");
}

void testEqual(int n1, int d1, int n2, int d2) {
    Fract x = Fract(n1, d1);
    Fract y = Fract(n2, d2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x == y => " << printBool(x == y) << endl;
    cout << endl;
}

void testIntEqual(int n, int d, int k) {
    Fract f = Fract(n, d);
    cout << "f = " << f << endl;
    cout << "k = " << k << endl;
    cout << "f == k => " << printBool(f == k) << endl;
    cout << endl;
}

void testEquals() {
    cout << "***** Test - Equals *****" << endl << endl;
    cout << "-> Fract and Fract" << endl << endl;
    testEqual(2, 3, 2, 3);
    testEqual(2, 3, 3, 2);
    cout << "-> Fract and Int" << endl << endl;
    testIntEqual(2, 3, 2);
    testIntEqual(2, 1, 2);
}

void testUnequal(int n1, int d1, int n2, int d2) {
    Fract x = Fract(n1, d1);
    Fract y = Fract(n2, d2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x != y => " << printBool(x != y) << endl;
    cout << endl;
}

void testIntUnequal(int n, int d, int k) {
    Fract f = Fract(n, d);
    cout << "f = " << f << endl;
    cout << "k = " << k << endl;
    cout << "f != k => " << printBool(f != k) << endl;
    cout << endl;
}

void testUnequals() {
    cout << "***** Test - Unequals *****" << endl << endl;
    cout << "-> Fract and Fract" << endl << endl;
    testUnequal(2, 3, 2, 3);
    testUnequal(2, 3, 3, 2);
    cout << "-> Fract and Int" << endl << endl;
    testIntUnequal(2, 3, 2);
    testIntUnequal(2, 1, 2);
}

void testLower(int n1, int d1, int n2, int d2) {
    Fract x = Fract(n1, d1);
    Fract y = Fract(n2, d2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x < y => " << printBool(x < y) << endl;
    cout << endl;
}

void testIntLower(int n, int d, int k) {
    Fract f = Fract(n, d);
    cout << "f = " << f << endl;
    cout << "k = " << k << endl;
    cout << "f < k => " << printBool(f < k) << endl;
    cout << endl;
}

void testLowers() {
    cout << "***** Test - Lower than *****" << endl << endl;
    cout << "-> Fract and Fract" << endl << endl;
    testLower(2, 3, 2, 3);
    testLower(2, 3, 3, 2);
    cout << "-> Fract and Int" << endl << endl;
    testIntLower(2, 3, 2);
    testIntLower(2, 1, 2);
    testIntLower(9, 3, 2);
    testIntLower(9, -3, 2);
    testIntLower(9, 3, -2);
}

void testLowerEqual(int n1, int d1, int n2, int d2) {
    Fract x = Fract(n1, d1);
    Fract y = Fract(n2, d2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x <= y => " << printBool(x <= y) << endl;
    cout << endl;
}

void testIntLowerEqual(int n, int d, int k) {
    Fract f = Fract(n, d);
    cout << "f = " << f << endl;
    cout << "k = " << k << endl;
    cout << "f <= k => " << printBool(f <= k) << endl;
    cout << endl;
}

void testLowerEquals() {
    cout << "***** Test - Lower or equal than *****" << endl << endl;
    cout << "-> Fract and Fract" << endl << endl;
    testLowerEqual(2, 3, 2, 3);
    testLowerEqual(2, 3, 3, 2);
    cout << "-> Fract and Int" << endl << endl;
    testIntLowerEqual(2, 3, 2);
    testIntLowerEqual(2, 1, 2);
    testIntLowerEqual(9, 3, 2);
    testIntLowerEqual(9, -3, 2);
    testIntLowerEqual(9, 3, -2);
}

void testGreater(int n1, int d1, int n2, int d2) {
    Fract x = Fract(n1, d1);
    Fract y = Fract(n2, d2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x > y => " << printBool(x > y) << endl;
    cout << endl;
}

void testIntGreater(int n, int d, int k) {
    Fract f = Fract(n, d);
    cout << "f = " << f << endl;
    cout << "k = " << k << endl;
    cout << "f > k => " << printBool(f > k) << endl;
    cout << endl;
}

void testGreaters() {
    cout << "***** Test - Greater than *****" << endl << endl;
    cout << "-> Fract and Fract" << endl << endl;
    testLowerEqual(2, 3, 2, 3);
    testLowerEqual(2, 3, 3, 2);
    cout << "-> Fract and Int" << endl << endl;
    testIntLowerEqual(2, 3, 2);
    testIntLowerEqual(2, 1, 2);
    testIntLowerEqual(9, 3, 2);
    testIntLowerEqual(9, -3, 2);
    testIntLowerEqual(9, 3, -2);
}

void testGreaterEqual(int n1, int d1, int n2, int d2) {
    Fract x = Fract(n1, d1);
    Fract y = Fract(n2, d2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x >= y => " << printBool(x >= y) << endl;
    cout << endl;
}

void testIntGreaterEqual(int n, int d, int k) {
    Fract f = Fract(n, d);
    cout << "f = " << f << endl;
    cout << "k = " << k << endl;
    cout << "f >= k => " << printBool(f >= k) << endl;
    cout << endl;
}

void testGreaterEquals() {
    cout << "***** Test - Greater or equal than *****" << endl << endl;
    cout << "-> Fract and Fract" << endl << endl;
    testGreaterEqual(2, 3, 2, 3);
    testGreaterEqual(2, 3, 3, 2);
    cout << "-> Fract and Int" << endl << endl;
    testIntGreaterEqual(2, 3, 2);
    testIntGreaterEqual(2, 1, 2);
    testIntGreaterEqual(9, 3, 2);
    testIntGreaterEqual(9, -3, 2);
    testIntGreaterEqual(9, 3, -2);
}

void testInputStream(int n) {
    Fract fract;
    int i;
    for(i = 0; i < n; i++) {
        cout << endl << "Fract: ";
        cin >> fract;
        cout << "Fract = " << fract << endl;
    }
}

void testInputStreams() {
    cout << "***** Test - Input streams *****" << endl << endl;
    int n;
    cout << "N inputs: ";
    cin >> n;
    testInputStream(n);
}