#ifndef BURGER_H
#define BURGER_H

#include "Preparate.h"
#include <iostream>

template <typename T>
class Burger {
    T tipBurger;
public:
    void descriere() const;
};

template <typename T>
class BurgerAdapter : public Preparate, private Burger<T> {
public:
    std::vector<std::string> getIngrediente() const override
    ;
    double getPret() const override;
    std::string getModPreparare() const override;
    void descrierePreparat() const override;
};

#include "../src/Burger.cpp" // Implementarea șablonului
#endif // BURGER_H