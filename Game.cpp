/* included in namespace, why
    class Piece;
    class Agent;
    class Strategy;
    class DefaultAgentStrategy;
*/
//class Game {
    //private:
        void Gaming::Game::populate() // populate the grid (used in automatic random initialization of a Game)
        {
            
        }
    //public:
        Gaming::Game::Game()
        {
            
        }
        Gaming::Game::Game(unsigned width, unsigned height, bool manual = true) // note: manual population by default
        {
            
        }
        Gaming::Game::Game(const Game &another)
        {
            
        }
        Gaming::Game::Game Gaming::Game::&operator=(const Game &other) = delete
        {
            
        }
        Gaming::Game::~Game()
        {
            
        }
        // getters
            unsigned int Gaming::Game::getNumPieces() const
            {
                
            }
            unsigned int Gaming::Game::getNumAgents() const
            {
                
            }
            unsigned int Gaming::Game::getNumSimple() const
            {
                
            }
            unsigned int Gaming::Game::getNumStrategic() const
            {
                
            }
            unsigned int Gaming::Game::getNumResources() const
            {
                
            }
            const Gaming::Piece Gaming::Game::*getPiece(unsigned int x, unsigned int y) const
            {
                
            }
        // grid population methods
            void Gaming::Game::addSimple(const Position &position)
            {
                
            }
            void Gaming::Game::addSimple(const Position &position, double energy) // used for testing only
            {
                
            }
            void Gaming::Game::addSimple(unsigned x, unsigned y)
            {
                
            }
            void Gaming::Game::addSimple(unsigned x, unsigned y, double energy)
            {
                
            }
            void Gaming::Game::addStrategic(const Position &position, Gaming::Strategy *s = new Gaming::DefaultAgentStrategy())
            {
                
            }
            void Gaming::Game::addStrategic(unsigned x, unsigned y, Gaming::Strategy *s = new Gaming::DefaultAgentStrategy())
            {
                
            }
            void Gaming::Game::addFood(const Position &position)
            {
                
            }
            void Gaming::Game::addFood(unsigned x, unsigned y)
            {
                
            }
            void Gaming::Game::addAdvantage(const Position &position)
            {
                
            }
            void Gaming::Game::addAdvantage(unsigned x, unsigned y)
            {
                
            }
            const Surroundings Gaming::Game::getSurroundings(const Position &pos) const
            {
                
            }
        // gameplay methods
            static const ActionType Gaming::Game::reachSurroundings(const Position &from, const Position &to) // note: STAY by default
            {
                
            }
            bool Gaming::Game::isLegal(const ActionType &ac, const Position &pos) const
            {
                
            }
            const Position Gaming::Game::move(const Position &pos, const ActionType &ac) const // note: assumes legal, use with isLegal()
            {
                
            }
            void Gaming::Game::round()   // play a single round
            {
                
            }
            void Gaming::Game::play(bool verbose = false)    // play game until over
            {
                
            }
            /*friend*/ std::ostream &operator<<(std::ostream &os, const Game &game)
            {
                
            }