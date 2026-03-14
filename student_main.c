#include <stdio.h>

int main() {
    int n1, n2, i, j, k;
    int set1[100], set2[100];
    int intersection[100];
    int count = 0;

    // Read Set 1
    if (scanf("%d", &n1) != 1) return 0;
    for(i = 0; i < n1; i++) {
        scanf("%d", &set1[i]);
    }

    // Read Set 2
    if (scanf("%d", &n2) != 1) return 0;
    for(i = 0; i < n2; i++) {
        scanf("%d", &set2[i]);
    }

    for (i = 0; i < n1; i++) {
        int isDuplicate = 0;
        for (k = 0; k < count; k++) {
            if (set1[i] == intersection[k]) {
                isDuplicate = 1;
                break;

            }
        }
         if (!isDuplicate) {
            for (j = 0; j < n2; j++) {
                if (set1[i] == set2[j]) {
                    intersection[count] = set1[i]; 
                    count++;                      
                    break;                        
                }
            }
        }
    }
    
    for(i = 0; i < count; i++) {
        printf("%d", intersection[i]);
        if (i < count - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
