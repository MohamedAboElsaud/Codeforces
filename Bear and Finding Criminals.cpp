

   ╔═══════════╗            ╔════╗            ╔═══════════╗    ╔═══════════╗    ╔══════════╗       
   ║███████████║            ║████║            ║███████████║    ║███████████║    ║██████████║       
   ║██╔════════╝           ║██║║██║           ║██╔════════╝    ║██╔════════╝    ║██══════╗██║      
   ║██║                   ║██║╔╗║██║          ║██║             ║██║             ║██       ║██║     
   ║██╚════════╗         ║██║╔╚╝╗║██║         ║██╚════════╗    ║██╚════════╗    ║██        ║██║    
   ║███████████║        ║██║ ╚══╝ ║██║        ║███████████║    ║███████████║    ║██         ║██║   
   ╚════════╗██║       ║██║██║██║██║██║       ║██╔════════╝    ║██╔════════╝    ║██        ║██║    
            ║██║      ║██║ ╔═╔══╗═╗ ║██║      ║██║             ║██║             ║██       ║██║     
   ╔════════╝██║     ║██║ ╔╚╔╚══╝╗╝╗ ║██║     ║██╚════════╗    ║██╚════════╗    ║██══════╝██║      
   ║███████████║    ║██║ ╔╚╔╚════╝╗╝╗ ║██║    ║███████████║    ║███████████║    ║██████████║       
   ╚═══════════╝    ╚══╝ ╚═╚══════╝═╝ ╚══╝    ╚═══════════╝    ╚═══════════╝    ╚══════════╝       
                                                                                                   
                                                                                                   
                                  ╔════════╗  ╔════════════╗                                       
                         ║██║     ║████████║  ║████████████║     ║██║                              
    ║█║ ║█║            ║██║       ╚══║██║══╝  ╚════║██║════╝       ║██║            ║█║ ║█║         
   ║█ ║█║ █║         ║██║            ║██║          ║██║              ║██║         ║█ ║█║ █║        
    ║█   █║        ║██║              ║██║          ║██║                ║██║        ║█   █║         
     ║█║█║           ║██║            ║██║          ║██║              ║██║           ║█║█║          
      ║█║              ║██║       ╔══║██║══╗       ║██║            ║██║              ║█║           
                         ║██║     ║████████║      ╔║██║╗         ║██║                              
                                  ╚════════╝      ╚════╝                                           



#include iostream
#include cmath
#include algorithm
#include iomanip
#include string
#include stack
#include vector
#include queue
#include deque
#include set
#include map
#include iomanip
#include fstream
#define _CRT_SECURE_NO_DEPRECATE
#include stdio.h
#define _CRT_SECURE_NO_WARNINGS
#include stdio.h
#define ll long long int
#define ld long double


using namespace std;
void fast() {
    iossync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}



int main()
{
    fast();
    ll n, i, a, j, res = 0, x = 1, y; cin  n  a;
    vectorll v(n + 1, 0);

    for (i = 1; i = n; i++)
        cin  v[i], res += v[i];
    while (x+a = n &&xa){
        if ((v[a - x] + v[a + x]) == 1) {
            res--;
        }x++;
}  
    cout  res;
}
