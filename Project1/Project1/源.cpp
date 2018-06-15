#include<stdio.h>
class B {
public:
	int t;
	template<typename T>
	void func(T f) {
		f();
	}
	//using gg = decltype(B::func);
	void ff() {

	}
};

auto func(int a) {
	return [a]() {
		printf("%d\n", a);
	};
}

int main() {
	B b;
	b.func([]() {
		printf("1234");
	});
	func(2)();
	printf("1234");
	getchar();
}