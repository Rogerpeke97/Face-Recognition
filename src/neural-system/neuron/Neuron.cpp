#include "Neuron.h"
#include "weight/NeuronWeight.h"
#include "weight/NeuronWeight.cpp"

Neuron::Neuron(int weightsAmount) {
  this->weightsAmount = weightsAmount;
  weights.reserve(weightsAmount);
  for(int i = 0; i < weightsAmount; i++){
    weights.push_back(NeuronWeight(i));
  }
}

// void Neuron::computePixel(FakePixel &pixel){
  
// }

// bool Neuron::outputToOtherNeurons(){
  
// }
