int ft_recursive_factorial(int nb)
{
    if (nb > 0)
        nb *= ft_recursive_factorial(nb - 1);
    else if (!nb)
        return (1);
    else
        return (0);
    return (nb);
}
