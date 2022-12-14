#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates the index marking the end of the
 * first word contained within a string
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */

int word_len(char *str)
{
int i = 0, len = 0;

while (*(str + 1) && *(str + 1) != ' ')
{
len++;
i++;
}
return (len);
}

/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */

int count_words(char *str)
{
int i = 0, words = 0, len = 0;

for (i = 0; *(str + 1); i++)
	len++;

for (i = 0; i < len; i++)
{
if (*(str + 1) != ' ')
{
words++;
i += word_len(str + i);
}
}
return (words);
}

/**
 * strtow - Write a function that splits a string into words.
 * @str: The string to be split
 *
 * Return: Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */

char **strtow(char *str)
{
char **strings;
int i = 0, words, w, letters, l;

if (str == NULL || str[0] == '\0')
	return (NULL);

words = count_words(str);
if (words == 0)
	return (NULL);

strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

for (w = 0; w < words; w++)
{
while (str[i] == ' ')
	i++;

letters = word_len(str + i);

strings[w] = malloc(sizeof(char) * (letters + 1));

if (strings[w] == NULL)
{
for (; w >= 0; w--)

	free(strings);
return (NULL);
}
for (l = 0; l < letters; l++)
strings[w][l] = str[i++];

strings[w][l] = '\0';
}
strings[w] = NULL;

return (strings);
}
