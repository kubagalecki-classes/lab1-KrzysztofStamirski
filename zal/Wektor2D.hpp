class Wektor2D
{
   public:
   Wektor2D(){x=0., y=0.;}


   void setX(double nx){
     x=nx;
   }
   void setY(double ny){
     y=ny;
   }
   double getX(){
     return x;
   }
   double getY(){
     return y;
   }
   Wektor 2D(double nx, double ny) {
     x=nx;
     y=ny;
   }

   friend Wektor2D operator+(Wektor2D& v1, Wektor 2D& v2){
     return Wektor2D(v1.x + v2.x, v1.y + v2.y);
   }
   friend double operator*(Wektor2D& v1, Wektor2D& v2){
     return v1.x * v2.x + v1.y * v2.y;
   }
   double x;
   double y;
   
    // Tutaj napisz implementacje klasy Wektor2D
};

