#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
#include "rapidxml/rapidxml.hpp"


typedef float Type;

class MyColor{
private:
    int r, g, b;
public:
    MyColor ();
    MyColor (int r, int g, int b);
    MyColor (const MyColor &C);
    friend std::ostream& operator<< (std::ostream& os, const MyColor& c);
};

std::ostream& operator<< (std::ostream& os, const MyColor& c);

class Shapedata {
private:
    int _x, _y, _x1, _y1, _x2, _y2, _cx, _cy, _r, _rx, _ry, _height, _width, _stroke_width;
    MyColor _stroke, _fill;
    double _stroke_opacity, _fill_opacity;
public: 
    Shapedata();
    int get_x() { return _x; }
    int get_y() { return _y; }
    int get_x1() { return _x1; }
    int get_y1() { return _y1; }
    int get_x2() { return _x2; }
    int get_y2() { return _y2; }
    int get_cx() { return _cx; }
    int get_cy() { return _cy; }
    int  get_r() { return _r; }
    int get_rx() { return _rx; }
    int get_ry() { return _ry; }
    int get_height() { return _height; }
    int get_width() { return _width; }
    MyColor get_stroke () { return _stroke ; }
    MyColor get_fill () { return _fill ; }
    int get_stroke_width () { return _stroke_width ; }
    double get_stroke_opacity () { return _stroke_opacity ; }
    double get_fill_opacity () { return _fill_opacity ; }

    void set_x(int t) { _x = t; }
    void set_y(int t) { _y = t; }
    void set_x1(int t) { _x1 = t; }
    void set_y1(int t) { _y1 = t; }
    void set_x2(int t) { _x2 = t; }
    void set_y2(int t) { _y2 = t; }
    void set_cx(int t) { _cx = t; }
    void set_cy(int t) { _cy = t; }
    void set_r(int  t) { _r = t; }
    void set_rx(int t) { _rx = t; }
    void set_ry(int t) { _ry = t; }
    void set_height(int t) { _height = t; }
    void set_width(int t) { _width = t; }
    void set_stroke (MyColor t) { _stroke  = t; }
    void set_fill (MyColor t) { _fill  = t; }
    void set_stroke_width (int t) { _stroke_width  = t; }
    void set_stroke_opacity (double t) { _stroke_opacity  = t; }
    void set_fill_opacity (double t) { _fill_opacity  = t; }
    void show_shapedata();
};

class Attribute {

public:
    virtual std::string getName() = 0;
    virtual void setValue(char* attr_value, Shapedata &data) = 0;
    virtual void what_is_this() = 0;
};

class X : public Attribute {
private:
public:
    int value;
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    int getValue();
    void what_is_this();
};

class Y : public Attribute {
private:
public:
    int value;
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    int getValue();
    void what_is_this();
};

class X1 : public Attribute {
private:
public:
    int value;
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    int getValue();
    void what_is_this();
};

class Y1 : public Attribute {
private:
public:
    int value;
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    int getValue();
    void what_is_this();
};

class X2 : public Attribute {
private:
public:
    int value;
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    int getValue();
    void what_is_this();
};

class Y2 : public Attribute {
private:
public:
    int value;
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    int getValue();
    void what_is_this();
};

class Cx : public Attribute {
private:
public:
    int value;
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    int getValue();
    void what_is_this();
};

class Cy : public Attribute {
private:
public:
    int value;
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    int getValue();
    void what_is_this();
};

class R : public Attribute {
private:
public:
    int value;
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    int getValue();
    void what_is_this();
};

class Rx : public Attribute {
private:
public:
    int value;
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    int getValue();
    void what_is_this();
};

class Ry : public Attribute {
private:
public:
    int value;
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    int getValue();
    void what_is_this();
};

class Height : public Attribute {
private:
public:
    int value;
    Height() : value(0) {}
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    int getValue();
    void what_is_this();
};

class Width : public Attribute {
private:
public:
    int value;
    Width() : value(0) {}
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    int getValue();
    void what_is_this();
};

class Fill : public Attribute {
private:
public:
    MyColor value;
    Fill() : value(MyColor(255, 255, 255)) {}
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    MyColor getValue();
    void what_is_this();
};

