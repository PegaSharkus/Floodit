#ifndef SUBJECT_H
#define SUBJECT_H

#include <set>

/*!
 * \brief Guillaume Jouret's namespace.
 */
namespace G40853 {

class Observer;

/*!
 * \brief Abstract class that represents a subject of the Design Pattern Observer.
 */
class Subject{
protected:
    std::set<Observer *> observers_;
    /*!< List of the \ref Observer of \ref Subject. */

public:
    virtual ~Subject() = default;

    /*!
     * \brief Abstract method allowing the subject to add a new \ref Observer.
     * \param observer the observer to add
     */
    virtual void addObserver(Observer * observer);

    /*!
     * \brief Abstract method allowing to delete an \ref Observer.
     * \param observer the observer to delete
     */
    virtual void removeObserver(Observer * observer);

protected:
    Subject() = default;

    /*!
     * \brief Abstract method allowing to force an update of all the observers.
     */
    virtual void notifyObservers();
};

} // namespace G40853

#endif // SUBJECT_H
