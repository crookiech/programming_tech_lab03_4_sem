#ifndef TAXI_H
#define TAXI_H

#include "PrivateTransport.h"

/// @brief Класс такси - наследник класса личного транспорта
class Taxi : public PrivateTransport {
public:
    /// @brief Конструктор класса такси
    /// @param driverName имя водителя
    /// @param carNumber номер машины
    /// @param route маршрут
    Taxi(std::string driverName, std::string carNumber, Route& route);
    /// @brief Метод для рассчета стоимости проезда
    void CalculateFare() override;
    /// @brief Метод для вывода информации о такси
    void PrintTransportInfo() const override;
};

#endif