#include<iostream>
#include<vector>
#include<set>
#include<limits>
#include<cstring>
#include<algorithm>
#include<map>
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
int DEBUG = 1;
using namespace std;
#define POS "Possible"
#define IMPO "Impossible"

#define MAXN 11
#define INF std::numeric_limits<int>::max()/2

#define FOR(x,y) for(int x=0;x<y;x++)
#define FOR_S(x,a,y) for(int x=a;x<y;x++)
#define FORB(x,a,b) for(int x=a; i>b; i--)

#define SORT(a) sort(a.begin(), a.end());
#define SEARCH(a, b) binary_search(a.begin(), a.end(), b)
#define SZ(a) (int)a.size()
#define LEN(a) (int)a.length()

#define FOREACH(y,x) for(auto y=x.begin(); y!=x.end(); y++)

#define PRINT(a) if(DEBUG) cout<<a<<endl;
#define PRINT_2(a,b) if(DEBUG) cout<<a<<" "<<b<<endl;
#define PRINT_ALL(a) if(DEBUG) { for(auto printAll=a.begin(); printAll!=a.end(); printAll++) cout<<*printAll<<" "; cout<<endl; }

#define MAX(v) std::max_element(std::begin(v), std::end(v));
#define MIN(v) std::min_element(std::begin(v), std::end(v));

#define V_INT vector<int>
#define MAT_INT vector<vector<int> >


int main()
{
    float h,u,d,f;

    while(cin>>h >> u >> d >>f) {
        if (h == 0)
            break;
        float p = 0;
        float slide = (u * f) / 100.0;
        float ur = u;
        int days = 0;
        float zero = 0;
        do {
            p += max(u, zero);
            u = max(u - slide, zero);
            if (p > h)
                break;
            p-=d;
            if (p < 0)
                break;
            days++;


        } while ((p > 0));
        cout << (p > h ? "success " : "failure ") << "on day " << days+1 << endl;
    }
}
