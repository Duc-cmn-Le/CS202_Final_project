#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
#include "rapidxml/rapidxml.hpp"


typedef float Type;

class Color{
private:
    int r, g, b;
public:
    Color ();
    Color (int r, int g, int b);
    Color (const Color &C);
    friend std::ostream& operator<< (std::ostream& os, const Color& c);
};

std::ostream& operator<< (std::ostream& os, const Color& c);


class Attribute {

public:
    virtual std::string getName() = 0;
    virtual void setValue(char* attr_value) = 0;
};

class Fill : public Attribute {
private:
    Color value;
public:
    std::string getName();
    void setValue(char* attr_value);
};

class Fill_opacity : public Attribute {
private:
    double value;
public:
    std::string getName();
    void setValue(char* attr_value);

};

class Stroke : public Attribute {
private: 
    Color value;
public:
    std::string getName();
    void setValue(char* attr_value);
};

class Stroke_width : public Attribute {
private:
    int value;
public:
    std::string getName();
    void setValue(char* attr_value);
};

class Stroke_opacity : public Attribute {
private:
    double value;
public:
    std::string getName();
    void setValue(char* attr_value);
};


class Shape{
protected:
    Stroke stroke;
    Fill fill;
    Stroke_width stroke_width;
    Stroke_opacity stroke_opacity;
    Fill_opacity fill_opacity;
    std::vector< Attribute*> attributes;
public:

    Shape& operator= (const Shape& s);
    Stroke get_stroke ();
    Fill get_fill ();
    Stroke_width get_stroke_width ();
    Stroke_opacity get_stroke_opacity ();
    Fill_opacity get_fill_opacity ();
    void set_stroke (Stroke stroke);
    void set_fill (Fill fill);
    void set_stroke_width (Stroke_width stroke_width);
    void set_stroke_opacity (Stroke_opacity stroke_opacity);
    void set_fill_opacity (Fill_opacity fill_opacity);

    void setAttribute(char* attr_name, char* attr_value);
    void input(rapidxml::xml_node<>* object_node);
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
    // p1, p2
    // stroke
    // stroke_width, stroke_opacity
    Point p1, p2; 
    // transform
public:
    Line ();
    Line (const Line& l);
    Line& operator= (const Line& l);
};

class Rectangle : public Shape{
private:
    // p
    // width, height
    // stroke, fill
    // stroke_width, stroke_opacity, fill_opacity
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
    // c
    // r
    // stroke, fill
    // stroke_width, stroke_opacity, fill_opacity
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
    // c
    // rx, ry
    // stroke, fill
    // stroke_width, stroke_opacity, fill_opacity
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
    // stroke, fill
    // stroke_width, stroke_opacity, fill_opacity
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
    // stroke, fill
    // stroke_width, stroke_opacity, fill_opacity
    std::vector<Point> points;
    // transform
public:  
    Polygon ();
    Polygon (const Polygon& p);
    Polygon& operator= (const Polygon& p);
};

class Text : public Shape {

};

class Path : public Shape {

};

class Group : public Shape {

};

namespace etc{
    Color atoc(char* c);
}

void inputFromFile(std::vector<Shape*> &_shape);
