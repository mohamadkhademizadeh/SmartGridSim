#include "LoadBalancer.h"

void LoadBalancer::balance(std::vector<std::shared_ptr<GridNode>>& nodes) {
    for (auto& node : nodes) {
        if (node->getCurrentLoad() > 100.0) {
            node->updateLoad(-10);
        }
    }
}
