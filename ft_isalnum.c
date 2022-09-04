int ft_isasnum(int c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <=tou 'Z') || (c >= 0 && c <= 9))
    {
        return(1);
    }
    else
    {
        return(0);
    }
}