#include "shape.h"
// Color define 

Color:: Color() : r(0), g(0), b(0) {}

Color:: Color(int r, int g, int b) : r(r), g(g), b(b) {}

Color:: Color(const Color &C) : r(C.r), g(C.g), b(C.b) {}

std::ostream& operator<< (std::ostream& os, const Color& c) {
    os << "rgb(" << c.r << ", " << c.g << ", " << c.b << ")";
    return os;
}
// - - - - - - 
// Shapedata define
Shapedata:: Shapedata() {
    _x = _y = _x1 = _x2 = _y1 = _y2 = _cx = _cy = _r = _rx = _ry = _height = _width = _stroke_width = 0;
    _stroke = Color(0, 0, 0); 
    _fill = Color(255, 255, 255);
    _stroke_opacity = 1; 
    _fill_opacity = 1;
}
/* void Shapedata:: show_shapedata() { */
/*     std::cout << "x=" << _x << " y=" << _y << " x1=" << _x1 << " y1=" << _y1 << " x2=" << _x2 << " y2=" << _y2 << '\n'; */
/*     std::cout << "cx=" << _cx << " cy=" << _cy << " r=" << _r << " rx=" << _rx << " ry=" << _ry << '\n'; */
/*     std::cout << "height=" << _height << " width=" << _width << " stroke_width=" << _stroke_width << " stroke=" << _stroke << " stroke_opacity=" << _stroke_opacity << '\n'; */
/*     std::cout << "fill=" << _fill << " fill_opacity=" << _fill_opacity << '\n'; */
/* } */

void Shapedata:: show_shapedata() {
    std::cout << "x=" << get_x() << " y=" << get_y() << " x1=" << get_x1() << " y1=" << get_y1() << " x2=" << get_x2() << " y2=" << get_y2() << '\n';
    std::cout << "cx=" << get_cx() << " cy=" << get_cy() << " r=" << get_r() << " rx=" << get_rx() << " ry=" << get_ry() << '\n';
    std::cout << "height=" << get_height() << " width=" << get_width() << " strokeget_width()=" << get_stroke_width() << " stroke=" << get_stroke() << " strokeget_opacity()=" << get_stroke_opacity() << '\n';
    std::cout << "fill=" << get_fill() << " fillget_opacity()=" << get_fill_opacity() << '\n';
}
// - - - - - - 
// Attribute define

// - - - - - - 
// X define
std::string X:: getName() {
    return "x";
}

void X:: setValue(char* attr_value, Shapedata &data) {
    this->value = atoi(attr_value);
    data.set_x(this->value);
}

void X:: what_is_this() {
    std::cout << "x=" << value << ' ';
}
// - - - - - -
// Y define
std::string Y:: getName() {
    return "y";
}

void Y:: setValue(char* attr_value, Shapedata &data) {
    this->value = atoi(attr_value);
    data.set_y(this->value);
}

void Y:: what_is_this() {
    std::cout << "y=" << value << ' ';
}
// - - - - - -
// X1 define
std::string X1:: getName() {
    return "x1";
}

void X1:: setValue(char* attr_value, Shapedata &data) {
    this->value = atoi(attr_value);
    data.set_x1(this->value);
}

void X1:: what_is_this() {
    std::cout << "x1=" << value << ' ';
}
// - - - - - -
// Y1 define
std::string Y1:: getName() {
    return "y1";
}

void Y1:: setValue(char* attr_value, Shapedata &data) {
    this->value = atoi(attr_value);
    data.set_y1(this->value);
}

void Y1:: what_is_this() {
    std::cout << "y1=" << value << ' ';
}
// - - - - - -
// X2 define
std::string X2:: getName() {
    return "x2";
}

void X2:: setValue(char* attr_value, Shapedata &data) {
    this->value = atoi(attr_value);
    data.set_x2(this->value);
}

void X2:: what_is_this() {
    std::cout << "x2=" << value << ' ';
}
// - - - - - -
// Y2 define
std::string Y2:: getName() {
    return "y2";
}

void Y2:: setValue(char* attr_value, Shapedata &data) {
    this->value = atoi(attr_value);
    data.set_y2(this->value);
}

