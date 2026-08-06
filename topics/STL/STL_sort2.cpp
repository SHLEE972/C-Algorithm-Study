#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Left : 배열에서 왼쪽에 있는 수
// Right : 배열에서 오른쪽에 있는 수
bool comp ( int Left , int Right ){

    if((Left % 10) != (Right % 10)){ 
        return (Left % 10) < (Right % 10);
    }

    if( ((Left / 10) % 10) != ((Right / 10) % 10 ) ){
        return ((Left / 10) % 10) < ((Right / 10) % 10 );
    }

    if( ((Left / 100) % 10) != ((Right / 100) % 10 ) ){
        return ((Left / 100) % 10) < ((Right / 100) % 10 );
    }
}

int main(){
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    sort( arr.begin() + 0 , arr.end() , comp); 

    for (int i=0; i<N; i++) {
        cout << arr[i] << '\n';
    }
}