#include "Neuron.h"
#include "weight/NeuronWeight.h"
#include "weight/NeuronWeight.cpp"

Neuron::Neuron() {
  weights.reserve(WEIGHTS_AMOUNT);
  for(int i = 0; i < WEIGHTS_AMOUNT; i++){
    weights.push_back(NeuronWeight(i));
  }
}
