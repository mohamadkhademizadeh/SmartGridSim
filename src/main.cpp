#include "Grid.h"
#include "GridNode.h"
#include "AnomalyDetector.h"
#include "LoadBalancer.h"
#include <iostream>
#include <memory>

int main() {
    Grid grid;

    auto gen = std::make_shared<GridNode>("Generator1", PRODUCER, 100.0);
    auto load = std::make_shared<GridNode>("Consumer1", CONSUMER, 100.0);

    grid.addNode(gen);
    grid.addNode(load);

    for (int i = 0; i < 10; ++i) {
        std::cout << "Step " << i + 1 << ":
";
        grid.simulateStep();
        LoadBalancer::balance(grid.nodes);
        grid.displayStatus();
        if (AnomalyDetector::isAnomalous(load)) {
            std::cout << "Anomaly detected on: " << load->getName() << "!
";
        }
        std::cout << "------------------
";
    }

    return 0;
}
