#ifndef PREPARATE_H
#define PREPARATE_H

#include <string>
#include <vector>

class Preparate {
public:
    virtual std::vector<std::string> getIngrediente() const = 0;
    virtual double getPret() const = 0;
    virtual std::string getModPreparare() const = 0;
    virtual void descrierePreparat() const = 0;
};

#endif // PREPARATE_H
