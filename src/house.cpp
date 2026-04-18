#include "House.h"

/*
 * @brief Constructor khởi tạo House (Nhà cái) với các thông số luật chơi
 * @param commissionRate Tỉ lệ tiền xâu (ví dụ: 0.05 cho 5%)
 * @param minBet Mức cược tối thiểu
 * @param maxBet Mức cược tối đa
 * @return Không có
 */
House::House(double commissionRate, double minBet, double maxBet) {
    this->dCommissionRate = commissionRate;
    this->dMinBet = minBet;
    this->dMaxBet = maxBet;

    // Set số dư ban đầu cho Nhà cái (kế thừa từ Actor)
    setBalance(1000000.0);
}

/*
 * @brief Lấy tỉ lệ tiền xâu của nhà cái
 * @param Không có
 * @return double Tỉ lệ tiền xâu
 */
double House::getCommissionRate() const {
    return dCommissionRate;
}

/*
 * @brief Lấy mức cược tối thiểu
 * @param Không có
 * @return double Mức cược tối thiểu
 */
double House::getMinBet() const {
    return dMinBet;
}

/*
 * @brief Lấy mức cược tối đa
 * @param Không có
 * @return double Mức cược tối đa
 */
double House::getMaxBet() const {
    return dMaxBet;
}

/*
 * @brief Giới hạn số tiền đặt cược nằm trong khoảng cho phép [minBet, maxBet]
 * @param betAmount Số tiền người chơi muốn đặt cược
 * @return double Số tiền hợp lệ sau khi đã được giới hạn
 */
double House::limitBet(double betAmount) const {
    if (betAmount < dMinBet) {
        return dMinBet;
    }
    else if (betAmount > dMaxBet) {
        return dMaxBet;
    }
    return betAmount; // Nếu nằm trong khoảng min-max thì giữ nguyên
}