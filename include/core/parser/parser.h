#ifndef PARSER_H
#define PARSER_H

#include "core/tokenizer/tokenizer.h"
#include "libft/libft.h"

typedef struct s_redirection
{
	t_token_type type;
	char        *file_name;
} t_redirection;

typedef struct s_command
{
	t_list *redir; // TODO rename to redirs
	char   *cmd;
	char  **args;
} t_command;

typedef struct s_pipeline
{
	t_list *commands;
	int     num_commands;
} t_pipeline;

t_command *parse_token(const t_token *token);
bool       process_token(t_command *command, const t_token *token);

#endif // PARSER_H