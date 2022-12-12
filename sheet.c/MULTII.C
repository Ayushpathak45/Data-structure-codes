	#include<stdio.h>
	void main()
	
4.	{
5.	
6.	int a[10][10], b[10][10], m, n, i, j;
7.	      
8.	
9.	     printf("\nEnter number of rows & columns of aray : ");
10.	
11.	     scanf("%d %d", &m, &n);
12.	
13.	      
14.	
15.	     printf("\nEnter elements of 2-D array:\n");
16.	     for(i=0; i<m; i++)
17.	
18.	     {
19.	
20.	              for(j=0; j<n; j++)
21.	
22.	              {
23.	
24.	                       scanf("%d", &a[i][j]);
25.	
26.	              }
27.	
28.	     }
29.	     printf("\n\n2-D array before transposing:\n\n");
30.	
31.	     for(i=0; i<m; i++)
32.	
33.	     {
34.	
35.	              for(j=0; j<n; j++)
36.	
37.	              {
38.	
39.	                       printf("\t%d", a[i][j]);
40.	
41.	              }
42.	
43.	              printf("\n\n");
44.	
45.	     }
46.	     /* Transposing array */
47.	
48.	     for(i=0; i<m; i++)
49.	
50.	     {
51.	
52.	              for(j=0; j<n; j++)
53.	
54.	              {
55.	
56.	                       b[j][i] = a[i][j];
57.	
58.	              }
59.	
60.	     }
61.	     printf("\n\n2-D array after transposing:\n\n");
62.	
63.	     for(i=0; i<n; i++)
64.	
65.	     {
66.	
67.	              for(j=0; j<m; j++)
68.	
69.	              {
70.	
71.	                       printf("\t%d", b[i][j]);
72.	              }
73.	
74.	              printf("\n\n");
75.	
76.	     }
77.	
78.	     getch();
79.	}