void Y2:: what_is_this() {
    std::cout << "y2=" << value << ' ';
}
// - - - - - -
// Cx define
std::string Cx:: getName() {
    return "cx";
}

void Cx:: setValue(char* attr_value, Shapedata &data) {
    this->value = atoi(attr_value);
    data.set_cx(this->value);
}

void Cx:: what_is_this() {
    std::cout << "cx=" << value << ' ';
}
// - - - - - -
// Cy define
std::string Cy:: getName() {
    return "cy";
}

void Cy:: setValue(char* attr_value, Shapedata &data) {
    this->value = atoi(attr_value);
    data.set_cy(this->value);
}

void Cy:: what_is_this() {
    std::cout << "cy=" << value << ' ';
}
// - - - - - -
// R define
std::string R:: getName() {
    return "r";
}

void R:: setValue(char* attr_value, Shapedata &data) {
    this->value = atoi(attr_value);
    data.set_r(this->value);
}

void R:: what_is_this() {
    std::cout << "r=" << value << ' ';
}
// - - - - - -
// Rx define
std::string Rx:: getName() {
    return "rx";
}

void Rx:: setValue(char* attr_value, Shapedata &data) {
    this->value = atoi(attr_value);
    data.set_rx(this->value);
}

void Rx:: what_is_this() {
    std::cout << "rx=" << value << ' ';
}
// - - - - - -
// Ry define
std::string Ry:: getName() {
    return "ry";
}

void Ry:: setValue(char* attr_value, Shapedata &data) {
    this->value = atoi(attr_value);
    data.set_ry(this->value);
}

void Ry:: what_is_this() {
    std::cout << "ry=" << value << ' ';
}
// - - - - - -
// Height define
std::string Height:: getName() {
    return "height";
}

void Height:: setValue(char* attr_value, Shapedata &data) {
    this->value = atoi(attr_value);
    data.set_height(this->value);
}

void Height:: what_is_this() {
    std::cout << "height=" << value << ' ';
}
// - - - - - - 
// Weight define
std::string Width:: getName() {
    return "width";
}

void Width:: setValue(char* attr_value, Shapedata &data) {
    this->value = atoi(attr_value);
    data.set_width(this->value);
}

void Width:: what_is_this() {
    std::cout << "width=" << value << ' ';
}
// - - - - - - 
// Fill define
std::string Fill:: getName() {
    return "fill";
}

void Fill:: setValue(char* attr_value, Shapedata &data) {
    this->value = project::atoc(attr_value);
    data.set_fill(this->value);
}

void Fill:: what_is_this() {
    std::cout << "fill=" << value << ' ';
}
// - - - - - - 
// Fill_opacity define
std::string Fill_opacity:: getName() {
    return "fill-opacity";
}

void Fill_opacity:: setValue(char* attr_value, Shapedata &data) {
    this->value = atof(attr_value);
    data.set_fill_opacity(this->value);
}

void Fill_opacity:: what_is_this() {
    std::cout << "fill-opacity=" << value << ' ';
}
// - - - - - - 
// Stroke define
std::string Stroke:: getName() {
    return "stroke";
}

void Stroke:: setValue(char* attr_value, Shapedata &data) {
    this->value = project::atoc(attr_value);
    data.set_stroke(this->value);
}

void Stroke:: what_is_this() {
    std::cout << "stroke=" << value << ' ';
}
// - - - - - - 
// Stroke_width define
std::string Stroke_width:: getName() {
    return "stroke-width";
}

void Stroke_width:: setValue(char* attr_value, Shapedata &data) {
    this->value = atoi(attr_value);
    data.set_stroke_width(this->value);
}

void Stroke_width:: what_is_this() {
    std::cout << "stroke-width=" << value << ' ';
}
// - - - - - - 
// Stroke_opacity define
std::string Stroke_opacity:: getName() {
    return "stroke-opacity";
}

void Stroke_opacity:: setValue(char* attr_value, Shapedata &data) {
    this->value = atof(attr_value);
    data.set_stroke_opacity(this->value);
}

void Stroke_opacity:: what_is_this() {
    std::cout << "stroke-opacity=" << value << ' ';
}
// - - - - - - 
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
// Shape define
Shape:: Shape(const Shape& s) {
    this->attributes = s.attributes;
    this->sdata = s.sdata;
}

