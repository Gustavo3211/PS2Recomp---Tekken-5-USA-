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

// Function: sub_005018E8
// Address: 0x5018e8 - 0x501940
void sub_005018E8_0x5018e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005018E8_0x5018e8");
#endif

    switch (ctx->pc) {
        case 0x501918u: goto label_501918;
        default: break;
    }

    ctx->pc = 0x5018e8u;

    // 0x5018e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5018e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5018ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5018ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5018f0: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x5018f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x5018f4: 0x2610a6a0  addiu       $s0, $s0, -0x5960
    ctx->pc = 0x5018f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944416));
    // 0x5018f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5018f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5018fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5018fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x501900: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x501900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501904: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x501904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501908: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x501908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50190c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x50190cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x501910: 0xc140650  jal         func_501940
    ctx->pc = 0x501910u;
    SET_GPR_U32(ctx, 31, 0x501918u);
    ctx->pc = 0x501914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501910u;
    // 0x501914: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x501940u, 0x501910u, 0x501918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501918u;
label_501918:
    // 0x501918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x501918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50191c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x50191cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501920: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x501920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x501924: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x501924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501928: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x501928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50192c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50192cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x501930: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x501930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x501934: 0x814024c  j           func_500930
    ctx->pc = 0x501934u;
    ctx->pc = 0x501938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501934u;
    // 0x501938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500930u;
    sub_00500930_0x500930(rdram, ctx, runtime); return;
    ctx->pc = 0x50193Cu;
    // 0x50193c: 0x0  nop
    ctx->pc = 0x50193cu;
    // NOP
    ctx->pc = 0x501940u;
}
