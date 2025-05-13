#include "Grid.h"
#include <iostream>

void Grid::addNode(std::shared_ptr<GridNode> node) {
    nodes.push_back(node);
}

void Grid::simulateStep() {
    for (auto& node : nodes) {
        if (node->getType() == PRODUCER) {
            node->updateLoad(-5);
        } else if (node->getType() == CONSUMER) {
            node->updateLoad(5);
        }
    }
}

void Grid::displayStatus() const {
    for (const auto& node : nodes) {
        std::cout << node->getName() << " (" << node->getCurrentLoad() << ")
";
    }
}
