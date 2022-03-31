#include "Map.hpp"


namespace Snake {
    Map::Map(){};
    void Map::Set(int width, int height, int foodX, int foodY)
    {
        m_mapDimension = std::make_pair(width, height);
        m_foodPosition = std::make_pair(foodX, foodY);
    }

    bool Map::isPositionOutside(int x, int y) const
    {
        return x < 0 or y < 0 or x >= m_mapDimension.first or y >= m_mapDimension.second;
    }

} // namespace Snake
