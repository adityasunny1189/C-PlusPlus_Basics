#include<bits/stdc++.h>
using namespace std;
 int cc[3][2] ={{1,2},{0,2},{0,1}};
bool  DO_nonsense(int ini[],int fin[]){
    for(int s = -500;s<500;s++){
        for(int i =0;i<3;i++){
           int k =  ini[cc[i][0]]*s;
           int k1 = ini[cc[i][1]]*s;
           int kk = fin[i] - ini[i];
           if((fin[cc[i][0]] -k==kk)&&(fin[cc[i][1]] -k1==kk)){
               return true;
           }
           if(ini[i]!=0){
               int pk = 0;
               if(fin[i]%ini[i]==0){
                   pk = fin[i]/ini[i];
                   if((k*pk==fin[cc[i][0]])&&(k1*pk==fin[cc[i][1]])){
                   return true;
               }
           }
        }
        }
        for(int i =0;i<3;i++){
             int k =  ini[cc[i][0]]  +s;
           int k1 = ini[cc[i][1]] +s;
           int kk = fin[i] - ini[i];
           
           if((fin[cc[i][0]] -k==kk)&&(fin[cc[i][1]] -k1==kk)){
               return true;
           }
           if(ini[i]!=0){
               int pk = 0;
               if(fin[i]%ini[i]==0){
                   pk = fin[i]/ini[i];
                   if((k*pk==fin[cc[i][0]])&&(k1*pk==fin[cc[i][1]])){
                   return true;
               }
           }
        }
        }
    }
    return false;
}

void ap() 
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
}

int main(){
    ap();
    int t;
    cin>>t;
    while(t--){
        int p,q,r;
        int a,b,c;
        cin>>p>>q>>r;
        cin>>a>>b>>c;
        int ini[3] ={p,q,r};
        int fin[3] = {a,b,c};
        int count_op = 0;
        for(int i =0;i<3;i++){
            if(ini[i]==fin[i]){
                continue;
            }
            if(ini[i]!=fin[i]){
                if((ini[cc[i][0]]==fin[cc[i][0]])&&(ini[cc[i][1]]==fin[cc[i][1]])){
                     count_op++;
                     ini[i] = fin[i];
                     //cout<<"P";
                     continue;
                }
            }
            int value = fin[i] - ini[i];
            bool cond1_s = (ini[cc[i][0]] +value == fin[cc[i][0]] )? true:false;
                if((ini[cc[i][0]]==fin[cc[i][0]]))
                    cond1_s = false;
            bool cond2_s = (ini[cc[i][1]] +value == fin[cc[i][1]] )? true:false;
                if((ini[cc[i][1]]==fin[cc[i][1]]))
                    cond2_s = false;
            if(cond1_s&&cond2_s){
                count_op =1;
               // cout<<"L";
                break;
            }
           // cout<<cond1_s<<" "<<cond2_s<<endl;
            int k =0;
            bool cond1_m = false;
            bool cond2_m = false;
            if(ini[i]!=0){
            if(((fin[i])%(ini[i]))==0){
                 k = fin[i]/ini[i];
                 cond1_m = (ini[cc[i][0]]*k==fin[cc[i][0]])? true : false;
                 if((ini[cc[i][0]]==fin[cc[i][0]]))
                    cond1_m = false;
                 cond2_m = (ini[cc[i][1]]*k==fin[cc[i][1]])? true : false;
                 if((ini[cc[i][1]]==fin[cc[i][1]]))
                    cond2_m = false;
                if(cond1_m&&cond2_m){
                    count_op =1;
                   // cout<<"R";
                    break;
                }
            }
            }
           // cout<<cond1_m<<" "<<cond2_m<<endl;
           // cout<<count_op<<endl;
            if(cond1_s){
                 ini[cc[i][0]] = ini[cc[i][0]] +value ;
                 ini[i] = ini[i] + value;
                //  cout<<"k";
                 count_op++;
                // cout<<count_op<<endl;
                 continue;
            }
           
            if(cond2_s){
                 ini[cc[i][1]]=  ini[cc[i][1]] +value ;
                  ini[i] = ini[i] + value;
                  count_op++;
                 // cout<<"a";
                 continue;
            }
            if(cond1_m){
                 ini[cc[i][0]]  =ini[cc[i][0]]*k;
                 ini[i] = ini[i]*k;
                  count_op++;
                //  cout<<"s";
                 continue;
            }
            if(cond2_m){
                 ini[cc[i][1]]  =ini[cc[i][1]]*k;
                 ini[i] = ini[i]*k;
                  count_op++;
            //     cout<<"r";
                 continue;
            }
             ini[i] = ini[i] + value;
             count_op++;
         //    cout<<"jk";
        }
     
       
        /*
        for(int i =0;i<3;i++){
            cout<<ini[i];
        }
        */
       int ini2[3] ={p,q,r};
       if(count_op==3){
       if(DO_nonsense(ini2,fin)){
           count_op -=1;
       }
       }
        cout<<count_op<<endl;       
    }
    return 0;
}