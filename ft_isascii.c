int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
        return(1);
    else
        return(0);
}

/*int main(void)
{
    printf("%d", ft_isascii('â'));
    printf("\n%d", ft_isascii('a'));
}*/