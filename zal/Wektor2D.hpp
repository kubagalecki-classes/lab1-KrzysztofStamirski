class Wektor2D
{
   double X, Y;
   
    // Tutaj napisz implementacje klasy Wektor2D
};


Wektor2D v1{};           // Konstruktor domyślny, wektor o wsp. [0, 0]
v1.setX(1.);             // setter
v1.setY(1.);             // setter
double x1 = v1.getX(1.); // getter
double y1 = v1.getY(1.); // getter
 
Wektor2D v2{2., 2.}; // Konstruktor nadający współrzędne
 
Wektor2D sum = v1 + v2; // dodawanie wektorów
 
double prod = v1 * v2; // iloczyn skalarny