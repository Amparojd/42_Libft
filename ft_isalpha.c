

int ft_is_alpha(int c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' &&  c <= 'Z'))
        return(1);
    else
        return(0);
}

/*int main(void)
{
    printf("%d", ft_is_alpha('y'));
}*/