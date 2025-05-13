#include "GridNode.h"

GridNode::GridNode(std::string name, NodeType type, double capacity)
    : name(name), type(type), maxCapacity(capacity), currentLoad(0.0) {}

double GridNode::getCurrentLoad() const {
    return currentLoad;
}

void GridNode::updateLoad(double delta) {
    currentLoad += delta;
    if (currentLoad > maxCapacity) currentLoad = maxCapacity;
    if (currentLoad < 0) currentLoad = 0;
}

NodeType GridNode::getType() const {
    return type;
}

std::string GridNode::getName() const {
    return name;
}
