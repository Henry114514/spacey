#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Pow[100];
ll nigga(ll fhashfe, ll asfaeshliugfasehlgf) {
    
    Pow[0] = 1;
	int i = 1;
	while (i<64) 
	{
		Pow[i] = Pow[i-1]*2;
		i++;
	}

    
    if(fhashfe == asfaeshliugfasehlgf) {
        return 0;
    }
    int fdiughsldihgldsrgsdgdf = 0;
    ll gdxgahbasfsafsdd = 0;
    while(asfaeshliugfasehlgf>=2 * fhashfe) {
        fhashfe*=2;
        gdxgahbasfsafsdd ++;
        fdiughsldihgldsrgsdgdf ++;
    }
    ll left = asfaeshliugfasehlgf - fhashfe;
	int i2=fdiughsldihgldsrgsdgdf;
	while (i2>=0)
	{
		gdxgahbasfsafsdd += left/Pow[i2];
        left %= Pow[i2];
		i2--;
	}

    return gdxgahbasfsafsdd;
}


ll fafs3(ll shrysrdfgsrd, ll jshfesaofhaselig) {
    
    ll gayboi = 10231;
    ll bnoinextdoorjs = 0;
    if(shrysrdfgsrd <= jshfesaofhaselig) {
        gayboi = min(gayboi, bnoinextdoorjs + nigga(shrysrdfgsrd, jshfesaofhaselig));
    }
    while(shrysrdfgsrd != 1) {
        if(shrysrdfgsrd % 2 == 1) {
            shrysrdfgsrd += 1;
            bnoinextdoorjs += 1;
            if(shrysrdfgsrd <= jshfesaofhaselig) {
                gayboi = min(gayboi, bnoinextdoorjs + nigga(shrysrdfgsrd, jshfesaofhaselig));
            }
        }
        shrysrdfgsrd /= 2;
        bnoinextdoorjs ++;
        if(shrysrdfgsrd <= jshfesaofhaselig) {
            gayboi = min(gayboi, bnoinextdoorjs + nigga(shrysrdfgsrd, jshfesaofhaselig));
        }
    }
    return gayboi;
}
int main() {
    
    int gahhskfgsnkeifhakshcdssdfadsf;
    cin >> gahhskfgsnkeifhakshcdssdfadsf;
    while(gahhskfgsnkeifhakshcdssdfadsf--) {
        ll asdfseewsafaesgfs, iuafghilsgrfksdycgfuwawsdafasg;
        cin >> asdfseewsafaesgfs >> iuafghilsgrfksdycgfuwawsdafasg;
        cout << fafs3(asdfseewsafaesgfs, iuafghilsgrfksdycgfuwawsdafasg) << endl;
    }
    return 0;
}
