// Cat структура, представляющая кота
type Cat struct {
    alive bool
}

// is_alive метод возвращает true, если кот жив, и false, если он мертв
func (c *Cat) is_alive() bool {
    return c.alive
}

// Box структура, представляющая коробку с котом
type Box struct {
    cat *Cat
}

// open метод открывает коробку и возвращает экземпляр кота
func (b *Box) open() *Cat {
    if b.cat == nil {
        rand.Seed(time.Now().UnixNano())
        // Генерируем случайное число (0 или 1) для состояния кота (жив или мертв)
        isAlive := rand.Intn(2) == 0
        b.cat = &Cat{alive: isAlive}
    }
    return b.cat
}