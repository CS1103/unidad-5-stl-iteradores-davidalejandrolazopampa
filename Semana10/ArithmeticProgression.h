//
// Created by David Lazo on 5/06/2019.
//

#ifndef SEMANA10_ARITHMETICPROGRESSION_H
#define SEMANA10_ARITHMETICPROGRESSION_H
#include <iostream>
using namespace std;
class ArithmeticProgressionIterator{
protected:
    long int curr;
    long int step;
    friend class ArithmeticProgression;
    ArithmeticProgressionIterator(int curr, int step):
            curr{curr}, step{step} {}
public:
    bool operator==(const ArithmeticProgressionIterator& other) const;
    bool operator!=(const ArithmeticProgressionIterator& other) const;
    long int& operator*();
    ArithmeticProgressionIterator& operator++();
    ArithmeticProgressionIterator& operator++(int);

};

class ArithmeticProgression {
    long int first;
    long int stop;
    long inc;
public:
    ArithmeticProgression(int start, int stop, int step):first{start},
                                                         stop{stop}, inc{step} {}
    using iterator = ArithmeticProgressionIterator;
    iterator begin() const {
        return ArithmeticProgression::iterator(first, inc);
    }

    iterator end() const {
        return ArithmeticProgression::iterator(stop, inc);
    }
};


#endif //SEMANA10_ARITHMETICPROGRESSION_H
