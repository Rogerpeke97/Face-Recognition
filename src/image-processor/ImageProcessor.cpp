#include "ImageProcessor.h"
#include <iostream>
#include <Magick++.h>

void ImageProcessor::readImage(){
  Magick::Image image("../TestImage.png");
  try { 
    int imageWidth = image.columns();
    int imageHeight = image.rows();
    std::cout << "image channels " << image.channels() << std::endl;
    for(int col = 0; col < imageWidth; col++){
      for(int row = 0; row < imageHeight; row++){
        Magick::Color color = image.pixelColor(col, row);
        std::cout << "Pixel at " << col << ", " << row << " is " << color.quantumRed() << ", " << color.quantumGreen() << ", " << color.quantumBlue() << std::endl;
      }
    }
    // MagickCore::Quantum* pixels = image.getPixels(0, 0, image.columns(), image.rows());
    // Write the image to a file 
    image.write( "../modTest.png" ); 
  } 
  catch( Magick::Exception &error_ ) { 
    std::cout << "Caught exception: " << error_.what() << std::endl; 
  } 
  // int c;
  // FILE *image = fopen("../TestImage.png", "r");
  // std::cout << "Reading image...Does it exist: " << image << std::endl;
  // if (image){
	// 	while ((c = getc(image)) != EOF)
	// 		putchar(c);
	// 	fclose(image);
	// }
}
