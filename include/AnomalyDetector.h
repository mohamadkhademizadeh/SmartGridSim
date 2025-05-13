#pragma once
#include <memory>
#include "GridNode.h"

class AnomalyDetector {
public:
    static bool isAnomalous(const std::shared_ptr<GridNode>& node);
};
