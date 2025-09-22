#include<bits/stdc++.h>

std::string md5(const std::string& str) {
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)str.c_str(), str.size(), (unsigned char*)&digest);

    std::ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++)
        oss << std::hex << std::setw(2) << std::setfill('0') << (int)digest[i];
    return oss.str();
}

int main() {
    std::string email = "9110175810@nomail.jiomart.com";
    std::cout << md5(email) << std::endl;
    return 0;
}
