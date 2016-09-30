class sol{
public:
vector restoreIpAddresses(string s)
{
int num=s.length();
vector ipadd;
if((num>12)||(n<4))
return ipadd;
for(int i=1;i<=3;i++)
{
string a=s.substr(0,i);
if((a[0]=='0'&&(a.length()>1))
continue;
int ab=atoi(a.c_str());
if(ab>255)
continue;
for(int j=i+1;j<=n-2;j++)
string b=s.substr(i,j-i);
if((b[0]=='0')&&(b.length()>1))
continue;
int ba=atoi(b.c_st());
if(ba>255)
continue;
for(in k=j+1;k<=n-1;k++)
{
string c=s.substr(j,k-j);
if((c[0]=='0')&&(c.length()>1))
continue;
int ac=atoi(c.c_str());
if(ac>255)
continue;
string d=s.substr(k,n-k);
if((d[0]=='0')&&(d.length()>1))
continue;
int ad=atoi(d.c_str());
if(ad>255)
continue;
ipadd.push_back(to_sting(ab)+"."+to_string(ba)+"."+to_string(ac)+"."+to_string(ad));
}
}
}
return ipadd;
}
};
