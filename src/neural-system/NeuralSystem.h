#pragma once
#include <vector>
#include "neuron/Neuron.h"

class NeuralSystem {
  int LAYERS = 5;
  int WEIGHTS_PER_NEURON = 4;
  int MAX_PIXELS_AMOUNT = 25;
  std::vector<Neuron> neurons;
  public:
    NeuralSystem();
    void computeData(std::vector<int> data);
    void processPixel(int pixel);
    void printNeuralSystem();
};
