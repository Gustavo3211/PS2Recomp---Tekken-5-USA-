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

// Function: sub_00248AC8
// Address: 0x248ac8 - 0x248ad8
void sub_00248AC8_0x248ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248AC8_0x248ac8");
#endif

    ctx->pc = 0x248ac8u;

    // 0x248ac8: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x248ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x248acc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x248ACCu;
    {
        const bool branch_taken_0x248acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248ACCu;
        // 0x248ad0: 0x34630800  ori         $v1, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248acc) {
            ctx->pc = 0x248AE0u;
            return;
        }
    }
    ctx->pc = 0x248AD4u;
    // 0x248ad4: 0x0  nop
    ctx->pc = 0x248ad4u;
    // NOP
    ctx->pc = 0x248ad8u;
}
