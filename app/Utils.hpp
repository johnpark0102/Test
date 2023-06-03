#ifndef UTILS_HPP_
#define UTILS_HPP_

#include <chrono>
#include <iostream>
#include <string>

/**
 *
 * @brief namespace jsp
 *
 */
namespace jsp {

/**
 *
 * @brief Timer
 * @details 이름을 가져온다
 * @param[in] 없음
 * @param[out] 이름
 * @return std::string
 *
 */
class Timer {
 public:
  Timer() : start_(Clock::now()) {}

  ~Timer() noexcept {
    using namespace std::chrono;

    const auto end_ = Clock::now();
    std::cout << "Elapsed: ";
    std::cout << duration_cast<milliseconds>(end_ - start_).count();
    std::cout << "ms" << std::endl;
  }

 private:
  using Clock = std::chrono::steady_clock;

  const Clock::time_point start_;
};

/**
 *
 * @brief 메서드 설명
 * @details 이름 가져옴
 * @param[in] 없음
 * @param[out] 이름
 * @return std::string
 *
 */
inline std::string get_name() { return "JSP"; }

}  // namespace jsp

#endif  // !UTILS_HPP_
