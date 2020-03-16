#include "stub.h"

void Stub::stubModel(ModelBeer *model) {
    Recipe * recipe= new Recipe(3);
    recipe->addIngredient(new Ingredient("houblons","ingredient"));
    recipe->addIngredient(new Ingredient("malts","ingredient"));

    model->addBeer(new Beer("Duff",20,34,1060,"dorée","pils",recipe));
    model->addBeer(new Beer("Heineken",25,21,1060,"transparente","blonde",recipe));
    model->addBeer(new Beer("Guinness Draught",15,42,1060,"noie","stout",recipe));
    model->addBeer(new Beer("Guinness Foreign",15,75,1060,"noire","extra stout",recipe));
    model->addBeer(new Beer("Guinness Original",15,50,1060,"noire","stout",recipe));
    model->addBeer(new Beer("Guinness Dublin Porter",15,38,1060,"noire","porter",recipe));
    model->addBeer(new Beer("Guinness West Indies Porter",10,60,1060,"dorée","porter",recipe));
    model->addBeer(new Beer("Guinness Golden Ale",30,45,1060,"dorée","ale",recipe));
    model->addBeer(new Beer("Guinness Hop House 13 Lager",55,50,1060,"blanche","lager",recipe));
    model->addBeer(new Beer("Guinness Blonde American Lager",45,50,1060,"blanche","american lager",recipe));
    model->addBeer(new Beer("Guinness Nitro IPA",70,58,1060,"blanche","ipa",recipe));
    model->addBeer(new Beer("Guinness Special Export",20,80,1060,"noire","stout",recipe));
}
