

#ifndef EE205_FINAL_EXAM_RECTANGLE_H
#define EE205_FINAL_EXAM_RECTANGLE_H

#endif //EE205_FINAL_EXAM_RECTANGLE_H

#pragma once
#include "Shape.h"

class Rectangle: public Shape {

public:

    double newLength();

    double newWidth();

    double getLength(); ///Getters

    double getWidth();

public:

    Rectangle(double newLength, double newWidth); ///Constructor

    double compute_area() const noexcept;

protected:
    double length;

    double width;

};