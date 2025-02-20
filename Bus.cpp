#include <iostream>
#include "Bus.h"

/// @brief Конструктор класса автобуса
/// @param route маршрут
Bus::Bus(Route& route) : PublicTransport(5, route) {}
/// @brief Метод для рассчета стоимости поездки
void Bus::CalculateFare(){
    Transport::_fare = _farePerKilometer * _route.GetKilometers();
}
/// @brief Метод для вывода информации об автобусе
void Bus::PrintTransportInfo() const {
    std::cout << "Автобус №"<< _route.GetRouteNumber() << " (ID транспорта: " << Transport::_id << ")" << std::endl;
    _route.PrintRoute();
    std::cout << "Стоимость проезда: " << _fare << std::endl;
} 