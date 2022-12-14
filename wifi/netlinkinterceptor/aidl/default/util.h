/*
 * Copyright (C) 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <android-base/macros.h>

#include <functional>

namespace android::nlinterceptor {

/**
 * Handy-dandy helper to get the size of a statically initialized array.
 *
 * \param N the array to get the size of.
 * \return the size of the array.
 */
template <typename T, size_t N>
size_t countof(T (&)[N]) {
    return N;
}

/**
 * Helper to check if socket is readable (POLLIN is set).
 *
 * \param revents pollfd.revents value to check.
 * \return true if socket is ready to read.
 */
bool isSocketReadable(short revents);

/**
 * Helper to check if socket is bad (POLLERR, POLLHUP or POLLNVAL is set).
 *
 * \param revents pollfd.revents value to check.
 * \return true if socket is bad.
 */
bool isSocketBad(short revents);

}  // namespace android::nlinterceptor
