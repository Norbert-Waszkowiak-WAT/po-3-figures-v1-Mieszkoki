#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <sstream>
#include "point.h"
#include "line.h"
using namespace std;

class Triangle{
private:
  Point a;
  Point b;
  Point c;
public:
Triangle(Point a, Point b, Point c);
Triangle(const Triangle &other);
bool equals (const Triangle &other);
void flip();
void move (double x, double y);
double getSurface();
double getLength(Point &a, Point &b);
string toString();

}; 
#endif