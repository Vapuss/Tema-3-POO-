#ifndef PREPARATEE_H
#define PREPARATEE_H

#include <string>
#include <vector>

// Structuri concrete pentru Pizza

struct Margherita {
    std::string nume() const { return "Margherita"; }
    std::vector<std::string> getIngrediente() const { return {"roșii", "mozzarella", "busuioc"}; }
    double getPret() const { return 30.0; }
    std::string getModPreparare() const { return "Coacere în cuptor la 350 grade"; }
    int getDimensiune() const { return 32; }
    std::string getTipBlat() const { return "Subțire"; }
};

struct Taraneasca {
    std::string nume() const { return "Țărănească"; }
    std::vector<std::string> getIngrediente() const { return {"roșii", "mozzarella", "ciuperci", "ceapă", "bacon", "carnaciori"}; }
    double getPret() const { return 35.0; }
    std::string getModPreparare() const { return "Coacere blatului la 280 de grade pana se rumeste, apoi cu tot cu indrediente pana se topeste branza, la 200 de grade"; }
    int getDimensiune() const { return 32; }
    std::string getTipBlat() const { return "Pufos"; }
};

struct Marinara {
    std::string nume() const { return "Marinara"; }
    std::vector<std::string> getIngrediente() const { return {"roșii", "usturoi", "oregano", "ulei de măsline"}; }
    double getPret() const { return 25.0; }
    std::string getModPreparare() const { return "Coacere rapidă la temperatură mare"; }
    int getDimensiune() const { return 32; }
    std::string getTipBlat() const { return "Neapolitan"; }
};

// Structuri concrete pentru Burger

struct Cheeseburger {
    std::string nume() const { return "Cheeseburger"; }
    std::vector<std::string> getIngrediente() const { return {"carne de vită", "brânză cheddar", "salată", "roșii", "ceapă", "castraveți murați", "sos maioneza si ketchup"}; }
    double getPret() const { return 28.0; }
    std::string getModPreparare() const { return "Grătar"; }
    bool isVegetarian() const { return false; }
    std::string getTipChifla() const { return "Clasică"; }
    std::string getTipPalina() const { return "Clasic"; }
};

struct AngusBurger {
    std::string nume() const { return "Angus Burger"; }
    std::vector<std::string> getIngrediente() const { return {"carne de vită Angus", "brânză cheddar", "roșii", "castraveti murati", "dulceata de ceapa", "sos maioneza"}; }
    double getPret() const { return 40.0; }
    std::string getModPreparare() const { return "Grătar cu cărbuni"; }
    bool isVegetarian() const { return false; }
    std::string getTipChifla() const { return "Brioșă"; }
    std::string getTipPalina() const { return "Clasic"; }
};


struct BigTasty {
    std::string nume() const { return "Big Tasty"; }
    std::vector<std::string> getIngrediente() const { return {"carne de vită", "brânză emmentaler", "salată iceberg", "roșii", "ceapă", "sos Big Tasty"}; }
    double getPret() const { return 45.0; }
    std::string getModPreparare() const { return "Grătar"; }
    bool isVegetarian() const { return false; }
    std::string getTipChifla() const { return "Sesame"; }
    std::string getTipPalina() const { return "Smashed"; }
};


#endif // PREPARATEE_H