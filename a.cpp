 #include<bits/stdc++.h>
#include<string>


#define ll long long int
#define s string
#define el '\n'





const ll N=1e5;
const ll MOD=1e9+7;





using namespace std;
vector<ll>G[N];
vector<ll>V;
vector<ll>m1;
vector<vector<ll> >m2;
vector<s> PS;
pair<ll,ll>P;


 ll Fibonnaci_DP(ll k)
{
   vector<ll>b;
   b[0]=0;
   b[1]=b[2]=1;
   for(ll i=3;i<=k;i++)
   {
      b[i]=b[i-1]+b[i-2];
   }
   return (b[k]%MOD);
}

 ll Factorial_DP(ll n)
 {
    vector<ll>a;
    a[0]=a[1]=1;
    for(ll i=2;i<=n;i++ )
    {
       a[i]=a[i-1]*i;
    }
    return (a[n]%MOD);
 }

ll F(ll x)
{
   ll ans=1;
   for(ll i=1;i<=x;i++)
   {
      ans*=i;
   }
   return ans;
}
 ll gcd(ll a,ll b)
 {
    if(b==0)
    {
       return a;
    }
    else
    {
       return gcd(b,a%b);
    }
 }





  void permuatation(ll l,ll h,s& st)
  {
    if(l==h)
    {
      PS.push_back(st);
    // cout<<st<<" ";
    }
    else
    {
       for(ll i=l;i<=h;i++)
       {
   
          swap(st[i],st[l]);             
          permuatation(l+1,h,st);
          swap(st[i],st[l]);
       }
    }
 }

 void seive(ll n)
 {
      vector<bool>a(n+3,1);
     for(ll i=2;i*i<=n;i++)
     {
         if(a[i])   
               {
             for(ll j=i*i;j<=n;j+=i)
             {
                 a[j]=0;
             }  


             }
        
     
     }
    
     for(ll t=2;t<=n;t++)
     {
         if(a[t])
         {
             cout<<t<<' ';
         }
     }
 }

 ll power(ll a,ll b)
 {
   if(a<0)
   {
      a=a*(-1);

   }
   if(b<0)
   {
      b=b*(-1);
   }
    if(b==0)
    {
       return 1;
    }
    if(b==1)
    {
       return a;
    }
    ll t=power(a,b/2);
    if(b&1)
    {
       return a*t*t;
    }
    else
    {
       return t*t;
    }
 }
//  ll Kadane(vector<ll>a)
//  {

//     ll sum=0;
//     ll ans=INT_MIN;
//     for( ll i=0;i<a.size();i++)
//    {
//        sum+=a[i];
//        ans=max(sum,ans);
         
//     if(sum<0)
//        {
//           sum=0;
//        }
//     }
//     return ans;
// }


 // bool check(vector<ll>a)
 // {
 //    sort(a.begin(),a.end());
 //    for(ll i=0;i<a.size();i++)
 //    {
 //       if(a[i]!=i+1)
 //       {
 //          return false;
 //       }
 //    }
 //    return true;

 // }



 // ll result(s q,vector<ll>a)
 // {
 //    set<char>se;
 //     for(ll i=0;i<q.size();i++)
 //     {
 //      se.insert(q[i]);
 //     }
 //     ll o=0;
 //     for(ll i=0;i<se.size();i++)
 //     {
 //      o=o+((i+1)*a[i]);

 //     }

     // cout<<se.size()<<el;
 // for(ll i=0;i<se.size();i++)
 // {
 //    cout<<a[i]<<el;
 // }
     // return o;
 // }
 
//  void solve()
//  {
//    ll n,q;
//    cin>>n>>q;
//    vector<ll>a;
//    for(ll i=0;i<n;i++)
//    {
//       ll k;
//       cin>>k;
//       a.push_back(k);

//    }
//    while(q--)
//    {
//       ll x;
//       cin>>x;
//    ll ans=1;
//    ll count=0;
//    ll flag=0;
// for(ll i=0;i<n;i++)
// {
//    if(x==a[i])
//    {
//       flag=1;
//       break;

//    }
//    if(x<a[i])
//       {
//          count++;
//       }

// }
// if(flag)
// {
//    cout<<"0"<<el;
// }
// if(count&1)
// {
// cout<<"NEGATIVE"<<el;
// }
// if(!(count&1))
// {
//    cout<<"POSITIVE"<<el;
// }
// }

