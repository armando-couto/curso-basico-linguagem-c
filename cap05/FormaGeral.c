// Fun��o B
int B() {
	// corpo da fun��o B
	:
}

// Fun��o A
int A() {
	// corpo da fun��o A
	:
	x = B(); // uso da fun��o B
	:
}

// Fun��o principal
int main () {
	// corpo da fun��o principal
	:
	y = A(); // uso da fun��o A
	:
}


