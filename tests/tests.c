/*
** EPITECH PROJECT, 2021
** Workshop
** File description:
** tests
*/

#include <criterion/criterion.h>

#include "tek.h"

Test(FUNCTIONAL_TEST, aaaaaaaaa)
{
    cr_assert_str_not_empty(get_sentence(0));
}
