#include "ImageProcessor.h"
#include <cstdio>
#include <iostream>
#include <Magick++.h>

void ImageProcessor::readImage(){
  Magick::InitializeMagick(NULL);
  Magick::Image image("../TestImage.png");
  try { 
    MagickCore::Quantum* pixels = image.getPixels(0, 0, image.columns(), image.rows());
    Magick::Color exampleColor = Magick::Color("red");
    int exampleArr[4] = {0, 0, 0, 1};
    std::cout << "Image size: " << image.columns() << "x" << image.rows() << std::endl;
    std::cout << "Pixels size: " << sizeof(pixels) << std::endl;
    std::cout << "pixels ref " << &pixels[0] << std::endl;
    std::cout << "pixels ref " << pixels << std::endl;
    std::cout << "exampleArr " << exampleArr << std::endl;
    std::cout << "exampleArr " << &exampleArr[0] << std::endl;
    std::cout << "exampleColor " << exampleColor.quantumRed() << std::endl;
    // Read a file into image object 
    // image.read( "../logo.gif" );
    // Crop the image to specified size (width, height, xOffset, yOffset)
    image.crop( Magick::Geometry(100,100, 100, 100) );
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
