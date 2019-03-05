#ifndef FRACT
#define FRACT

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

#endif