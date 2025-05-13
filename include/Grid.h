#pragma once
#include <vector>
#include <memory>
#include "GridNode.h"

class Grid {
public:
    void addNode(std::shared_ptr<GridNode> node);
    void simulateStep();
    void displayStatus() const;

private:
    std::vector<std::shared_ptr<GridNode>> nodes;
};
