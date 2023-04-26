#include <stdio.h>
#include <stdint-gcc.h>

int main() {
    uint8_t *ptr8; // Pointer to 8-bit values
    uint16_t *ptr16; // Pointer to 16-bit values
    uint32_t *ptr32; // Pointer to 32-bit values
    uint64_t value = 0xDEADBEEFCAFEBEEF; // 64-bit value to reconstruct

    // Print the original 64-bit value
    printf("Original value: 0x%llx\n", value);

    // Reconstruct the value using pointers to 8-bit values
    ptr8 = (uint8_t *)&value;
    uint64_t reconstructed_value = ((uint64_t)ptr8[7] << 56) |
                                   ((uint64_t)ptr8[6] << 48) |
                                   ((uint64_t)ptr8[5] << 40) |
                                   ((uint64_t)ptr8[4] << 32) |
                                   ((uint64_t)ptr8[3] << 24) |
                                   ((uint64_t)ptr8[2] << 16) |
                                   ((uint64_t)ptr8[1] << 8) |
                                   ((uint64_t)ptr8[0]);

    // Print the reconstructed value using pointers to 8-bit values
    printf("Reconstructed value using 8-bit pointers: 0x%llx\n", reconstructed_value);

    // Reconstruct the value using pointers to 16-bit values
    ptr16 = (uint16_t *)&value;
    reconstructed_value = ((uint64_t)ptr16[3] << 48) |
                          ((uint64_t)ptr16[2] << 32) |
                          ((uint64_t)ptr16[1] << 16) |
                          ((uint64_t)ptr16[0]);

    // Print the reconstructed value using pointers to 16-bit values
    printf("Reconstructed value using 16-bit pointers: 0x%llx\n", reconstructed_value);

    // Reconstruct the value using pointers to 32-bit values
    ptr32 = (uint32_t *)&value;
    reconstructed_value = ((uint64_t)ptr32[1] << 32) |
                          ((uint64_t)ptr32[0]);

    // Print the reconstructed value using pointers to 32-bit values
    printf("Reconstructed value using 32-bit pointers: 0x%llx\n", reconstructed_value);

    return 0;
}
