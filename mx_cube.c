void mx_printchar(char c);
void mx_first_line(int n);
void mx_middle_top_line(int n);
void mx_middle_bottom_line(int n);
void mx_bottom_line(int n);

void mx_cube(int n) {
    if (n > 1) {
        mx_first_line(n);
        mx_middle_top_line(n);
        mx_middle_bottom_line(n);
        mx_bottom_line(n);
    }
}

void mx_first_line(int n) {
    for (int i = 0; i < (n / 2) + 1; i++) {
        mx_printchar(' ');
    }
    mx_printchar('+');
    for (int i = 0; i < n * 2; i++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');
}

void mx_middle_top_line(int n) {
    for (int j = 0; j < n / 2; j++){
        for (int i = 0; i < n / 2 - j; i++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        for (int i = 0; i < n * 2; i++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        for (int i = 0; i < j; i++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        mx_printchar('\n');
    }
    mx_printchar('+');
    for (int i = 0; i < n * 2; i++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    for (int i = 0; i < n / 2; i++) {
        mx_printchar(' ');
    }
    mx_printchar('|');
    mx_printchar('\n');

}

void mx_middle_bottom_line(int n) {
    for (int i = 0; i < n - n / 2; i++) {
        mx_printchar('|');
        for (int i = 0; i < n * 2; i++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        for (int i = 0; i < n / 2; i++) {
            mx_printchar(' ');
        }
        if (i == n - n / 2 - 1) {
            mx_printchar('+');
        }
        else {
            mx_printchar('|');
        }
        mx_printchar('\n');
    }
    for (int j = 0; j < n / 2; j++) {
        mx_printchar('|');
        for (int i = 0; i < n * 2; i++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        for (int i = 0; i < n / 2 - j - 1; i++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        mx_printchar('\n');
    }
}

void mx_bottom_line(int n) {
    mx_printchar('+');
    for (int i = 0; i < n * 2; i++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');
}