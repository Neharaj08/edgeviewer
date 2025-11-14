# EdgeViewer - Company Submission Ready

## What's included
- Android app with NDK support and JNI bridge
- C++ OpenCV-ready processor stub (`opencv_processor.cpp`)
- GLSurfaceView renderer stub (`gl/GLRenderer.kt`)
- CameraX integration skeleton (`CameraActivity.kt`) using `PreviewView` + `ImageAnalysis`
- Web viewer (`web/`) with static sample and TypeScript starter
- `CMakeLists.txt` and Gradle configuration to build native library

## Important notes before building
1. **OpenCV native libraries (.so)** are *not* included due to size and licensing. Download OpenCV Android SDK from https://opencv.org/releases/ and copy the appropriate `*.so` files into:
   `android/app/src/main/jniLibs/<abi>/` (e.g. arm64-v8a)
2. Alternatively, unpack the OpenCV Android SDK and update `CMakeLists.txt` to point to OpenCV's `sdk/native/jni` and link the imported targets.

## How to import and build
1. Unzip this repo and open `android/` folder in Android Studio.
2. Let Gradle sync. Install any missing SDK components when prompted.
3. Place OpenCV `.so` into `app/src/main/jniLibs/<abi>/`.
4. Build → Run on a physical device (recommended) or emulator.

## If Android Studio is hanging (common)
- **Kill Android Studio** and restart.
- Disable the emulator while building (emulator uses RAM).
- Use a physical device via USB (faster).
- Run Gradle build from command line: `./gradlew assembleDebug` in the `android/` folder.
- Increase Android Studio heap in `Help → Edit Custom VM Options` (e.g., `-Xmx4096m`) and restart.

## What to modify for the assessment
- Implement camera frame conversion in `CameraActivity` analyzer and pass NV21 bytes to `JniBridge.processFrame`.
- Implement texture upload from native processed byte array to OpenGL texture in `gl/GLRenderer.kt`.
- Add FPS counter and toggle button to switch raw/processed output.
- Capture a processed frame and place into `web/processed_sample.png` and update README screenshots.

## Commit guideline
- Make incremental commits with clear messages:
  - `init: project skeleton`
  - `feat: add JNI bridge and native stub`
  - `feat: add opencv processor stub`
  - `feat: add cameraX analyzer skeleton`
  - `chore: add README and build instructions`

## Submission checklist
- [ ] Public GitHub repo (or private with access)
- [ ] Clear commit history (no single final dump)
- [ ] README with build/run instructions and screenshots/GIF
- [ ] Optional: short demo video (30s) showing app

Good luck — you can do this! If you want, I will now:
- Add example OpenCV `.so` placeholders (I cannot provide official binaries),
- Or produce a ZIP you can download now with everything above ready.
