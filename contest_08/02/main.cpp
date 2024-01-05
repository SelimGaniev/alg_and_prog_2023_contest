class Vector;

class Point {
public:
    int x, y;

    // Конструктор, принимающий координаты точки
    Point(int x, int y) : x(x), y(y) {}

    // Метод move, сдвигающий точку в новое положение
    void move(const Vector& v);
};

class Vector {
public:
    int x, y;

    // Конструктор, принимающий две точки - начало и конец вектора
    Vector(const Point& start, const Point& end);

    friend class Point;
};

// Реализация метода move
void Point::move(const Vector& v) {
    x += v.x;
    y += v.y;
}

// Реализация конструктора класса Vector
Vector::Vector(const Point& start, const Point& end) {
    x = end.x - start.x;
    y = end.y - start.y;
}
