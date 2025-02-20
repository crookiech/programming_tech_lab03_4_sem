#ifndef PLANE_H
#define PLANE_H

#include "PublicTransport.h"

/// @brief Класс самолета - наследник класса общественного транспорта
class Plane : public PublicTransport {
private:
    int _status; // Тариф
public:
    /// @brief Конструктор класс самолета
    /// @param route маршрут
    /// @param status тариф
    Plane(Route& route, int status);
    /// @brief Метод для рассчета стоимости поездки
    void CalculateFare() override;
    /// @brief Метод для вывода информации о самолете
    void PrintTransportInfo() const override;
};

#endif