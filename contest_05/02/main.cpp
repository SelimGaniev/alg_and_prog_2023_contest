class Water {
public:
    Water(int initial_temperature) : temperature(initial_temperature) {}

    bool is_boiling() {
        return temperature >= 100;
    }

    void heat_up(int degrees) {
        temperature += degrees;
    }

private:
    int temperature;
};

class Teapot {
public:
    Teapot(Water& water) : water(water) {}

    bool is_boiling() {
        return water.is_boiling();
    }

    void heat_up(int degrees) {
        water.heat_up(degrees);
    }

private:
    Water& water;
};