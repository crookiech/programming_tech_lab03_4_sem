#ifndef TRANSPORT_H
#define TRANSPORT_H

/// @brief Класс транспорта
class Transport {
protected:
    int _id; // id транспорта
    static int _nextId; // Статический член для автоматической нумерации
    int _fare; // Стоимость проезда
    int _farePerKilometer; // Стоимость проезда за километр
public:
    /// @brief Коструктор класса транспорта
    /// @param farePerKilometer стоимость проезда за километр
    Transport(int farePerKilometer);
    /// @brief Метод для рассчета стоимости проезда (будет переопределяться в классах-наследниках)
    virtual void CalculateFare();
    /// @brief Метод для извлечения стоимости проезда
    /// @return стоимость проезда
    int GetFare() const;
    /// @brief Метод для отображения информации о транспорте
    virtual void PrintTransportInfo() const;
};

#endif