#pragma once

#include "RoundRecord.h"
#include <string>
#include <vector>

class CSVExporter {
    std::string path;

  public:
    CSVExporter(const std::string &);

    /*
     * @brief Ghi kết quả 1 chiến thuật vào file CSV
     * @param strategyName Tên chiến thuật — xuất hiện ở cột Strategy
     * @param records      Danh sách RoundRecord chứa kết quả từng ván
     * @param writeHeader  true → tạo file mới + ghi header (chỉ dùng cho chiến thuật đầu tiên)
     */
    void exportToCSV(const std::string &strategyName,
                     const std::vector<RoundRecord> &records,
                     bool writeHeader = false);
};
