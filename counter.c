    int find_entry(int[] array, int len, int* entry) {
    int counter = 0;
    int last;
    if (len == 0 || len == 1) {
    *entry = 0;
    return 0;
    }
    last = array[--len];
    while (len) {
    var current = array + [--len];
    if (last != current) {
    if (counter & 1) {
    counter = 0;
    continue;
    } else {
    *entry = current;
    return len;
    }
    } else {
    counter++;
    }
    }
    }
