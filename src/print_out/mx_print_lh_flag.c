#include "uls.h"

void mx_print_lh_flag(t_lattrib **lattrib, t_flags *flags) {
    mx_size_align_right(lattrib, flags);
    for (int j = 0; j < flags->count_obj; j++) {
        mx_printchar(lattrib[j]->ftype);
        mx_printstr(lattrib[j]->rights);
        mx_printchar(' ');
        mx_printint(lattrib[j]->links);
        mx_printchar(' ');
        mx_printstr(lattrib[j]->user);
        mx_printstr("  ");
        mx_printint(lattrib[j]->group);
        mx_printstr("  ");
        mx_printstr(lattrib[j]->size_with_type);
        mx_printchar(' ');
        mx_printstr(lattrib[j]->time);
        mx_printchar(' ');
        mx_printstr(lattrib[j]->name);
        mx_printchar('\n');
    }
    mx_cleaner(flags, lattrib); // delete struct
}
