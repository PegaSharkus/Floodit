#ifndef OBSERVER_H
#define OBSERVER_H

/*!
 * \brief Guillaume Jouret's namespace.
 */
namespace G40853 {

class Subject;

/*!
 * \brief Abstract class that represents an observer of the Design Pattern Observer.
 */
class Observer{
public:
    /*!
     * \brief Virtual Method allowing to the observer to update his data on his \ref Subject.
     * \param subject the subject of the observer
     */
    virtual void update(Subject * subject) = 0;

    virtual ~Observer() = default;
};

} // namespace G40853

#endif // OBSERVER_H
