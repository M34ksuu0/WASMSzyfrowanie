
#include <cstring>
#include <cstdint>

extern "C" {

    void szyfruj(
        const unsigned char* input,
        unsigned char* output,
        int dlugosc,
        const char* klucz
    ) {
        for (int i = 0; i < dlugosc; i++) {
            output[i] = input[i] ^
                static_cast<unsigned char>(klucz[i % 32]);
        }
    }

}
