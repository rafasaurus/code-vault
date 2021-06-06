// A template can be defined to accept an arvitrary number of arguments of arbitrary types.
// Such a template is called a variadic template.
//

#include <iostream>

template <typename T>
void g(T x) {
    std::cout << x << "";
}

template <typename T>
void f() {}
template <typename... Tail>
void f(Tail... tail) {
    // std::cout << tail... << "";
}
template <typename T, typename... Tail>
void f(T head, Tail... tail) {
    g(head);
    f(tail...);
}

int main() {
    std::cout << "first:";
    f(1, 2.2, "hello");
}