class Fill_opacity : public Attribute {
private:
public:
    double value;
    Fill_opacity() : value(1) {}
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    double getValue();
    void what_is_this();
};

class Stroke : public Attribute {
private: 
public:
    MyColor value;
    Stroke() : value(MyColor(0, 0, 0)) {}
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    MyColor getValue();
    void what_is_this();
};

class Stroke_width : public Attribute {
private:
public:
    int value;
    Stroke_width() : value(0) {}
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    int getValue();
    void what_is_this();
};

class Stroke_opacity : public Attribute {
private:
public:
    double value;
    Stroke_opacity() : value(1) {}
    std::string getName();
    void setValue(char* attr_value, Shapedata &data);
    double getValue();
    void what_is_this();
};


class MyPoint {
private:
    int x, y;
public:
    MyPoint ();
    MyPoint (int x, int y);
    MyPoint (const MyPoint& p);
    MyPoint& operator= (const MyPoint& p);
    void set_point (int x, int y);
};

class Shape{
protected:
    std::vector< Attribute*> attributes;
    Shapedata sdata;
public:
    Shape() = default;
    Shape(const Shape& s);
    Shape& operator=(const Shape& s);

    void setAttribute(char* attr_name, char* attr_value, Shapedata &data);
    void input(rapidxml::xml_node<>* object_node, Shapedata &data);
    void setlink(Shapedata link);
    void show_linker_data();

    virtual void what_is_this() = 0;
};

class Line : public Shape{
private:
    // p1, p2
    // stroke
    // stroke_width, stroke_opacity
    MyPoint p1, p2; 
    // transform
public:
    Line ();
    Line (const Line& l);
    Line& operator= (const Line& l);
    void what_is_this();
};

class MyRectangle : public Shape{
private:
    // p
    // width, height
    // stroke, fill
    // stroke_width, stroke_opacity, fill_opacity
    MyPoint p;
    Type width;
    Type height;
    // transform
public:
    MyRectangle ();
    MyRectangle (const MyRectangle& r);
    MyRectangle& operator= (const MyRectangle& r);
    void what_is_this();
};

class MyCircle : public Shape{
private:
    // c
    // r
    // stroke, fill
    // stroke_width, stroke_opacity, fill_opacity
    MyPoint c;
    Type r;
    // transform
public:
    MyCircle ();
    MyCircle (const MyCircle& c);
    MyCircle& operator= (const MyCircle& c);
    void what_is_this();
};

class MyEllipse : public Shape{
private:
    // c
    // rx, ry
    // stroke, fill
    // stroke_width, stroke_opacity, fill_opacity
    MyPoint c;
    Type rx;
    Type ry;
    // transform
public:
    MyEllipse ();
    MyEllipse (const MyEllipse& e);
    MyEllipse& operator= (const MyEllipse& e);
    void what_is_this();
};

class MyPolyline : public Shape{
private:
    // vector<MyPoint> points
    // stroke, fill
    // stroke_width, stroke_opacity, fill_opacity
    std::vector<MyPoint> points;
    // transform
public:
    MyPolyline ();
    MyPolyline (const MyPolyline& p);
    MyPolyline& operator= (const MyPolyline& p);
    void what_is_this();
};

class MyPolygon : public Shape{
private:
    // vector<MyPoint> points
    // stroke, fill
    // stroke_width, stroke_opacity, fill_opacity
    std::vector<MyPoint> points;
    // transform
public:  
    MyPolygon ();
    MyPolygon (const MyPolygon& p);
    MyPolygon& operator= (const MyPolygon& p);
    void what_is_this();
};

class MyText : public Shape {

public:

    void what_is_this();
};

class Path : public Shape {

public:

    void what_is_this();
};

class Group : public Shape {

public:

    void what_is_this();
};

class Database{
private:
    std::vector<Shapedata> data_shape; 
public:
    void add(Shapedata object) {
        data_shape.push_back(object);
    }
    Shapedata& last() {
        return data_shape.back();
    }
};

namespace project{
    MyColor atoc(char* c);
    void inputFromFile(std::vector<Shape*> &_shape, std::string filename, Database &data_system);
}

