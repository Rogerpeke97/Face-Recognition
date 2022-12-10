#pragma once
#include <vector>
#include "weight/NeuronWeight.h"

class Neuron {
  public:
    int WEIGHTS_AMOUNT = 4;
    int threshold = 0;
    std::vector<int> rowColId;
    std::vector<NeuronWeight> weights;
    Neuron();
};
