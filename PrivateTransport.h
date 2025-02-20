#ifndef PRIVATETRANSPORT_H
#define PRIVATETRANSPORT_H
#include "Route.h"
#include "Transport.h"

/// @brief Класс личного транспорта - наследник класса транспорта
class PrivateTransport: public Transport {
protected:
    Route _route; // Маршрут
    std::string _driverName; // Имя водителя
    std::string _carNumber; // Номер машины
    /// @brief Конструктор класса личного транспорта
    /// @param farePerKilometer стоимость проезда за километр
    /// @param driverName имя водителя
    /// @param carNumber номер машины 
    /// @param route маршрут
    PrivateTransport(int farePerKilometer, std::string driverName, std::string carNumber, Route& route);
};

#endif