//    ll t;
//    cin>>t;
//    while(t--)
//    {
//       ll n;
//       cin>>n;
//       vector<int>a;
//       for(ll i=0;i<n;i++)
//       {
//          ll k;
//          cin>>k;
//          a.push_back(k);
//       }
//       ll count=0;
//       for(ll i=n-1;i>=0;i--)
//       {
//          if(a[i]<=7)
//          {
//             break;
//          }

//          count++;

//       }
//       cout<<(n-count)<<el;
//    }
   
// }  
  // ll t;
  //  cin>>t;
  //  while(t--)
  //  {
  //   ll x1,x2,y1,y2,z1,z2;
  //   cin>>x1>>x2>>y1>>y2>>z1>>z2;
  //   if(x2>=x1&&y2>=y1&&z2<=z1)
  //   {
  //      cout<<"YES"<<el;
  //   }
  //   else
  //   {
  //      cout<<"NO"<<el;
  //   }
  //  }
// }
    // ll t='b'-'0';
    // cout<<t-49;
     // ll n,q;
     // cin>>n>>q;
     // s c;
     // cin>>c;
     // vector<ll>a(26,0);
   //   for(ll i=0;i<c.size();i++)
   //   {
   //     ll t=c[i]-'0';
   // t-=49;
   // a[t]++;

   //   }
   //   for(ll i=0;i<3;i++)
   //   {
   //    cout<<a[i]<<" ";
   //   }

    
 
//  while(q--)
//  {
//    ll l,m;
//    cin>>n>>m;
//    s temp;
//    for(ll i=n-1;i<m;i++)
//    {
//       temp.push_back(c[i]);
//    }
//    cout<<temp<<el;

//     for(ll i=0;i<c.size();i++)
//      {
//        ll t=temp[i]-'0';
//    t-=49;
//    cout<<t<<" ";
//    a[t]++;

//      }
//      for(ll i=0;i<a.size();i++)
//      {
//       cout<<a[i]<<" ";
//      }
//    // cout<<temp<<el;
//      if(n==m)
//      {
//       cout<<1<<el;
//      }
//      else
//      {
//    cout<<result(temp,a)<<el;
// }
// for(ll i=0;i<c.size();i++)
// {
//    a[i]=0;
// }
 
// vector<ll>even(vector<ll>a){
//    for(ll i=0;i<a.size();i+=2)
//    {
//       swap(a[i],a[i+1]);
//    }
//    return a;
// }
// vector<ll>odd(vector<ll>b){
    
//     rotate(b.begin(),b.begin()+b.size()-1,b.end());
//     return b;



// }
 // ll max(ll a,ll b)
 // {
 //   if(a>b)
 //   {
 //      return a;
 //   }
 //   if(b>a)
 //   {
 //      return b;


 //   }

 // }

ll mul(ll a,ll b)
{
   return a*b;
}
bool is_Subsequence(s a,s b)
{

   ll n1=a.size();
   ll n2=b.size();
   ll j=0;
   for(ll i=0;i<n1&&i<n2;i++)
   {  
      if(a[j]==b[i])
         j++;
   }

   return (j==n1);
}
bool isSubstring(s s1, s s2)
{
    ll M = s1.length();
    ll N = s2.length();
 
    for (ll i = 0; i <= N - M; i++) {
        ll j;
 
       
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return true;
    }
 
    return false;
}


// void dfs(vector<ll>g[n],ll i)
// {
//    if(!visted[i])
//    {
//       visted[i]=true;
//       dfs()
//    }
// }

ll distance(ll x1,ll x2,ll y1,ll y2)
{

   return(min(abs(x1-x2),abs(y1-y2)));
}

bool substring(s a, s b)
{

   return a.find(b)!=s::npos;

}

bool is_sorted(vector<ll>a)
{
   // vector<ll>b;
   // sort(b.begin(),b.end());

   for(ll i=0;i<a.size();i++)
   {
      if(i+1<a.size() and a[i]>a[i+1])
      {
         return false;
      }
   }

   return true;


}

