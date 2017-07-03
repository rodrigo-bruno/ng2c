# OpenJDK 8 HotSpot with the new collector: N-Generatioal Garbage Collector (NG2C)

[Check our paper at ISMM'17](http://www.gsd.inesc-id.pt/~rbruno/publications/rbruno-ismm17.pdf)

In order to test NG2C you first need to download and prepare the OpenJDK JVM build. Instructions regarding how to download and build the OpenJDK can be found at: http://hg.openjdk.java.net/jdk8/jdk8/raw-file/tip/README-builds.html

Then you need to replace the HotSpot source with the one in this repository. For example:

    git clone https://github.com/paper-87/ng2c.git hotspot-ng2c
    mv /path-to-openjdk/jdk8/hotspot /path-to-openjdk/jdk8/hotspot-bak
    ln -s hotspot-ng2c /path-to-openjdk/jdk8/hotspot

Finally, build the OpenJDK JVM and the resulting JVM has NG2C incorporated. Remember that NG2C only works if G1 is enabled.

## Additional Results

### SPEC2008jvm pauses

Compress Benchmark:
![alt text](https://github.com/rodrigo-bruno/ng2c/blob/master/ng2c_resources/pauses-compress.png "")

Crypto Benchmark:
![alt text](https://github.com/rodrigo-bruno/ng2c/blob/master/ng2c_resources/pauses-crypto.png "")

Mpegaudio Benchmark:
![alt text](https://github.com/rodrigo-bruno/ng2c/blob/master/ng2c_resources/pauses-mpegaudio.png "")

Scimark Benchmark:
![alt text](https://github.com/rodrigo-bruno/ng2c/blob/master/ng2c_resources/pauses-scimark.png "")

XML Benchmark:
![alt text](https://github.com/rodrigo-bruno/ng2c/blob/master/ng2c_resources/pauses-xml.png "")
