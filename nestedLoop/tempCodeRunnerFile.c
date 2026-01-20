for(int i = 0; i < n; i++){

        for(int j = s; j > 0; j--){
            printf(" ");
        }

        for(int j = 0; j < k; j++){
            printf("*");
        }

        printf("\n");

        s--;
        k = k + 2;

    }