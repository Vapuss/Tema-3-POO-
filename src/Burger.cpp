#ifndef BURGER_TPP
#define BURGER_TPP

#include "../headerz/Burger.h"
#include <iostream>
#include <vector>

template <typename T>
void Burger<T>::descriere() const {
    std::cout << "Burger: " << tipBurger.nume() << "\n"
              << "Ingrediente: ";
    for (const auto& ingredient : tipBurger.getIngrediente()) {
        std::cout << ingredient << ", ";
    }
    std::cout << "\nVegetarian: " << (tipBurger.isVegetarian() ? "Da" : "Nu")
              << "\nTip chiflă: " << tipBurger.getTipChifla()
              << "\nTip palina: " << tipBurger.getTipPalina()
              << "\nPreț: " << tipBurger.getPret() << " lei"
              << "\nMod de preparare: " << tipBurger.getModPreparare() << std::endl;
}

template <typename T>
std::vector<std::string> BurgerAdapter<T>::getIngrediente() const {
    return T().getIngrediente();
}

template <typename T>
double BurgerAdapter<T>::getPret() const {
    return T().getPret();
}

template <typename T>
std::string BurgerAdapter<T>::getModPreparare() const {
    return T().getModPreparare();
}

template <typename T>
void BurgerAdapter<T>::descrierePreparat() const {
    Burger<T>::descriere();
}

#endif // BURGER_TPP