Shape& Shape:: operator=(const Shape& s) {
    this->attributes = s.attributes;
    this->sdata = s.sdata;
    return *this;
}

void Shape:: setAttribute(char* attr_name, char* attr_value, Shapedata &data) {
    int size = this->attributes.size();
    for (int i=0; i < size; i++) {
        if (std::string(attr_name) == this->attributes[i]->getName()) {
            this->attributes[i]->setValue(attr_value, data);
        }
    }
}

void Shape:: input(rapidxml::xml_node<>* node, Shapedata &data) {
    for (rapidxml::xml_attribute<> *attr = node->first_attribute(); attr; attr = attr->next_attribute())
        this->setAttribute(attr->name(), attr->value(), data);
}

void Shape:: setlink(Shapedata link) {
    sdata = link;
}

void Shape:: show_linker_data() {
    sdata.show_shapedata(); 
    /* std::cout << "This link is " << sdata << '\n'; */
}

void Shape:: what_is_this() {
    std::cout << '\t';
    for (int i=0, size=attributes.size(); i < size; i++)
        attributes[i]->what_is_this();
    std::cout << '\n';
}
// - - - - - - - 
// Line define
Line:: Line () {
    attributes.push_back(new X1);
    attributes.push_back(new Y1);
    attributes.push_back(new X2);
    attributes.push_back(new Y2);
    attributes.push_back(new Stroke);
    attributes.push_back(new Stroke_width);
    attributes.push_back(new Stroke_opacity);
}

Line:: Line (const Line& l) {
    Line();
    this->attributes = l.attributes;
}

Line& Line:: operator= (const Line& l) {
    if (this == &l) 
        return *this;
    this->attributes = l.attributes;
    return *this;
}

void Line:: what_is_this() {
    std::cout << "This is a Line " << '\n';
    Shape::what_is_this();
}
// - - - - - - -
// Rectangle define
Rectangle:: Rectangle () {
    attributes.push_back(new X);
    attributes.push_back(new Y);
    attributes.push_back(new Width);
    attributes.push_back(new Height);
    attributes.push_back(new Fill);
    attributes.push_back(new Fill_opacity);
    attributes.push_back(new Stroke);
    attributes.push_back(new Stroke_width);
    attributes.push_back(new Stroke_opacity);
}

Rectangle:: Rectangle (const Rectangle& r) {
    Rectangle();
    this->attributes = r.attributes;
}

Rectangle& Rectangle:: operator= (const Rectangle& r) {
    if (this == &r) 
        return *this;
    this->attributes = r.attributes;
    return *this;
}

void Rectangle:: what_is_this() {
    std::cout << "This is a Rectangle " << '\n';
    Shape::what_is_this();
}
// - - - - - - -
// Circle define
Circle:: Circle () {
    attributes.push_back(new Cx);
    attributes.push_back(new Cy);
    attributes.push_back(new R);
    attributes.push_back(new Fill);
    attributes.push_back(new Fill_opacity);
    attributes.push_back(new Stroke);
    attributes.push_back(new Stroke_width);
    attributes.push_back(new Stroke_opacity);
}

Circle:: Circle (const Circle& c) {
    Circle();
    this->attributes = c.attributes;
}

Circle& Circle:: operator= (const Circle& c) {
    if (this == &c) 
        return *this;
    this->attributes = c.attributes;
    return *this;
}

void Circle:: what_is_this() {
    std::cout << "This is a Circle " << '\n';
    Shape::what_is_this();
}
// - - - - - - -
// Ellipse define
Ellipse:: Ellipse () {
    attributes.push_back(new Cx);
    attributes.push_back(new Cy);
    attributes.push_back(new Rx);
    attributes.push_back(new Ry);
    attributes.push_back(new Fill);
    attributes.push_back(new Fill_opacity);
    attributes.push_back(new Stroke);
    attributes.push_back(new Stroke_width);
    attributes.push_back(new Stroke_opacity);
}

Ellipse:: Ellipse (const Ellipse& e) {
    Ellipse();
    this->attributes = e.attributes;
}

