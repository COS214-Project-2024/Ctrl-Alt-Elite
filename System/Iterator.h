#ifndef ITERATOR_H
#define ITERATOR_H

/**
 * @class Iterator
 * @brief Abstract base class for creating an iterator for a collection.
 * 
 * This class defines the interface for an iterator that allows traversing
 * elements of a collection. The iterator must provide methods to check 
 * for the presence of more elements and to retrieve the next element.
 * 
 * @tparam T The type of elements that the iterator will traverse.
 */
template <typename T>
class Iterator 
{
public:
    /**
     * @brief Virtual destructor for the Iterator class.
     * 
     * Ensures proper cleanup of derived classes when deleted through 
     * a base class pointer.
     */
    virtual ~Iterator() = default;

    /**
     * @brief Checks if there are more elements in the collection.
     * 
     * @return true if there are more elements; false otherwise.
     */
    virtual bool hasNext() = 0;

    /**
     * @brief Retrieves the next element in the collection.
     * 
     * @return The next element of type T in the collection.
     * 
     * @throw std::out_of_range if there are no more elements to return.
     */
    virtual T next() = 0;
};

#endif // ITERATOR_H
