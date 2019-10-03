#include <iostream>
#include <vector>

void bubble_sort( std::vector < int > &v ){
	const int n = v.size();
	for(int i = 0;i < n;++i){
		for(int j = 0;j < n-i-1;++j){
			if(v[j] > v[j+1]){
				int tmp = v[j];
				v[j] = v[j+1];
				v[j+1] = tmp;
			}
		}
	}
}