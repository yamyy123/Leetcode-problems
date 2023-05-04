class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
   int score_1=0;
   int score_2=0;
    int flag=0;
    int count1=0,count2=0;
    for(int i=0;i<player1.size();i++)
    {
        if (flag==1)
        {
            count1++;
            score_1+=2*(player1[i]);
              if(player1[i]==10)
            {
                count1=0;
            }
            if(count1==2)
            {
                flag=0;
                count1=0;
                continue;
            }
        }
        if(flag==0)
        {
        score_1+=player1[i];
        }
        if(player1[i]==10)
        {
            flag=1;
        }
    }
    int flag1=0;
    for(int i=0;i<player2.size();i++)
    {
         if (flag1==1)
        {
            count2++;
            score_2+=2*(player2[i]);
            if(player2[i]==10)
            {
                count2=0;
            }
            if(count2==2)
            {
                flag1=0;
                count2=0;
                continue;
            }
            
        }
        if(flag1==0)
        {
        score_2+=player2[i];
        }
        if(player2[i]==10)
        {
            flag1=1;
        }
       
    }
    cout<<score_1<<endl<<score_2;
    if(score_1>score_2)
    {
        return 1;
    }
    if(score_2>score_1)
    {
        return 2;
    }
    if(score_2==score_1)
    {
        return 0;
    }
    return 0;
    }
};
