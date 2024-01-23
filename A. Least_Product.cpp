Problem Link--
https://codeforces.com/contest/1917/problem/A

My Solution--
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag,
				  tree_order_statistics_node_update>;
#define ld long double
#define md 1000000007
#define vll vector<ll>
#define v2(dt, name, n, m, ini) vector<vector<dt>> name(n, vector<dt>(m, ini))
#define pll pair<ll, ll>
int hcf(int a , int b){if(b==0) return a;a%=b;return hcf(b,a);}

int main()

{


	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int tccc= 1;
	cin >> tccc;

    while(tccc--){
      int n;
    std::cin >> n;

    std::vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    bool negative = false;
    bool zero = false;

    for (int i : a) {
        if (i < 0) {
            negative = !negative;
        } else if (i > 0) {
            continue;
        } else {
            zero = true;
        }
    }

    if (zero || negative) {
        std::cout << "0" << std::endl;
    } else {
        std::cout << "1" << std::endl;
        std::cout << "1 0" << std::endl;
    }
    }
    return 0;
    
    
    }
  
