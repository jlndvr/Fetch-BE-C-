#include <iostream>
#include "utility"

#include "crow.h"
#include "cpp_redis/core/client.hpp"

using namespace std;

int main(){
crow::SimpleApp app;

CROW_ROUTE(add,"/")([](){
    
});
CROW_ROUTE(spend,"/")([](){
    
});
CROW_ROUTE(balance,"/")([](){
    
});

app.port(8000).run();
    return 0;
}
