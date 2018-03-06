
//  Âü°í: http://homepages.ihug.co.nz/~aurora76/Malc/Sorting_Array.htm

/*
void DualInsertionSort(int a[], int n) 
{
    int p = 0, q = n-1;
    while (p < q) {
        if (p < n-1-q) {
            //balance high and low sorted portions
            if ((q < n-1) && (a[q] < a[p])) {
                Swap(a[p + 1], a[q]);
                ++q;
            }
            //insert into low end
            if (a[p + 1] < a[p]) {
                int j = p;
                const T tempItem = a[p + 1];
                do {
                    a[j + 1] = a[j];
                    --j;
                } while ((j >= 0) && (tempItem < a[j]));
                a[j + 1] = tempItem;
            }
            ++p;
        } else {
            //balance high and low sorted portions
            if ((p > 0) && (a[q] < a[p])) {
                Swap(a[p], a[q - 1]);
                --p;
            }
            //insert into high end
            if (a[q] < a[q - 1]) {
                int j = q;
                const T tempItem = a[q - 1];
                do {
                    a[j - 1] = a[j];
                    ++j;
                } while ((j < n) && (a[j] < tempItem));
                a[j - 1] = tempItem;
            }
            --q;
        } //if
    } //while
}


void BinaryInsertionSort(int a[], int n) 
{
    for (int i = 1; i < n; ++i) {
        int l = 0, r = i, j = i-1;
        const T tempItem = a[i];
        while (l < r) {
            const int m = (l + r)>>1; //midpoint
            if (tempItem < a[m])
                r = m;
            else
                l = m + 1;
        }
        //move items over to make room
        while (j >= l) {
            a[j + 1] = a[j];
            --j;
        }
        //copy item into position
        a[l] = tempItem;
    }
}


void InterpInsertionSort(int a[], int n) 
{
    for (int i = 1; i < n; ++i) {
        int l = 0, r = i-1, j = r, m;
        const T tempItem = a[i];
        while (l <= r) {
            const int range = int(a[r] - a[l]);
            if (range > 0) {
                m = int(l + ((tempItem-a[l])*(r-l))/range); //interpolation point
                //make sure m is in range [l .. r]
                if (m < l)
                    m = l;
                else if (m > r)
                    m = r;
            } else
                m = l;
            if (tempItem < a[m])
                r = m - 1;
            else
                l = m + 1;
        }
        //move items over to make room
        while (j >= l) {
            a[j + 1] = a[j];
            --j;
        }
        //copy item into position
        a[l] = tempItem;
    }
}
*/
