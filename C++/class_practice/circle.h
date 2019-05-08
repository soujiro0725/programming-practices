class Circle
{
private:
  float radius;
  float pi;

public:
  Circle()
  {
    radius = 5.0;
    pi = 3.14;
  }
  float get_area();
  float get_circumference();
};
