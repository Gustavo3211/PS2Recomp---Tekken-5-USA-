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

// Function: sub_0031B548
// Address: 0x31b548 - 0x31b5a0
void sub_0031B548_0x31b548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B548_0x31b548");
#endif

    switch (ctx->pc) {
        case 0x31b564u: goto label_31b564;
        default: break;
    }

    ctx->pc = 0x31b548u;

    // 0x31b548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b54c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31b550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31b558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31b558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31b55c: 0xc0c6b92  jal         func_31AE48
    ctx->pc = 0x31B55Cu;
    SET_GPR_U32(ctx, 31, 0x31B564u);
    ctx->pc = 0x31B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B55Cu;
    // 0x31b560: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE48u, 0x31B55Cu, 0x31B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B564u;
label_31b564:
    // 0x31b564: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x31b564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x31b568: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x31b568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x31b56c: 0x24422480  addiu       $v0, $v0, 0x2480
    ctx->pc = 0x31b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x31b570: 0x24a514e0  addiu       $a1, $a1, 0x14E0
    ctx->pc = 0x31b570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5344));
    // 0x31b574: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x31b574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x31b578: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31b578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b57c: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x31b57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x31b580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b584: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31b584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31b588: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x31b588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x31b58c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31b58cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31b590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b594: 0x80c6ce2  j           func_31B388
    ctx->pc = 0x31B594u;
    ctx->pc = 0x31B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B594u;
    // 0x31b598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B388u;
    sub_0031B388_0x31b388(rdram, ctx, runtime); return;
    ctx->pc = 0x31B59Cu;
    // 0x31b59c: 0x0  nop
    ctx->pc = 0x31b59cu;
    // NOP
    ctx->pc = 0x31b5a0u;
}
