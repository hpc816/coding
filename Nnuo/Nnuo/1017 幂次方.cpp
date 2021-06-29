//#include<stdio.h>
//
//typedef long long ll;
//
//ll mod_pow(ll x, ll n, ll mod) {
//	ll res = 1;
//	while (n > 0) {
//		if (n % 2 == 1)
//			res = (res % mod) * (x % mod) % mod;
//		x = (x % mod) * (x % mod) % mod;
//		n = n >> 1;
//	}
//	return res;
//}
//
//int main() {
//	ll x, n;
//	scanf_s("%lld %lld", &x, &n);
//	ll res = mod_pow(x, n, 233333);
//	printf("%d\n", res);
//	return 0;
//}