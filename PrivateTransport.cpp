#include "PrivateTransport.h"
#include <string>

/// @brief Конструктор класса личного транспорта
/// @param farePerKilometer стоимость проезда за километр
/// @param driverName имя водителя
/// @param carNumber номер машины 
/// @param route маршрут
PrivateTransport::PrivateTransport(int farePerKilometer, std::string driverName, std::string carNumber, Route& route) : Transport(farePerKilometer), _driverName(driverName), _carNumber(carNumber), _route(route) {}