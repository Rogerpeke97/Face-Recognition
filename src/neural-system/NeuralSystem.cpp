#include "NeuralSystem.h"
#include "neuron/Neuron.h"
#include "neuron/Neuron.cpp"
#include <iostream>
#include <cmath>

NeuralSystem::NeuralSystem(){
  // find the total neurons using the sum of the first n natural numbers
  int amountOfNeurons = (this->LAYERS * (this->LAYERS + 1)) / 2; 
  //   this->neurons = std::vector<Neuron>(amountOfNeurons, Neuron());
  this->neurons.reserve(amountOfNeurons);
  for(int col = 0; col < this->LAYERS; col++){
    int amountOfNeuronsInCol = col + 1;
    bool isFirstLayer = this->LAYERS == col + 1;
    int amountOfSignalsNeuronReceives = isFirstLayer ? 1 : amountOfNeuronsInCol + 1;
    // std::cout << "amountOfNeuronsInCol: " << amountOfNeuronsInCol << std::endl;
    // std::cout << "amountOfSignalsNeuronReceives: " << amountOfSignalsNeuronReceives << std::endl;
    // std::cout << "col number: " << col << std::endl;
    for(int row = 0; row < amountOfNeuronsInCol; row++){
      int neuronId =  (col * (col + 1)) / 2 + row;
      this->neurons.push_back(Neuron(amountOfSignalsNeuronReceives));
      this->neurons[neuronId].rowColId = std::vector<int>(2, 0);
      this->neurons[neuronId].rowColId[0] = row;
      this->neurons[neuronId].rowColId[1] = col;
    }
  }
  this->printNeuralSystem();
};

void NeuralSystem::printNeuralSystem() {
  for(std::size_t i = 0; i < this->neurons.size(); i++){
    std::cout << "Neuron " << i << " row: " << this->neurons[i].rowColId[0] << 
    " col: " << this->neurons[i].rowColId[1] << " weigths " << this->neurons[i].weightsAmount << std::endl;
  }
}


void NeuralSystem::computeData(std::vector<FakePixel> &pixelMap){
  if(pixelMap.size() > (std::size_t)this->MAX_PIXELS_AMOUNT){
    std::cout << "Too many pixels" << std::endl;
    return;
  }
  // Neurons are reversed
  int firstNeuronToReceiveSignalIndex = this->neurons.size() - 1;
  int neuronToSendDataTo = firstNeuronToReceiveSignalIndex;
  for(std::size_t i = 0; i < pixelMap.size(); i++){
    std::cout << "neuronId: " << neuronToSendDataTo << std::endl;
    if(neuronToSendDataTo < firstNeuronToReceiveSignalIndex && neuronToSendDataTo % this->LAYERS == 0){
      neuronToSendDataTo = this->neurons.size() - 1;
    } else {
      neuronToSendDataTo--;
    }
  }
};

void NeuralSystem::processPixel(int pixel){

}
