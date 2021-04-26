#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;




// void sieve(ll n)
// {

//     //bool prime[n + 1];
//     memset(prime, true, sizeof(prime));
 
//     for (ll p = 2; p * p <= n; p++)
//     {
        
//         if (prime[p] == true) 
//         {
           
//             for (ll i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }

// //    for (int p = 2; p <= n; p++)
// //         if (prime[p])
// //             cout << p << " ";
// }



int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll k=2050;
        if(n<k)
        {
            cout<<-1<<endl;
            continue;
        }
        ll m=n;
        if(n%2050!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        
       ll p=n/2050;
       //cout<<p<<endl;
       ll sum=0;
       while(p>0)
       {
        sum+=p%10;
        p=p/10;
       }
       cout<<sum<<endl;
    

    }
    
}

