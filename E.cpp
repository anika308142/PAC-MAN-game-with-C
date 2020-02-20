#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i,newflag,newvar=0,total;
    int third,myarr[5];
    int F,G,num,sqrtnum,c,fin[100][3];
    cin>>t;
    for(i=1; i<=t; i++)
    {   memset(fin, 0, sizeof(fin)); total=0;
        num=0;
        int flag=0;
        c=0;
        cin>>F>>G;
        num=F*G;

        sqrtnum=sqrt(num)+1;
        //cout<<sqrtnum;
        if(G==1)
        {
            c=1;
            flag=0;
            for(int j=2; j<=sqrtnum; j++)
            {
                if(num%j==0&&num/j!=1)
                {
                    flag=1;
                    c++;                                  //counting 2
                     int a=j;
                    int b=num/j;
                    int arr[2];
                    arr[0]=a;
                    arr[1]=b;
                    for(int k=0; k<2; k++)
                    {
                         int sqn=0;
                        sqn=sqrt(arr[k])+1;
                        newvar=0;
                        for(int pu=2; pu<=sqn; pu++)
                        {
                            if(arr[k]%pu==0&&arr[k]/pu!=1)   //factoring
                            {
                                int first=pu;
                                int second=arr[k];
                                if(k==0)  third=arr[1];
                                else third=arr[0];
                                myarr[0]=first;
                                myarr[1]=second;
                                myarr[2]=third;
                                int ext=__gcd(first,second);
                                ext=__gcd(ext,third);
                                if(ext==1)
                                {
                                    for(int pi=0; pi<3; pi++)
                                    {
                                        for(int pj=0; pj<3; pj++)
                                        {
                                            if(myarr[pj]>myarr[pi])
                                            {
                                                int temp=myarr[pi];
                                                myarr[pi]=myarr[pj];       //sorting
                                                myarr[pj]=temp;
                                            }
                                        }
                                    }
                                    newflag=0;
                                    for(int qi=0; qi<=newvar; qi++)
                                    {
                                        if(fin[qi][0]==myarr[0]&&fin[qi][1]==myarr[1]&&fin[qi][2]==myarr[2])
                                        {
                                            newflag=1;
                                            break;
                                        }

                                    }
                                    if(newflag==0)
                                    {
                                        newvar++;
                                        fin[newvar][0]=myarr[0];

                                        fin[newvar][1]==myarr[1];
                                        fin[newvar][2]==myarr[2];         //storing
                                    }
                                }

                            }
                        }

                    }//till
                }
            }

             total=c+newvar;
            cout<<total;

        }

        else
        {
           c=0;flag=0;
            for(int j=2; j<=sqrtnum; j++)
            {
                if(num%j==0&&num/j!=1)
                {
                    flag=1;
                    //c++;                                  //counting 2
                     int a=j;
                    int b=num/j;
                    int arr[2];
                    arr[0]=a;
                    arr[1]=b;
                    for(int k=0; k<2; k++)
                    {
                        long long int sqn=0;
                        sqn=sqrt(arr[k])+1;
                        newvar=0;
                        for(int pu=2; pu<=sqn; pu++)
                        {
                            if(arr[k]%pu==0&&arr[k]/pu!=1)   //factoring
                            {
                                int first=pu;
                                int second=arr[k];
                                if(k==0)  third=arr[1];
                                else third=arr[0];
                                myarr[0]=first;
                                myarr[1]=second;
                                myarr[2]=third;
                                int ext=__gcd(first,second);
                                ext=__gcd(ext,third);
                                if(ext==G)
                                {
                                    for(int pi=0; pi<3; pi++)
                                    {
                                        for(int pj=0; pj<3; pj++)
                                        {
                                            if(myarr[pj]>myarr[pi])
                                            {
                                                int temp=myarr[pi];
                                                myarr[pi]=myarr[pj];       //sorting
                                                myarr[pj]=temp;
                                            }
                                        }
                                    }
                                    newflag=0;
                                    for(int qi=0; qi<=newvar; qi++)
                                    {
                                        if(fin[qi][0]==myarr[0]&&fin[qi][1]==myarr[1]&&fin[qi][2]==myarr[2])
                                        {
                                            newflag=1;
                                            break;
                                        }

                                    }
                                    if(newflag==0)
                                    {
                                        newvar++;
                                        fin[newvar][0]=myarr[0];

                                        fin[newvar][1]==myarr[1];
                                        fin[newvar][2]==myarr[2];         //storing
                                    }
                                }

                            }
                        }

                    }//till
                }
            }

             total=c+newvar;
            cout<<total;
        }
if(i!=t)  cout<<endl;

    }


}
