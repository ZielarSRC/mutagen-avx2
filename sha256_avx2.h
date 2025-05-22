#ifndef SHA256_AVX512_H
#define SHA256_AVX512_H

#include <cstdint>

#ifdef __cplusplus
extern "C" {
#endif

// Przetwarza 16 bloków danych (każdy 64 bajty) równocześnie,
// wynik to 16 hashy po 32 bajty.
// data - tablica 16 wskaźników do bloków wejściowych
// out_hashes - tablica 16 wskaźników do 32-bajtowych buforów wyjściowych
void sha256_avx512_16blocks(const uint8_t* data[16], uint8_t* out_hashes[16]);

#ifdef __cplusplus
}
#endif

#endif // SHA256_AVX512_H
