#include <iostream>
using namespace std;
main(){

	int sayi, bolen, carpan_toplami = 0 ;
	cout << " sayini gir ";
	cin >> sayi;
	for (bolen = 1; bolen <= sayi/ 2; bolen ++){
		if (sayi % bolen == 0){
			carpan_toplami += bolen;
		}
}
		cout << carpan_toplami << endl;
if ( sayi == carpan_toplami){
	cout << " sayiniz mükemmel";
	}
else {
	cout << " mükemmel degil ";
}

}


