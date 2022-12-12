#pragma once
#include <vector>
#include "weight/NeuronWeight.h"

class Neuron {
  public:
    int threshold = 0;
    int weightsAmount;
    std::vector<int> rowColId;
    std::vector<NeuronWeight> weights;
    Neuron(int amountOfWeights);
    // void computePixel(FakePixel &pixel);
    // bool outputToOtherNeurons();
};
