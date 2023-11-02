project('scan-build-bug-demo', 'c')

# Meson only generates a scan-build target for ninja.
ninja = find_program('ninja', required: true)
scan_build = find_program('scan-build', required: true)

example_inc = include_directories('example-include')

subdir('example-lib')
subdir('example-bin')
