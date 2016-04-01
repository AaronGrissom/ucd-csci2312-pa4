//class GamingException 
    //protected:
        /*virtual*/ void Gaming::GamingException::__print_args(std::ostream &os) const = 0
        {
            
        }
        void Gaming::GamingException::setName(std::string name)
        {
            
        }
    //public:
        /*friend*/ std::ostream &Gaming::GamingException::operator<<(std::ostream &os, const GamingException &ex)
        {
            
        }

//class DimensionEx : public GamingException {
    //public:
        Gaming::DimensionEx::DimensionEx(unsigned expWidth, unsigned expHeight, unsigned width, unsigned height)
        {
            
        }
        unsigned  Gaming::DimensionEx::getExpWidth() const
        {
            
        }
        unsigned  Gaming::DimensionEx::getExpHeight() const
        {
            
        }
        unsigned  Gaming::DimensionEx::getWidth() const
        {
            
        }
        unsigned  Gaming::DimensionEx::getHeight() const
        {
            
        }

//class InsufficientDimensionsEx : public DimensionEx {
    //private:
        void Gaming::InsufficientDimensionsEx::__print_args(std::ostream &os) const override
        {
            
        }
    //public:
        Gaming::InsufficientDimensionsEx::InsufficientDimensionsEx(unsigned minWidth, unsigned minHeight, unsigned width, unsigned height)
        {
            
        }
//class OutOfBoundsEx : public DimensionEx {
    //private:
        void Gaming::OutOfBoundsEx::__print_args(std::ostream &os) const override
        {
            
        }
    //public:
        Gaming::InsufficientDimensionsEx::OutOfBoundsEx(unsigned maxWidth, unsigned maxHeight, unsigned width, unsigned height)
        {
            
        }

//class PositionEx : public GamingException {
    //protected:
        void Gaming::PositionEx::__print_args(std::ostream &os) const override
        {
            
        }
    //public:
        Gaming::PositionE::PositionEx(unsigned x, unsigned y)
        {
            
        }
// to use in population methods
//class PositionNonemptyEx : public PositionEx {
    //public:
        Gaming::PositionNonemptyEx::PositionNonemptyEx(unsigned x, unsigned y)
        {
            
        }
        
// to use in Game Piece getter
//class PositionEmptyEx : public PositionEx {
    //public:
        Gaming::PositionEmptyEx::PositionEmptyEx(unsigned x, unsigned y)
        {
            
        }
        
// to use with position randomizer
//class PosVectorEmptyEx : public GamingException {
    //protected:
        void Gaming::PosVectorEmptyEx::__print_args(std::ostream &os) const override
        {
            
        }
    //public:
        Gaming::PosVectorEmptyEx::PosVectorEmptyEx()
        {
            
        }