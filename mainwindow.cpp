#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "string.h"
#include "qprocess.h"
#include <json/json.h>
#include <fstream>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    std::string command_forge = this->parse("versions/1.7.10-Forge/1.7.10-Forge.json");
    std::string command_vanila = this->parse("versions/1.7.10/1.7.10.json");

    std::string command = "java -Xmx1024M -Xms1024M -Djava.library.path=versions/1.7.10/natives -cp " +\
            command_forge + command_vanila +\
            "versions/1.7.10/1.7.10.jar net.minecraft.launchwrapper.Launch --username saithiril --version 1.7.10-Forge --gameDir /home/saithiril/.minecraft/ --assetsDir assets --assetIndex 1.7.10 --uuid 00000000-0000-0000-0000-000000000000 --accessToken 00000000-0000-0000-0000-000000000000 --userProperties {} --userType mojang --tweakClass cpw.mods.fml.common.launcher.FMLTweaker";
    ui->textEdit->setText("dsdsd");
    QProcess proc;
    QString params = "java -Xmx1024M -Xms1024M -Djava.library.path=versions/1.7.10/natives -cp \
            libraries/net/minecraftforge/forge/1.7.10-10.13.4.1448-1.7.10/forge-1.7.10-10.13.4.1448-1.7.10.jar:\
            libraries/net/minecraft/launchwrapper/1.11/launchwrapper-1.11.jar:\
            libraries/org/ow2/asm/asm-all/5.0.3/asm-all-5.0.3.jar:\
            libraries/com/typesafe/akka/akka-actor_2.11/2.3.3/akka-actor_2.11-2.3.3.jar:\
            libraries/com/typesafe/config/1.2.1/config-1.2.1.jar:\
            libraries/org/scala-lang/scala-actors-migration_2.11/1.1.0/scala-actors-migration_2.11-1.1.0.jar:\
            libraries/org/scala-lang/scala-compiler/2.11.1/scala-compiler-2.11.1.jar:\
            libraries/org/scala-lang/plugins/scala-continuations-library_2.11/1.0.2/scala-continuations-library_2.11-1.0.2.jar:\
            libraries/org/scala-lang/plugins/scala-continuations-plugin_2.11.1/1.0.2/scala-continuations-plugin_2.11.1-1.0.2.jar:\
            libraries/org/scala-lang/scala-library/2.11.1/scala-library-2.11.1.jar:\
            libraries/org/scala-lang/scala-parser-combinators_2.11/1.0.1/scala-parser-combinators_2.11-1.0.1.jar:\
            libraries/org/scala-lang/scala-reflect/2.11.1/scala-reflect-2.11.1.jar:\
            libraries/org/scala-lang/scala-swing_2.11/1.0.1/scala-swing_2.11-1.0.1.jar:\
            libraries/org/scala-lang/scala-xml_2.11/1.0.2/scala-xml_2.11-1.0.2.jar:\
            libraries/lzma/lzma/0.0.1/lzma-0.0.1.jar:\
            libraries/net/sf/jopt-simple/jopt-simple/4.5/jopt-simple-4.5.jar:\
            libraries/com/google/guava/guava/17.0/guava-17.0.jar:\
            libraries/org/apache/commons/commons-lang3/3.3.2/commons-lang3-3.3.2.jar:\
            \
            libraries/com/mojang/realms/1.3.5/realms-1.3.5.jar:\
            libraries/org/apache/commons/commons-compress/1.8.1/commons-compress-1.8.1.jar:\
            libraries/org/apache/httpcomponents/httpclient/4.3.3/httpclient-4.3.3.jar:\
            libraries/commons-logging/commons-logging/1.1.3/commons-logging-1.1.3.jar:\
            libraries/org/apache/httpcomponents/httpcore/4.3.2/httpcore-4.3.2.jar:\
            libraries/java3d/vecmath/1.3.1/vecmath-1.3.1.jar:\
            libraries/net/sf/trove4j/trove4j/3.0.3/trove4j-3.0.3.jar:\
            libraries/com/ibm/icu/icu4j-core-mojang/51.2/icu4j-core-mojang-51.2.jar:\
            libraries/net/sf/jopt-simple/jopt-simple/4.5/jopt-simple-4.5.jar:\
            libraries/com/paulscode/codecjorbis/20101023/codecjorbis-20101023.jar:\
            libraries/com/paulscode/codecwav/20101023/codecwav-20101023.jar:\
            libraries/com/paulscode/libraryjavasound/20101123/libraryjavasound-20101123.jar:\
            libraries/com/paulscode/librarylwjglopenal/20100824/librarylwjglopenal-20100824.jar:\
            libraries/com/paulscode/soundsystem/20120107/soundsystem-20120107.jar:\
            libraries/io/netty/netty-all/4.0.10.Final/netty-all-4.0.10.Final.jar:\
            libraries/com/google/guava/guava/15.0/guava-15.0.jar:\
            libraries/org/apache/commons/commons-lang3/3.1/commons-lang3-3.1.jar:\
            libraries/commons-io/commons-io/2.4/commons-io-2.4.jar:\
            libraries/commons-codec/commons-codec/1.9/commons-codec-1.9.jar:\
            libraries/net/java/jinput/jinput/2.0.5/jinput-2.0.5.jar:\
            libraries/net/java/jutils/jutils/1.0.0/jutils-1.0.0.jar:\
            libraries/com/google/code/gson/gson/2.2.4/gson-2.2.4.jar:\
            libraries/com/mojang/authlib/1.5.21/authlib-1.5.21.jar:\
            libraries/org/apache/logging/log4j/log4j-api/2.0-beta9/log4j-api-2.0-beta9.jar:\
            libraries/org/apache/logging/log4j/log4j-core/2.0-beta9/log4j-core-2.0-beta9.jar:\
            libraries/org/lwjgl/lwjgl/lwjgl/2.9.1/lwjgl-2.9.1.jar:\
            libraries/org/lwjgl/lwjgl/lwjgl_util/2.9.1/lwjgl_util-2.9.1.jar:\
            libraries/tv/twitch/twitch/5.16/twitch-5.16.jar:\
            versions/1.7.10/1.7.10.jar net.minecraft.launchwrapper.Launch --username saithiril --version 1.7.10-Forge --gameDir /home/saithiril/.minecraft/ --assetsDir assets --assetIndex 1.7.10 --uuid 00000000-0000-0000-0000-000000000000 --accessToken 00000000-0000-0000-0000-000000000000 --userProperties {} --userType mojang --tweakClass cpw.mods.fml.common.launcher.FMLTweaker";
