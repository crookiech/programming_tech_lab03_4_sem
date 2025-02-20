#include "PublicTransport.h"

/// @brief Конструктор класса общественного транспорта
/// @param farePerKilometer стоимость проезда за километр
/// @param route маршрут
PublicTransport::PublicTransport(int farePerKilometer, Route& route) : Transport(farePerKilometer), _route(route) {}
