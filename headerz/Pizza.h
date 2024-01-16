#ifndef PIZZA_H
#define PIZZA_H

#include "preparate.h"
#include <iostream>

template <typename T>
class Pizza {
    T tipPizza;
public:
    void descriere() const;
};

template <typename T>
class PizzaAdapter : public Preparate, private Pizza<T> {
public:
    std::vector<std::string> getIngrediente() const override;
    double getPret() const override;
    std::string getModPreparare() const override;
    void descrierePreparat() const override;
};

#include "../src/Pizza.cpp" // Implementarea șablonului
#endif // PIZZA_H
