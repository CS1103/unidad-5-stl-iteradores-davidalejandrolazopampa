//
// Created by David Lazo on 5/06/2019.
//

#ifndef SEMANA10_RANGO_H
#define SEMANA10_RANGO_H
class AritProgr_iterator {
    int curr;
    int step;
    friend class range;
    AritProgr_iterator(int curr, int step):
            curr{curr}, step{step} {}
public:
    bool operator==(const AritProgr_iterator& other) const;
    bool operator!=(const AritProgr_iterator& other) const;
    int& operator*();
    AritProgr_iterator& operator++();
    AritProgr_iterator& operator++(int);
};


class AritProgr {
    int start;
    int stop;
    int step;
public:
    AritProgr(int stop):start{0}, stop{stop}, step{1} {}
    AritProgr(int start, int stop):start{start},
                               stop{stop}, step{1} {}
    AritProgr(int start, int stop, int step):start{start},
                                         stop{stop}, step{step} {}
    using iterator = AritProgr_iterator;
    iterator begin() const {
        return AritProgr::iterator(start, step);
    }

    iterator end() const {
        return AritProgr::iterator(stop, step);
    }

};

bool AritProgr_iterator::operator==(const AritProgr_iterator &other) const {
    return curr == other.curr;
}

bool AritProgr_iterator::operator!=(const AritProgr_iterator &other) const {
    return curr < other.curr;
}

int &AritProgr_iterator::operator*() {
    return curr;
}

AritProgr_iterator &AritProgr_iterator::operator++() {
    curr += step;
    return *this;
}

AritProgr_iterator& AritProgr_iterator::operator++(int) {
    auto it = this;
    ++(*this);
    return *it;
}




class GeoProgr_iterator {
    int curr;
    int step;
    friend class range;
    GeoProgr_iterator(int curr, int step):
            curr{curr}, step{step} {}
public:
    bool operator==(const GeoProgr_iterator& other) const;
    bool operator!=(const GeoProgr_iterator& other) const;
    int& operator*();
    GeoProgr_iterator& operator++();
    GeoProgr_iterator& operator++(int);
};


class GeoProgr {
    int start;
    int stop;
    int step;
public:
    GeoProgr(int stop):start{0}, stop{stop}, step{1} {}
    GeoProgr(int start, int stop):start{start},
                                   stop{stop}, step{1} {}
    GeoProgr(int start, int stop, int step):start{start},
                                             stop{stop}, step{step} {}
    using iterator = GeoProgr_iterator;
    iterator begin() const {
        return GeoProgr::iterator(start, step);
    }

    iterator end() const {
        return GeoProgr::iterator(stop, step);
    }

};

bool GeoProgr_iterator::operator==(const GeoProgr_iterator &other) const {
    return curr == other.curr;
}

bool GeoProgr_iterator::operator!=(const GeoProgr_iterator &other) const {
    return curr < other.curr;
}

int &GeoProgr_iterator::operator*() {
    return curr;
}

GeoProgr_iterator &GeoProgr_iterator::operator++() {
    curr += step;
    return *this;
}

GeoProgr_iterator& GeoProgr_iterator::operator++(int) {
    auto it = this;
    ++(*this);
    return *it;
}
#endif //SEMANA10_RANGO_H
