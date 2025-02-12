//
// Created by Ing Brayan Martinez on 15/12/2022.
//
#include "Util-Data.h"

namespace Util {

    auto GetData() -> std::vector<int> {
        std::vector<int> data;
        data.push_back(6);
        data.push_back(2);
        data.push_back(26);
        data.push_back(12);
        data.push_back(1);
        data.push_back(5);
        data.push_back(8);
        data.push_back(14);
        data.push_back(10);
        data.push_back(17);
        data.push_back(32);

        return data;
    }

    auto PrintData(std::vector<int> data) -> void {
        std::vector<int>::iterator it;

        for(it = data.begin(); it != data.end(); it++) {
            std::cout<< *it <<" ";
        }

        std::cout << std::endl;
    }
}
