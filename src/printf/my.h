/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_
#include <stdarg.h>

typedef struct s_data t_data;
struct s_data {
    int size;
    int params;
    int matches;
    int Lines;
    int save;
    char *buffer;
    char *buffer2;
    int *tab;
    int save_2;
    int *space;
};

//  EVAL_EXPR.C
int eval_expr(char const *str);

//  CALCUL.C
char infin_basic_ope(char const *str, char *result, int i, int a);
char infin_ope(char const *str, char *result, int i, int a);

//  PARENTHESES.C
int manage_parentheses(char *str, char *stk, int i);

//  MANAGES_ERRORS.C
int manage_ope(char const *str, int i);
int manage_errors(char const *str);

// DO_OP.C
int do_op(char *nb1, char *nb2, char *signe);
int value_k(char *expr);
char *find_nb1(char * expr, int k);
char *find_nb2(char * expr, int k);
char *find_signe(char * expr, int k);

// INFIN_ADD.C
char *infin_add(char *nb1, char *nb2);

// OTHER FUNCTIONS
int my_strlen(char const *str);
int my_put_nbr(int nbr);
void my_putchar(char c);
int my_getnbr(char *str);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_put_nbr2(unsigned int nbr);

//octal
int my_put_octal(unsigned nbr);
int my_put_hexa(unsigned nbr);
int my_put_space(int i, char const *format);
int my_flag(int i, va_list paramsinfos, char const * format, ...);
int my_printf(char const * format, ...);
int my_printf2(int *i, va_list paramsinfos, char const * format, ...);
int my_put_hexa_min(unsigned nbr);
int my_put_binary(unsigned int nbr);
void info_file(char *filepath);

//Programs
int error_management(t_data *cordonnee);
int interaction2(t_data *cordonnee);
int interaction(t_data *cordonnee);
int game_loop(t_data *cordonnee);
int *print_game_board(t_data *cordonnee);
void init_var(t_data *cordonnee);
int verify_error(t_data *cordonnee);
int error_management2(t_data *cordonnee);
void fill(t_data *cordonnee);
int check_map(t_data *cordonnee);
int manage_stick(t_data *cordonnee);
void end_game(t_data *cordonnee);
int print_move_p(t_data *cordonnee);
int move_ia(t_data *cordonnee);

#endif