#include "shape.h"

int main() {
    Database data_system;
    std::vector<Shape*> _shape;
    project::inputFromFile(_shape, "duc.svg", data_system);
    for (int size=_shape.size(), i=0; i < size; i++)
    {
        _shape[i]->what_is_this();
        /* _shape[i]->show_linker_data(); */
    }
    return 0;
}
