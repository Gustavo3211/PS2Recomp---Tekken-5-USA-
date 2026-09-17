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

// Function: sub_002FAFB8
// Address: 0x2fafb8 - 0x2fb018
void sub_002FAFB8_0x2fafb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAFB8_0x2fafb8");
#endif

    switch (ctx->pc) {
        case 0x2fafd8u: goto label_2fafd8;
        default: break;
    }

    ctx->pc = 0x2fafb8u;

    // 0x2fafb8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2fafb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fafbc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2fafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fafc0: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FAFC0u;
    {
        const bool branch_taken_0x2fafc0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFC0u;
        // 0x2fafc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafc0) {
            ctx->pc = 0x2FB00Cu;
            goto label_2fb00c;
        }
    }
    ctx->pc = 0x2FAFC8u;
    // 0x2fafc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fafc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fafcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fafccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fafd0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2fafd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fafd4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2fafd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2fafd8:
    // 0x2fafd8: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x2fafd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2fafdc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2fafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fafe0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fafe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fafe4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fafe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fafe8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2fafe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fafec: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2fafecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2faff0: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x2faff0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2faff4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2faff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2faff8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2faff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2faffc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2faffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fb000: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2fb000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fb004: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2FB004u;
    {
        const bool branch_taken_0x2fb004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB004u;
        // 0x2fb008: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb004) {
            ctx->pc = 0x2FAFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fafd8;
        }
    }
    ctx->pc = 0x2FB00Cu;
label_2fb00c:
    // 0x2fb00c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB014u;
    // 0x2fb014: 0x0  nop
    ctx->pc = 0x2fb014u;
    // NOP
    ctx->pc = 0x2fb018u;
}
