#include <fstream>
#include <iostream>

using namespace std;

int main() {

  // Create images

  ofstream image_Input;
  image_Input.open("./images/Imagem.ppm");

  if (image_Input.is_open()) {

    image_Input << "P3" << endl;
    image_Input << "70 50" << endl;
    image_Input << "255" << endl;

    // 50% RED e 50% Blue
    for (int ImgH = 0; ImgH < 50; ImgH++) {   // Altura
      for (int ImgV = 0; ImgV < 70; ImgV++) { // Largura
        if (ImgV < 35) {
          image_Input << "255 0 0 "; // Red - primeira metade horizontal
        } else {
          image_Input << "0 0 255 "; // Blue - segunda metade horizontal
        }
      }
      image_Input << endl;
    }

    image_Input << endl;
  }

  image_Input.close();

  return 0;

}
