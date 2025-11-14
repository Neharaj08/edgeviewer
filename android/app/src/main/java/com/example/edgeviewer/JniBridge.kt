package com.example.edgeviewer

object JniBridge {
    init { System.loadLibrary("edgeviewer") }
    external fun processFrame(inputFrame: ByteArray, width: Int, height: Int, outputFrame: ByteArray)
}