ll max(ll a,ll b)
{
   if(a>b)
   {
      return a;
   }
   return b;
}
   
     void solve(){


      ll t;
      cin>>t;
      // t=1;
      while(t--)
      {
         // ll 
         vector<vector<char> >mat(8,vector<char>(8,'a'));
         for(ll i=0;i<8;i++){
            for(ll j=0;j<8;j++){
               char c;
               cin>>c;
               mat[i][j]=c;

            }
         }
         ll x=0;
         ll y=0;
        vector<pair<int,int> >a;
         for(ll i=0;i<8;i++){
            for(ll j=0;j<8;j++){
               if(mat[i][j]=='#'){
                  a.push_back(make_pair(i,j));
                  if(a.size()==2){
                     break;
                  }
               }
            }
            if(a.size()==2){
               break;

            }
         }
         // cout<<a[0].first<<" "<<a[0].second<<" "<<a[1].first<<" "<<a[1].second<<endl;
         // vector<vector<ll>>q,w;
         set<pair<ll,ll>>q,w;
         if(a[0].first!=a[1].first){
         for(ll i=a[0].first;i<8;i++){
            for(ll j=a[0].second;j>=0;j--){
               if(mat[i][j]=='#'){
               q.insert(make_pair(i,j));
            }

            }
         }

         for(ll i=a[1].first;i<8;i++){
            for(ll j=a[1].second;j<8;j++){
               if(mat[i][j]=='#'){
               w.insert(make_pair(i,j));
            }
            }
         }
      }
      else{
         for(ll i=a[0].first;i<8;i++){
            for(ll j=a[0].second;j<8;j++){
               if(mat[i][j]=='#'){
               q.insert(make_pair(i,j));
            }
            }
         }
         for(ll i=a[1].first;i<8;i++){
            for(ll j=a[1].second;j>=0;j--){
               if(mat[i][j]=='#'){
               w.insert(make_pair(i,j));
            }

            }
         }




      }
      for(auto j:q){
         cout<<j.first<<j.second<<endl;
      }
      for(auto j:w){
         cout<<j.first<<j.second<<endl;

      }

         // set<pair<ll,ll> >sp;
         // for(ll i=0;i<8;i++){
         //    for(ll j=0;j<8;j++){
         //       if(mat[i][j]=='#'){
         //          if(sp.find(make_pair(i,j))!=sp.end()){
         //             x=i+1;
         //             y=j+1;
         //             break;
         //             // cout<<i+1<<" "<<j+1<<el;
         //             // return;
         //          }
         //          else{
         //             sp.insert(make_pair(i,j));
         //          }
         //       }
         //    }
         // }
         // cout<<x<<" "<<y<<el;



      //    ll n;
      //    cin>>n;
      // map<ll,ll>mp;
      // for(ll i=0;i<n;i++){
      //    ll k;
      //    cin>>k;
      //    mp[k]++;

      // }
      // ll k=0;
      // for(auto j:mp){
      //    k+=j.second-1;
      //  }

      //  double op=k*(1.0)/2.0;
      //  ll p=ceil(op);
      //  cout<<(n-(p*2))<<el;



         // ll a,b,c,d;
         // cin>>a>>b>>c>>d;
         // // if(b)
         // ll ans=0;
         // if(b>a){
         //    ans++;
         // }
         // if(c>a){
         //    ans++;
         // }
         // if(d>a){
         //    ans++;
         // }

         // cout<<ans<<el;

















//          int n;
//          cin>>n;
//          vector<ll>a,b;
//          for(ll i=0;i<n;i++)
//          {
//             ll k;
//             cin>>k;
//             a.push_back(k);
//          }
//          for(ll i=0;i<n;i++)
//          {
//             ll k;
//             cin>>k;
//             b.push_back(k);
//          }

// vector<int>ans;
// for(int i=0;i<n;i++)
// {
//    if(i==0)
//    {
//       ans.push_back(b[i]-a[i]);

//    }
//    else
//    {
//       if(a[i]<=b[i-1])
//       {
//          ans.push_back(b[i]-b[i-1]);
//       }
//       else
//       {
//          ans.push_back(b[i]-a[i]);

//       }
//    }

// }
// for(ll i=0;i<n;i++)
// {
//    cout<<ans[i]<<" ";
// }
// cout<<el;



         // if(n==1)
         // {
         //    if(a[0]>=b[0])
         //    {
         //       cout<<"YES"<<el;
         //    }
         //    else
         //    {
         //       cout<<"NO"<<el;
         //    }
         // }
         // else
         // {
         //    int dif=(a[0]-b[0]);
         //    if(dif<0)
         //    {
         //       cout<<"NO"<<el;
         //    }
         //    else
         //    {
         //       ll cnt=1;
         //       for(int i=1;i<n;i++)
         //       {
         //          if(b[i]==0)
         //          {
         //             if(a[i]<=dif)
         //             {
         //                cnt++;
         //             }

         //          }
         //          else if((a[i]-b[i])==dif)
         //          {
                     
                     
         //             cnt++;
                     

         //          }


         //       }
         //       cout<<cnt<<el;
         //       if(cnt==n)
         //       {
         //          cout<<"YES"<<el;
         //       }  
         //       else
         //       {
         //          cout<<"NO"<<el;

         //       }





            // }






         }




         // ll np;
         // cin>>np;

         
         // // ll s=((np/3)+2);
         // ll s=ceil((np*(1.0)/3*(1.0)))+1;
         // ll f=s-1;
         // if((f+s)==np)
         // {
         //    f=f-1;
         // }


         
         // cout<<f<<" "<<s<<" "<<  (np-(f+s))<<el;
         // cout<<n<<s<<1<<el;

         // int plants;
         // int good;
         // int bad;
         // cin>>plants>>good>>bad;
         // if(plants<=good)
         // {
         //    cout<<plants<<el;ss
         // }
         // else
         // {
         //    int i=0;
         //    int ans=0;
         //    while(plants!=0)
         //    {
         //       if(i%2==0)
         //       {
         //          if(plants>good)
         //          {
         //             ans+=good;
         //             plants-=good;
         //             if(plants==0)
         //             {
         //                break;
         //             }
         //          }
         //          else if(plants<=good)
         //          {
         //             ans+=plants;
         //             break;
         //          }
         //          else
         //          {
         //             break;
         //          }
         //          i++;

         //       }
         //       else
         //       {
         //          ans+=bad;
         //          i++;

         //       }

         //    }
         //    cout<<ans<<el;

         }
         // ll s=(n/3)



         // sort(A.begin(),A.end());

         // ll a=((A[0]+1)/2+(A[1]+1)/2);
         // cout<<a<<el;



      //    if(n%2==0)
      //    {
      //       for(ll i=0;i<n;i++)
      //       {
      //          if(i+1<n and A[i]>A[i+1])
      //          {
      //             swap(A[i],A[i+1]);
      //          }
      //          i++;
      //       }

      //    }
      //    else
      // {

      //    for(ll i=1;i<n;i++)
      //    {
      //       if(i+1<n and A[i]>A[i+1])
      //          {
      //             swap(A[i],A[i+1]);
      //          }
      //          i++;



      //    }


      // }

      // bool f=false;
      // for(ll i=0;i<n;i++)
      // {
      //    if(i+1<n and A[i]>A[i+1])
      //    {
      //       f=true;
      //       break;
      //    }
      // }
      // if(f)
      // {
      //    cout<<"NO"<<el;
      // }
      // else
      // {
      //    cout<<"YES"<<el;

      // }







        // if(n==1)
        // {
        //  cout<<"YES"<<el;
        // }
        // else
        // {
        //  vector<ll>even,odd;
        //  for(ll i=0;i<n;i+=2)
        //  {
        //     even.push_back(A[i]);

        //  } 

        //  for(ll i=1;i<n;i+=2)
        //  {
        //     odd.push_back(A[i]);
        //  }



        //  if(is_sorted(even) and is_sorted(odd))
        //  {
        //     cout<<"YES"<<el;
        //  }
        //  else
        //  {
        //     cout<<"NO"<<el;

        //  }

        // }

         // s a,b;
         // cin>>a>>b;
         // if(b=="a")
         // {
         //    cout<<"1"<<el;
         // }
         // else
         // {

         //    ll cnt=0;
         //    for(ll i=0;i<b.size();i++)
         //    {
         //       if(b[i]=='a')
         //       {
         //          cnt++;
         //       }
         //    }
         //    if(cnt>0)
         //    {
         //       cout<<"-1"<<el;
         //    }
         //    else
         //    {
         //       // cout<<pow(2,b.size())<<el;
         //       ll ans=1;
         //       for(ll i=1;i<=a.size();i++)
         //       {
         //          ans*=2;
         //       }
         //       cout<<ans<<el;


         //    }
         // }
         // ll a,b,c,x,y;
         // cin>>a>>b>>c>>x>>y;
         // ll t=x-a;
         // ll t2=y-b;
         // if(t<0)
         // {
         //    t=0;

         // }
         // if(t2<0)
         // {
         //    t2=0;
         // }

         // if(t+t2<=c)
         // {
         //    cout<<"YES"<<el;
         // }
         // else
         // {
         //    cout<<"NO"<<el;

         // }

         // ll n;
         // cin>>n;
         // vector<ll>ans;
         // for(ll i=0;i<n;i++)
         // {
         //    ll k;
         //    cin>>k;
         //    ans.push_back(k);
         // }


         // ll f=0;
         // for(ll i=n-2;i>=0;i--)
         // {
         //    int curr=ans[i+1];

         //    ll prev=ans[i];
         //    ll cnt=0;
         //    while(prev>=curr)
         //    {
         //       cnt++;
         //       prev/=2;
         //       if(prev==0)
         //       {
         //          break;
         //       }
         //    }
         //    ans[i]=prev;
         //    f+=cnt;

         // }
         // bool f2=false;

         // for(ll i=0;i<ans.size();i++)
         // {
         //    if(i+1<ans.size())
         //    {
         //       if(ans[i]>=ans[i+1])
         //       {
         //          f2=true;
         //          break;

         //       }
         //    }
         // }
         // if(f2)
         // {
         //    cout<<"-1"<<el;
         // }
         // else
         // {
         //    cout<<f<<el;


         // }

         // cout<<f<<el;





        

         // map<string,int>mp;

         // string a;
         // cin>>a;
         // int k=1;
         // for(char i='a';i<='z';i++)
         // {
         //    for(char j='a';j<='z';j++)
         //    {
         //       if(i!=j)
         //       {
         //           string c="";

         //           c+=i;
         //          c+=j;
         //          mp[c]=k;
         //          k++;

         //       }
         //    }
         // }
         // cout<<mp[a]<<el;

         // ll x,y;
         // cin>>x>>y;
         // if(x>y || y%x!=0)
         // {
         //    cout<<"0"<<" "<<"0"<<el;
         // }
         // else if(x==y)
         // {
         //    cout<<1<<" "<<1<<el;

         // }
         // else
         // {
         //    ll c=y/x;
         //    cout<<1<<" "<<y/x<<el;
         // }






           
            // ll cnt=0;
            // for(int i=0;i<n;i++)
            // {
            //    if(i+1<n and a[i+1]-a[i]==a[1]-a[0])
            //    {
            //       cnt++;
            //    }
            // }
            // if(cnt==n-1)
            // {
            //    cout<<"YES"<<endl;
            // }
            // else
            // {
            //    cout<<"NO"<<endl;

            // }


         // }
         // string s;
         // cin>>s;
         // if(s.size()<2)
         //    {
         //       cout<<"NO"<<endl;
         //    }

         //   else{ 
         //    bool f=false;
         // for(int i=0;i<s.size();)
         // {
         //    int cnt=0;
         //    int j=i;
         //    while(j<s.size() and s[i]==s[j])
         //    {
         //       cnt++;
         //       j++;
         //    }
         //    // cout<<cnt<<endl;
         //    if(cnt>=2)
         //    {
         //       i+=cnt;
         //       continue;
         //    }
         //    else
         //    {
         //       f=true;
         //       break;
         //    }

         //    // if((i+1<s.size() and s[i]!=s[i+1]) or (i+2<s.size() and s[i]!=s[i] and s[i+1]!=s[i+2]))
         //    // {
         //    //    // continue;
         //    //    f=true;
         //    //    break;

         //    // }
         //    // else
         //    // {
         //    //    f=false;
         //    //    break;
         //    // }

         // }
         // if(f)
         // {
         //    cout<<"NO"<<endl;
         // }
         // else
         // {
         //    cout<<"YES"<<endl;
         // }
      // }


         // ll n;
         // cin>>n;
         // vector<ll>A;
         // for(ll i=0;i<n;i++)
         // {
         //    ll s;
         //    cin>>s;
         //    A.push_back(s);

         // }

         // ll ans=0;
         // ll left=A[0];
         // ll right=A[n-1];
         // ll i=0;
         // ll j=n-1;
         // while(i<j)
         // {
         //    if(left==right)
         //    {
         //       ans=max(ans,i+1+n-j);
         //    }
         //    if(left<=right)
         //    {
         //        i++;
         //       left+=A[i];
              
         //    }
         //    else if(right<left)
         //    {
         //       j--;
         //       right+=A[j];
               
         //    }
         // }

         // cout<<ans<<endl;




         // ll ans=0;
         // map<char,int>first,second;
         // map<string,int>mp;

         // for(ll i=0;i<n;i++)
         // {
         //    ans+=first[A[i][0]]+second[A[i][1]]-2*(mp[A[i]]);
         //    first[A[i][0]]++;
         //    second[A[i][1]]++;
         //    mp[A[i]]++;
         // }

        

         // cout<<ans<<endl;




      // }



   // }

        




    

 int main()
 {
   // cout<<power(2,5);

    solve();
   // s a;
   // cin>>a;

   // permuatation(0,a.size()-1,a);
   // for(ll i=0;i<PS.size();i++)
   // {
   //    cout<<PS[i]<<el;

   // }
 }
