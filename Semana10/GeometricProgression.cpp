//
// Created by David Lazo on 5/06/2019.
//
#include "GeometricProgression.h"

GeometricProgressionIterator& GeometricProgressionIterator::operator++() {
    curr *=step;
    return *this;
}
GeometricProgressionIterator& GeometricProgressionIterator::operator++(int) {
    auto it = this;
    ++(*this);
    return *it;
}
bool GeometricProgressionIterator::operator==(const GeometricProgressionIterator &other) const {
    return curr == other.curr;
}
bool GeometricProgressionIterator::operator!=(const GeometricProgressionIterator &other) const {
    return curr < other.curr;
}
long& GeometricProgressionIterator::operator*() {
    return curr;
}