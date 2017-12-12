#include "shape.h"

// Color define 

Color:: Color() : r(0), g(0), b(0) {}

Color:: Color(int r, int g, int b) : r(r), g(g), b(b) {}

Color:: Color(const Color &C) : r(C.r), g(C.g), b(C.b) {}
// - - - - - - 

// Shape define
Shape& Shape:: operator= (const Shape& s) {
    this->stroke = s.stroke;
    this->fill = s.fill;
    this->stroke_width = s.stroke_width;
    this->stroke_opacity = s.stroke_opacity;
    this->fill_opacity = s.fill_opacity;
    return *this;
}

Color Shape:: get_stroke () {
    return stroke;
}

Color Shape:: get_fill () {
    return fill;
}

Type Shape:: get_stroke_width () {
    return stroke_width;
}

Type Shape:: get_stroke_opacity () {
    return stroke_opacity;
}

Type Shape:: get_fill_opacity () {
    return fill_opacity;
}

void Shape:: set_stroke (Color stroke) {
    this->stroke = stroke;
}

void Shape:: set_fill (Color fill) {
    this->fill = fill;
}

void Shape:: set_stroke_width (Type stroke_width) {
    this->stroke_width = stroke_width;
}

void Shape:: set_stroke_opacity (Type stroke_opacity) {
    this->stroke_opacity = stroke_opacity;
}

void Shape:: set_fill_opacity (Type fill_opacity) {
    this->fill_opacity = fill_opacity;
}

// - - - - - - - 
// Point define
Point:: Point () {
    x = 0; 
    y = 0;
}

Point:: Point (int x, int y) {
    this->x = x;
    this->y = y;
}

Point:: Point (const Point& p) {
    this->x = p.x;
    this->y = p.y;
}

Point& Point:: operator= (const Point& p) {
    this->x = p.x;
    this->y = p.y;
    return *this;
}

void Point:: set_point (int x, int y) {
    this->x = x;
    this->y = y;
}

// - - - - - - -
// Line define
Line:: Line () {

}

Line:: Line (const Line& l) {
    this->p1 = l.p1;
    this->p2 = l.p2;
    this->stroke = l.stroke;
    this->stroke_width = l.stroke_width;
    this->stroke_opacity = l.stroke_opacity;
}

Line& Line:: operator= (const Line& l) {
    if (this == &l) 
        return *this;
    this->p1 = l.p1;
    this->p2 = l.p2;
    this->stroke = l.stroke;
    this->stroke_width = l.stroke_width;
    this->stroke_opacity = l.stroke_opacity;
    return *this;
}
// - - - - - - -
// Rectangle define
Rectangle:: Rectangle () {
    
}

Rectangle:: Rectangle (const Rectangle& r) {
    this->p = r.p;
    this->width = r.width;
    this->height = r.height;
    this->stroke = r.stroke;
    this->fill = r.fill;
    this->stroke_width = r.stroke_width;
    this->stroke_opacity = r.stroke_opacity;
    this->fill_opacity = r.fill_opacity;
}

Rectangle& Rectangle:: operator= (const Rectangle& r) {
    if (this == &r) 
        return *this;
    this->p = r.p;
    this->width = r.width;
    this->height = r.height;
    this->stroke = r.stroke;
    this->fill = r.fill;
    this->stroke_width = r.stroke_width;
    this->stroke_opacity = r.stroke_opacity;
    this->fill_opacity = r.fill_opacity;
    return *this;
}
// - - - - - - -
// Circle define
Circle:: Circle () {

}

Circle:: Circle (const Circle& c) {
    this->c = c.c;
    this->r = c.r;
    this->stroke = c.stroke;
    this->fill = c.fill;
    this->stroke_width = c.stroke_width;
    this->stroke_opacity = c.stroke_opacity;
    this->fill_opacity = c.fill_opacity;
}

Circle& Circle:: operator= (const Circle& c) {
    if (this == &c) 
        return *this;
    this->c = c.c;
    this->r = c.r;
    this->stroke = c.stroke;
    this->fill = c.fill;
    this->stroke_width = c.stroke_width;
    this->stroke_opacity = c.stroke_opacity;
    this->fill_opacity = c.fill_opacity;
    return *this;
}
// - - - - - - -
// Ellipse define
Ellipse:: Ellipse () {

}

Ellipse:: Ellipse (const Ellipse& e) {
    this->c = e.c;
    this->rx = e.rx;
    this->ry = e.ry;
    this->stroke = e.stroke;
    this->fill = e.fill;
    this->stroke_width = e.stroke_width;
    this->stroke_opacity = e.stroke_opacity;
    this->fill_opacity = e.fill_opacity;
}

Ellipse& Ellipse:: operator= (const Ellipse& e) {
    if (this == &e)
        return *this;
    this->c = e.c;
    this->rx = e.rx;
    this->ry = e.ry;
    this->stroke = e.stroke;
    this->fill = e.fill;
    this->stroke_width = e.stroke_width;
    this->stroke_opacity = e.stroke_opacity;
    this->fill_opacity = e.fill_opacity;
    return *this;
}
// - - - - - - -
// Polyline define
Polyline:: Polyline () {

}

Polyline:: Polyline (const Polyline& p) {
    this->points = p.points;
    this->stroke = p.stroke;
    this->fill = p.fill;
    this->stroke_width = p.stroke_width;
    this->stroke_opacity = p.stroke_opacity;
    this->fill_opacity = p.fill_opacity;
}

Polyline& Polyline:: operator= (const Polyline& p) {
    if (this == &p)
        return *this;
    this->points = p.points;
    this->stroke = p.stroke;
    this->fill = p.fill;
    this->stroke_width = p.stroke_width;
    this->stroke_opacity = p.stroke_opacity;
    this->fill_opacity = p.fill_opacity;
    return *this;
}
// - - - - - - -
// Polygon define
Polygon:: Polygon () {

}

Polygon:: Polygon (const Polygon& p) {
    this->points = p.points;
    this->stroke = p.stroke;
    this->fill = p.fill;
    this->stroke_width = p.stroke_width;
    this->stroke_opacity = p.stroke_opacity;
    this->fill_opacity = p.fill_opacity;
}

Polygon& Polygon:: operator= (const Polygon& p) {
    if (this == &p)
        return *this;
    this->points = p.points;
    this->stroke = p.stroke;
    this->fill = p.fill;
    this->stroke_width = p.stroke_width;
    this->stroke_opacity = p.stroke_opacity;
    this->fill_opacity = p.fill_opacity;
    return *this;
}
// - - - - - - -
