#include "ImageProcessor.h"
#include <cstdio>
#include <iostream>
#include <Magick++.h>

void ImageProcessor::readImage(){
  Magick::InitializeMagick(NULL);
  Magick::Image image("../TestImage.png");
  try { 
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
