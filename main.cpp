#include "shape.h"

int main() {
    std::vector<Shape*> _shape;
    project::inputFromFile(_shape, "sample.svg");
    for (int size=_shape.size(), i=0; i < size; i++)
        _shape[i]->what_is_this();
    return 0;
}
