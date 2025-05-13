
bool existeix_cami_de_longitud(const BinTree<int>& arbre, int longitud) {
	if (tree.left().empty() and tree.right().empty() and longitud == 0) return true;
	else if (tree.left().empty() and tree.right().empty()) return false;
	else {
		return existeix_cami_de_longitud(tree.left(), longitud - 1) or existeix_cami_de_longitud(tree.right(), longitud - 1);
	}
}

BinTree<int> arbre_suma_de_fills(const BinTree<int>& arbre) {
	if (tree.left()empty() and tree.right().empty()) return arbre;
	
	BinTree left = arbre_suma_de_fills(tree.left());
	BinTree right = arbre_suma_de_fills(tree.right());

	BinTree newT(tree.value() + left.value() + right.value(), left, right);
	return newT;
}

vector<int> cami_amb_suma_maxima(const BinTree<int>& arbre, int& suma_maxima) {

	if (tree.left()empty() and tree.right().empty()) {
		vector<int> v1;
		v1.push_back(tree.value());
		return v1;
	}
	else if (tree.empty()) {
		suma_maxima = 0;
		vector<int> v1;
		return v1;
	}

	int max_e, max_d;

	vector<int> esq = cami_amb_suma_maxima(tree.left(), max_e);
	vector<int> drt = cami_amb_suma_maxima(tree.right(), max_d);
	if (max_e >= max_d) {
		esq.push_back(tree.value());
		suma_maxima += tree.value();
		return esq;
	}
	else {
		drt.push_back(tree.value());
		suma_maxima += tree.value();
		return esq;
	}
}
