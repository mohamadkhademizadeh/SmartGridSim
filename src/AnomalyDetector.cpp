#include "AnomalyDetector.h"

bool AnomalyDetector::isAnomalous(const std::shared_ptr<GridNode>& node) {
    return node->getCurrentLoad() > 90.0; // simple threshold
}
