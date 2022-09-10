#include "ImageProcessor.h"
#include <cstdio>
#include <iostream>

void ImageProcessor::readImage(){
  int c;
  FILE *image = fopen("../TestImage.png", "r");
  std::cout << "Reading image...Does it exist: " << image << std::endl;
  if (image){
		while ((c = getc(image)) != EOF)
			putchar(c);
		fclose(image);
	}
}
