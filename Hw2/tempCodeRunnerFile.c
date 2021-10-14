 while(str[q] != '\n') { /// if str = new line --> I collected the first two value.
       if(str[q] == ' '){
           m_n[q] = str[q];
       }
       q++;
    }
    m_n[q] = '\0';
    printf("%s \n", m_n);
