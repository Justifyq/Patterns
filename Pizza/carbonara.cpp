#include "carbonara.h"

Carbonara::Carbonara()
{
    name = "Carbonara";
    dough = "Wheat Dough";
    sauce = "Cream Sauce";

    toppings->append("Bacon");
    toppings->append("Cheese Cheddar and Parmesan");
    toppings->append("Cherry Tomatoes");
    toppings->append("Italian herbs");
    toppings->append("Red Onion");
    toppings->append("Mozzarella");
}
