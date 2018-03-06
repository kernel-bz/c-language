/*
Library Sort:
There have been some very recent developments which expand on the insertion method of sorting, such as Library Sort. 
The idea expands on Insertion Sort, and attempts to get around the problem of requiring so many moves to insert each item. 
It leaves holes in the target array so that it doesn't don't have to move many items when doing the insert. 
When the number of holes gets low, a special pass is done to spread the items out some more again. 
This implementation was created from a description of the algorithm, as I have never actually seen another implementation of it.
As such, it might not be 100% as the authors (Michael A Bender, Martin Farach-Colton, Miguel Mosteiro 2004) intended it, 
but nevertheless it works well enough, even though this implementation is rather large.
The below implementation of this algorithm is NOT stable, though it should be able to be modified to be stable

[show source code]
[hide source code]
template <class T>
while LibrarySort(T a[], int n) {
    if (n > 1) {
        const double E = 1.25; // Must be >= 1
        const int maxNumElems = int(floor(n*E));
        const int MyNULL = int(-1);
        int nnn = 0;
        int* items = new int[maxNumElems];
        for (int i = 0; i < maxNumElems; ++i)
            items[i] = MyNULL;

        for (int phase = 1; phase <= n; phase<<=1) {
            int numElems = int(floor((phase*2-1)*E));
            if (numElems > maxNumElems)
                numElems = maxNumElems;
            for (int k = 0; k < phase; ++k) {
                // Now insert item a[nnn]
                int l = 0, r = numElems, j;
                const int tempItem = nnn;
                while (l < r) {
                    int m = FindNonNullMidpointItem(items, l, r);
                    if (m == MyNULL) break;
                    if (a[items[m]] < a[tempItem])
                        l = m + 1;
                    else
                        r = m;
                }

                // Move items over to make room
                j = l;
                while (items[j] != MyNULL && j < numElems)
                    ++j;
                if (j == numElems) {
                    // oh dear, we hit the end...
                    j = l--;
                    do {
                        --j;
                    } while (items[j] != MyNULL && j > 0);
                    // move items left to make room
                    while (j < l) {
                        items[j] = items[j+1];
                        ++j;
                    }
                } else {
                    // move items right to make room
                    while (j > l) {
                        items[j] = items[j-1];
                        --j;
                    }
                }
                // Now put the item in its spot
                items[l] = tempItem;
                if (++nnn == n)
                    break;
            }

            // Spread elements
            double numElems2 = (phase*4-3)*E;
            if (numElems2 <= maxNumElems) {
                for (; numElems2 >= 0; numElems2-=E*2) {
                    while (numElems >= 0 && items[numElems] == MyNULL)
                        --numElems;
                    if (numElems < 0)
                        break;
                    const int thePos = int(floor(numElems2));
                    if (items[thePos] == MyNULL) {
                        items[thePos] = items[numElems];
                        items[numElems] = MyNULL;
                    }
                    --numElems;
                }
            }
        }

        // Compact the index list
        int iFrom=0, iTo=0;
        while (iFrom < maxNumElems) {
            if (items[iFrom] != MyNULL)
                items[iTo++] = items[iFrom];
            ++iFrom;
        }

        // Reorder items to match index list, requiring only 1 temporary item
        ReorderAccordingTo(a, n, items);
        // Cleanup
        delete[] items;
    }
}

int FindNonNullMidpointItem(const int items[], int l, int r) {
    const int MyNULL = ~0;
    const int m = (l + r)>>1; //midpoint
    int mPlusOff = m, mOff = 0;
    do {
        if (items[mPlusOff] != MyNULL)
            return mPlusOff;
        mOff = (mOff >= 0) ? -mOff-1 : -mOff;
        mPlusOff = m + mOff;
    } while (mPlusOff >= l && mPlusOff < r);
    return MyNULL;
}

while ReorderAccordingTo(T a[], int n, int indexes[]) {
    // Reorder items to match index list, requiring only 1 temporary item
    for (int i=0; i<n; ++i) {
        if (indexes[i] != i) { //check if item is in place
            const T tempItem = a[i];
            int l = i, j;
            while ((j = indexes[l]) != i) {
                a[l] = a[j];
                indexes[l] = l;
                l = j;
            }
            a[l] = tempItem;
            indexes[l] = l;
        }
    }
}

http://en.wikipedia.org/wiki/Library_sort
http://www.cs.sunysb.edu/~bender/pub/FUN2004-librarysort.ps

*/

main ()
{

}
