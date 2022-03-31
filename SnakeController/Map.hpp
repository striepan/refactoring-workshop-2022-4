#ifndef SNAKE_MAP_HPP
#define SNAKE_MAP_HPP
#include <utility>


namespace Snake {

class Map
{
public:
    std::pair<int, int> m_mapDimension;
    std::pair<int, int> m_foodPosition;

public:
    Map();
    void Set(int width, int height, int foodX, int foodY);
    bool isPositionOutside(int x, int y) const;



};

} // namespace Snake

#endif // SNAKE_MAP_HPP
