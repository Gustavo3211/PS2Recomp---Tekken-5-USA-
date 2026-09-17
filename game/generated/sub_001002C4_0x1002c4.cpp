#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001002C4
// Address: 0x1002c4 - 0x1002d4
void sub_001002C4_0x1002c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001002C4_0x1002c4");
#endif

    switch (ctx->pc) {
        case 0x1002d0u: goto label_1002d0;
        default: break;
    }

    ctx->pc = 0x1002c4u;

    // 0x1002c4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1002c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1002c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1002c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002cc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1002ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1002d0:
    // 0x1002d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1002d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1002d4u;
}
