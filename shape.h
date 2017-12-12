#pragma once
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>

typedef float Type;

class Attribute {

};

class Fill : public Attribute {

};

class Fill_opacity : public Attribute {

};

class Stroke : public Attribute {

};

class Stroke_width : public Attribute {

};

class Stroke_opacity : public Attribute {

};

class Color{
private:
    int r, g, b;
public:
    Color ();
    Color (int r, int g, int b);
    Color (const Color &C);
};

class Shape{
protected:
    Color stroke;
    Color fill;
    Stroke_width stroke_width;
    Stroke_opacity stroke_opacity;
    Fill_opacity fill_opacity;
public:

    Shape& operator= (const Shape& s);
    Color get_stroke ();
    Color get_fill ();
    Type get_stroke_width ();
    Type get_stroke_opacity ();
    Type get_fill_opacity ();
    void set_stroke (Color stroke);
    void set_fill (Color fill);
    void set_stroke_width (Stroke_width stroke_width);
    void set_stroke_opacity (Type stroke_opacity);
    void set_fill_opacity (Type fill_opacity);
};

class Point {
private:
    int x, y;
public:
    Point ();
    Point (int x, int y);
    Point (const Point& p);
    Point& operator= (const Point& p);
    void set_point (int x, int y);
};

class Line : public Shape{
private:
    // Point p1, p2
    // Color stroke
    // Type stroke_width, stroke_opacity
    Point p1, p2; 
    // transform
public:
    Line ();
    Line (const Line& l);
    Line& operator= (const Line& l);
};

class Rectangle : public Shape{
private:
    // Point p
    // Type width, height
    // Color stroke, fill
    // Type stroke_width, stroke_opacity, fill_opacity
    Point p;
    Type width;
    Type height;
    // transform
public:
    Rectangle ();
    Rectangle (const Rectangle& r);
    Rectangle& operator= (const Rectangle& r);
};

class Circle : public Shape{
private:
    // Point c
    // Type r
    // Color stroke, fill
    // Type stroke_width, stroke_opacity, fill_opacity
    Point c;
    Type r;
    // transform
public:
    Circle ();
    Circle (const Circle& c);
    Circle& operator= (const Circle& c);
};

class Ellipse : public Shape{
private:
    // Point c
    // Type rx, ry
    // Color stroke, fill
    // Type stroke_width, stroke_opacity, fill_opacity
    Point c;
    Type rx;
    Type ry;
    // transform
public:
    Ellipse ();
    Ellipse (const Ellipse& e);
    Ellipse& operator= (const Ellipse& e);
};

class Polyline : public Shape{
private:
    // vector<Point> points
    // Color stroke, fill
    // Type stroke_width, stroke_opacity, fill_opacity
    std::vector<Point> points;
    // transform
public:
    Polyline ();
    Polyline (const Polyline& p);
    Polyline& operator= (const Polyline& p);
};

class Polygon : public Shape{
private:
    // vector<Point> points
    // Color stroke, fill
    // Type stroke_width, stroke_opacity, fill_opacity
    std::vector<Point> points;
    // transform
public:  
    Polygon ();
    Polygon (const Polygon& p);
    Polygon& operator= (const Polygon& p);
};
