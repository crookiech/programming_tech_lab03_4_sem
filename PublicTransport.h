#ifndef PUBLICTRANSPORT_H
#define PUBLICTRANSPORT_H

#include "Transport.h"
#include "Route.h"

/// @brief Класс общественного транспорта - наследник класса транспорта
class PublicTransport : public Transport {
protected:
    Route _route; // Маршрут
    /// @brief Конструктор класса общественного транспорта
    /// @param farePerKilometer стоимость проезда за километр
    /// @param route маршрут
    PublicTransport(int farePerKilometer, Route& route);
};

#endif