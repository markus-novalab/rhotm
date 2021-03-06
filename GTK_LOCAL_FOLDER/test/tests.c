#include "tests.h"


bool test_mask(){
    char input[SIZE_STR] = {"myfile.doc.txt"};
    char masks[SIZE_COUNT][SIZE_STR] = {"*.txt", "*.doc", "m*ile.doc.txt", "my*e.doc",
                                        "m?file.doc.txt", "myfile?doc", "??????????.*", "???.*", "*.???", "???*.*", "???????????*.*", "myf?*.txt",
                                        "myfile.d???*.txt", "myfile.doc*?.txt", "myfile.do*?.txt"};
    bool results[SIZE_COUNT] = {true, false, true, false, true, false, true, false, true, true, false, true, false, false, true};
    bool result = true;
    bool rez_mask;
    for(int i = 0; i < SIZE_COUNT; i++) {
        rez_mask = mask_func(input, masks[i]);
        if(rez_mask != results[i]){
            result = false;
            fprintf(stderr, "Error in function mask,\n"
                            "in %d it expected %s, but have %s\n"
                            "string: %s, mask: %s\n\n",
                    i+1, results[i] ? "true":"false", rez_mask ? "true":"false",
                    input, masks[i]);
        }

    }
    return result;
}
