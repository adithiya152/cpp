#include<algorithm>
#include "Rational.h" 
using namespace std;

// Get Input
void rational::input()
{
    cout << "\nNumerator   = ";
    cin >> N;
    cout << "Denominator = ";
    cin >> D;
}

//Print Output
void rational::output()
{
    simplify();
    if (D == 1)
        decimalof();
    else
        cout << N << "/" << D;
}

//No Parameters
rational::rational()
{
    N = 0;
    D = 1;
    simplify();
}

//Two Int Parameters
rational::rational(int x, int y)
{
    N = x;
    D = y;
    simplify();
}

void rational::simplify() 
{
    if (D < 0)                      // Checking if denominator is negative.
    {
        D = -D;                     // If so transfer negative symbol to numerator.
        N = -N;
    }
    int x = abs(N);                 // Calculating absolute values of Num & Den
    int y = abs(D);
    while (y > 0)                   // While Loop until absolute(Denominator) > 0
    {
        int temp = x % y;           // Calculating the GCD (Greatest common Divisor)
        x = y;                      // Bubble sort (Swap Values)
        y = temp;
    }
    N /= x;                         
    D /= x;
}


void rational::decimalof()
{
    float x = N;
    float y = D;
    double decimal = x / y;
    cout << decimal;
}

void rational::fractionof()
{
    if (D < 0)                      // Checking if denominator is negative.
    {
        D = -D;                     // If so transfer negative symbol to numerator.
        N = -N;
    }
    cout << N << "/" << D;
}

//Arithmetic Operators Overloading

rational rational::operator + (const rational& b) const
{
    return rational(N * b.D + D * b.N, D * b.D);
}

rational rational::operator - (const rational& b) const
{
    return rational(N * b.D - D * b.N, D * b.D);
}

rational rational::operator * (const rational& b) const
{
    return rational(N * b.N, D * b.D);
}

rational rational::operator / (const rational& b) const
{
    return rational(N * b.D, D * b.N);
}



//Assignment Operators Overloading

rational rational::operator=(const rational& b) const
{
    return rational();
}

rational rational::operator+=(const rational& b) const
{
    return rational((N * b.D) + (b.D * b.N), D * b.D);
}

rational rational::operator-=(const rational& b) const
{
    return rational((N * b.D) - (b.D * b.N), D * b.D);
}

rational rational::operator*=(const rational& b) const
{
    return rational(N * b.D, D * b.N);
}

rational rational::operator/=(const rational& b) const
{
    return rational(N * b.D, D * b.N);
}



// Unary Operators Overloading

rational rational::operator + ()
{
    return *this;
}

rational rational::operator - ()
{
    rational t(-N, D);
   return t;
}

