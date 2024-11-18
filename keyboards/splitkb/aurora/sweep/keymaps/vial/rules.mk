VIA_ENABLE = yes
VIAL_ENABLE = yes
LTO_ENABLE = yes
QMK_SETTINGS = no
SRC += features/achordion.c
SRC += features/caps_word.c

# Disable QMK core's Caps Word implementation.
CAPS_WORD_ENABLE = no
# RGBLIGHT_ENABLE = yes # Enables QMK's RGB code
# WS2812_DRIVER = vendor # Use the RP2040's PIO interface

