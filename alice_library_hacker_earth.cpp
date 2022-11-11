#include <bits/stdc++.h>

#define pb             push_back
#define endl "\n" 
#define fill(x, y)     memset(x, y, sizeof(x))
#define all(x)         (x).begin(), (x).end()
#define debug(x)       { cerr << #x << " = " << x << endl; }
#define IO	       { ios_base::sync_with_stdio(false); cin.tie(0); }
#define read(x)	       freopen(x, "r", stdin)
#define write(x)       freopen(x, "w", stdout)

using namespace std;

typedef long long      ll;
typedef pair<int, int> ii;
typedef vector<int>    vi;


int main() {
    string s; cin >> s;

    stack<string> st;
    string curr_s = "";
    for (int i{0}; i < s.size(); i++)
    {
        if (s[i] == '/') // if we find forward slash
        {
            st.push(curr_s);
            curr_s = "";
        }
        else if (s[i] == '\\') // if we find back slash
        {
            reverse(curr_s.begin(), curr_s.end());
            string top = st.top();
            st.pop();
            top.append(curr_s);
            curr_s = top;
        }
        else
        {
            curr_s.push_back(s[i]);
        }
    }
    cout << curr_s << endl;
}