Ellipse& Ellipse:: operator= (const Ellipse& e) {
    if (this == &e)
        return *this;
    this->attributes = e.attributes;
    return *this;
}

void Ellipse:: what_is_this() {
    std::cout << "This is a Ellipse " << '\n';
    Shape::what_is_this();
}
// - - - - - - -
// Polyline define
Polyline:: Polyline () {
    attributes.push_back(new Fill);
    attributes.push_back(new Fill_opacity);
    attributes.push_back(new Stroke);
    attributes.push_back(new Stroke_width);
    attributes.push_back(new Stroke_opacity);
}

Polyline:: Polyline (const Polyline& p) {
    Polyline();
    this->attributes = p.attributes;
}

Polyline& Polyline:: operator= (const Polyline& p) {
    if (this == &p)
        return *this;
    this->attributes = p.attributes;
    return *this;
}

void Polyline:: what_is_this() {
    std::cout << "This is a Polyline " << '\n';
    Shape::what_is_this();
}
// - - - - - - -
// Polygon define
Polygon:: Polygon () {
    attributes.push_back(new Fill);
    attributes.push_back(new Fill_opacity);
    attributes.push_back(new Stroke);
    attributes.push_back(new Stroke_width);
    attributes.push_back(new Stroke_opacity);
}

Polygon:: Polygon (const Polygon& p) {
    Polygon();
    this->attributes = p.attributes;
}

Polygon& Polygon:: operator= (const Polygon& p) {
    if (this == &p)
        return *this;
    this->attributes = p.attributes;
    return *this;
}

void Polygon:: what_is_this() {
    std::cout << "This is a Polygon " << '\n';
    Shape::what_is_this();
}
// - - - - - - -
// Text define

void Text:: what_is_this() {
    std::cout << "This is a Text " << '\n';
    Shape::what_is_this();
}
// - - - - - - 
// Path

void Path:: what_is_this() {
    std::cout << "This is a Path " << '\n';
    Shape::what_is_this();
}
// - - - - - - 
// Group

void Group:: what_is_this() {
    std::cout << "This is a Group " << '\n';
    Shape::what_is_this();
}
// - - - - - - 
// project define
Color project::atoc(char* c) {
    int t[3] = {0, 0, 0}, j = 0;
    for (int i=0; i < 3; i++) {
        while (c[j] < '0' || c[j] > '9')
            j++;
        while (c[j] >= '0' && c[j] <= '9') {
            t[i] = t[i] * 10 + c[j] - '0';
            j++;
        }
    }
    return Color(t[0], t[1], t[2]);
}
void project:: inputFromFile(std::vector<Shape*> &_shape, std::string filename, Database &data_system)
{
    //cout << "Parsing the file ......." << endl;
    rapidxml::xml_document<> doc;
    rapidxml::xml_node<> * root_node;
    std::ifstream theFile(filename);
    std::vector<char> buffer((std::istreambuf_iterator<char>(theFile)), std::istreambuf_iterator<char>());
    buffer.push_back('\0');
    doc.parse<0>(&buffer[0]);
    root_node = doc.first_node("svg");
    Shape* nw;
    for (rapidxml::xml_node<> * object_node = root_node->first_node(); object_node; object_node = object_node->next_sibling())
    {
        //cout << "This is object: " << object_node->name() << endl;
        nw = NULL;
        std::string stmp = object_node->name();
        if (stmp == "line")
            nw = new Line;
        else if (stmp == "polyline")
            nw = new Polyline;
        else if (stmp == "polygon")
            nw = new Polygon;
        else if (stmp == "rect")
            nw = new Rectangle;
        else if (stmp == "circle")
            nw = new Circle;
        else if (stmp == "ellipse")
            nw = new Ellipse;
        else if (stmp == "text")
            nw = new Text;
        /* else if (stmp == "g") */
            /* nw = new Group; */
        /* else if (stmp == "path") */
            /* nw = new Path; */

        if (nw != NULL) 
        {
            Shapedata data_object;
            nw->input(object_node, data_object);
            data_system.add(data_object);

            nw->setlink( data_object);
            _shape.push_back(nw);
        }
        nw = NULL;
    }
    return;
}
