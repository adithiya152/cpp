#ifndef RATIONAL_H
#define RATIONAL_H

#include<iostream>


// Rational class definition
class rational {
public:
    int N, D;
    rational();
    rational(int x, int y);
    //rational(const rational& a);
   

    void input();
    void output();
    void simplify();
    void fractionof();
    void decimalof();
    rational operator + (const rational& b) const;
    rational operator - (const rational& b) const;
    rational operator * (const rational& b) const;
    rational operator / (const rational& b) const;
    rational operator = (const rational& b) const;
    rational operator += (const rational& b) const;
    rational operator -= (const rational& b) const;
    rational operator *= (const rational& b) const;
    rational operator /= (const rational& b) const;
    
    
    //rational operator * (double d) const;
    //rational operator / (double d) const;
    //double operator * (const rational& b) const;
    rational operator + ();
    rational operator - ();


    //void operator+(rational);
    //void operator-(rational);
    //void operator *(rational);
    //void operator /(rational);
};

#endif //RATIONAL_H