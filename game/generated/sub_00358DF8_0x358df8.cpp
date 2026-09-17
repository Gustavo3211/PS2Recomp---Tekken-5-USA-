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

// Function: sub_00358DF8
// Address: 0x358df8 - 0x358e30
void sub_00358DF8_0x358df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358DF8_0x358df8");
#endif

    ctx->pc = 0x358df8u;

    // 0x358df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358dfc: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x358dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x358e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358e04: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x358e04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x358e08: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x358e08u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x358e0c: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x358e0cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x358e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358e14: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x358e14u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x358e18: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x358e18u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x358e1c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x358e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x358e20: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x358e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x358e24: 0x80d83fc  j           func_360FF0
    ctx->pc = 0x358E24u;
    ctx->pc = 0x358E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E24u;
    // 0x358e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360FF0u, 0x358E24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358E2Cu;
    // 0x358e2c: 0x0  nop
    ctx->pc = 0x358e2cu;
    // NOP
    ctx->pc = 0x358e30u;
}
