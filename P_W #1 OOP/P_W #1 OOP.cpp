#include <iostream>
using namespace std;
#define PI 3.1416
class Complex_Num {
private:
    int re;
    int im;
public:
    Complex_Num() {
        re = 1;
        im = 1;
    }
    Complex_Num(int real, int imag) {
        re = real;
        im = imag;
    }


    void Input() {
        cin >> re;
        cin >> im;
    }

    bool Equal(Complex_Num c_n) const {
        if (this->re == c_n.re && this->im == c_n.im) {
            return true;
        }
        else {
            return false;
        }
    }

    double Module() {
        return sqrt(pow(re, 2) + pow(im, 2));
    }

    double Argument() {
        if (re > 0) {
            return atan2(im, re);
        }
        else if (re < 0 and im < 0) {
            return -PI + atan2(im, re);
        }
        else {
            return PI + atan2(im, re);
        }
        
    }

    Complex_Num Add(Complex_Num c_n) {
        Complex_Num c;
        c.re = this->re + c_n.re;
        c.im = this->im + c_n.im;
        return c;
    }

    Complex_Num Add(int x) {
        Complex_Num c;
        c.re = this->re + x;
        c.im = this->im;
        return c;
    }

    Complex_Num Substract(Complex_Num c_n) {
        Complex_Num c;
        c.re = this->re - c_n.re;
        c.im = this->im - c_n.im;
        return c;
    }

    Complex_Num Multiply(Complex_Num c_n) {
        Complex_Num c;
        c.re = this->re * c_n.re - this->im * c_n.im;
        c.im = this->re * c_n.im + this->im * c_n.re;
        return c;
    }

    Complex_Num Multiply(int x) {
        Complex_Num c;
        c.re = this->re * x;
        c.im = this->im * x;
        return c;
    }

    void Print() {
        if (im > 0) {
            cout << re << " + " << im << "i" << endl;
        }
        else if (im < 0) {
            cout << re << " - " << fabs(im) << "i" << endl;
        }
        else {
            cout << re << endl;
        }
    }
 
};
int main()
{
    Complex_Num z1, z2, z3(5, 4), z4(z3), z5;
    z1.Print();
    z2.Print();
    z3.Print();
    cout << z3.Module() << '\t' << z3.Argument() << endl;
    z4.Print();
    z5.Print();
    cout << z5.Equal(z1) << endl;
    z2 = z3.Add(z1);
    z2.Print();
    z1 = z1.Add(6);
    z1.Print();
    z5 = z5.Substract(z2);
    z5.Print();
    z5.Input();
    z5.Print();
    z1 = z1.Multiply(-2);
    z1.Print();
    z5 = z5.Multiply(z1);
    z5.Print();
}

