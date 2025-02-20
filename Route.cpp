#include "Route.h"
#include <iostream>
#include <string>
#include <random>
#include <ctime>

/// @brief Метод для генерации расстояния маршрута
/// @param distanceCoefficient коэффициент расстояния маршрута
/// @return расстояние маршрута
int Route::GenerateRandomKilometers(int distanceCoefficient) {
    unsigned seed = time(0);
    std::mt19937 generator(seed);
    std::uniform_int_distribution<int> distribution;
    if (distanceCoefficient == 0) { // 0 - по области и внутри города
        distribution = std::uniform_int_distribution<int>(1, 60);
    } else if (distanceCoefficient == 1) { // 1 - между городами и странами
        distribution = std::uniform_int_distribution<int>(100, 1000);
    } else if (distanceCoefficient == 2) { // 2 - внутри города, между соседними городами
        distribution = std::uniform_int_distribution<int>(10, 100);
    } else {
        std::cerr << "Ошибка: некорректный коэффициент расстояния маршрута!" << std::endl;
        return 0;
    }
    return distribution(generator);
}
/// @brief Конструктор класса маршрута
/// @param departurePoint пункт отправления
/// @param arrivalPoint пункт прибытия
/// @param distanceCoefficient коэффициент расстояния
Route::Route(const std::string& departurePoint, const std::string& arrivalPoint, int distanceCoefficient) : _numberRoute(_nextRouteNumber++), _departurePoint(departurePoint), _arrivalPoint(arrivalPoint) {
    _kilometers = GenerateRandomKilometers(distanceCoefficient);
}
/// @brief Метод для извлечения расстояния маршрута
/// @return расстояние маршрута
int Route::GetKilometers() const { return _kilometers; }
/// @brief Метод для извлечения номера маршрута
/// @return номер маршрута
int Route::GetRouteNumber() const { return _numberRoute; }
/// @brief Метод для отображения информации о маршруте
void Route::PrintRoute() const {
    std::cout << _departurePoint << " -> " << _arrivalPoint << ": " << _kilometers << " км" << std::endl;
}
// Инициализация статического члена для нумерации маршрутов
int Route::_nextRouteNumber = 1;