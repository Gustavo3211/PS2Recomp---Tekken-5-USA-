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

// Function: sub_00359E18
// Address: 0x359e18 - 0x359e98
void sub_00359E18_0x359e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359E18_0x359e18");
#endif

    switch (ctx->pc) {
        case 0x359e48u: goto label_359e48;
        case 0x359e54u: goto label_359e54;
        default: break;
    }

    ctx->pc = 0x359e18u;

    // 0x359e18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359e1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359e20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x359e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x359e28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359e2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x359e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x359e30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x359e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x359e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x359e38: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x359e38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x359e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x359e40: 0xc0d6724  jal         func_359C90
    ctx->pc = 0x359E40u;
    SET_GPR_U32(ctx, 31, 0x359E48u);
    ctx->pc = 0x359E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359E40u;
    // 0x359e44: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359C90u, 0x359E40u, 0x359E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E48u;
label_359e48:
    // 0x359e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e4c: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x359E4Cu;
    SET_GPR_U32(ctx, 31, 0x359E54u);
    ctx->pc = 0x359E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359E4Cu;
    // 0x359e50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x359E4Cu, 0x359E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E54u;
label_359e54:
    // 0x359e54: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x359e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x359e58: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x359e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x359e5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x359e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e60: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x359e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x359e64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x359e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e68: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x359e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x359e6c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x359e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e70: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x359e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x359e74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359e78: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x359e78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x359e7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359e80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359e80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359e84: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x359e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x359e88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x359e88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359e8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x359e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359e90: 0x80d9322  j           func_364C88
    ctx->pc = 0x359E90u;
    ctx->pc = 0x359E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359E90u;
    // 0x359e94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364C88u, 0x359E90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359E98u;
}
