#include <vector>

// Forward declaration of Component class
class Component;

class GameObject {
public:
    std::vector<Component*> components;
};

class Component {
public:
    virtual void update() = 0;
};

class RenderComponent : public Component {
public:
    void update() override {
        // Render logic
    }
};

class PositionComponent : public Component {
public:
    float x, y;
    void update() override {
        // Update position logic
    }
};

int main() {
    GameObject playerObject;
    playerObject.components.push_back(new PositionComponent());
    playerObject.components.push_back(new RenderComponent());

    for (auto component : playerObject.components) {
        component->update();
    }

    return 0;
}