//    std::cout << command << std::endl;
    proc.startDetached(QString::fromUtf8(command.c_str()));
}

std::string MainWindow::parse(std::string fileName) {
    Json::Value root;
    std::vector<std::string> libraries_list;

    std::ifstream config_doc(fileName.data(), std::ifstream::binary);
    config_doc >> root;

    const Json::Value libraries = root["libraries"];

    for ( int index = 0; index < libraries.size(); ++index ) {
        if(!libraries[index]["extract"])
            libraries_list.push_back(libraries[index]["name"].asString());
    }

    std::string temp = "";
    for(std::vector<std::string>::const_iterator it=libraries_list.begin(); it != libraries_list.end(); ++it) {
        temp += this->library_parse(*it) + ":";
    }

//    std::cout << libraries_list[0] << std::endl;
    std::cout << libraries_list.size() << std::endl;
    return temp;
}

std::string MainWindow::library_parse(std::string str) {
    char * temp = new char[str.size() + 1];
    std::vector<std::string> list;
    std::copy(str.begin(), str.end(), temp);
    temp[str.size()] = '\0';

    //std::cout << strtok(temp, ":") << std::endl;

    char * pch = strtok(temp, ":");
    while (pch != NULL) {
        list.push_back(pch);
        pch = strtok(NULL, ":");
    }

    std::string path = "libraries/" + this->replace(list[0], ".", "/") + "/";
    std::string filename = "";
    for(std::vector<std::string>::const_iterator it=list.begin() + 1; it != list.end(); ++it) {
        path += *it + "/";
        filename += *it + "-";
    }

    filename.replace(filename.size() - 1, 1, ".");
    path += filename + "jar";
    delete[] temp;
    return path;
}

std::string MainWindow::replace(std::string str, std::string separator, std::string param) {
    size_t pos;
    std::string result = str;
    while ((pos = result.find(separator)) != result.npos)
        result.replace(pos, separator.length(), param);
    return result;
}
