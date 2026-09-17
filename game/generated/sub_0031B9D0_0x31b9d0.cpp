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

// Function: sub_0031B9D0
// Address: 0x31b9d0 - 0x31ba28
void sub_0031B9D0_0x31b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B9D0_0x31b9d0");
#endif

    switch (ctx->pc) {
        case 0x31b9ecu: goto label_31b9ec;
        default: break;
    }

    ctx->pc = 0x31b9d0u;

    // 0x31b9d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b9d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31b9d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b9dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31b9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31b9e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31b9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31b9e4: 0xc0c6b92  jal         func_31AE48
    ctx->pc = 0x31B9E4u;
    SET_GPR_U32(ctx, 31, 0x31B9ECu);
    ctx->pc = 0x31B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9E4u;
    // 0x31b9e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE48u, 0x31B9E4u, 0x31B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B9ECu;
label_31b9ec:
    // 0x31b9ec: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x31b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x31b9f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x31b9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x31b9f4: 0x244224a8  addiu       $v0, $v0, 0x24A8
    ctx->pc = 0x31b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9384));
    // 0x31b9f8: 0x24a51710  addiu       $a1, $a1, 0x1710
    ctx->pc = 0x31b9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5904));
    // 0x31b9fc: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x31b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x31ba00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31ba00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ba04: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x31ba04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x31ba08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31ba08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ba0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31ba0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31ba10: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x31ba10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31ba14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31ba14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ba18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31ba18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ba1c: 0x80c6ce2  j           func_31B388
    ctx->pc = 0x31BA1Cu;
    ctx->pc = 0x31BA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA1Cu;
    // 0x31ba20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B388u;
    sub_0031B388_0x31b388(rdram, ctx, runtime); return;
    ctx->pc = 0x31BA24u;
    // 0x31ba24: 0x0  nop
    ctx->pc = 0x31ba24u;
    // NOP
    ctx->pc = 0x31ba28u;
}
