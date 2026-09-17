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

// Function: sub_00503AF0
// Address: 0x503af0 - 0x503b30
void sub_00503AF0_0x503af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503AF0_0x503af0");
#endif

    ctx->pc = 0x503af0u;

    // 0x503af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503af4: 0x3087007f  andi        $a3, $a0, 0x7F
    ctx->pc = 0x503af4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x503af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x503afc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x503afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x503b00: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x503b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x503b04: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x503b04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x503b08: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x503b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x503b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x503b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x503b10: 0x2484bf00  addiu       $a0, $a0, -0x4100
    ctx->pc = 0x503b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950656));
    // 0x503b14: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x503b14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x503b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x503b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503b1c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x503b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x503b20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x503b20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503b24: 0x8145472  j           func_5151C8
    ctx->pc = 0x503B24u;
    ctx->pc = 0x503B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503B24u;
    // 0x503b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5151C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5151C8u, 0x503B24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x503B2Cu;
    // 0x503b2c: 0x0  nop
    ctx->pc = 0x503b2cu;
    // NOP
    ctx->pc = 0x503b30u;
}
