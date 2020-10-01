 
struct line {
	int a, b, c;
	line() : a(0), b(0), c(0) {}
	line(int _a, int _b, int _c) : a(_a), b(_b), c(_c) {}
	bool operator<(const line &l) const {
		if(a != l.a) return a < l.a;
		if(b != l.b) return b < l.b;
		return c < l.c;
	}
	friend ostream& operator<<(ostream &stream, const line &l) {
		return stream << "[" << l.a << ", " << l.b << ", " << l.c << "]";
	}
};
 
