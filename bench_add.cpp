#include "benchmark/benchmark.h"

#include "my_add.hpp"

static void BM_my_add(benchmark::State &state) {
    for (auto _ : state)
        my_add(state.range(0), state.range(1));
}

BENCHMARK(BM_my_add)->Args({1,2})->Args({10241024,10241024});

BENCHMARK_MAIN();
