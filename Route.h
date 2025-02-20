#ifndef ROUTE_H
#define ROUTE_H

#include <string>

/// @brief Класс маршрута
class Route {
private:
    int _numberRoute; // Номер маршрута
    static int _nextRouteNumber; // Статический член для автоматической нумерации
    std::string _departurePoint; // Пункт отправления
    std::string _arrivalPoint; // Пункт прибытия
    int _kilometers; // Расстояние маршрута
    /// @brief Метод для генерации расстояния маршрута
    /// @param distanceCoefficient коэффициент расстояния маршрута
    /// @return расстояние маршрута
    int GenerateRandomKilometers(int distanceCoefficient);
public:
    /// @brief Конструктор класса маршрута
    /// @param departurePoint пункт отправления
    /// @param arrivalPoint пункт прибытия
    /// @param distanceCoefficient коэффициент расстояния
    Route(const std::string& departurePoint, const std::string& arrivalPoint, int distanceCoefficient);
    /// @brief Метод для извлечения расстояния маршрута
    /// @return расстояние маршрута
    int GetKilometers() const;
    /// @brief Метод для извлечения номера маршрута
    /// @return номер маршрута
    int GetRouteNumber() const;
    /// @brief Метод для отображения информации о маршруте
    void PrintRoute() const;
};

#endif