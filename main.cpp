#include "headerz/Pizza.h"
#include "headerz/Burger.h"
#include "headerz/Preparate'.h"

int main() {
    PizzaAdapter<Margherita> pizzaMargherita;
    PizzaAdapter<Taraneasca> pizzaTaraneasca;
    PizzaAdapter<Marinara> pizzaMarinara;

    BurgerAdapter<Cheeseburger> cheeseburger;
    BurgerAdapter<AngusBurger> angusBurger;
    BurgerAdapter<BigTasty> bigTasty;

    pizzaMargherita.descrierePreparat();
    pizzaTaraneasca.descrierePreparat();
    pizzaMarinara.descrierePreparat();

    cheeseburger.descrierePreparat();
    angusBurger.descrierePreparat();
    bigTasty.descrierePreparat();

    return 0;
}
