#include "minishell.h"

int main(int argc, char **argv, char **envp)
{
	t_sh sh;

	printf("Hello, World!\n");

		/*
			В парсере
			получаем массив токенов (можно как связанный список, лист и тд)
			 проверяем на валидность токены и строку
			 ставим флаг того, в какую функцию в екзекуторе отправить токены
		 */
	parser(&sh);

		/*
		 * в екзекуторе обрабатываются токены
		 * или вызывается системный бинарник (ls)
		 * или наша функция pdw, unset....
		 */
	executor(&sh);

	return (0);
}
