#ifndef PIZZA_TPP
#define PIZZA_TPP

#include "../headerz/Pizza.h"
#include <iostream>
#include <vector>


template <typename T>
void Pizza<T>::
descriere() const {
    std::cout << "Pizza: " << tipPizza.nume() << "\n"
              << "Ingrediente: ";
    for (const auto& ingredient : tipPizza.getIngrediente()) {
        std::cout << ingredient << ", ";
    }
    std::cout << "\nDimensiune: " << tipPizza.getDimensiune() << " cm"
              << "\nTip blat: " << tipPizza.getTipBlat()
              << "\nPreț: " << tipPizza.getPret() << " lei"
              << "\nMod de preparare: " << tipPizza.getModPreparare() << std::endl;
}

template <typename T>
std::vector<std::string> PizzaAdapter<T>::getIngrediente() const {
    return T().getIngrediente();
}

template <typename T>
double PizzaAdapter<T>::getPret() const {
    return T().getPret();
}

template <typename T>
std::string PizzaAdapter<T>::getModPreparare() const {
    return T().getModPreparare();
}

template <typename T>
void PizzaAdapter<T>::descrierePreparat() const {
    Pizza<T>::descriere();
}

#endif // PIZZA_TPP