int ft_isalnum(int c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
    || (c >= '0' && c <= '9'))
        return(1);
    else
        return(0);
}

/*int main(void)
{
    printf("%d", ft_isalnum('e'));
    printf("\n%d", ft_isalnum('2'));
    printf("\n%d", ft_isalnum(','));
}*/