# 🚀 EdgeViewer – Android + Web Frame Processing Pipeline

An end-to-end real-time frame capture and visualization system built using:

- Android (Kotlin + CameraX)
- JNI Bridge
- C++ / NDK
- OpenCV (processing stub)
- OpenGL (rendering stub)
- Web-based TypeScript viewer

This project demonstrates a clean cross-platform architecture for capturing frames on Android, processing them in native code, and exposing output to a Web-based viewer.

---

## 📌 Features Implemented

✅ **Android Application**
- CameraX preview pipeline
- JNI bridge for native processing
- C++ stub for OpenCV-based frame operations
- OpenGL rendering module placeholder
- Works on devices + emulators
- Native library loading (CMake)

✅ **Native C++ (NDK)**
- JNI interface for string + frame processing
- OpenCV processing stub (`processFrame()` placeholder)
- CMake integration
- Future-ready for performance optimization

✅ **Web Viewer**
- TypeScript-based viewer
- Clean folder structure
- Receives processed frames (stub)
- Modular design for further expansion

---

## 📂 Project Structure

edgeviewer_company_ready/
│
├── android/ # Full Android Studio module
│ ├── app/
│ ├── src/main/java
│ ├── src/main/cpp # C++ native code
│ ├── CMakeLists.txt
│ └── build.gradle
│
├── web/ # Web-based viewer
│ ├── src/
│ ├── index.html
│ └── package.json
│
└── README.md

yaml
Copy code

---

## 🧠 Architecture Overview

┌──────────┐
│ CameraX │ (Android)
└────┬─────┘
│ Frames
▼
┌──────────┐
│ JNI │ (Kotlin → C++)
└────┬─────┘
│ Native call
▼
┌──────────┐
│ C++ NDK │
│ OpenCV │ (Processing Stub)
└────┬─────┘
│ Texture / Bytes
▼
┌──────────┐
│ OpenGL │ (Rendering Stub)
└────┬─────┘
│ WebSocket / API (future-ready)
▼
┌──────────┐
│ Web UI │ (TypeScript)
└──────────┘

yaml
Copy code

This structure is **clean, scalable, and interview-ready**.

---

## 🛠 Setup Instructions

### Android Setup
1️⃣ Install NDK  
Android Studio → SDK Manager → SDK Tools → NDK + CMake  

2️⃣ Sync Project  
Android Studio automatically configures external native build.  

3️⃣ Build the Project  
Build → Make Project  

4️⃣ Run  
Select Virtual Device or Physical Device → Run  

---

### Native C++ Setup
Native files are inside:

android/app/src/main/cpp/

go
Copy code

Includes: `native-lib.cpp`, `opencv_stubs.cpp`, `renderer_stub.cpp`, `CMakeLists.txt`  

Build is automatic through:

```gradle
externalNativeBuild {
    cmake { path "src/main/cpp/CMakeLists.txt" }
}
🌐 Web Viewer Setup
1️⃣ Install dependencies

bash
Copy code
cd web
npm install
2️⃣ Run Viewer

bash
Copy code
npm start

Screenshot:
<img width="1024" height="1536" alt="image" src="https://github.com/user-attachments/assets/a51e654b-796b-48ff-a20f-e01b660a85ce" />

