1./***scanf() stops reading input the moment it encounters space i.e     
     I/p: cats rats it just stops at cats, instead use fgets() 
     char *fgets(char *str, int n, FILE *stream)        **********/

2./*** fgets() inserts a '\n' character at the end of line, 
       symbolizing end of input so a string input would read as below
       "Jaya\n\0"					**********/
