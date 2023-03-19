void exchange(const char *pIn, char *pOut)  
{
    if
         ( pIn == NULL )  
        {
               return;
              
        }
       unsigned int i = 0;
      // 单词的第i位字符。   
        unsigned int t = 0;
      // 遍历整个pIn。   
        int fA = -1;
      // A单词出现的位置。   
        int fN = -1;
      // N单词出现的位置。   
        char tWord[255];
       vector<string> vStr;
       while ( pIn[t] != '\0' )  
    {
           pOut[t] = pIn[t];
           if  ( pIn[t] == ' ' && i == 0 )  
        {
               t++;
               continue;
              
        }
           if  ( pIn[t] == ' ' && i != 0 )  
        {
               if  ( tWord[0] == 'A' && fA == -1)  
            {
                   fA = vStr.size();
                  
            }
               if  ( tWord[i - 1] == 'N' && fN == -1 )  
            {
                   fN = vStr.size();
                  
            }
               tWord[i] = '\0';
               vStr.push_back(string(tWord) );
               i = 0;
               continue;
              
        }
           tWord[i] = pIn[t];
           i++;
           t++;
          
    }
       if  ( i != 0 )  
    {
           if  ( tWord[0] == 'A' && fA == -1)  
        {
               fA = vStr.size();
              
        }
           if  ( tWord[i - 1] == 'N' && fN == -1 )  
        {
               fN = vStr.size();
              
        }
           tWord[i] = '\0';
           vStr.push_back(string(tWord) );
           i = 0;
          
    }
       pOut[t] = '\0';
       if  ( fA != -1 && fN != -1 )  
    {
           string tStr = vStr[fA];
           vStr[fA] = vStr[fN];
           vStr[fN] = tStr;
           t = 0;
           int k = 0;  
for ( i=0; i<vStr.size()-1; ++i )  
        {  
for ( k=0; k!=vStr[i].length(); ++k )  
            {
                   pOut[t] = vStr[i][k];
                   t++;
                  
            }
               pOut[t] = ' ';
               t++;
              
        }
           tStr = vStr.back();  
for ( k=0; k!=tStr.length(); ++k )  
        {
               pOut[t] = tStr[k];
               t++;
              
        }
           pOut[t] = '\0';
          
    }
      
}
   int main()  
{
      
        /*1*/   char pIn[] = "teqwerasd341";
       char pOut[1000];
       converse(pIn, pOut);
       cout << pOut << endl;
    /*2*/  
        /************ 
        2 2 4 6 10 16... 
        *************/   cout 
        << rabbits(3) << endl;
       cout << rabbits(6) << endl;
      
        /*3*/   char pInput[] = "AM I OLDER THAN YOU";
       char pOutput[255];
       exchange(pInput, pOutput);
       cout << pOutput << endl;
       return 0;
      
}
  