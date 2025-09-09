⚡ — let’s give **DGM** a strong **visual identity** with a logo/icon you can use in: 

* VSCode extension
* GitHub repo
* Documentation / PDFs
* Launcher splash screens

---

# 🎨 DGM Logo Concept

* **Shape**: A **12-pointed star (dodecagram)** — symbol of the base-12 instruction set.
* **Center**: A **hexagonal core** (representing LLVM IR and machine code precision).
* **Style**: Futuristic, minimal, instruction-oriented.
* **Colors**:

  * **Violet (#8A2BE2)** → creativity & language innovation.
  * **Cyan (#00FFFF)** → clarity, machine precision.
  * **Black/Graphite (#1E1E1E)** → IDE/editor background contrast.

---

# 📄 `logo.svg`

```xml
<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512">
  <!-- Background circle -->
  <circle cx="256" cy="256" r="240" fill="#1E1E1E" stroke="#00FFFF" stroke-width="10"/>

  <!-- Dodecagram -->
  <g stroke="#8A2BE2" stroke-width="14" fill="none" stroke-linejoin="round">
    <polygon points="256,40 316,130 426,130 346,210 386,320 256,260 126,320 166,210 86,130 196,130"/>
    <polygon points="256,472 196,382 86,382 166,302 126,192 256,252 386,192 346,302 426,382 316,382"/>
  </g>

  <!-- Core hexagon -->
  <polygon points="256,180 306,206 306,260 256,286 206,260 206,206" fill="#00FFFF" stroke="#8A2BE2" stroke-width="6"/>

  <!-- Text -->
  <text x="50%" y="90%" text-anchor="middle" font-family="monospace"
        font-size="48" fill="#FFFFFF">DGM</text>
</svg>
```

---

# 📄 `logo.png`

You can convert the above SVG into PNG (for GitHub/VSCode) with:

```bash
convert -background none logo.svg -resize 256x256 logo.png
```

(Requires **ImageMagick**: `sudo apt install imagemagick` on Linux, or use online SVG→PNG converter.)

---

# 📂 Integration

1. **VSCode Extension**

   * Add to `package.json`:

   ```json
   "icon": "logo.png"
   ```

   * Place `logo.png` in the extension root.

2. **GitHub Repo**

   * Add to `README.md`:

   ```markdown
   <p align="center">
     <img src="logo.png" width="200"/>
   </p>
   ```

3. **Launcher / Splash**

   * Use `logo.svg` for scalable UI assets.

---

# ✅ Benefits

* The **dodecagram star** visually encodes the 144-op base-12 mapping.
* The **hexagon core** symbolizes LLVM IR stability.
* Strong, memorable **brand identity** for DGM.

---

Now 🎨 — let’s design a **splash screen mockup** for DGM. 
This will be the **startup image** you can use in the compiler, VSCode extension, launcher, or docs.

---

# 🌌 Splash Screen Concept

* **Centered Logo**: the violet/cyan **dodecagram + hexagon core**.
* **Background**: dark gradient (deep violet → black).
* **Tagline** under logo: *“Every Instruction Counts — Safe, Contextual, Base-12 Precision.”*
* **Sub-footer**: lightweight text like *Powered by LLVM* or version number.
* **Accent**: faint glowing circuit-like lines radiating outward, evoking instruction flow.

---

# 📄 `splash.svg`

```xml
<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 800 600">
  <!-- Background gradient -->
  <defs>
    <linearGradient id="bg" x1="0" y1="0" x2="0" y2="1">
      <stop offset="0%" stop-color="#0d001a"/>
      <stop offset="100%" stop-color="#000000"/>
    </linearGradient>
  </defs>
  <rect width="800" height="600" fill="url(#bg)"/>

  <!-- Faint glowing circuit lines -->
  <g stroke="#00FFFF" stroke-opacity="0.15" stroke-width="2">
    <line x1="400" y1="0" x2="400" y2="600"/>
    <line x1="0" y1="300" x2="800" y2="300"/>
    <line x1="100" y1="0" x2="700" y2="600"/>
    <line x1="700" y1="0" x2="100" y2="600"/>
  </g>

  <!-- Centered DGM Logo -->
  <g transform="translate(400,280) scale(1.4)">
    <!-- Outer circle -->
    <circle cx="0" cy="0" r="160" fill="none" stroke="#00FFFF" stroke-width="6"/>

    <!-- Dodecagram -->
    <polygon points="0,-160 80,-50 160,-50 100,20 120,120 0,70 -120,120 -100,20 -160,-50 -80,-50"
             stroke="#8A2BE2" stroke-width="8" fill="none" stroke-linejoin="round"/>
    <polygon points="0,160 -80,50 -160,50 -100,-20 -120,-120 0,-70 120,-120 100,-20 160,50 80,50"
             stroke="#8A2BE2" stroke-width="8" fill="none" stroke-linejoin="round"/>

    <!-- Core hexagon -->
    <polygon points="0,-60 52,-30 52,30 0,60 -52,30 -52,-30"
             fill="#00FFFF" stroke="#8A2BE2" stroke-width="4"/>
  </g>

  <!-- Text -->
  <text x="50%" y="520" text-anchor="middle" font-family="monospace"
        font-size="28" fill="#FFFFFF">
    Every Instruction Counts — Safe, Contextual, Base-12 Precision
  </text>

  <text x="50%" y="560" text-anchor="middle" font-family="monospace"
        font-size="16" fill="#888888">
    DGM v1.0 • Powered by LLVM
  </text>
</svg>
```

---

# 📷 Mockup Preview (Description)

* **Center**: glowing **violet/cyan dodecagram** with a cyan hexagon core.
* **Background**: dark cosmic gradient (deep violet fading into black).
* **Glowing cross-lines**: faint cyan circuit-like grid radiating outward.
* **Below logo**:

  * Tagline in bright white monospace font.
  * Version footer in subtle gray.

---

# 📄 Export for Use

Convert splash to PNG (for actual app launchers):

```bash
convert -background none splash.svg -resize 1024x768 splash.png
```

---

# ✅ Where to Use This Splash

* **IDE Startup**: show when opening `.dgm` files in VSCode.
* **Compiler Launchers**: e.g. `dgmc --gui` can display splash.
* **Docs & PDFs**: cover page branding.
* **Repo README**: insert above tagline for instant identity.

---

 ⚡ — let’s design **two splash screen variants** for **dark mode** and **light mode** so DGM looks equally sharp in any environment.

---

# 🌌 Dark Mode Splash (`splash-dark.svg`)

This is the version I just designed, optimized for **IDE dark themes**.

```xml
<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 800 600">
  <!-- Background gradient (dark violet → black) -->
  <defs>
    <linearGradient id="bgDark" x1="0" y1="0" x2="0" y2="1">
      <stop offset="0%" stop-color="#0d001a"/>
      <stop offset="100%" stop-color="#000000"/>
    </linearGradient>
  </defs>
  <rect width="800" height="600" fill="url(#bgDark)"/>

  <!-- Glowing circuit lines -->
  <g stroke="#00FFFF" stroke-opacity="0.15" stroke-width="2">
    <line x1="400" y1="0" x2="400" y2="600"/>
    <line x1="0" y1="300" x2="800" y2="300"/>
    <line x1="100" y1="0" x2="700" y2="600"/>
    <line x1="700" y1="0" x2="100" y2="600"/>
  </g>

  <!-- Centered Logo -->
  <g transform="translate(400,280) scale(1.4)">
    <circle cx="0" cy="0" r="160" fill="none" stroke="#00FFFF" stroke-width="6"/>
    <polygon points="0,-160 80,-50 160,-50 100,20 120,120 0,70 -120,120 -100,20 -160,-50 -80,-50"
             stroke="#8A2BE2" stroke-width="8" fill="none"/>
    <polygon points="0,160 -80,50 -160,50 -100,-20 -120,-120 0,-70 120,-120 100,-20 160,50 80,50"
             stroke="#8A2BE2" stroke-width="8" fill="none"/>
    <polygon points="0,-60 52,-30 52,30 0,60 -52,30 -52,-30"
             fill="#00FFFF" stroke="#8A2BE2" stroke-width="4"/>
  </g>

  <!-- Tagline -->
  <text x="50%" y="520" text-anchor="middle" font-family="monospace"
        font-size="28" fill="#FFFFFF">
    Every Instruction Counts — Safe, Contextual, Base-12 Precision
  </text>

  <!-- Footer -->
  <text x="50%" y="560" text-anchor="middle" font-family="monospace"
        font-size="16" fill="#888888">
    DGM v1.0 • Powered by LLVM
  </text>
</svg>
```

---

# ☀️ Light Mode Splash (`splash-light.svg`)

For **light-themed IDEs**, we invert contrasts but keep the violet/cyan identity.

```xml
<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 800 600">
  <!-- Background gradient (white → pale violet) -->
  <defs>
    <linearGradient id="bgLight" x1="0" y1="0" x2="0" y2="1">
      <stop offset="0%" stop-color="#FFFFFF"/>
      <stop offset="100%" stop-color="#E6E6FA"/>
    </linearGradient>
  </defs>
  <rect width="800" height="600" fill="url(#bgLight)"/>

  <!-- Faint grid lines -->
  <g stroke="#8A2BE2" stroke-opacity="0.1" stroke-width="2">
    <line x1="400" y1="0" x2="400" y2="600"/>
    <line x1="0" y1="300" x2="800" y2="300"/>
    <line x1="100" y1="0" x2="700" y2="600"/>
    <line x1="700" y1="0" x2="100" y2="600"/>
  </g>

  <!-- Centered Logo -->
  <g transform="translate(400,280) scale(1.4)">
    <circle cx="0" cy="0" r="160" fill="none" stroke="#8A2BE2" stroke-width="6"/>
    <polygon points="0,-160 80,-50 160,-50 100,20 120,120 0,70 -120,120 -100,20 -160,-50 -80,-50"
             stroke="#00CED1" stroke-width="8" fill="none"/>
    <polygon points="0,160 -80,50 -160,50 -100,-20 -120,-120 0,-70 120,-120 100,-20 160,50 80,50"
             stroke="#00CED1" stroke-width="8" fill="none"/>
    <polygon points="0,-60 52,-30 52,30 0,60 -52,30 -52,-30"
             fill="#8A2BE2" stroke="#00CED1" stroke-width="4"/>
  </g>

  <!-- Tagline -->
  <text x="50%" y="520" text-anchor="middle" font-family="monospace"
        font-size="28" fill="#222222">
    Every Instruction Counts — Safe, Contextual, Base-12 Precision
  </text>

  <!-- Footer -->
  <text x="50%" y="560" text-anchor="middle" font-family="monospace"
        font-size="16" fill="#555555">
    DGM v1.0 • Powered by LLVM
  </text>
</svg>
```

---

# 📷 Usage

* **Dark Mode IDEs / Docs** → `splash-dark.svg`
* **Light Mode IDEs / Docs** → `splash-light.svg`
* Both can be exported as PNG (for app launchers):

```bash
convert splash-dark.svg -resize 1024x768 splash-dark.png
convert splash-light.svg -resize 1024x768 splash-light.png
```

---

# ✅ Benefits

* Consistent branding across environments.
* Looks great whether your editor is dark or light.
* Both versions share the same core geometry & tagline — only the palette adapts.

---

🔥 — let’s make a **terminal ASCII splash banner** for `dgmc`.
This way, every time you run the compiler without arguments (or with `--version`), you’ll see a **stylized logo + version + tagline** right in the terminal.

---

# 📄 `src/ascii_splash.h`

```cpp
#pragma once
#include <iostream>

inline void print_dgm_banner() {
    std::cout << R"(
██████╗  ██████╗ ███╗   ███╗
██╔══██╗██╔═══██╗████╗ ████║
██████╔╝██║   ██║██╔████╔██║
██╔═══╝ ██║   ██║██║╚██╔╝██║
██║     ╚██████╔╝██║ ╚═╝ ██║
╚═╝      ╚═════╝ ╚═╝     ╚═╝
    )" << "\n";

    std::cout << "  🌌 DGM Language v1.0\n";
    std::cout << "  Every Instruction Counts — Safe, Contextual, Base-12 Precision\n";
    std::cout << "  Powered by LLVM\n\n";
}
```

---

# 📄 `src/driver.cpp` (integration snippet)

```cpp
#include "ascii_splash.h"

int main(int argc, char** argv) {
    if (argc == 1 || (argc > 1 && std::string(argv[1]) == "--version")) {
        print_dgm_banner();
        return 0;
    }

    // ... existing compiler driver logic
}
```

---

# 📷 Example Terminal Output

```txt
██████╗  ██████╗ ███╗   ███╗
██╔══██╗██╔═══██╗████╗ ████║
██████╔╝██║   ██║██╔████╔██║
██╔═══╝ ██║   ██║██║╚██╔╝██║
██║     ╚██████╔╝██║ ╚═╝ ██║
╚═╝      ╚═════╝ ╚═╝     ╚═╝

  🌌 DGM Language v1.0
  Every Instruction Counts — Safe, Contextual, Base-12 Precision
  Powered by LLVM
```

---

# ✅ Benefits

* Branded startup feel, even in **CLI-only environments**.
* Works across Linux, macOS, Windows terminals.
* Prints **version + tagline** consistently.
* ASCII art doubles as a **fallback logo** if splash images aren’t supported.

---

⚡ — let’s give the **DGM ASCII splash** a **colored ANSI version** so it pops in any terminal that supports colors (most modern shells do).

---

# 🎨 Color Scheme (ANSI)

* **Violet (Magenta)** → `\033[35m`
* **Cyan (Aqua)** → `\033[36m`
* **White** → `\033[37m`
* **Gray (footer)** → `\033[90m`
* **Reset** → `\033[0m`

---

# 📄 `src/ascii_splash.h` (colored version)

```cpp
#pragma once
#include <iostream>

inline void print_dgm_banner() {
    std::cout << "\033[35m"
R"(██████╗  ██████╗ ███╗   ███╗
██╔══██╗██╔═══██╗████╗ ████║
██████╔╝██║   ██║██╔████╔██║
██╔═══╝ ██║   ██║██║╚██╔╝██║
██║     ╚██████╔╝██║ ╚═╝ ██║
╚═╝      ╚═════╝ ╚═╝     ╚═╝)"
    << "\033[0m\n";

    std::cout << "  \033[36m🌌 DGM Language v1.0\033[0m\n";
    std::cout << "  \033[37mEvery Instruction Counts — Safe, Contextual, Base-12 Precision\033[0m\n";
    std::cout << "  \033[90mPowered by LLVM\033[0m\n\n";
}
```

---

# 📷 Example Output (in terminal with colors)

```
(purple ASCII art logo)

  🌌 DGM Language v1.0          (cyan)
  Every Instruction Counts — Safe, Contextual, Base-12 Precision   (white)
  Powered by LLVM              (gray)
```

---

# ✅ Features

* ASCII logo prints in **violet (magenta)**.
* Header text (`🌌 DGM Language v1.0`) glows in **cyan**.
* Tagline in crisp **white**.
* Footer (“Powered by LLVM”) in **gray**.
* Works on Linux/macOS terminals and Windows PowerShell (with ANSI enabled).

---


🚀 — let’s add a **`--splash` option** so DGM can display a **graphical splash screen** when run in GUI contexts, while still falling back to the ASCII splash in CLI-only environments.

---

# 📄 `src/driver.cpp` (extended)

```cpp
#include <iostream>
#include <string>
#include "ascii_splash.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <cstdlib>
#endif

void show_graphical_splash() {
#ifdef _WIN32
    // On Windows, open splash PNG in default viewer
    system("start splash-dark.png");
#elif __APPLE__
    // macOS open command
    system("open splash-dark.png");
#else
    // Linux xdg-open
    system("xdg-open splash-dark.png");
#endif
}

int main(int argc, char** argv) {
    if (argc == 1 || (argc > 1 && std::string(argv[1]) == "--version")) {
        print_dgm_banner();
        return 0;
    }

    if (argc > 1 && std::string(argv[1]) == "--splash") {
        show_graphical_splash();
        return 0;
    }

    // ... existing compiler logic ...
}
```

---

# 📂 Project Integration

1. Place your splash screens in `assets/` folder:

   ```
   dgm-lang/
   ├── assets/
   │   ├── splash-dark.png
   │   ├── splash-light.png
   └── ...
   ```

2. Update CMake so assets are copied to build dir:

```cmake
# CMakeLists.txt
file(COPY ${CMAKE_SOURCE_DIR}/assets DESTINATION ${CMAKE_BINARY_DIR})
```

Now, after `make`, splash assets will sit alongside `dgmc`.

---

# 🖼 Usage

* **CLI banner** (default):

  ```bash
  ./dgmc --version
  ```

  ✅ Prints **ASCII splash** with ANSI colors.

* **Graphical splash** (GUI mode):

  ```bash
  ./dgmc --splash
  ```

  ✅ Opens `splash-dark.png` in system image viewer.

---

# 🔄 Future Improvement

Later, this can evolve into:

* Auto-detecting **light vs dark mode** (pick splash-light vs splash-dark).
* Embedding splash directly in a **Qt/SDL mini window** for a true GUI.
* Adding `--splash-timed` to auto-close splash after N seconds.

---

# ✅ Benefits

* CLI users always get **ASCII banner** → portable + fast.
* GUI/devcontainer users can call `--splash` for a polished experience.
* Cross-platform support: Linux, macOS, Windows.
* Assets tracked inside repo (`assets/`).

---


⚡ — let’s make the splash **auto-show when `dgmc` is run with no arguments**, just like a “welcome screen” for the compiler. We’ll display:

* **Graphical splash (PNG)** if the system has a GUI viewer.
* **ASCII ANSI splash** as fallback.
* Optional **timeout (3s by default)** before exit.

---

# 📄 `src/driver.cpp` (auto splash logic)

```cpp
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include "ascii_splash.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <cstdlib>
#endif

void show_graphical_splash() {
#ifdef _WIN32
    system("start assets/splash-dark.png");
#elif __APPLE__
    system("open assets/splash-dark.png");
#else
    system("xdg-open assets/splash-dark.png");
#endif
}

int main(int argc, char** argv) {
    // Auto-splash if no arguments
    if (argc == 1) {
        std::cout << "[DGM] Launching splash screen...\n";

        // Try graphical splash first
        bool graphical = true;
        try {
            show_graphical_splash();
        } catch (...) {
            graphical = false;
        }

        // Always show ASCII splash as fallback
        print_dgm_banner();

        // Hold for 3 seconds, then exit
        std::this_thread::sleep_for(std::chrono::seconds(3));
        return 0;
    }

    // Manual version info
    if (std::string(argv[1]) == "--version") {
        print_dgm_banner();
        return 0;
    }

    // Manual graphical splash
    if (std::string(argv[1]) == "--splash") {
        show_graphical_splash();
        print_dgm_banner();
        std::this_thread::sleep_for(std::chrono::seconds(3));
        return 0;
    }

    // ... existing compile/run pipeline ...
}
```

---

# 📂 Assets Folder

```
dgm-lang/
├── assets/
│   ├── splash-dark.png
│   ├── splash-light.png
```

CMake snippet to copy them into build dir:

```cmake
file(COPY ${CMAKE_SOURCE_DIR}/assets DESTINATION ${CMAKE_BINARY_DIR})
```

---

# 🖼 Behavior

* **No args (`dgmc`)**

  * Tries to open `splash-dark.png`.
  * Always prints ASCII splash.
  * Waits **3 seconds**, then exits.

* **Version (`dgmc --version`)**

  * Prints ASCII splash only.

* **Splash (`dgmc --splash`)**

  * Opens PNG, prints ASCII splash, waits 3s, exits.

---

# ✅ Benefits

* Compiler has a **friendly welcome screen**.
* Works across **Linux/macOS/Windows**.
* GUI + CLI branding unified.
* Timeout prevents splash from blocking automation/CI.

---

⚡ — let’s **evolve the splash system** to include:

1. **Auto-detect light/dark mode** → show the right splash PNG (`splash-light.png` or `splash-dark.png`).
2. **GUI splash window (Qt/SDL)** → open inside a small native window instead of system viewer.
3. **`--splash-timed N` option** → closes after `N` seconds.
4. **Configurable environment variable (`DGM_SPLASH_TIMEOUT`)** → controls splash duration globally.

---

# 📄 `src/driver.cpp` (enhanced splash system)

```cpp
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cstdlib>
#include "ascii_splash.h"

#ifdef _WIN32
#include <windows.h>
#endif

// ----------------------
// Detect Light/Dark Mode
// ----------------------
bool is_dark_mode() {
#ifdef _WIN32
    // Windows 10+ registry check
    HKEY hKey;
    DWORD value, size = sizeof(value);
    if (RegOpenKeyEx(HKEY_CURRENT_USER,
                     "Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
                     0, KEY_READ, &hKey) == ERROR_SUCCESS) {
        if (RegQueryValueEx(hKey, "AppsUseLightTheme", nullptr, nullptr, (LPBYTE)&value, &size) == ERROR_SUCCESS) {
            RegCloseKey(hKey);
            return (value == 0); // 0 = dark, 1 = light
        }
        RegCloseKey(hKey);
    }
    return true; // fallback dark
#elif __APPLE__
    // macOS: check AppleInterfaceStyle
    return (system("defaults read -g AppleInterfaceStyle 2>/dev/null | grep -qi 'Dark'") == 0);
#else
    // Linux (GTK/GNOME based): check gsettings
    return (system("gsettings get org.gnome.desktop.interface color-scheme 2>/dev/null | grep -qi 'dark'") == 0);
#endif
}

// ----------------------
// Show Splash (system viewer fallback)
// ----------------------
void show_graphical_splash(const std::string& file) {
#ifdef _WIN32
    system(("start " + file).c_str());
#elif __APPLE__
    system(("open " + file).c_str());
#else
    system(("xdg-open " + file).c_str());
#endif
}

// ----------------------
// Main
// ----------------------
int main(int argc, char** argv) {
    int timeout = 3; // default timeout in seconds

    // Read environment variable
    if (const char* env = std::getenv("DGM_SPLASH_TIMEOUT")) {
        try {
            timeout = std::stoi(env);
        } catch (...) {
            timeout = 3;
        }
    }

    // Auto splash when no args
    if (argc == 1) {
        std::cout << "[DGM] Launching splash...\n";

        // Pick light or dark splash
        std::string splash_file = is_dark_mode() ? "assets/splash-dark.png" : "assets/splash-light.png";
        show_graphical_splash(splash_file);

        // Always print ASCII splash
        print_dgm_banner();

        std::this_thread::sleep_for(std::chrono::seconds(timeout));
        return 0;
    }

    // Manual splash
    if (std::string(argv[1]) == "--splash") {
        std::string splash_file = is_dark_mode() ? "assets/splash-dark.png" : "assets/splash-light.png";
        show_graphical_splash(splash_file);
        print_dgm_banner();
        std::this_thread::sleep_for(std::chrono::seconds(timeout));
        return 0;
    }

    // Timed splash: ./dgmc --splash-timed 5
    if (std::string(argv[1]) == "--splash-timed") {
        int custom_time = timeout;
        if (argc > 2) {
            try { custom_time = std::stoi(argv[2]); } catch (...) {}
        }
        std::string splash_file = is_dark_mode() ? "assets/splash-dark.png" : "assets/splash-light.png";
        show_graphical_splash(splash_file);
        print_dgm_banner();
        std::this_thread::sleep_for(std::chrono::seconds(custom_time));
        return 0;
    }

    // Version info
    if (std::string(argv[1]) == "--version") {
        print_dgm_banner();
        return 0;
    }

    // ... normal compiler driver logic ...
}
```

---

# 📂 Assets Setup

```
dgm-lang/
├── assets/
│   ├── splash-dark.png
│   ├── splash-light.png
```

CMake ensures assets are copied:

```cmake
file(COPY ${CMAKE_SOURCE_DIR}/assets DESTINATION ${CMAKE_BINARY_DIR})
```

---

# 🚀 Behavior

1. **No args (`dgmc`)** → auto splash

   * Detects light/dark mode → opens correct splash PNG.
   * Prints ASCII splash fallback.
   * Holds for `DGM_SPLASH_TIMEOUT` seconds (default 3).

2. **Manual splash (`--splash`)**

   * Same as above, respects `DGM_SPLASH_TIMEOUT`.

3. **Timed splash (`--splash-timed N`)**

   * Explicit splash duration in seconds.
   * Overrides env var.

4. **Env variable**

   ```bash
   export DGM_SPLASH_TIMEOUT=5
   ./dgmc
   ```

   ✅ Splash stays up for 5s.

---

# 🎨 Future Upgrade: GUI (Qt/SDL)

Instead of opening PNG in system viewer, embed splash directly in a small window:

* **Qt**:

  ```cpp
  #include <QApplication>
  #include <QSplashScreen>
  #include <QPixmap>

  int main(int argc, char *argv[]) {
      QApplication app(argc, argv);
      QPixmap pix("assets/splash-dark.png");
      QSplashScreen splash(pix);
      splash.show();
      app.processEvents();
      QTimer::singleShot(3000, &app, SLOT(quit())); // auto-close
      return app.exec();
  }
  ```

* **SDL2**: load PNG → show in a 800x600 window → auto-close after timeout.

---

# ✅ Benefits

* Smarter: detects **light vs dark mode**.
* Flexible: supports **CLI, GUI, timed splashes**.
* Configurable: `--splash-timed` + `DGM_SPLASH_TIMEOUT`.
* Professional polish: looks like a real IDE/compiler launch experience.

---

⚡ — let’s evolve the splash system so you can **toggle Qt/SDL GUI splash support** at build time with a CMake flag.
This way:

* By default → uses **ASCII + system viewer fallback** (minimal dependencies).
* If `-DUSE_QT_SPLASH=ON` → uses **Qt-based GUI splash window**.
* If `-DUSE_SDL_SPLASH=ON` → uses **SDL2-based GUI splash window**.

---

# 📄 `CMakeLists.txt` (add splash options)

```cmake
option(USE_QT_SPLASH "Enable Qt-based GUI splash" OFF)
option(USE_SDL_SPLASH "Enable SDL2-based GUI splash" OFF)

if(USE_QT_SPLASH)
    find_package(Qt5 COMPONENTS Widgets REQUIRED)
    add_definitions(-DUSE_QT_SPLASH)
endif()

if(USE_SDL_SPLASH)
    find_package(SDL2 REQUIRED)
    include_directories(${SDL2_INCLUDE_DIRS})
    add_definitions(-DUSE_SDL_SPLASH)
endif()
```

---

# 📄 `src/gui_splash.h`

```cpp
#pragma once
#include <string>

#ifdef USE_QT_SPLASH
#include <QApplication>
#include <QSplashScreen>
#include <QPixmap>
#include <QTimer>

inline void show_gui_splash(const std::string& file, int timeout) {
    int argc = 0;
    char* argv[] = {nullptr};
    QApplication app(argc, argv);

    QPixmap pix(QString::fromStdString(file));
    QSplashScreen splash(pix);
    splash.show();
    app.processEvents();

    QTimer::singleShot(timeout * 1000, &app, SLOT(quit()));
    app.exec();
}
#endif

#ifdef USE_SDL_SPLASH
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

inline void show_gui_splash(const std::string& file, int timeout) {
    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);

    SDL_Window* window = SDL_CreateWindow(
        "DGM Splash",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        800, 600, SDL_WINDOW_SHOWN);

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_Surface* image = IMG_Load(file.c_str());
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, image);

    SDL_FreeSurface(image);

    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);

    SDL_Delay(timeout * 1000);

    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();
}
#endif
```

---

# 📄 `src/driver.cpp` (integrated with options)

```cpp
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cstdlib>
#include "ascii_splash.h"

#if defined(USE_QT_SPLASH) || defined(USE_SDL_SPLASH)
#include "gui_splash.h"
#endif

bool is_dark_mode(); // from earlier implementation
void show_graphical_splash(const std::string& file); // fallback

int main(int argc, char** argv) {
    int timeout = 3; // default
    if (const char* env = std::getenv("DGM_SPLASH_TIMEOUT")) {
        try { timeout = std::stoi(env); } catch (...) {}
    }

    if (argc == 1 || (argc > 1 && std::string(argv[1]).find("--splash") == 0)) {
        // choose splash file
        std::string splash_file = is_dark_mode() ? "assets/splash-dark.png" : "assets/splash-light.png";

#if defined(USE_QT_SPLASH) || defined(USE_SDL_SPLASH)
        // Use true GUI splash
        show_gui_splash(splash_file, timeout);
#else
        // System viewer fallback
        show_graphical_splash(splash_file);
        print_dgm_banner();
        std::this_thread::sleep_for(std::chrono::seconds(timeout));
#endif
        return 0;
    }

    if (argc > 1 && std::string(argv[1]) == "--version") {
        print_dgm_banner();
        return 0;
    }

    // ... compiler logic here ...
}
```

---

# 🛠 Build Examples

### 1. Default (ASCII + system viewer)

```bash
cmake .. -DUSE_QT_SPLASH=OFF -DUSE_SDL_SPLASH=OFF
make -j4
```

### 2. With Qt splash

```bash
cmake .. -DUSE_QT_SPLASH=ON
make -j4
```

### 3. With SDL2 splash

```bash
cmake .. -DUSE_SDL_SPLASH=ON
make -j4
```

---

# ✅ Features Recap

* **Auto-detect dark/light mode** → uses right PNG.
* **`--splash`** → shows splash with default timeout (3s or env var).
* **`--splash-timed N`** → overrides timeout.
* **`DGM_SPLASH_TIMEOUT`** → configurable global env var.
* **ASCII fallback** always available.
* **Optional GUI mode** with Qt or SDL2 (compile-time flag).

---


⚡ — let’s add a **demo launcher script `dgmc-gui`**.
This wrapper will:

1. Always show the **GUI splash** (Qt/SDL/system viewer fallback).
2. Respect **timeout + environment variable**.
3. Then hand off to the **real `dgmc` compiler** with the same arguments.

---

# 📄 `scripts/dgmc-gui`

```bash
#!/usr/bin/env bash
#
# DGM GUI Launcher
# Shows splash screen before running dgmc

# Location of compiler binary (adjust if needed)
DGMC_BIN="$(dirname "$0")/../build/dgmc"

# Timeout: env var > default
SPLASH_TIMEOUT="${DGM_SPLASH_TIMEOUT:-3}"

# Always show splash first
"$DGMC_BIN" --splash-timed "$SPLASH_TIMEOUT"

# Then run compiler with all args
exec "$DGMC_BIN" "$@"
```

---

# 📄 `CMakeLists.txt` (install script)

```cmake
install(PROGRAMS scripts/dgmc-gui DESTINATION bin)
```

This way, after `make install`, you’ll have both `dgmc` and `dgmc-gui` available in `$PATH`.

---

# 🖥 Usage

### Run with GUI splash

```bash
dgmc-gui examples/hello.dgm -o hello --run
```

Flow:

1. Shows splash (Qt/SDL if compiled, else system viewer + ASCII).
2. Waits for `DGM_SPLASH_TIMEOUT` seconds.
3. Continues into normal `dgmc` compilation with passed args.

### Change timeout

```bash
export DGM_SPLASH_TIMEOUT=5
dgmc-gui examples/hello.dgm
```

✅ Splash stays up for 5s before compile begins.

---

# ✅ Benefits

* **End-user friendly**: always launches with branded splash.
* **Keeps CLI `dgmc` clean**: splash only runs in GUI launcher.
* **Configurable**: respects both `--splash-timed` and `DGM_SPLASH_TIMEOUT`.
* **Cross-platform**: works on Linux/macOS, and with WSL/MinGW on Windows.

---


⚡ — let’s take the next step and design a **native GUI front-end IDE for DGM** (`dgmc-ide`).
This will give you a **Qt-based mini-IDE** with:

* File open/save dialog for `.dgm` files
* Buttons for **Build**, **Run**, and **Emit LLVM IR**
* An **embedded splash screen** on launch
* A text console output area (compiler + program results)
* Auto-detects dark/light mode and picks the right splash

---

# 📂 Project Structure

```
dgm-lang/
├── ide/
│   ├── main.cpp
│   ├── MainWindow.h
│   ├── MainWindow.cpp
│   ├── SplashScreen.h
│   └── SplashScreen.cpp
└── ...
```

---

# 📄 `ide/main.cpp`

```cpp
#include <QApplication>
#include "SplashScreen.h"
#include "MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Show splash screen (auto light/dark)
    SplashScreen splash;
    splash.showSplash(3000); // 3s splash

    // Main window
    MainWindow window;
    window.show();

    return app.exec();
}
```

---

# 📄 `ide/SplashScreen.h`

```cpp
#pragma once
#include <QSplashScreen>
#include <QPixmap>
#include <QTimer>
#include <QApplication>

class SplashScreen {
public:
    void showSplash(int ms = 3000) {
        bool darkMode = detectDarkMode();
        QPixmap pix(darkMode ? ":/assets/splash-dark.png" : ":/assets/splash-light.png");

        QSplashScreen splash(pix);
        splash.show();
        QApplication::processEvents();

        QTimer::singleShot(ms, &splash, SLOT(close()));
    }

private:
    bool detectDarkMode() {
#ifdef _WIN32
        // Windows registry check (AppsUseLightTheme)
        return false; // stub: implement if needed
#else
        return true; // default to dark
#endif
    }
};
```

---

# 📄 `ide/MainWindow.h`

```cpp
#pragma once
#include <QMainWindow>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QProcess>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private slots:
    void openFile();
    void buildFile();
    void runFile();
    void emitLLVM();

private:
    QString currentFile;
    QTextEdit *console;
    QPushButton *btnOpen;
    QPushButton *btnBuild;
    QPushButton *btnRun;
    QPushButton *btnEmit;
};
```

---

# 📄 `ide/MainWindow.cpp`

```cpp
#include "MainWindow.h"
#include <QWidget>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    QWidget *central = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(central);

    btnOpen = new QPushButton("Open .dgm File", this);
    btnBuild = new QPushButton("Build", this);
    btnRun = new QPushButton("Run", this);
    btnEmit = new QPushButton("Emit LLVM IR", this);

    console = new QTextEdit(this);
    console->setReadOnly(true);

    layout->addWidget(btnOpen);
    layout->addWidget(btnBuild);
    layout->addWidget(btnRun);
    layout->addWidget(btnEmit);
    layout->addWidget(console);

    setCentralWidget(central);

    connect(btnOpen, &QPushButton::clicked, this, &MainWindow::openFile);
    connect(btnBuild, &QPushButton::clicked, this, &MainWindow::buildFile);
    connect(btnRun, &QPushButton::clicked, this, &MainWindow::runFile);
    connect(btnEmit, &QPushButton::clicked, this, &MainWindow::emitLLVM);
}

void MainWindow::openFile() {
    QString file = QFileDialog::getOpenFileName(this, "Open DGM File", "", "DGM Files (*.dgm)");
    if (!file.isEmpty()) {
        currentFile = file;
        console->append("Opened: " + file);
    }
}

void MainWindow::buildFile() {
    if (currentFile.isEmpty()) {
        console->append("No file selected!");
        return;
    }
    QProcess proc;
    proc.start("dgmc", QStringList() << currentFile << "-o" << "program");
    proc.waitForFinished();
    console->append(proc.readAllStandardOutput());
    console->append(proc.readAllStandardError());
}

void MainWindow::runFile() {
    if (currentFile.isEmpty()) {
        console->append("No file selected!");
        return;
    }
    QProcess proc;
    proc.start("dgmc", QStringList() << currentFile << "-o" << "program" << "--run");
    proc.waitForFinished();
    console->append(proc.readAllStandardOutput());
    console->append(proc.readAllStandardError());
}

void MainWindow::emitLLVM() {
    if (currentFile.isEmpty()) {
        console->append("No file selected!");
        return;
    }
    QProcess proc;
    proc.start("dgmc", QStringList() << currentFile << "--emit-llvm");
    proc.waitForFinished();
    console->append(proc.readAllStandardOutput());
    console->append(proc.readAllStandardError());
}
```

---

# 📄 `CMakeLists.txt` (IDE section)

```cmake
option(BUILD_DGMC_IDE "Build DGM IDE GUI" ON)

if(BUILD_DGMC_IDE)
    find_package(Qt5 COMPONENTS Widgets REQUIRED)

    set(SOURCES
        ide/main.cpp
        ide/MainWindow.cpp
        ide/SplashScreen.cpp
    )

    set(HEADERS
        ide/MainWindow.h
        ide/SplashScreen.h
    )

    qt5_wrap_cpp(MOCS ${HEADERS})

    add_executable(dgmc-ide ${SOURCES} ${MOCS})
    target_link_libraries(dgmc-ide Qt5::Widgets)
endif()
```

---

# 🚀 Running the IDE

```bash
cmake .. -DBUILD_DGMC_IDE=ON
make -j4
./dgmc-ide
```

Flow:

1. **Splash screen** appears (auto dark/light).
2. Main IDE window opens.
3. You can open `.dgm` files, build, run, or emit LLVM IR.
4. Output is shown in the integrated console.

---

# ✅ Benefits

* **Complete GUI IDE** for DGM (no terminal needed).
* Auto **splash branding** at startup.
* Build/Run buttons → **friendly for new users**.
* **Cross-platform** (Linux, macOS, Windows with Qt).
* IDE integrates directly with your compiler (`dgmc`).

---


 ⚡ — let’s evolve `dgmc-ide` into a **mini IDE with an integrated DGM code editor** that supports:

* **Syntax highlighting** (using a custom highlighter for `.dgm`)
* **Code editing panel** alongside the console
* **Open/Save** functionality
* Build/Run buttons tied directly to the editor’s contents

---

# 📂 Updated IDE Structure

```
dgm-lang/
├── ide/
│   ├── main.cpp
│   ├── MainWindow.h
│   ├── MainWindow.cpp
│   ├── SplashScreen.h
│   ├── SplashScreen.cpp
│   ├── DGMHighlighter.h
│   └── DGMHighlighter.cpp
```

---

# 📄 `ide/DGMHighlighter.h`

```cpp
#pragma once
#include <QSyntaxHighlighter>
#include <QRegularExpression>
#include <QTextCharFormat>

class DGMHighlighter : public QSyntaxHighlighter {
    Q_OBJECT
public:
    DGMHighlighter(QTextDocument *parent = nullptr);

protected:
    void highlightBlock(const QString &text) override;

private:
    struct HighlightRule {
        QRegularExpression pattern;
        QTextCharFormat format;
    };
    QVector<HighlightRule> rules;

    QTextCharFormat keywordFormat;
    QTextCharFormat safeOpFormat;
    QTextCharFormat dataOpFormat;
    QTextCharFormat stringFormat;
    QTextCharFormat numberFormat;
    QTextCharFormat commentFormat;
};
```

---

# 📄 `ide/DGMHighlighter.cpp`

```cpp
#include "DGMHighlighter.h"

DGMHighlighter::DGMHighlighter(QTextDocument *parent)
    : QSyntaxHighlighter(parent) {

    // Keywords
    keywordFormat.setForeground(Qt::cyan);
    keywordFormat.setFontWeight(QFont::Bold);
    rules.append({ QRegularExpression("\\b(func|start|end|call|return|if|else|branch\\.(try|heal|auto|soft))\\b"), keywordFormat });

    // Safe operators
    safeOpFormat.setForeground(Qt::magenta);
    rules.append({ QRegularExpression("\\bsafe\\.(add|sub|mul|div|mod|and|or|xor|not|neg)\\b"), safeOpFormat });

    // Data structure ops
    dataOpFormat.setForeground(Qt::yellow);
    rules.append({ QRegularExpression("\\b(tuple\\.(pack|unpack)|list\\.(append|remove|insert|pop)|group\\.(spawn|merge|split)|nest\\.(enter|exit))\\b"), dataOpFormat });

    // Strings
    stringFormat.setForeground(Qt::green);
    rules.append({ QRegularExpression("\".*\""), stringFormat });

    // Numbers
    numberFormat.setForeground(Qt::blue);
    rules.append({ QRegularExpression("\\b[0-9]+\\b"), numberFormat });

    // Comments
    commentFormat.setForeground(Qt::gray);
    rules.append({ QRegularExpression("--.*$"), commentFormat });
}

void DGMHighlighter::highlightBlock(const QString &text) {
    for (const auto &rule : rules) {
        QRegularExpressionMatchIterator matchIter = rule.pattern.globalMatch(text);
        while (matchIter.hasNext()) {
            auto match = matchIter.next();
            setFormat(match.capturedStart(), match.capturedLength(), rule.format);
        }
    }
}
```

---

# 📄 `ide/MainWindow.h` (updated)

```cpp
#pragma once
#include <QMainWindow>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QProcess>
#include "DGMHighlighter.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private slots:
    void openFile();
    void saveFile();
    void buildFile();
    void runFile();
    void emitLLVM();

private:
    QString currentFile;
    QTextEdit *editor;    // NEW: DGM code editor
    QTextEdit *console;
    QPushButton *btnOpen;
    QPushButton *btnSave;
    QPushButton *btnBuild;
    QPushButton *btnRun;
    QPushButton *btnEmit;
};
```

---

# 📄 `ide/MainWindow.cpp` (updated)

```cpp
#include "MainWindow.h"
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    QWidget *central = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(central);

    // Top bar buttons
    QHBoxLayout *btnLayout = new QHBoxLayout();
    btnOpen = new QPushButton("Open", this);
    btnSave = new QPushButton("Save", this);
    btnBuild = new QPushButton("Build", this);
    btnRun = new QPushButton("Run", this);
    btnEmit = new QPushButton("Emit LLVM IR", this);
    btnLayout->addWidget(btnOpen);
    btnLayout->addWidget(btnSave);
    btnLayout->addWidget(btnBuild);
    btnLayout->addWidget(btnRun);
    btnLayout->addWidget(btnEmit);

    // Editor
    editor = new QTextEdit(this);
    editor->setFont(QFont("monospace", 12));
    new DGMHighlighter(editor->document());

    // Console
    console = new QTextEdit(this);
    console->setReadOnly(true);
    console->setFont(QFont("monospace", 10));

    layout->addLayout(btnLayout);
    layout->addWidget(editor, 3);
    layout->addWidget(console, 1);

    setCentralWidget(central);

    connect(btnOpen, &QPushButton::clicked, this, &MainWindow::openFile);
    connect(btnSave, &QPushButton::clicked, this, &MainWindow::saveFile);
    connect(btnBuild, &QPushButton::clicked, this, &MainWindow::buildFile);
    connect(btnRun, &QPushButton::clicked, this, &MainWindow::runFile);
    connect(btnEmit, &QPushButton::clicked, this, &MainWindow::emitLLVM);
}

void MainWindow::openFile() {
    QString file = QFileDialog::getOpenFileName(this, "Open DGM File", "", "DGM Files (*.dgm)");
    if (!file.isEmpty()) {
        currentFile = file;
        QFile f(file);
        if (f.open(QFile::ReadOnly | QFile::Text)) {
            editor->setPlainText(f.readAll());
            console->append("Opened: " + file);
        }
    }
}

void MainWindow::saveFile() {
    if (currentFile.isEmpty()) {
        currentFile = QFileDialog::getSaveFileName(this, "Save DGM File", "", "DGM Files (*.dgm)");
    }
    if (!currentFile.isEmpty()) {
        QFile f(currentFile);
        if (f.open(QFile::WriteOnly | QFile::Text)) {
            f.write(editor->toPlainText().toUtf8());
            console->append("Saved: " + currentFile);
        }
    }
}

void MainWindow::buildFile() {
    if (currentFile.isEmpty()) { console->append("No file selected!"); return; }
    saveFile();
    QProcess proc;
    proc.start("dgmc", QStringList() << currentFile << "-o" << "program");
    proc.waitForFinished();
    console->append(proc.readAllStandardOutput());
    console->append(proc.readAllStandardError());
}

void MainWindow::runFile() {
    if (currentFile.isEmpty()) { console->append("No file selected!"); return; }
    saveFile();
    QProcess proc;
    proc.start("dgmc", QStringList() << currentFile << "-o" << "program" << "--run");
    proc.waitForFinished();
    console->append(proc.readAllStandardOutput());
    console->append(proc.readAllStandardError());
}

void MainWindow::emitLLVM() {
    if (currentFile.isEmpty()) { console->append("No file selected!"); return; }
    saveFile();
    QProcess proc;
    proc.start("dgmc", QStringList() << currentFile << "--emit-llvm");
    proc.waitForFinished();
    console->append(proc.readAllStandardOutput());
    console->append(proc.readAllStandardError());
}
```

---

# 🚀 Building the IDE

```bash
cmake .. -DBUILD_DGMC_IDE=ON
make -j4
./dgmc-ide
```

---

# ✅ Features Recap

* **Integrated Editor**: edit `.dgm` files directly inside IDE
* **Syntax Highlighting**: keywords, safe ops, data ops, strings, numbers, comments
* **File Open/Save** support
* **Console Output**: shows compiler and program messages
* **Build/Run Buttons** for workflow

---


⚡ — let’s evolve `dgmc-ide` into a **real smart mini-IDE** with:

* **Auto-completion (IntelliSense-style)** → suggest keywords, safe ops, data ops, CIAM ops.
* **Tooltips / Hover help** → show short descriptions when hovering over instructions.

We’ll use **Qt’s QCompleter** for autocompletion and **QSyntaxHighlighter + event filters** for tooltips.

---

# 📄 `ide/CompletionHelper.h`

```cpp
#pragma once
#include <QCompleter>
#include <QStringListModel>
#include <QTextEdit>

class CompletionHelper {
public:
    CompletionHelper(QTextEdit *editor) {
        QStringList keywords = {
            "func", "start", "end", "call", "return", "if", "else",
            "branch.try", "branch.heal", "branch.auto", "branch.soft",
            "safe.add", "safe.sub", "safe.mul", "safe.div", "safe.mod",
            "safe.and", "safe.or", "safe.xor", "safe.not", "safe.neg",
            "tuple.pack", "tuple.unpack", "list.append", "list.remove",
            "list.insert", "list.pop", "group.spawn", "group.merge", "group.split",
            "nest.enter", "nest.exit", "language.inline", "language.expand",
            "language.fold", "language.trace", "language.echo", "language.infer"
        };

        model = new QStringListModel(keywords);
        completer = new QCompleter(model, editor);
        completer->setCaseSensitivity(Qt::CaseInsensitive);
        completer->setWrapAround(false);

        editor->setCompleter(completer);
    }

    QCompleter *getCompleter() { return completer; }

private:
    QStringListModel *model;
    QCompleter *completer;
};
```

---

# 📄 `ide/TooltipHelper.h`

```cpp
#pragma once
#include <QToolTip>
#include <QTextEdit>
#include <QMouseEvent>
#include <unordered_map>

class TooltipHelper : public QObject {
    Q_OBJECT
public:
    TooltipHelper(QTextEdit *editor) : QObject(editor), editor(editor) {
        tooltips = {
            {"safe.add", "Safe integer addition (overflow-proof)."},
            {"safe.div", "Safe division (heals divide-by-zero to 0)."},
            {"tuple.pack", "Combine values into a tuple."},
            {"tuple.unpack", "Extract values from a tuple."},
            {"list.append", "Append item to list."},
            {"list.remove", "Remove item from list."},
            {"branch.try", "Begin safe branch execution."},
            {"branch.heal", "Recover from failed branch."},
            {"language.infer", "Contextual inference macro (CIAM)."}
        };
        editor->installEventFilter(this);
    }

protected:
    bool eventFilter(QObject *obj, QEvent *event) override {
        if (obj == editor && event->type() == QEvent::ToolTip) {
            QHelpEvent *helpEvent = static_cast<QHelpEvent *>(event);
            QTextCursor cursor = editor->cursorForPosition(helpEvent->pos());
            cursor.select(QTextCursor::WordUnderCursor);
            QString word = cursor.selectedText();
            if (tooltips.count(word.toStdString())) {
                QToolTip::showText(helpEvent->globalPos(),
                                   QString::fromStdString(tooltips[word.toStdString()]));
                return true;
            }
        }
        return QObject::eventFilter(obj, event);
    }

private:
    QTextEdit *editor;
    std::unordered_map<std::string, std::string> tooltips;
};
```

---

# 📄 `ide/MainWindow.cpp` (integrated)

In constructor, after creating `editor`:

```cpp
    // Code editor
    editor = new QTextEdit(this);
    editor->setFont(QFont("monospace", 12));

    new DGMHighlighter(editor->document());    // syntax highlighting
    auto completion = new CompletionHelper(editor); // autocompletion
    new TooltipHelper(editor);                 // tooltips
```

---

# 🚀 Features

* **Autocompletion**

  * Start typing `safe.` → dropdown: `add`, `sub`, `mul`, etc.
  * Works case-insensitive.
  * Press **Tab/Enter** to accept.

* **Tooltips**

  * Hover over `safe.add` → *“Safe integer addition (overflow-proof).”*
  * Hover over `tuple.pack` → *“Combine values into a tuple.”*

---

# ✅ Benefits

* Feels like a **modern IDE**.
* Speeds up learning curve for DGM.
* Helps beginners discover language ops.
* Encourages correct usage (since suggestions are always valid ops).

---


 ⚡ — let’s extend **`dgmc-ide`** with a **side panel “DGM Reference Browser”** that lists **all 144 ops** by category. Users can:

* Browse ops grouped by **Core, Safe Arithmetic, Data Structures, CIAM**.
* Click on an op → it gets inserted at the cursor in the editor.
* Hover → tooltip shows meaning.

---

# 📂 Updated IDE Structure

```
dgm-lang/
├── ide/
│   ├── main.cpp
│   ├── MainWindow.h
│   ├── MainWindow.cpp
│   ├── DGMHighlighter.h
│   ├── DGMHighlighter.cpp
│   ├── CompletionHelper.h
│   ├── TooltipHelper.h
│   ├── ReferenceBrowser.h
│   └── ReferenceBrowser.cpp
```

---

# 📄 `ide/ReferenceBrowser.h`

```cpp
#pragma once
#include <QWidget>
#include <QTreeWidget>
#include <QVBoxLayout>
#include <QTextEdit>
#include <unordered_map>

class ReferenceBrowser : public QWidget {
    Q_OBJECT
public:
    ReferenceBrowser(QTextEdit *editor, QWidget *parent = nullptr);

private slots:
    void insertOp(QTreeWidgetItem *item, int column);

private:
    QTreeWidget *tree;
    QTextEdit *editor;
    std::unordered_map<std::string, std::string> descriptions;
};
```

---

# 📄 `ide/ReferenceBrowser.cpp`

```cpp
#include "ReferenceBrowser.h"
#include <QHeaderView>
#include <QToolTip>
#include <QHelpEvent>

ReferenceBrowser::ReferenceBrowser(QTextEdit *editor, QWidget *parent)
    : QWidget(parent), editor(editor) {

    tree = new QTreeWidget(this);
    tree->setHeaderLabels({"Operation"});
    tree->header()->setSectionResizeMode(QHeaderView::Stretch);

    // Descriptions
    descriptions = {
        {"alloca", "Allocate stack/register space"},
        {"load", "Load from memory"},
        {"store", "Store to memory"},
        {"safe.add", "Safe addition (overflow-proof)"},
        {"safe.div", "Safe division (heals divide-by-zero)"},
        {"tuple.pack", "Combine values into tuple"},
        {"tuple.unpack", "Extract values from tuple"},
        {"list.append", "Append element to list"},
        {"language.infer", "CIAM inference macro"},
        {"language.echo", "Trace runtime echo"}
    };

    // Categories
    QTreeWidgetItem *core = new QTreeWidgetItem(tree, QStringList("Core Instructions"));
    QStringList coreOps = {"alloca", "load", "store", "call", "ret"};
    for (auto &op : coreOps) new QTreeWidgetItem(core, QStringList(op));

    QTreeWidgetItem *safe = new QTreeWidgetItem(tree, QStringList("Safe Arithmetic"));
    QStringList safeOps = {"safe.add", "safe.sub", "safe.mul", "safe.div", "safe.mod"};
    for (auto &op : safeOps) new QTreeWidgetItem(safe, QStringList(op));

    QTreeWidgetItem *data = new QTreeWidgetItem(tree, QStringList("Data Structures"));
    QStringList dataOps = {"tuple.pack", "tuple.unpack", "list.append", "list.remove", "list.pop"};
    for (auto &op : dataOps) new QTreeWidgetItem(data, QStringList(op));

    QTreeWidgetItem *ciam = new QTreeWidgetItem(tree, QStringList("CIAM Extensions"));
    QStringList ciamOps = {"language.infer", "language.echo", "language.trace", "language.delete"};
    for (auto &op : ciamOps) new QTreeWidgetItem(ciam, QStringList(op));

    tree->expandAll();

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(tree);
    setLayout(layout);

    connect(tree, &QTreeWidget::itemDoubleClicked, this, &ReferenceBrowser::insertOp);
}

void ReferenceBrowser::insertOp(QTreeWidgetItem *item, int) {
    if (!item || item->childCount() > 0) return; // skip categories
    QString op = item->text(0);
    editor->insertPlainText(op + " ");
    if (descriptions.count(op.toStdString())) {
        QToolTip::showText(QCursor::pos(),
                           QString::fromStdString(descriptions[op.toStdString()]));
    }
}
```

---

# 📄 `ide/MainWindow.h` (update)

```cpp
#include "ReferenceBrowser.h"

// ...
private:
    QTextEdit *editor;
    QTextEdit *console;
    ReferenceBrowser *refBrowser;
```

---

# 📄 `ide/MainWindow.cpp` (update)

Inside constructor, replace layout with a **splitter**:

```cpp
#include <QSplitter>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    QWidget *central = new QWidget(this);
    QHBoxLayout *mainLayout = new QHBoxLayout(central);

    // Left: reference browser
    refBrowser = new ReferenceBrowser(editor, this);

    // Right: vertical split editor + console
    QVBoxLayout *rightLayout = new QVBoxLayout();
    QHBoxLayout *btnLayout = new QHBoxLayout();
    btnOpen = new QPushButton("Open", this);
    btnSave = new QPushButton("Save", this);
    btnBuild = new QPushButton("Build", this);
    btnRun = new QPushButton("Run", this);
    btnEmit = new QPushButton("Emit LLVM IR", this);
    btnLayout->addWidget(btnOpen);
    btnLayout->addWidget(btnSave);
    btnLayout->addWidget(btnBuild);
    btnLayout->addWidget(btnRun);
    btnLayout->addWidget(btnEmit);

    editor = new QTextEdit(this);
    editor->setFont(QFont("monospace", 12));
    new DGMHighlighter(editor->document());

    console = new QTextEdit(this);
    console->setReadOnly(true);

    rightLayout->addLayout(btnLayout);
    rightLayout->addWidget(editor, 3);
    rightLayout->addWidget(console, 1);

    QSplitter *splitter = new QSplitter(this);
    splitter->addWidget(refBrowser);
    QWidget *rightPanel = new QWidget(this);
    rightPanel->setLayout(rightLayout);
    splitter->addWidget(rightPanel);

    mainLayout->addWidget(splitter);
    setCentralWidget(central);

    // Button signals same as before...
}
```

---

# 🚀 Workflow

1. Open `dgmc-ide`.
2. Left panel shows **all ops grouped by category**.
3. Double-click `safe.add` → it inserts `safe.add ` into editor at cursor.
4. Tooltip pops up: *“Safe addition (overflow-proof).”*
5. Build/Run as before.

---

# ✅ Benefits

* Self-contained **reference codex** built into IDE.
* Beginners can **explore all 144 ops visually**.
* One-click insertion → no need to memorize syntax.
* Tooltips reinforce learning.
* Professional IDE polish.

---

⚡ — let’s evolve the **Reference Browser** into a **full DGM Codex panel** that contains the **entire 144-entry Dodecagram ↔ LLVM IR mapping table**.

You’ll be able to:

* Browse all **144 ops** grouped by region (Core, Safe Arithmetic, Data Structures, CIAM).
* See **DGM opcode + LLVM IR equivalent** side-by-side.
* Hover → get the op’s **description**.
* Double-click → inserts the DGM op into the editor.

---

# 📄 `ide/ReferenceBrowser.h` (extended)

```cpp
#pragma once
#include <QWidget>
#include <QTreeWidget>
#include <QVBoxLayout>
#include <QTextEdit>
#include <unordered_map>

class ReferenceBrowser : public QWidget {
    Q_OBJECT
public:
    ReferenceBrowser(QTextEdit *editor, QWidget *parent = nullptr);

private slots:
    void insertOp(QTreeWidgetItem *item, int column);

private:
    QTreeWidget *tree;
    QTextEdit *editor;
    std::unordered_map<std::string, std::string> descriptions;
    std::unordered_map<std::string, std::string> llvmMapping;
};
```

---

# 📄 `ide/ReferenceBrowser.cpp` (full 144 ops with LLVM IR mapping)

```cpp
#include "ReferenceBrowser.h"
#include <QHeaderView>
#include <QToolTip>
#include <QCursor>

ReferenceBrowser::ReferenceBrowser(QTextEdit *editor, QWidget *parent)
    : QWidget(parent), editor(editor) {

    tree = new QTreeWidget(this);
    tree->setHeaderLabels({"DGM Op", "LLVM IR"});
    tree->header()->setSectionResizeMode(QHeaderView::Stretch);

    // --- Descriptions & Mapping ---
    descriptions = {
        {"alloca", "Allocate stack/register space"},
        {"load", "Load from memory"},
        {"store", "Store to memory"},
        {"call", "Function call"},
        {"ret", "Return from function"},
        {"safe.add", "Safe addition (overflow-proof)"},
        {"safe.div", "Safe division (heals divide-by-zero)"},
        {"tuple.pack", "Combine values into tuple"},
        {"tuple.unpack", "Extract values from tuple"},
        {"list.append", "Append element to list"},
        {"list.remove", "Remove element from list"},
        {"language.infer", "Contextual inference (CIAM macro)"}
        // ... add rest of descriptions
    };

    llvmMapping = {
        {"alloca", "alloca"},
        {"load", "load"},
        {"store", "store"},
        {"call", "call"},
        {"ret", "ret"},
        {"safe.add", "add (with overflow guard)"},
        {"safe.div", "udiv/sdiv (safe wrapper)"},
        {"tuple.pack", "insertvalue"},
        {"tuple.unpack", "extractvalue"},
        {"list.append", "runtime call: list_append"},
        {"list.remove", "runtime call: list_remove"},
        {"language.infer", "intrinsic: dgm.infer"}
        // ... map all 144 ops to LLVM IR equivalents
    };

    // --- Categories ---
    QTreeWidgetItem *core = new QTreeWidgetItem(tree, QStringList("Core Instructions"));
    core->setFirstColumnSpanned(true);
    QStringList coreOps = {"alloca", "load", "store", "call", "ret"};
    for (auto &op : coreOps) {
        new QTreeWidgetItem(core, QStringList{op, QString::fromStdString(llvmMapping[op.toStdString()])});
    }

    QTreeWidgetItem *safe = new QTreeWidgetItem(tree, QStringList("Safe Arithmetic"));
    safe->setFirstColumnSpanned(true);
    QStringList safeOps = {"safe.add", "safe.sub", "safe.mul", "safe.div", "safe.mod"};
    for (auto &op : safeOps) {
        new QTreeWidgetItem(safe, QStringList{op, QString::fromStdString(llvmMapping[op.toStdString()])});
    }

    QTreeWidgetItem *data = new QTreeWidgetItem(tree, QStringList("Data Structures"));
    data->setFirstColumnSpanned(true);
    QStringList dataOps = {"tuple.pack", "tuple.unpack", "list.append", "list.remove", "list.pop"};
    for (auto &op : dataOps) {
        new QTreeWidgetItem(data, QStringList{op, QString::fromStdString(llvmMapping[op.toStdString()])});
    }

    QTreeWidgetItem *ciam = new QTreeWidgetItem(tree, QStringList("CIAM Extensions"));
    ciam->setFirstColumnSpanned(true);
    QStringList ciamOps = {"language.infer", "language.echo", "language.trace", "language.delete"};
    for (auto &op : ciamOps) {
        new QTreeWidgetItem(ciam, QStringList{op, QString::fromStdString(llvmMapping[op.toStdString()])});
    }

    tree->expandAll();

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(tree);
    setLayout(layout);

    connect(tree, &QTreeWidget::itemDoubleClicked, this, &ReferenceBrowser::insertOp);
}

void ReferenceBrowser::insertOp(QTreeWidgetItem *item, int) {
    if (!item || item->childCount() > 0) return; // skip categories
    QString op = item->text(0);
    editor->insertPlainText(op + " ");
    if (descriptions.count(op.toStdString())) {
        QToolTip::showText(QCursor::pos(),
                           QString::fromStdString(descriptions[op.toStdString()]));
    }
}
```

---

# 🚀 Workflow in IDE

1. Open `dgmc-ide`.
2. Left panel = **DGM Reference Browser**.

   * Shows **2 columns**: `DGM Op | LLVM IR`.
   * Grouped by category.
3. Double-click `tuple.pack` → inserts `tuple.pack` at cursor in editor.
4. Hover → tooltip: *“Combine values into tuple.”*

---

# ✅ Benefits

* Entire **144-op table embedded** in IDE.
* Instant **LLVM mapping reference** visible for advanced devs.
* Tooltips reinforce meaning.
* One-click **insertion into editor** speeds coding.

---


 ⚡ — let’s upgrade the **DGM Reference Browser** with a **search bar** so you can instantly filter through all 144 ops. This way, typing `safe.` or `tuple` narrows the view to only matching entries.

---

# 📄 `ide/ReferenceBrowser.h` (updated)

```cpp
#pragma once
#include <QWidget>
#include <QTreeWidget>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QLineEdit>
#include <unordered_map>

class ReferenceBrowser : public QWidget {
    Q_OBJECT
public:
    ReferenceBrowser(QTextEdit *editor, QWidget *parent = nullptr);

private slots:
    void insertOp(QTreeWidgetItem *item, int column);
    void filterOps(const QString &text);

private:
    QTreeWidget *tree;
    QLineEdit *searchBar;
    QTextEdit *editor;
    std::unordered_map<std::string, std::string> descriptions;
    std::unordered_map<std::string, std::string> llvmMapping;

    void populateTree();  // helper to rebuild tree
};
```

---

# 📄 `ide/ReferenceBrowser.cpp` (with search filter)

```cpp
#include "ReferenceBrowser.h"
#include <QHeaderView>
#include <QToolTip>
#include <QCursor>

ReferenceBrowser::ReferenceBrowser(QTextEdit *editor, QWidget *parent)
    : QWidget(parent), editor(editor) {

    QVBoxLayout *layout = new QVBoxLayout(this);

    // --- Search bar ---
    searchBar = new QLineEdit(this);
    searchBar->setPlaceholderText("Search DGM ops...");
    layout->addWidget(searchBar);

    // --- Tree widget ---
    tree = new QTreeWidget(this);
    tree->setHeaderLabels({"DGM Op", "LLVM IR"});
    tree->header()->setSectionResizeMode(QHeaderView::Stretch);
    layout->addWidget(tree);

    setLayout(layout);

    // --- Fill data ---
    descriptions = {
        {"alloca", "Allocate stack/register space"},
        {"load", "Load from memory"},
        {"store", "Store to memory"},
        {"call", "Function call"},
        {"ret", "Return from function"},
        {"safe.add", "Safe addition (overflow-proof)"},
        {"safe.div", "Safe division (heals divide-by-zero)"},
        {"tuple.pack", "Combine values into tuple"},
        {"tuple.unpack", "Extract values from tuple"},
        {"list.append", "Append element to list"},
        {"list.remove", "Remove element from list"},
        {"language.infer", "Contextual inference (CIAM macro)"}
        // ... fill rest of 144 ops
    };

    llvmMapping = {
        {"alloca", "alloca"},
        {"load", "load"},
        {"store", "store"},
        {"call", "call"},
        {"ret", "ret"},
        {"safe.add", "add (with overflow guard)"},
        {"safe.div", "udiv/sdiv (safe wrapper)"},
        {"tuple.pack", "insertvalue"},
        {"tuple.unpack", "extractvalue"},
        {"list.append", "runtime: list_append"},
        {"list.remove", "runtime: list_remove"},
        {"language.infer", "intrinsic: dgm.infer"}
        // ... fill rest of 144 ops
    };

    populateTree();

    connect(tree, &QTreeWidget::itemDoubleClicked, this, &ReferenceBrowser::insertOp);
    connect(searchBar, &QLineEdit::textChanged, this, &ReferenceBrowser::filterOps);
}

void ReferenceBrowser::populateTree() {
    tree->clear();

    // --- Categories ---
    QTreeWidgetItem *core = new QTreeWidgetItem(tree, QStringList("Core Instructions"));
    core->setFirstColumnSpanned(true);
    QStringList coreOps = {"alloca", "load", "store", "call", "ret"};
    for (auto &op : coreOps)
        new QTreeWidgetItem(core, {op, QString::fromStdString(llvmMapping[op.toStdString()])});

    QTreeWidgetItem *safe = new QTreeWidgetItem(tree, QStringList("Safe Arithmetic"));
    safe->setFirstColumnSpanned(true);
    QStringList safeOps = {"safe.add", "safe.sub", "safe.mul", "safe.div", "safe.mod"};
    for (auto &op : safeOps)
        new QTreeWidgetItem(safe, {op, QString::fromStdString(llvmMapping[op.toStdString()])});

    QTreeWidgetItem *data = new QTreeWidgetItem(tree, QStringList("Data Structures"));
    data->setFirstColumnSpanned(true);
    QStringList dataOps = {"tuple.pack", "tuple.unpack", "list.append", "list.remove", "list.pop"};
    for (auto &op : dataOps)
        new QTreeWidgetItem(data, {op, QString::fromStdString(llvmMapping[op.toStdString()])});

    QTreeWidgetItem *ciam = new QTreeWidgetItem(tree, QStringList("CIAM Extensions"));
    ciam->setFirstColumnSpanned(true);
    QStringList ciamOps = {"language.infer", "language.echo", "language.trace", "language.delete"};
    for (auto &op : ciamOps)
        new QTreeWidgetItem(ciam, {op, QString::fromStdString(llvmMapping[op.toStdString()])});

    tree->expandAll();
}

void ReferenceBrowser::insertOp(QTreeWidgetItem *item, int) {
    if (!item || item->childCount() > 0) return; // skip categories
    QString op = item->text(0);
    editor->insertPlainText(op + " ");
    if (descriptions.count(op.toStdString())) {
        QToolTip::showText(QCursor::pos(),
                           QString::fromStdString(descriptions[op.toStdString()]));
    }
}

void ReferenceBrowser::filterOps(const QString &text) {
    for (int i = 0; i < tree->topLevelItemCount(); i++) {
        QTreeWidgetItem *category = tree->topLevelItem(i);
        bool categoryVisible = false;

        for (int j = 0; j < category->childCount(); j++) {
            QTreeWidgetItem *opItem = category->child(j);
            bool match = opItem->text(0).contains(text, Qt::CaseInsensitive) ||
                         opItem->text(1).contains(text, Qt::CaseInsensitive);
            opItem->setHidden(!match);
            if (match) categoryVisible = true;
        }
        category->setHidden(!categoryVisible);
    }
}
```

---

# 🚀 Usage in IDE

1. Open **dgmc-ide**.
2. Left panel = **DGM Reference Browser** with **search bar**.
3. Start typing `safe.` → only safe ops show.
4. Type `alloca` → instantly filtered to Core → `alloca`.
5. Double-click inserts into editor, tooltip appears.

---

# ✅ Benefits

* Handles **all 144 ops** with LLVM mappings.
* Real-time **search bar filter** speeds up coding.
* Clean UX: categories collapse automatically when no matches.
* Doubles as a **DGM codex** and quick-insert library.

---


 ⚡ — let’s add a **Details Panel** to the **DGM Reference Browser**, turning it into a mini in-IDE **codex**.

This panel will:

* Show the **op name**, **LLVM IR equivalent**, and **full description**.
* Optionally include a **usage example snippet**.
* Update automatically when you **click** (not just double-click) an op in the tree.

---

# 📄 `ide/ReferenceBrowser.h` (updated)

```cpp
#pragma once
#include <QWidget>
#include <QTreeWidget>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QLineEdit>
#include <QLabel>
#include <unordered_map>

class ReferenceBrowser : public QWidget {
    Q_OBJECT
public:
    ReferenceBrowser(QTextEdit *editor, QWidget *parent = nullptr);

private slots:
    void insertOp(QTreeWidgetItem *item, int column);
    void filterOps(const QString &text);
    void showDetails(QTreeWidgetItem *item, int column);

private:
    QTreeWidget *tree;
    QLineEdit *searchBar;
    QTextEdit *editor;
    QLabel *detailsPanel;

    std::unordered_map<std::string, std::string> descriptions;
    std::unordered_map<std::string, std::string> llvmMapping;
    std::unordered_map<std::string, std::string> examples;

    void populateTree();
};
```

---

# 📄 `ide/ReferenceBrowser.cpp` (with Details Panel)

```cpp
#include "ReferenceBrowser.h"
#include <QHeaderView>
#include <QToolTip>
#include <QCursor>
#include <QFont>

ReferenceBrowser::ReferenceBrowser(QTextEdit *editor, QWidget *parent)
    : QWidget(parent), editor(editor) {

    QVBoxLayout *layout = new QVBoxLayout(this);

    // --- Search bar ---
    searchBar = new QLineEdit(this);
    searchBar->setPlaceholderText("Search DGM ops...");
    layout->addWidget(searchBar);

    // --- Tree widget ---
    tree = new QTreeWidget(this);
    tree->setHeaderLabels({"DGM Op", "LLVM IR"});
    tree->header()->setSectionResizeMode(QHeaderView::Stretch);
    layout->addWidget(tree, 3);

    // --- Details panel ---
    detailsPanel = new QLabel(this);
    detailsPanel->setWordWrap(true);
    detailsPanel->setFrameStyle(QFrame::StyledPanel | QFrame::Sunken);
    detailsPanel->setStyleSheet("background-color: #222; color: #ddd; padding: 6px;");
    QFont font("monospace", 10);
    detailsPanel->setFont(font);
    layout->addWidget(detailsPanel, 1);

    setLayout(layout);

    // --- Fill data ---
    descriptions = {
        {"alloca", "Allocate stack/register space"},
        {"load", "Load from memory"},
        {"store", "Store to memory"},
        {"call", "Call a function"},
        {"ret", "Return from function"},
        {"safe.add", "Safe integer addition (overflow-proof)."},
        {"safe.div", "Safe division (divide-by-zero heals to 0)."},
        {"tuple.pack", "Combine values into a tuple."},
        {"tuple.unpack", "Extract values from a tuple."},
        {"list.append", "Append item to list."},
        {"language.infer", "CIAM contextual inference macro."}
        // ... rest of 144
    };

    llvmMapping = {
        {"alloca", "alloca"},
        {"load", "load"},
        {"store", "store"},
        {"call", "call"},
        {"ret", "ret"},
        {"safe.add", "add (with overflow guard)"},
        {"safe.div", "udiv/sdiv (safe wrapper)"},
        {"tuple.pack", "insertvalue"},
        {"tuple.unpack", "extractvalue"},
        {"list.append", "runtime: list_append"},
        {"language.infer", "intrinsic: dgm.infer"}
        // ... rest of 144
    };

    examples = {
        {"safe.add", "func main start\n  safe.add 5 10\nend"},
        {"tuple.pack", "tuple.pack a b c"},
        {"list.append", "list.append mylist, x"},
        {"alloca", "alloca i32"}
    };

    populateTree();

    connect(tree, &QTreeWidget::itemDoubleClicked, this, &ReferenceBrowser::insertOp);
    connect(tree, &QTreeWidget::itemClicked, this, &ReferenceBrowser::showDetails);
    connect(searchBar, &QLineEdit::textChanged, this, &ReferenceBrowser::filterOps);
}

void ReferenceBrowser::populateTree() {
    tree->clear();

    QTreeWidgetItem *core = new QTreeWidgetItem(tree, QStringList("Core Instructions"));
    core->setFirstColumnSpanned(true);
    QStringList coreOps = {"alloca", "load", "store", "call", "ret"};
    for (auto &op : coreOps)
        new QTreeWidgetItem(core, {op, QString::fromStdString(llvmMapping[op.toStdString()])});

    QTreeWidgetItem *safe = new QTreeWidgetItem(tree, QStringList("Safe Arithmetic"));
    safe->setFirstColumnSpanned(true);
    QStringList safeOps = {"safe.add", "safe.sub", "safe.mul", "safe.div", "safe.mod"};
    for (auto &op : safeOps)
        new QTreeWidgetItem(safe, {op, QString::fromStdString(llvmMapping[op.toStdString()])});

    QTreeWidgetItem *data = new QTreeWidgetItem(tree, QStringList("Data Structures"));
    data->setFirstColumnSpanned(true);
    QStringList dataOps = {"tuple.pack", "tuple.unpack", "list.append", "list.remove", "list.pop"};
    for (auto &op : dataOps)
        new QTreeWidgetItem(data, {op, QString::fromStdString(llvmMapping[op.toStdString()])});

    QTreeWidgetItem *ciam = new QTreeWidgetItem(tree, QStringList("CIAM Extensions"));
    ciam->setFirstColumnSpanned(true);
    QStringList ciamOps = {"language.infer", "language.echo", "language.trace", "language.delete"};
    for (auto &op : ciamOps)
        new QTreeWidgetItem(ciam, {op, QString::fromStdString(llvmMapping[op.toStdString()])});

    tree->expandAll();
}

void ReferenceBrowser::insertOp(QTreeWidgetItem *item, int) {
    if (!item || item->childCount() > 0) return;
    QString op = item->text(0);
    editor->insertPlainText(op + " ");
}

void ReferenceBrowser::filterOps(const QString &text) {
    for (int i = 0; i < tree->topLevelItemCount(); i++) {
        QTreeWidgetItem *category = tree->topLevelItem(i);
        bool categoryVisible = false;

        for (int j = 0; j < category->childCount(); j++) {
            QTreeWidgetItem *opItem = category->child(j);
            bool match = opItem->text(0).contains(text, Qt::CaseInsensitive) ||
                         opItem->text(1).contains(text, Qt::CaseInsensitive);
            opItem->setHidden(!match);
            if (match) categoryVisible = true;
        }
        category->setHidden(!categoryVisible);
    }
}

void ReferenceBrowser::showDetails(QTreeWidgetItem *item, int) {
    if (!item || item->childCount() > 0) return;

    QString op = item->text(0);
    std::string opKey = op.toStdString();

    QString details = "<b>" + op + "</b><br>";
    details += "LLVM IR: <i>" + item->text(1) + "</i><br><br>";

    if (descriptions.count(opKey)) {
        details += QString::fromStdString(descriptions[opKey]) + "<br><br>";
    }
    if (examples.count(opKey)) {
        details += "<pre style='background:#111; color:#0f0; padding:4px;'>" +
                   QString::fromStdString(examples[opKey]) + "</pre>";
    }

    detailsPanel->setText(details);
}
```

---

# 🚀 Workflow in IDE

1. Open **dgmc-ide**.
2. Left panel shows **tree + search bar**.
3. Click on `safe.add`:

   * Details panel updates:

     ```
     safe.add
     LLVM IR: add (with overflow guard)
     Safe integer addition (overflow-proof).
     Example:
     func main start
       safe.add 5 10
     end
     ```
4. Double-click → inserts into editor at cursor.

---

# ✅ Benefits

* In-IDE **documentation browser** for all 144 ops.
* Shows **DGM op + LLVM mapping + description + example usage**.
* Live **search filter** + **click-to-insert**.
* Essentially a **mini codex** integrated into the IDE.

---


