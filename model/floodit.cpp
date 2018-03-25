#include "floodit.h"
#include "json/json.h"
#include <iostream>

using namespace G40853;

FloodIt::FloodIt():colorNb_{0},moveNb_{0}, record_{0}, ended_{0}{}

void FloodIt::setFloodIt(std::string name, unsigned height, unsigned width, unsigned colorNb){
    name_ = name;
    colorNb_ = colorNb;
    moveNb_ = 0;
    record_ = 0;
    nameRec_ = "";
    ended_ = 0;
    board_.setBoard(height, width, colorNb);
}

std::string FloodIt::getName() const{
    return name_;
}

std::string FloodIt::getNameRec() const{
    return nameRec_;
}

Board FloodIt::getBoard() const{
    return board_;
}

unsigned FloodIt::getColorNb() const{
    return colorNb_;
}

int FloodIt::getMoveNb() const{
    return moveNb_;
}

int FloodIt::getRecord() const{
    return record_;
}

bool FloodIt::isEnded() const{
    return ended_;
}

void FloodIt::paintZone(Color color){
    if(board_.getBoard().at(Position(0,0)) != color){
        board_.paintStain(color);
        ++moveNb_;
        board_.traceStain();
        if(board_.isFull()){
            ended_ = 1;
            readScore();
        }
        notifyObservers();
    }
}

void FloodIt::readScore(){
    JSONValue saves, save;
    std::string json {"h"+std::to_string(board_.getHeight())
                +"w"+std::to_string(board_.getWidth())
                +"c"+std::to_string(colorNb_)};
    std::string path {"floodit.json"};
    if(fileExists(path)){
        try{
            saves.load(path);
            int i {0};
            bool found {0};
            while(i < saves.size() && !found){
                save = saves[i];
                if(json.compare(save["settings"].asString()) == 0){
                    found = 1;
                    if(moveNb_ < save["score"].asInt()){
                        saves.erase(i);
                        save.decode("{\"settings\": \""+json+"\", \"name\": \""+name_+"\", \"score\": "
                                    +std::to_string(moveNb_)+"}");
                        saves.push_back(save);
                    } else{
                        record_ = save["score"].asInt();
                        nameRec_ = save["name"].asString();
                    }
                }
                ++i;
            }
            if(!found){
                save.decode("{\"settings\": \""+json+"\", \"name\": \""+name_+"\", \"score\": "
                            +std::to_string(moveNb_)+"}");
                saves.push_back(save);

            }
        } catch(const JSONDecodeException& e){
            std::cout << e.what() << std::endl;
        } catch(const JSONException& e){
            std::cout << e.what() << std::endl;
        }
    } else{
        saves.decode("[{\"settings\": \""+json+"\", \"name\": \""+name_+"\", \"score\": "
                     +std::to_string(moveNb_)+"}]");
    }
    saves.save(path);
}
