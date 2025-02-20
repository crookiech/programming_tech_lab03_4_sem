#ifndef BUS_H
#define BUS_H

#include "PublicTransport.h"

/// @brief Класс автобуса - наследник класса общественного транспорта
class Bus : public PublicTransport {
public:
    /// @brief Конструктор класса автобуса
    /// @param route маршрут
    Bus(Route& route);

    /// @brief Метод для рассчета стоимости поездки
    void CalculateFare() override;
    /// @brief Метод для вывода информации об автобусе
    void PrintTransportInfo() const override;
};

#endif