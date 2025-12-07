/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:55:31 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/07 18:54:07 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _data(NULL), _size(n)
{
    if (n > 0)
        _data = new T[n]();
}

template<typename T>
Array<T>::Array(const Array& other) : _data(NULL), _size(other._size)
{
    if (_size > 0)
	{
        _data = new T[_size];
        for (unsigned int i = 0; i < _size; ++i)
            _data[i] = other._data[i];
    }
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this == &other)
        return *this;

    delete[] _data;
    _size = other._size;
    _data = NULL;

    if (_size > 0)
	{
        _data = new T[_size];
        for (unsigned int i = 0; i < _size; ++i)
            _data[i] = other._data[i];
    }
    return *this;
}

template<typename T>
Array<T>::~Array()
{
    delete[] _data;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::out_of_range("Array index out of range");
    return _data[index];
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw std::out_of_range("Array index out of range");
    return _data[index];
}

template<typename T>
unsigned int Array<T>::size() const
{
    return _size;
}
