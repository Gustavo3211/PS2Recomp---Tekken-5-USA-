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

// Function: sub_0033EAB0
// Address: 0x33eab0 - 0x33eaf8
void sub_0033EAB0_0x33eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EAB0_0x33eab0");
#endif

    switch (ctx->pc) {
        case 0x33eaccu: goto label_33eacc;
        default: break;
    }

    ctx->pc = 0x33eab0u;

    // 0x33eab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33eab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33eab4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x33eab4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eab8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33eab8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eabc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33eabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33eac0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33eac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33eac4: 0xc0c7932  jal         func_31E4C8
    ctx->pc = 0x33EAC4u;
    SET_GPR_U32(ctx, 31, 0x33EACCu);
    ctx->pc = 0x33EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EAC4u;
    // 0x33eac8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E4C8u, 0x33EAC4u, 0x33EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EACCu;
label_33eacc:
    // 0x33eacc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x33ead0: 0x24632bb8  addiu       $v1, $v1, 0x2BB8
    ctx->pc = 0x33ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11192));
    // 0x33ead4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33ead4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ead8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x33ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x33eadc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x33eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x33eae0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33eae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33eae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33eae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33eae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33eae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33eaec: 0x80cf1da  j           func_33C768
    ctx->pc = 0x33EAECu;
    ctx->pc = 0x33EAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EAECu;
    // 0x33eaf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C768u;
    sub_0033C768_0x33c768(rdram, ctx, runtime); return;
    ctx->pc = 0x33EAF4u;
    // 0x33eaf4: 0x0  nop
    ctx->pc = 0x33eaf4u;
    // NOP
    ctx->pc = 0x33eaf8u;
}
