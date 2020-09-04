#include "uls.h"

void mx_cleaner(t_flags *flags, t_lattrib **lattrib) {
    if (flags->all_obj) {
        mx_strdel(&flags->all_obj[999]);
        mx_del_strarr(&flags->all_obj);
    }
    if (lattrib) {
        for (int i = 0; i < flags->num_dir_file; i++) {
            mx_strdel(&lattrib[i]->rights);
            mx_strdel(&lattrib[i]->user);
            mx_strdel(&lattrib[i]->time);
            mx_strdel(&lattrib[i]->name);
            if (lattrib[i]->size_str)
                mx_strdel(&lattrib[i]->size_str);
            if (lattrib[i]->size_with_type)
                mx_strdel(&lattrib[i]->size_with_type);
            free(lattrib[i]);
        }
        free(lattrib);
    }
}