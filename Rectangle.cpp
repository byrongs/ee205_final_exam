
// Created by Alice Soriano on 5/13/2
#include <stdexcept>

#include "Rectangle.h"
using namespace std;


double Rectangle::newLength()
{   if(length <= 0) {
    throw std::invalid_argument(" Length must be greater than 0");
}
    return length();
}


double Rectangle::newWidth() {
    if(width <= 0) {
        throw std::invalid_argument(" Width must be greater than 0");
    }
    return width();
}


Rectangle::Rectangle(double newLength, double newWidth) : Shape(newLength, newWidth) {
}


double Rectangle::compute_area() const noexcept {
    return (length * width);
}
