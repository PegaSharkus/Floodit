#ifndef POSITION_H
#define POSITION_H

/*!
 * \brief Guillaume Jouret's namespace.
 */
namespace G40853 {

/*!
 * \brief The Position class represents the position of a square in the \ref Board.
 */
class Position{
    unsigned x_;
    /*!< Absciss of the position. */

    unsigned y_;
    /*!< Ordinate of the position. */

public:
    /*!
     * \brief Position's constructor without argument.
     */
    Position();

    /*!
     * \brief Position's constructor
     * \param x the absciss of the position
     * \param y the ordinate of the position
     */
    Position(unsigned x, unsigned y);

    /*!
     * \brief Getter of the absciss.
     * \return the absciss of the position
     */
    inline unsigned getX() const;

    /*!
     * \brief Getter of the ordinate.
     * \return the ordinate of the position
     */
    inline unsigned getY() const;
};

//prototypes

/*!
 * \brief Equality test operator for \ref Position.
 * \param lhs the left member
 * \param rhs the right member
 * \return true if the two members of the comparison are equals, otherwise false
 */
inline bool operator==(const Position & lhs, const Position & rhs);

/*!
 * \brief Inequality test operator for \ref Position.
 * \param lhs the left member
 * \param rhs the right member
 * \return true if the two members of the comparison are differents, otherwise false
 */
inline bool operator!=(const Position & lhs, const Position & rhs);

/*!
 * \brief Comparison operator for \ref Position.
 * \param lhs the left member
 * \param rhs the right member
 * \return true if the left member of the comparison is strictly inferior, otherwise false
 */
inline bool operator<(const Position & lhs, const Position & rhs);

/*!
 * \brief Comparison operator for \ref Position.
 * \param lhs the left member
 * \param rhs the right member
 * \return true if the left member of the comparison is strictly superior, otherwise false
 */
inline bool operator>(const Position & lhs, const Position & rhs);

//inline functions
bool operator==(const Position & lhs, const Position & rhs){
    return (lhs.getX() == rhs.getX()) && (lhs.getY() == rhs.getY());
}

bool operator!=(const Position & lhs, const Position & rhs){
    return ! (lhs == rhs);
}

bool operator<(const Position & lhs, const Position & rhs){
    return lhs.getY() < rhs.getY() || (lhs.getY() == rhs.getY() && lhs.getX() < rhs.getX());
}

bool operator>(const Position & lhs, const Position & rhs){
    return rhs < lhs;
}

// inline methods
unsigned Position::getX() const{
    return x_;
}

unsigned Position::getY() const{
    return y_;
}

} // namespace G40853

#endif // POSITION_H
