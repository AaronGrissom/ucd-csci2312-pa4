/* included in namespace, why
    class Resource;
*/
//class Piece {
    protected:
        virtual void Gaming::Piece::print(std::ostream &os) const = 0
        {
            
        }
    public:
        Gaming::Piece::Piece(const Game &g, const Position &p)
        {
            
        }
        virtual Gaming::Piece::~Piece()
        {
            
        }
        virtual void Gaming::Piece::age() = 0
        {
            
        }
        virtual bool Gaming::Piece::isViable() const = 0
        {
            
        }
        virtual PieceType Gaming::Piece::getType() const = 0
        {
            
        }
        virtual ActionType Gaming::Piece::takeTurn(const Surroundings &surr) const = 0 // note: doesn't actually change the object
        {
            
        }
        virtual Piece Gaming::Piece::&operator*(Piece &other) = 0
        {
            
        }
        virtual Piece Gaming::Piece::&interact(Agent *) = 0
        {
            
        }
        virtual Piece Gaming::Piece::&interact(Gaming::Resource *) = 0
        {
            
        }
        /*friend*/ std::ostream Gaming::Piece::&operator<<(std::ostream &os, const Piece &piece)
        {
            
        }
