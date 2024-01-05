type Water struct {
    temperature int
}


type Teapot struct {
    water *Water
}


func NewWater(initialTemperature int) *Water {
    return &Water{temperature: initialTemperature}
}


func NewTeapot(water *Water) *Teapot {
    return &Teapot{water: water}
}


func (t *Teapot) is_boiling() bool {

    return t.water.temperature >= 100
}


func (t *Teapot) heat_up(degrees int) {
    t.water.temperature += degrees
}