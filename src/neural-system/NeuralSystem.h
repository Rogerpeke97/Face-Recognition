#pragma once
#include <vector>

struct Weight {
  int amount = 0;
  int weightId;
};

struct Neuron{
  std::vector<Weight> weights = std::vector<Weight>(4);
  int neuronId;
  int threshold;
};
  
class NeuralSystem {
  int layers = 5;
  std::vector<Neuron> neurons;
  public:
    NeuralSystem();
    void computeData(std::vector<int> data);
};
