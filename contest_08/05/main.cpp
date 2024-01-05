class IntSharedPointer {
private:
    int* ptr;          // Указатель на динамически созданную переменную int
    size_t* refCount;   // Счетчик ссылок

public:
    // Конструктор
    IntSharedPointer(int* p) : ptr(p), refCount(new size_t(1)) {}

    // Деструктор
    ~IntSharedPointer() {
        decreaseRefCount();
    }

    // Оператор *
    int& operator*() const {
        return *ptr;
    }

    // Конструктор копирования
    IntSharedPointer(const IntSharedPointer& other) : ptr(other.ptr), refCount(other.refCount) {
        increaseRefCount();
    }

    // Оператор =
    IntSharedPointer& operator=(IntSharedPointer other) {
        swap(*this, other);
        return *this;
    }

private:
    // Уменьшение счетчика ссылок и освобождение памяти при необходимости
    void decreaseRefCount() {
        if (refCount && --(*refCount) == 0) {
            delete ptr;
            delete refCount;
        }
    }

    // Увеличение счетчика ссылок
    void increaseRefCount() {
        if (refCount) {
            ++(*refCount);
        }
    }

    // Обмен значениями между двумя объектами
    friend void swap(IntSharedPointer& first, IntSharedPointer& second) noexcept {
        using std::swap;
        swap(first.ptr, second.ptr);
        swap(first.refCount, second.refCount);
    }
};