template <typename T>
class Array {
private:
  T* array;
  unsigned int size;

public:
  // canonical form
  Array();
  Array(unsigned int n);
  Array(const Array& other);
  Array<T>& operator=(const Array& other);
  ~Array();

  // Subscript operator
  T& operator[](unsigned int index);

  // Size function
  unsigned int size() const;
};
