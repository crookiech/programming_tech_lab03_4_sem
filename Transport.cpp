#include "Transport.h"

/// @brief Коструктор класса транспорта
/// @param farePerKilometer стоимость проезда за километр
Transport::Transport(int farePerKilometer) : _farePerKilometer(farePerKilometer), _id(_nextId++) {}
/// @brief Метод для рассчета стоимости проезда (будет переопределяться в классах-наследниках)
void Transport::CalculateFare() {}
/// @brief Метод для извлечения стоимости проезда
/// @return стоимость проезда
int Transport::GetFare() const { return _fare; }
/// @brief Метод для отображения информации о транспорте
void Transport::PrintTransportInfo() const {}
// Инициализация статического члена для нумерации транспорта
int Transport::_nextId = 1;