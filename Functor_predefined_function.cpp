#include <iostream>
using namespace std;

struct plus_functor {
    template<typename T>
    T operator()(T a, T b) {
        return a + b;
    }
};

struct minus_functor {
    template<typename T>
    T operator()(T a, T b) {
        return a - b;
    }
};

struct divide_functor {
    template<typename T>
    T operator()(T a, T b) {
        return a / b;
    }
};

struct modulus_functor {
    template<typename T>
    T operator()(T a, T b) {
        return a % b;
    }
};

struct equal_to_functor {
    template<typename T>
    bool operator()(T a, T b) {
        return a == b;
    }
};

struct not_equal_to_functor {
    template<typename T>
    bool operator()(T a, T b) {
        return a != b;
    }
};

struct greater_functor {
    template<typename T>
    bool operator()(T a, T b) {
        return a > b;
    }
};

struct greater_equal_functor {
    template<typename T>
    bool operator()(T a, T b) {
        return a >= b;
    }
};

struct less_functor {
    template<typename T>
    bool operator()(T a, T b) {
        return a < b;
    }
};

struct less_equal_functor {
    template<typename T>
    bool operator()(T a, T b) {
        return a <= b;
    }
};

struct logical_and_functor {
    template<typename T>
    bool operator()(T a, T b) {
        return a && b;
    }
};

struct logical_or_functor {
    template<typename T>
    bool operator()(T a, T b) {
        return a || b;
    }
};

struct logical_xor_functor {
    template<typename T>
    bool operator()(T a, T b) {
        return a ^ b;
    }
};

int main() {
    plus_functor plus;
    cout << "The plus result for plus_functor is " << plus(2, 3) << endl;

    minus_functor minus;
    cout << "The minus result for minus_functor is " << minus(3, 2) << endl;

    divide_functor divide;
    cout << "The divide result for divide_functor is " << divide(10, 5) << endl;

    modulus_functor modulus;
    cout << "The modulus result for modulus_functor is " << modulus(20, 2) << endl;

    equal_to_functor equal;
    cout << "Equal: " << equal(9, 9) << endl;

    not_equal_to_functor not_equal;
    cout << "Not equal: " << not_equal(9, 9) << endl;

    greater_functor greater;
    cout << "Is greater: " << greater(9, 0) << endl;

    greater_equal_functor greaterequal;
    cout << "Is greater than or equal: " << greaterequal(6, 10) << endl;

    less_functor less;
    cout << "Is less: " << less(1, 0) << endl;

    less_equal_functor lessequal;
    cout << "Is less or equal: " << lessequal(0, 0) << endl;

    logical_and_functor logical_and;
    cout << "Logical AND for a and b: " << logical_and(true, false) << endl;

    logical_or_functor logical_or;
    cout << "Logical OR for a and b: " << logical_or(true, false) << endl;

    logical_xor_functor logical_xor;
    cout << "Logical XOR for a and b: " << logical_xor(true, false) << endl;

    return 0;
}
