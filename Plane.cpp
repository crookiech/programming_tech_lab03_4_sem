#include <iostream>
#include "Plane.h"

/// @brief Конструктор класс самолета
/// @param route маршрут
/// @param status тариф
Plane::Plane(Route& route, int status) : PublicTransport(50, route), _status(status) {}
/// @brief Метод для рассчета стоимости поездки
void Plane::CalculateFare() {
    Transport::_fare = _farePerKilometer * _route.GetKilometers() +  _status * 1000;
}
/// @brief Метод для вывода информации о самолете
void Plane::PrintTransportInfo() const {
    std::cout << "Самолет с рейсом №"<< _route.GetRouteNumber() << " (ID транспорта: " << Transport::_id << ")" << std::endl;
    _route.PrintRoute();
    std::cout << "Стоимость билета: " << _fare << std::endl;
    if (_status == 5) {
        std::cout << "Тариф: бизнес" << std::endl;
    } else if (_status == 3) {
        std::cout << "Тариф: эконом + багаж" << std::endl;
    } else if (_status == 1) {
        std::cout << "Тариф: эконом" << std::endl;
    }
}