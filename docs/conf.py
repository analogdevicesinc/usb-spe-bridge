from os import path

# -- Project information -----------------------------------------------------
repository = 'usb-spe-bridge'
project = 'MAX32690 Single Pair Ethernet/USB Bridge'
copyright = '2026, Analog Devices, Inc.'
author = 'Analog Devices, Inc.'

locale_dirs = ['locales/']  # path is relative to the source directory
language = 'en'

# -- General configuration ---------------------------------------------------
extensions = [
    'adi_doctools',
]

exclude_patterns = []
source_suffix = '.rst'

# -- Options for HTML output --------------------------------------------------
html_theme = 'harmonic'
html_theme_options = {}
