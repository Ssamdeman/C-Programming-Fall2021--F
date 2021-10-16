  int tempHolder;
    for (tempHolder = 0; tempHolder < n + m - 1; tempHolder++) {
        printf("%d,", *(ptthree + tempHolder));
    }
    if (tempHolder != 0) {
        printf("%d", *(ptthree + tempHolder));
    }