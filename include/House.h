#pragma once

#include "Actor.h"

// House kế thừa từ lớp Actor
class House : public Actor {
private:
    double dCommissionRate;
    double dMaxBet;
    double dMinBet;

public:
    // Constructor truyền tham số để khởi tạo trực tiếp
    House(double commissionRate, double minBet, double maxBet);

    // Các hàm getter
    double getCommissionRate() const;
    double getMinBet() const;
    double getMaxBet() const;

    // Hàm giới hạn tiền đặt cược (MỚI THÊM)
    double limitBet(double betAmount) const;
};