#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
   assert(argc == 3);

   fs::path /root/c++ = argv[1];
   fs::path /root/c++/C-Course = argv[2];

   for (const auto& entry : fs::directory_iterator(sourceDir)) {
       if (entry.path().extension() == ".cpp") {
           fs::path targetPath = targetDir / entry.path().filename();
           std::cout << entry.path() << " -> " << targetPath << std::endl;
           fs::rename(entry.path(), targetPath);
       }
   }

   return 0;
}

