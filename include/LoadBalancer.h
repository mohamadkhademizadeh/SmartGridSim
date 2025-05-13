#pragma once
#include <vector>
#include <memory>
#include "GridNode.h"

class LoadBalancer {
public:
    static void balance(std::vector<std::shared_ptr<GridNode>>& nodes);
};
