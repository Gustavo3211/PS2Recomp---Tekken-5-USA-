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

// Function: sub_0033EA70
// Address: 0x33ea70 - 0x33eab0
void sub_0033EA70_0x33ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EA70_0x33ea70");
#endif

    switch (ctx->pc) {
        case 0x33ea88u: goto label_33ea88;
        default: break;
    }

    ctx->pc = 0x33ea70u;

    // 0x33ea70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33ea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33ea74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33ea74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ea78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33ea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33ea7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33ea7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33ea80: 0xc0c7916  jal         func_31E458
    ctx->pc = 0x33EA80u;
    SET_GPR_U32(ctx, 31, 0x33EA88u);
    ctx->pc = 0x33EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EA80u;
    // 0x33ea84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E458u, 0x33EA80u, 0x33EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EA88u;
label_33ea88:
    // 0x33ea88: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x33ea8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33ea8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33ea90: 0x24632bb8  addiu       $v1, $v1, 0x2BB8
    ctx->pc = 0x33ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11192));
    // 0x33ea94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33ea94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ea98: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x33ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x33ea9c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x33ea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x33eaa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33eaa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33eaa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33eaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33eaa8: 0x80cf1da  j           func_33C768
    ctx->pc = 0x33EAA8u;
    ctx->pc = 0x33EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EAA8u;
    // 0x33eaac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C768u;
    sub_0033C768_0x33c768(rdram, ctx, runtime); return;
    ctx->pc = 0x33EAB0u;
}
