#include <iostream>
using namespace std;

class Fract {

    private:
        long long num;
        long long den;
        long long abs(long long n);
        long long pow(long long n, long long exp);
        long long mcd(long long x, long long y);
        long long mcm(long long x, long long y);
        void adjustSign();
        void semp();

    public:
        Fract(long long num = 0, long long den = 1);
        Fract& operator=(const Fract& f);
        Fract& operator=(long long n);
        Fract operator-();
        Fract& operator++();
        Fract& operator--();
        Fract operator++(int n);
        Fract operator--(int n);
        Fract operator+(const Fract& f);
        Fract operator-(const Fract& f);
        Fract operator*(const Fract& f);
        Fract operator/(const Fract& f);
        Fract operator^(long long n);
        Fract operator+=(const Fract& f);
        Fract operator-=(const Fract& f);
        Fract operator*=(const Fract& f);
        Fract operator/=(const Fract& f);
        bool operator==(const Fract& f);
        bool operator!=(const Fract& f);
        bool operator<(const Fract& f);
        bool operator<=(const Fract& f);
        bool operator>(const Fract& f);
        bool operator>=(const Fract& f);
        friend Fract operator+(long long n, const Fract& f);
        friend Fract operator-(long long n, const Fract& f);
        friend Fract operator*(long long n, const Fract& f);
        friend Fract operator/(long long n, const Fract& f);
        friend ostream& operator<< (ostream& out, const Fract& f);
        friend istream& operator>> (istream& in, Fract& f);
        
};

Fract::Fract(long long num, long long den) {
    if(den == 0) {
        cerr << "[Fract(long long, long long)] invalid argument exception: denominator cannot be 0" << endl;
        throw "[Fract(long long, long long)] invalid argument exception: denominator cannot be 0";
    }
    this->num = num;
    this->den = den;
    this->semp();
}

long long Fract::abs(long long n) {
    return (n > 0) ? n : -n;
}

long long Fract::pow(long long n, long long exp) {
    long long res = 1;
    for(long long i = 0; i < exp; i++) {
        res *= n;
    }
    return res;
}

long long Fract::mcd(long long x, long long y) {
    while(y != 0) {
        long long temp = x;
        x = y;
        y = temp % y;
    }
    return x;
}

long long Fract::mcm(long long x, long long y) {
    return this->abs(x * y) / this->mcd(x, y);
}

void Fract::adjustSign() {
    if(this->den < 0 && this->num > 0) {
        this->num = -this->num;
        this->den = -this->den;
    }
}

void Fract::semp() {
    const long long mcd = this->mcd(this->num, this->den);
    this->num /= mcd;
    this->den /= mcd;
    this->adjustSign();
}

Fract& Fract::operator=(const Fract& f) {
    this->num = f.num;
    this->den = f.den;
    return *this;
}

Fract& Fract::operator=(long long n) {
    const Fract f = Fract(n, 1);
    this->num = f.num;
    this->den = f.den;
    return *this;
}

Fract Fract::operator-() {
    return Fract(-this->num, this->den);
}

Fract& Fract::operator++() {
    *this += 1;
    return *this;
}

Fract& Fract::operator--() {
    *this -= 1;
    return *this;
}

Fract Fract::operator++(int n) {
    Fract res = *this;
    *this += 1;
    return res;
}

Fract Fract::operator--(int n) {
    Fract res = *this;
    *this -= 1;
    return res;
}

Fract Fract::operator+(const Fract& f) {
    const long long mcm = this->mcm(this->den, f.den);
    long long num = this->num * mcm / this->den + f.num * mcm / f.den;
    long long den = mcm;
    return Fract(num, den);
}

Fract Fract::operator-(const Fract& f) {
    const long long mcm = this->mcm(this->den, f.den);
    long long num = this->num * mcm / this->den - f.num * mcm / f.den;
    long long den = mcm;
    return Fract(num, den);
}

Fract Fract::operator*(const Fract& f) {
    return Fract(this->num * f.num, this->den * f.den);
}

Fract Fract::operator/(const Fract& f) {
    return Fract(this->num * f.den, this->den * f.num);
}

Fract Fract::operator^(long long n) {
    Fract res;
    long long num, den;
    if(this->num == 0) {
        res = Fract(0, 1);
    }
    else if(n < 0) {
        num = this->pow(this->den, -n);
        den = this->pow(this->num, -n);
        res = Fract(num, den);
    }
    else {
        num = this->pow(this->num, n);
        den = this->pow(this->den, n);
        res = Fract(num, den);
    }
    return res;
}

Fract Fract::operator+=(const Fract& f) {
    const long long mcm = this->mcm(this->den, f.den);
    this->num = this->num * mcm / this->den + f.num * mcm / f.den;
    this->den = mcm;
    this->semp();
    return *this;
}

Fract Fract::operator-=(const Fract& f) {
    const long long mcm = this->mcm(this->den, f.den);
    this->num = this->num * mcm / this->den - f.num * mcm / f.den;
    this->den = mcm;
    this->semp();
    return *this;
}

Fract Fract::operator*=(const Fract& f) {
    this->num = this->num * f.num;
    this->den = this->den * f.den;
    this->semp();
    return *this;
}

Fract Fract::operator/=(const Fract& f) {
    this->num = this->num * f.den;
    this->den = this->den * f.num;
    this->semp();
    return *this;
}

bool Fract::operator==(const Fract& f) {
    return this->num == f.num && this->den == f.den;
}

bool Fract::operator!=(const Fract& f) {
    return this->num != f.num || this->den != f.den;
}

bool Fract::operator<(const Fract& f) {
    const long long mcm = this->mcm(this->den, f.den);
    return this->num * mcm / this->den < f.num * mcm / f.den;
}

bool Fract::operator<=(const Fract& f) {
    const long long mcm = this->mcm(this->den, f.den);
    return this->num * mcm / this->den <= f.num * mcm / f.den;
}

bool Fract::operator>(const Fract& f) {
    const long long mcm = this->mcm(this->den, f.den);
    return this->num * mcm / this->den > f.num * mcm / f.den;
}

bool Fract::operator>=(const Fract& f) {
    const long long mcm = this->mcm(this->den, f.den);
    return this->num * mcm / this->den >= f.num * mcm / f.den;
}

Fract operator+(long long n, const Fract& f) {
    return Fract(n) + f;
}

Fract operator-(long long n, const Fract& f) {
    return Fract(n) - f;
}

Fract operator*(long long n, const Fract& f) {
    return Fract(f.num * n, f.den);
}

Fract operator/(long long n, const Fract& f) {
    return Fract(f.den * n, f.num);
}

ostream& operator<< (ostream& out, const Fract& f) {
    out << f.num;
    if(f.den != 1) {
        out << "/" << f.den;
    }
    return out;
}

istream& operator>> (istream& in, Fract& f) {
    long long num, den = 1;
    char ch;
    in >> num;
    cin.get(ch);
    if(ch == '/') {
        in >> den;
    }
    f = Fract(num, den);
    return in;
}