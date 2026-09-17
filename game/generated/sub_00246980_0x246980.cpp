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

// Function: sub_00246980
// Address: 0x246980 - 0x246990
void sub_00246980_0x246980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246980_0x246980");
#endif

    ctx->pc = 0x246980u;

    // 0x246980: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246980u;
    {
        const bool branch_taken_0x246980 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x246984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246980u;
        // 0x246984: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246980) {
            ctx->pc = 0x246990u;
            return;
        }
    }
    ctx->pc = 0x246988u;
    // 0x246988: 0x8092690  j           func_249A40
    ctx->pc = 0x246988u;
    ctx->pc = 0x24698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246988u;
    // 0x24698c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249A40u;
    sub_00249A40_0x249a40(rdram, ctx, runtime); return;
    ctx->pc = 0x246990u;
}
