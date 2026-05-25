#include <iostream>

class MyArray {
    int size_;
    int* arr_;
public:
    MyArray() : arr_(nullptr), size_(0) {}
    MyArray(int size) : size_(size), arr_(new int[size]) { for (int i = 0; i < size; i++) arr_[i] = 0; }

    MyArray(const MyArray& other) : size_(other.size_), arr_(new int[other.size_]) {
        for (int i = 0; i < size_; i++) arr_[i] = other.arr_[i];
    }

    ~MyArray() { delete[] arr_; }

    int& operator[](int index) { return arr_[index]; }

    MyArray& operator++() {
        int* newArr = new int[size_ + 1];
        for (int i = 0; i < size_; i++) newArr[i] = arr_[i];
        newArr[size_] = 0;
        delete[] arr_;
        arr_ = newArr;
        size_++;
        return *this;
    }

    MyArray& operator--() {
        if (size_ > 0) {
            size_--;
            int* newArr = new int[size_];
            for (int i = 0; i < size_; i++) newArr[i] = arr_[i];
            delete[] arr_;
            arr_ = newArr;
        }
        return *this;
    }

    MyArray operator-() const {
        MyArray copy(*this);
        for (int i = 0; i < size_; i++)
            copy.arr_[i] = -copy.arr_[i];
        return copy;
    }

    operator int() const {
        return size_;
    }

    friend std::ostream& operator<<(std::ostream&, const MyArray&);
    friend std::istream& operator>>(std::istream&, MyArray&);
    friend MyArray operator+(const MyArray&, const MyArray&);
};

std::ostream& operator<<(std::ostream& out, const MyArray& obj) {
    for (int i = 0; i < obj.size_; i++) {
        out << obj.arr_[i] << " ";
    }
    return out;
}

std::istream& operator>>(std::istream& in, MyArray& obj) {
    for (int i = 0; i < obj.size_; i++) {
        in >> obj.arr_[i];
    }
    return in;
}

MyArray operator+(const MyArray& left, const MyArray& right) {
    MyArray result(left.size_ + right.size_);
    for (int i = 0; i < left.size_; i++) {
        result.arr_[i] = left.arr_[i];
    }
    for (int i = 0; i < right.size_; i++) {
        result.arr_[left.size_ + i] = right.arr_[i];
    }
    return result;
}

int main() {
    system("chcp 1251");
    MyArray arr(3);
    std::cin >> arr;
    std::cout << arr << '\n';
    ++arr;
    std::cout << "Размер массива: " << (int)arr << '\n';
    std::cout << arr << '\n';
    --arr;
    std::cout << arr << '\n';
    std::cout << -arr << '\n';
    std::cout << "Размер массива: " << (int)arr << '\n';
    std::cout << arr << '\n';
    std::cout << arr + arr << '\n';
}