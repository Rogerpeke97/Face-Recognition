#include "NeuralSystem.h"
#include "neuron/Neuron.h"
#include <iostream>

NeuralSystem::NeuralSystem(){
  // find the total neurons using the sum of the first n natural numbers
  int amountOfNeurons = (this->LAYERS * (this->LAYERS + 1)) / 2; 
  this->neurons = std::vector<Neuron>(amountOfNeurons, Neuron());
  for(int col = 0; col < this->LAYERS; col++){
    int amountOfNeuronsInCol = col + 1;
    for(int row = 0; row < amountOfNeuronsInCol; row++){
      int neuronId =  (col * (col + 1)) / 2 + row;
      this->neurons[neuronId].rowColId = std::vector<int>(2, 0);
      this->neurons[neuronId].rowColId[0] = row;
      this->neurons[neuronId].rowColId[1] = col;
    }
  }
  this->printNeuralSystem();
};

void NeuralSystem::printNeuralSystem() {
  for(int i = 0; i < this->neurons.size(); i++){
    std::cout << "Neuron " << i << " row: " << this->neurons[i].rowColId[0] << 
    " col: " << this->neurons[i].rowColId[1] << std::endl;
  }
}


void NeuralSystem::computeData(std::vector<int> pixelMap){
  if(pixelMap.size() > this->MAX_PIXELS_AMOUNT){
    std::cout << "Too many pixels" << std::endl;
    return;
  }
  for(int i = 0; i < pixelMap.size(); i++){
    std::cout << pixelMap[i] << std::endl;
  }
  std::cout << "Computing data..." << std::endl;
};

void NeuralSystem::processPixel(int pixel){

  std::cout << "Processing pixel..." << std::endl;
}
