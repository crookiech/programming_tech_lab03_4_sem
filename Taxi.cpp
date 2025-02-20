#include <iostream>
#include "Taxi.h"

/// @brief Конструктор класса такси
/// @param driverName имя водителя
/// @param carNumber номер машины
/// @param route маршрут
Taxi::Taxi(std::string driverName, std::string carNumber, Route& route) : PrivateTransport(15, driverName, carNumber, route) {}
/// @brief Метод для рассчета стоимости проезда
void Taxi::CalculateFare() {
    Transport::_fare = _farePerKilometer * _route.GetKilometers();
}
/// @brief Метод для вывода информации о такси
void Taxi::PrintTransportInfo() const {
    std::cout << "Такси: " << _route.GetRouteNumber() << " (ID транспорта: " << Transport::_id << ")" << std::endl;
    _route.PrintRoute();
    std::cout << "Номер машины: " << _carNumber << std::endl;
    std::cout << "Имя водителя: " << _driverName << std::endl;
    std::cout << "Стоимость поездки: " << _fare << std::endl;
}