package com.example.edgeviewer

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView

class MainActivity : AppCompatActivity() {
    external fun stringFromJNI(): String

    companion object {
        init { System.loadLibrary("edgeviewer") }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        findViewById<TextView>(R.id.sample_text).text = stringFromJNI()
    }
}
