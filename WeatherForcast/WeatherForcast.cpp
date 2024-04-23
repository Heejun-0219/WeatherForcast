#include <iostream>
#include <mysql.h>

#pragma comment(lib, "libmysql.lib")

int main()
{
    MYSQL* conn;

    conn = mysql_init(0);
    std::cout << "Hello World!\n";
}
