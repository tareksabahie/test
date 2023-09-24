
void string_print ( char * str  )
{
	int i ;
	for (i=0 ; str[i] ; i++)
	{
		printf ( "%c",str[i]);
	}
	printf ( " \n");
}

int string_lenght ( char * str)
{int i;
	for (  i=0 ; str[i] ; i++);
	return i;
}

void string_reverse ( char *str )
{   int i , j=string_lenght(str)-1;
	char temp ;
	for ( i=0 ;i<string_lenght(str)/2; i++)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;

		j--;

	}
}

char string_compare ( char *str1 , char *str2 )
{
	int i;
	for ( i=0 ;  str1[i] || str2[i]; i++)
	{
		if (str1[i]!=str2[i])
		{
			return 0;
		}
	}
	return 1 ;
}
char string_compare2(char *str1 , char *str2)
{
	int  size1=string_lenght(str1) , size2=string_lenght(str2) ;
	if (size1 != size2)
	{
		return 0;
	}
	for (int i=0 ; str1[i] ; i++)
	{
		if (str1[i]!=str2[i])
		{
			return 0 ;
		}
	}
	return 1;
}
char string_compareNotSenstive ( char *str1 , char *str2)
{
	int i ;
	for ( i=0 ; str1[i] || str2 [i] ; i++)
	{
		if ( (str1[i] -'A' )!=(str2[i]-'a') && (str1[i]-'a' !=str2[i]-'A') && str1[i] !=str2[i]  )

		{
			return 0 ;
		}

	}
	return 1;
}

void string_reverse_sentense_in_New_String(char* str , char *strr )
{
	int i ,k=0, start =0 ,j,end=string_lenght(str )-1;
	for ( i=end ; i>=0 ; i--)
	{
		if ( str[i]==' ' || i==0)
		{
			if (i==0)
			{
				start=0;
			}
			else
			{
				start = i+1;
			}
			for ( j=start ; j<=end ; j++)
			{
				strr[k]=str[j];
				k++;
			}
			end=i-1;
			strr[k++]=' ';

		}

	}
	strr[string_lenght(str)]=0;
}

void string_print_size ( char * str  , int size)
{
	int i ;
	for (i=0 ; i<size ; i++)
	{
		printf ( "%c",str[i]);
	}
	printf ( " \n");
}
int string_longestWord( char * str , int * index_element)
{
	int i , j ,count =0 , max=0 ;
	for ( i=0 ; str[i] ; i++)
	{
		if ( str[i] !=' ')
		{
			count++;
			if ( max<count )
			{
				max=count ;
				*index_element=i-max+1;
			}
		}
		else if ( str[i]==' ')
		{
			count =0;
		}
	}
return max ;}

void string_CopyLongestWord( char *str , char*nstr)
{
	int i , j ,count =0 , index_element, max=0 ;
	for ( i=0 ; str[i] ; i++)
	{
		if ( str[i] !=' ')
		{
			count++;
			if ( max<count )
			{
				max=count ;
				index_element=i-max+1;
			}
		}
		else if ( str[i]==' ')
		{
			count =0;
		}
	}
	for ( j=0 ; j<max ; j++)
	{
		nstr[j]=str[ index_element++];
	}
	nstr[j]=0;
}

void string_scan ( char *str )
{
	int i;
	for ( i=0 ; ; i++ )
	{
		scanf ( "%c", &str[i]);
		if (str[i]=='\n')
		{
			break ;
		}
	}
	str[i]=0;

}
char string_first_repeated(char *str)
{
	char i ;
	int count[26]= {0};
	array_print(count,26);
	for(i=0 ; str[i] ; i++)
	{
		count[str[i]-'a']++;
		if( count[str[i]-'a']==2)
		{
			return str[i];
		}
	}
}
void string_copy_without_repeated_char(char *str )
{
	char i, j=0, flag=0;
	char count[26]= {0};
	for(i=0 ; str[i] ; i++)
	{
		if(str[i]!=' ' )
		{
			count[str[i]-'a']++;

		}
		if(str[i]==' ' &&flag==0 )
		{
			str[j]=str[i];
			j++;
			flag=1;
		}
		if( count[str[i]-'a']==1 )
		{
			str[j]=str[i];
			j++;
		}
	}
	str[j]=0;
}
char string_mirror (char *str)
{
	int i , j=string_lenght(str)-1;
	for (i=0 ; i<string_lenght(str )/2 ; i++)
	{
		if (str[i]!=str[j])
		{
			return NOT_MIRROR ;
		}
		j--;
	}
	return MIRROR;
}

void integer_To_string (  int num ,char *str )
{
	int i,j, flag=0 ,k=0 ,n;
	char temp;
	if ( num==0)
	{
		str[0]='0';
		str[1]=0;
		return ;
	}
	if (num<0)
	{
		num=num*-1;
		flag=1;
	}
	for ( i=0 ; num; i++)
	{
		n=num%10;
		num=num/10;
		str[i]=n+'0';
	}
	str[i]=0;
	k=i;
	for ( j=0 ; j<i/2 ; j++)
	{
		temp =str[--k];
		str[k]=str[j];
		str[j]=temp;

	}
	if ( flag)
	{
		str[i]='-';
		str[++i]=0;
	}
}


