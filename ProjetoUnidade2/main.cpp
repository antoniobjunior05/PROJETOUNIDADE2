#include <iostream>
#include "sculptor.h"

using namespace std;

int main(void)
{  
    Sculptor gato(100, 100, 100);

   // corpo
   gato.setColor(1.0, 1.0, 1.0, 1.0);
   gato.putBox(0, 12, 1, 20, 10, 18);
   gato.setColor(1.0, 1.0, 1.0, 1.0);
   gato.putBox(0, 1, 1,  -5, 18, 10);

   //orelhas
   gato.setColor(1.0, 1.0, 1.0, 1.0);
   gato.putBox(3, 5, 25, 27, 18, 21);

   gato.setColor(1.0, 1.0, 1.0, 1.0);
   gato.putBox(7, 9, 25, 27, 18, 21);
  // cabeça
   gato.putBox(2, 10, 20, 28, 13, 20);
   gato.setColor(0.0, 0.0, 0.0, 1.0);
   gato.putVoxel(4, 27, 18);
   gato.putVoxel(4, 27, 19);
   gato.putVoxel(4, 27, 16);
   gato.putVoxel(7, 27, 18); 
   gato.putVoxel(7, 27, 19);
   gato.putVoxel(7, 27, 16);
   gato.putVoxel(3, 27, 18);
   gato.putVoxel(3, 27, 19);
   gato.putVoxel(3, 27, 16);
   gato.putVoxel(8, 27, 18); 
   gato.putVoxel(8, 27, 19);
   gato.putVoxel(8, 27, 16);
   gato.putVoxel(2, 27, 18);
   gato.putVoxel(2, 27, 19);
   gato.putVoxel(2, 27, 16);
   gato.putVoxel(2, 27, 17);
   gato.putVoxel(9, 27, 17);
   gato.putVoxel(9, 27, 18); 
   gato.putVoxel(9, 27, 19);
   gato.putVoxel(9, 27, 16);
   gato.putVoxel(6, 27, 17);
   gato.putVoxel(5, 27, 17);
   gato.putVoxel(6, 27, 18);
   gato.putVoxel(5, 27, 18);
   gato.putVoxel(6, 27, 19);
   gato.putVoxel(5, 27, 17);
  // pernas
   gato.setColor(0.0, 0.0, 0.0, 1.0);
   gato.putBox(8, 12, 0, 5, 3, 10);    // traseiras
   gato.putBox(0, 4, 0, 5, 3, 10);     // traseiras
   gato.putBox(8, 12, 14, 19, 3, 10);  // dianteiras
   gato.putBox(0, 4, 14, 19, 3, 10);   // dianteiras 

   // olhos
   gato.setColor(1, 1, 1, 1.0);
   gato.putVoxel(4, 27, 17);  // olho branco
   gato.putVoxel(7, 27, 17);  // olho branco

   gato.setColor(0, 0, 1, 1.0);
   gato.putVoxel(3, 27, 17);  // olho azul
   gato.putVoxel(8, 27, 17);  // olho azul

  //nariz 
   gato.setColor(0.9, 0.0, 0.9, 1.0);
   gato.putVoxel(6, 27, 15);
   gato.putVoxel(5, 27, 15);
  
   gato.setColor(0.0, 0.0, 0.0, 1.0);
   gato.writeOFF("gato.off");
     return 0;
}