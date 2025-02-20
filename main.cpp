#include <iostream>
#include "Route.h"
#include "Bus.h"
#include "Plane.h"
#include "Taxi.h"

int main() {
    Route route1("пл. Кирова", "пос. Зональный", 0); // 0 - по области и внутри города
    Route route2("Лондон", "Париж", 1); // 1 - между городами и странами
    Route route3("Томск", "Северск", 2); // 2 - внутри города, между соседними городами

    Bus bus1(route1);
    Bus bus2(route3);
    Plane plane(route2, 5);
    Taxi taxi("Иванов Иван", "K137MO", route1);

    bus1.CalculateFare();
    bus2.CalculateFare();
    plane.CalculateFare();
    taxi.CalculateFare();

    bus1.PrintTransportInfo();
    std::cout << std::endl;
    bus2.PrintTransportInfo();
    std::cout << std::endl;
    plane.PrintTransportInfo();
    std::cout << std::endl;
    taxi.PrintTransportInfo();

    return 0;
}