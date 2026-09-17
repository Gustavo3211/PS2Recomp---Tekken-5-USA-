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

// Function: sub_00294A50
// Address: 0x294a50 - 0x294aa8
void sub_00294A50_0x294a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294A50_0x294a50");
#endif

    switch (ctx->pc) {
        case 0x294a7cu: goto label_294a7c;
        default: break;
    }

    ctx->pc = 0x294a50u;

    // 0x294a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294a54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294a58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x294a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a5c: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x294a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x294a60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x294a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x294a64: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x294a64u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x294a68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x294a68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a6c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x294a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x294a70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294a74: 0xc0a52aa  jal         func_294AA8
    ctx->pc = 0x294A74u;
    SET_GPR_U32(ctx, 31, 0x294A7Cu);
    ctx->pc = 0x294A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A74u;
    // 0x294a78: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294AA8u, 0x294A74u, 0x294A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A7Cu;
label_294a7c:
    // 0x294a7c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x294a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x294a80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294A80u;
    {
        const bool branch_taken_0x294a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A80u;
        // 0x294a84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a80) {
            ctx->pc = 0x294A98u;
            goto label_294a98;
        }
    }
    ctx->pc = 0x294A88u;
    // 0x294a88: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x294a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294a8c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x294a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x294a90: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x294a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x294a94: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x294a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_294a98:
    // 0x294a98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x294a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x294a9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x294AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AA0u;
        // 0x294aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294AA8u;
}
