#include "main.h"

/**
  * cap_string - Makes all words capital
  * @let: String
  * Return: changed string
  */

char *cap_string(char *let)
{
	int k = 0;

	while (let[k])
	{
	while (!(let[k] >= 'a' && let[k] <= 'z'))
	k++;
	if (let[k - 1] == ' ' ||
	let[k - 1] == '\t' ||
	let[k - 1] == '\n' ||
	let[k - 1] == ',' ||
	let[k - 1] == ';' ||
	let[k - 1] == '.' ||
	let[k - 1] == '!' ||
	let[k - 1] == '?' ||
	let[k - 1] == '"' ||
	let[k - 1] == '(' ||
	let[k - 1] == ')' ||
	let[k - 1] == '{' ||
	let[k - 1] == '}' ||
	k == 0)
		let[k] -= 32;

	k++;
	}
	return (let);
}
