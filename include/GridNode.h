#pragma once
#include <string>

enum NodeType { PRODUCER, CONSUMER, STORAGE };

class GridNode {
public:
    GridNode(std::string name, NodeType type, double capacity);
    double getCurrentLoad() const;
    void updateLoad(double delta);
    NodeType getType() const;
    std::string getName() const;

private:
    std::string name;
    NodeType type;
    double currentLoad;
    double maxCapacity;
};
