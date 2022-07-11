/*Find common elements in three sorted arrays,
 3 array values are given as input to program.*/

int main()
{
    int ar1[] = { 4, 5, 100, 20, 40, 80 };
    int ar2[] = { 6, 4, 20, 80, 100 };             // Taken the three shorted array
    int ar3[] = { 3, 4, 15, 20, 30, 70, 80, 100};
    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int n3 = sizeof(ar3) / sizeof(ar3[0]);     // size of the array
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3) {
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {   // checking the is common element or not
            printf("%d ", ar1[i]);
            i++;
            j++;
            k++;
        }
        else if (ar1[i] < ar2[j])
            i++;
        else if (ar2[j] < ar3[k])
            j++;
        else
            k++;
    }


    printf("Common Elements are ");
    //findCommon(ar1, ar2, ar3, n1, n2, n3);
    return 0;
}
