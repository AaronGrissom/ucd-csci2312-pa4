//class Resource : public Piece {
    //public:
        Gaming::Resource::Resource(const Game &g, const Position &p, double capacity);=
        {
            
        }
        Gamine::Resource::~Resource()
        {
            
        }
        virtual double Gaming::Resource::consume()
        {
            
        }
        void Gaming::Resource::age() override final
        {
            
        }
        ActionType Gaming::Resource::takeTurn(const Surroundings &s) const override // TODO: Check Action type as variable return
        {
            
        }

        // note: these won't be called while resources don't move
        Piece Gaming::Resource::&operator*(Piece &other) override final
        {
            
        }
        Piece Gaming::Resource::&interact(Agent *) override final
        {
            
        }
        Piece Gaming::Resource::&interact(Resource *) override final // note: no interaction between resources
        {
            
        }