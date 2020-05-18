/*This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*/

#include "Conveyer.h"

int main() {
    vector<int> one{15,10, 9};
    vector<int> two{9,11, 14};
    auto Dx = new Conveyer;
    Dx->calculate(one, two);
}
