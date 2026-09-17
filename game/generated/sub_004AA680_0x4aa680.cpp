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

// Function: sub_004AA680
// Address: 0x4aa680 - 0x4aa6f0
void sub_004AA680_0x4aa680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA680_0x4aa680");
#endif

    switch (ctx->pc) {
        case 0x4aa6a8u: goto label_4aa6a8;
        case 0x4aa6c0u: goto label_4aa6c0;
        default: break;
    }

    ctx->pc = 0x4aa680u;

    // 0x4aa680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aa680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aa684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aa684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aa688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aa688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aa68c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aa68cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa690: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aa690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aa694: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aa694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa698: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aa698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aa69c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aa69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aa6a0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AA6A0u;
    SET_GPR_U32(ctx, 31, 0x4AA6A8u);
    ctx->pc = 0x4AA6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA6A0u;
    // 0x4aa6a4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AA6A0u, 0x4AA6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA6A8u;
label_4aa6a8:
    // 0x4aa6a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa6a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa6ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa6b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa6b8: 0xc12a8f8  jal         func_4AA3E0
    ctx->pc = 0x4AA6B8u;
    SET_GPR_U32(ctx, 31, 0x4AA6C0u);
    ctx->pc = 0x4AA6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA6B8u;
    // 0x4aa6bc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA3E0u, 0x4AA6B8u, 0x4AA6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA6C0u;
label_4aa6c0:
    // 0x4aa6c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa6c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa6c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aa6c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa6cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa6d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aa6d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa6d4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aa6d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa6d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aa6d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aa6dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aa6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa6e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aa6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa6e4: 0x812a93e  j           func_4AA4F8
    ctx->pc = 0x4AA6E4u;
    ctx->pc = 0x4AA6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA6E4u;
    // 0x4aa6e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4F8u;
    sub_004AA4F8_0x4aa4f8(rdram, ctx, runtime); return;
    ctx->pc = 0x4AA6ECu;
    // 0x4aa6ec: 0x0  nop
    ctx->pc = 0x4aa6ecu;
    // NOP
    ctx->pc = 0x4aa6f0u;
}
