#include<iostream>
using namespace std;

class str
{   private:char s1[50],s2[50],s3[50];
    public:int i,j,k,h,q;

    void strlen(char *s1)
    {
        for(i=0;s1[i]!='\0';i++);
        cout<<" Length of string is :"<<i;
    }

    void strconcat(char *s1,char *s2)
    {
        for(i=0;s1[i]!='\0';i++)
        {
            s3[i]=s1[i];
        }

        int k=i; //i value has came out incremented by one.
        for(h=0;s2[h]!='\0';h++)
        {
            s3[k]=s2[h];
            k++;
        }

        s3[k]='\0';

        cout<<"\nConcatinated string is :"<<s3;
    }

    void strcopy(char *s1,char *s2)
    {

        for(i=0;s2[i]!='\0';i++)
        {
            s1[i]=s2[i];
        }s1[i]='\0';

        cout<<"\nCopied string is :"<<s1;
    }

    void strrev(char *s1)
    {   int j,k;

        char temp;
        i=0;    //pointing to first index.

        for(j=0;s1[j]!='\0';j++);   //making j=strlen(s1);
        k=j-1;	//IMPORTANT pointing to last index of array except '\0'.

        while(i<k) //IMPORTANT.
        {
            temp=s1[i];
            s1[i]=s1[k];
            s1[k]=temp;
            i++,k--;
        }

        cout<<"\nReversed string is :"<<s1;

    }


    void strcom(char *s1,char *s2)
    {   int flag,l1,l2;

        for(l1=0;s1[l1]!='\0';l1++);
        for(l2=0;s2[l2]!='\0';l2++);

        if(l1==l2)
        {
            for(q=0;q<l1;q++)
            {   flag=1;
                if(s1[q]!=s2[q])
                {
                    flag=0;
                    break;
                }
            }

                if(flag==1)
                {
                    cout<<" \nStrings are equal."<<endl;
                    cout<<" Boolean value is 1"<<endl;
                }
                else
                {   cout<<" \n Strings are not equal."<<endl;
                    cout<<" Boolean value is 0"<<endl;

                }

        }
        else
        {
            cout<<" Strings are not equal.\n";
            cout<<" Boolean value is 0"<<endl;
        }


    }

	void freq(char *s1)
	{
		int counter,i,flag=0;
		char j;

		for(j='a';j<='z';j++)
		{
			counter=0;
			for(i=0;s1[i]!='\0';i++)
			{
				if(s1[i]==j)
				{	counter++;
					flag=1;
				}
			}

			if(flag==1)
			{
				cout<<j<<" character occurs "<<counter<<" times in given string."<<endl;
				flag=0;
			}
		}
	}

	void substring(char *s1,char *s2)
	{
	 int l;                                                              //length of string2
    for(l=0;s2[l]!='\0';l++); //length of smaller string.


    for(i=0,j=0;s1[i]!='\0' && s2[j]!='\0';i++)
    {
        if(s1[i]==s2[j])
        {
            j++;
        }
        else
        {
            j=0;
        }
    }
    if(j==l) //important.
    {   cout<<"\nSubstring is found. ";
    }
    else
    {
        cout<<"\nNo Substring is found. ";
    }

	}
};

int main()
{   str st1;
    char z;
    int ch;
    char s1[50],s2[50],s3[50];
    cout<<"\n*****STRING OPERATIONS*****\n";

do
{
    cout<<" Enter \n1.String length \n2.string copy \n3.string concatination \n4.string reverse \n5.string comparison \n6.Frequency count \n7.For Substring"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<" Enter the string ";
               cin>>s1;

               st1.strlen(s1);
                break;

        case 2:cout<<" Enter first string \n";
       	       cin>>s1;
               cout<<" Enter second string \n";
               cin>>s2;

                st1.strcopy(s1,s2);
                break;

        case 3:cout<<" Enter first string \n";
               cin>>s1;
               cout<<" Enter second string \n";
               cin>>s2;

                st1.strconcat(s1,s2);
                break;

        case 4:cout<<" Enter the string \n";
               cin>>s1;

                st1.strrev(s1);
                break;

        case 5: cout<<" Enter first string \n";
                cin>>s1;
                cout<<" Enter second string \n";
                cin>>s2;

                st1.strcom(s1,s2);
                break;


	case 6: cout<<" Enter the string whose frequency count you want to calculate in small letters only"<<endl;
	        cin>>s1;
            st1.freq(s1);
            break;

    case 7: cout<<" Enter bigger string \n";
            cin>>s1;
            cout<<" Enter smaller string \n";
            cin>>s2;

            st1.substring(s1,s2);
            break;

        default:cout<<"!!!!SORRY!!!!";
                break;


    }cout<<" \nEnter y if you want to do another operation else n "<<endl;
    cin>>z;


}while(z=='y'||z=='Y');

}
