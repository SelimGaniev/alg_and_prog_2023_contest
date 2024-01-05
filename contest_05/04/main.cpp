class Point{
public:

    Point(double x, double y) : x1(x), y1(y) {
        refreshPolar(); 
    }


    double get_x() const {
        return x1;
    }

    double get_y() const {
        return y1;
    }

  
    void set_x(double x) {
        x1 = x;
        refreshPolar(); 
    }

    void set_y(double y) {
        y1 = y;
        refreshPolar(); 
    }

    
    double get_r() const {
        return r1;
    }

    double get_a() const {
        return a1;
    }


    void set_r(double r) {
        r1 = r;
        x1 = r1 * cos(a1);
        y1 = r1 * sin(a1);
    }

   
    void set_a(double a) {
        a1 = a;
        x1 = r1 * cos(a1);
        y1 = r1 * sin(a1);
    }
private:
    double x1;
    double y1;
    double r1;
    double a1;
    void refreshPolar() {
        r1 = sqrt(x1 * x1 + y1 * y1);
        a1 = atan2(y1, x1);
    }

};