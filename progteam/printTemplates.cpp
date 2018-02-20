template <class T> ostream& operator<<(ostream& os, const vector<T>& v) {
	  return os << '[' << join(v, ", ") << ']';
}
template <class T> ostream& operator<<(ostream& os, const hset<T>& v) {
	  return os << '{' << join(v, ", ") << '}';
}
template <class K, class V> ostream& operator<<(ostream& os, const hmap<K,V>& v) {
	  return os << '{' << join(v, ", ") << '}';
}
template <class A, class B> ostream& operator<<(ostream& os, const pair<A,B>& p) {
	  return os << '(' << p.first << ", " << p.second << ')';
}
template <class T> string join(const T& v, string sep = " ") {

	bool first = true;
	stringstream ss;

	for (auto x : v) {
		if (!first) ss << sep;
		ss << x;
		first = false;
	}

	return ss.str();

}
