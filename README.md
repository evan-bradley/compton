# Compton

This is a fork of Compton that porivdes DBus bindings for zooming capabilities,
which are intended to be called [here](https://github.com/evan-bradley/thesis).  

Compile and install:
```
make
sudo make install
```

You will likely want to copy `compton.scaling.conf` to `~/.config/compton.conf`
for reasonable defaults. Note that the OpenGL backend does not work with
scaling.
