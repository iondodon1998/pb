/*
 * premii1
 * http://campion.edu.ro/arhiva/index.php?page=problem&action=view&id=714
*/
#include <fstream>
using namespace std;
ifstream fin("input.in");
ofstream fout("output.out");
long int N,nr_sums;
bool p[500000];

struct nodeL{
    long int val;
    nodeL *next;
}*a,*z;

void run(){
    long int new_val, k;
    nodeL *x,*new_node;

    a = new nodeL;

    fin >> new_val;
    a->val = new_val;
    a->next = nullptr;
    z = a;
    p[new_val] = true;
    nr_sums = 1;
    N--;

    while((N--) != 0){
        fin >> new_val;
        k = nr_sums;
        x = a;

        while((k--) != 0){
            if(!p[new_val + x->val]){
                new_node = new nodeL;
                new_node->val = new_val + x->val;
                new_node->next = nullptr;
                z->next = new_node;
                z = new_node;
                p[new_val + x->val] = true;
                nr_sums++;
            }
            x = x->next;
        }

        if(!p[new_val]){
            new_node = new nodeL;
            new_node->val = new_val;
            new_node->next = nullptr;
            z->next = new_node;
            z = new_node;
            p[new_val] = true;
            nr_sums++;
        }

    }
}

int main() {
    fin >> N;
    run();
    fout << nr_sums;
    return 0;
}