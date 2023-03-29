/**
 * cap_string - capitalizes all words of a string.
 * @str: string to capitalize
 *
 * Return: capitalized stirng
 */
char *cap_string(char *str)
{
        char sep[] = ",;.!?\"(){} \n\t";
        int i = 0;
        int j = 0;

        while (str[i])
        {
                j = 0;
                while (sep[j] != '\0')
                {
                        if (str[i - 1] == sep[j])
                        {
                                if (str[i] >= 'a' && str[i] <= 'z')
                                {
                                        str[i] -= 32;
                                }
                        }
                        j++;
                }
                i++;
        }
        return (str);
}
