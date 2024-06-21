#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    double x,y;
public:
    Vector();
    Vector(double x , double y );
    double getX() const;
    double getY() const;
    double length() const;

    Vector operator+(const Vector& other) const;
    Vector operator-(const Vector& other) const;
    Vector operator*(double scalar) const;


};

#endif