int string_to_integer( char *str)
{
	int i=0,n, num=0 ;
	for (i=0 ; str[i] ; i++)
	{
		n=str[i]-'0';
		num=n+num*10;
	}
	return num;
}
char string_find(char *str, char *find)
{
	int i, k=0, count =0, lenght=string_lenght(find);
	for (i=0 ; str[i] ; i++)
	{
		if (str[i]==find[0])
		{
			for ( k=0 ;  str[k] && str[i]!=' ' &&str[i]; k++)
			{
				if(str[i]==find[k])
				{
					count++;
				}
				else
				{
					count=0;
				}
				i++;
			}
			if(count==lenght)
			{
				return i-count+1;

			}
		}
		else
		{
			count=0;
		}

	}
	return -1;
}
void string_find_replace(char *str, char *find, char *replace, char *nstr)
{
	int i,j ;
	unsigned char index=string_find(str, find );
	unsigned char len_find=string_lenght(find)-1;
	for (i=0 ; i<index-1 ; i++)
	{
		nstr[i]=str[i];
	}

	for(j=0 ; replace[j] ; j++ )
	{
		nstr[i]=replace[j];
		i++;
	}

	index=index+len_find;

	for( ; str[index] ; i++)
	{
		nstr[i]=str[index];
		index++;
	}
	nstr[i]=0;
}
void float_to_string(float num, char *str)
{
	int i,flag=0, rem, n1 = num, k;
	int n2=(num-n1)*1000;
	printf("n1=%d\n",n2);
	if (n1==0)
	{
		str[0]='0';
		str[1]='.';
		i=2 ;
		if(n2<0)
		{
			n2=n2*-1;
			flag=1;
		}
		for ( ; n2 ; i++)
		{
			rem=n2%10;
			n2=n2/10;
			str[i]=rem+'0';
		}
		str[i]=0;
		string_reverse(&str[2]);
		str[i]=0;
		if(flag==1)
		{
			str[i]='-';
			str[i+1]=0;
		}
		return;
	}
	if (n1<0)
	{
		n1=n1*-1;
		n2=n2*-1;
		flag=1;
		printf("n1=%d\n",n2);
	}
	for (i=0 ; n1 ; i++)
	{

		rem=n1%10;
		n1=n1/10;
		str[i]=rem+'0';

	}
	str[i]=0;
	string_reverse(str);
	str[i]='.';
	i++;
	k=i;

	for ( ; n2 ; i++)
	{

		rem=n2%10;
		n2=n2/10;
		str[i]=rem+'0';
	}
	str[i]=0;
	string_reverse(&str[k]);
	if(flag==1)
	{
		printf("flag=%d\n",flag);

		str[i]='-';
		str[i+1]=0;
	}

}

char* triangle_check(char *str)
{
	int i, count=0, angle=0, flag=0, angle1, angle2, angle3;
	for ( i=0 ; str[i] ; i++)
	{
		if(str[i]==' ')
		{
			angle= string_to_integer(&str[i-count]);
			count=0;
			flag++;
			if (flag==1)
			{
				angle1=angle;
			}
			if (flag==2)
			{
				angle2=angle;
			}
			if (flag==3)
			{
				angle3=angle;
			}
		}
		else
		{
			count++;
		}
	}
	if(angle1+angle2+angle3==180)
	{
		if (angle1==60 && angle2==60 && angle3==60)
		{
			return "Equilateral triangle ";
		}
		else if(angle1!=angle2 && angle1 !=angle3)
		{
			return "Scalene triangle";
		}
		else
		{
			return "Isosceles triangle";
		}
	}
	else
	{
		return "Not triangle";

	}

}

void string_swap ( char * str1, char *str2 )
{
	int i,j=0,k,m,max ;
	char temp;
	for (i=0 ; str1[i]&&str2[j]; i++)
	{
		temp=str1[i];
		str1[i]=str2[j];
		str2[j]=temp;
		j++;
	}    }
	void string_reverse_word_by_size ( char *str ,int size)
	{   int i , j=size-1; ;
		char temp ;
		for ( i=0 ;i<size/2; i++)
		{
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;

			j--;
		}
	}
	void string_reverse_sentense_in_same_string(char *str)
	{

		int i=0,count =0 ;
		char temp ;
		string_reverse(str);
		for ( i=0 ; str[i] ; i++)
		{
			if (str[i]==' ')
			{
				string_reverse_word_by_size(&str[i-count] , count);
				count =0 ;

			}
			else
			{
				count ++;
			}
		}
	}
	int string_print_dependent_number (char *str)
	{
		int i,n,index,flag=0 ;
		int num1=0, num2=0  ;
		for (i=0  ;   flag!=3; i++)
		{
			if (str[i]==',' &&flag==0)
			{
				i++;
				for( ; str[i]!=',' ; i++)
				{
					n=str[i]-'0';
					num1=n+num1*10;
					flag=1;
				}
			}
			if (str[i]==',' && flag==1)
			{
				flag=2;
				i++;
				index=i;
			}
			if (str[i]==',' && flag==2)
			{
				i++;
				for( ; str[i] ; i++)
				{
					n=str[i]-'0';
					num2=n+num2*10;
					flag=3;
				}
			}
		}


		for (i=0 ; i<num1 ; i++)
		{
			string_print2(str);
		}
		for (i=0 ; i<num2 ; i++)
		{
			string_print2(&str[index]);
		}
	}

/**/