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

// Function: sub_00323AB8
// Address: 0x323ab8 - 0x323af8
void sub_00323AB8_0x323ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323AB8_0x323ab8");
#endif

    switch (ctx->pc) {
        case 0x323ab8u: goto label_323ab8;
        case 0x323abcu: goto label_323abc;
        case 0x323ac0u: goto label_323ac0;
        case 0x323ac4u: goto label_323ac4;
        case 0x323ac8u: goto label_323ac8;
        case 0x323accu: goto label_323acc;
        case 0x323ad0u: goto label_323ad0;
        case 0x323ad4u: goto label_323ad4;
        case 0x323ad8u: goto label_323ad8;
        case 0x323adcu: goto label_323adc;
        case 0x323ae0u: goto label_323ae0;
        case 0x323ae4u: goto label_323ae4;
        case 0x323ae8u: goto label_323ae8;
        case 0x323aecu: goto label_323aec;
        case 0x323af0u: goto label_323af0;
        case 0x323af4u: goto label_323af4;
        default: break;
    }

    ctx->pc = 0x323ab8u;

label_323ab8:
    // 0x323ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_323abc:
    // 0x323abc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x323abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_323ac0:
    // 0x323ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_323ac4:
    // 0x323ac4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x323ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_323ac8:
    // 0x323ac8: 0x34460100  ori         $a2, $v0, 0x100
    ctx->pc = 0x323ac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_323acc:
    // 0x323acc: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x323accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_323ad0:
    // 0x323ad0: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_323ad4:
    if (ctx->pc == 0x323AD4u) {
        ctx->pc = 0x323AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AD0u;
        // 0x323ad4: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323AD8u;
        goto label_323ad8;
    }
    ctx->pc = 0x323AD0u;
    {
        const bool branch_taken_0x323ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x323ad0) {
            ctx->pc = 0x323AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323AD0u;
            // 0x323ad4: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323AD8u;
            goto label_323ad8;
        }
    }
    ctx->pc = 0x323AD8u;
label_323ad8:
    // 0x323ad8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x323ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_323adc:
    // 0x323adc: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x323adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_323ae0:
    // 0x323ae0: 0x40f809  jalr        $v0
label_323ae4:
    if (ctx->pc == 0x323AE4u) {
        ctx->pc = 0x323AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AE0u;
        // 0x323ae4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323AE8u;
        goto label_323ae8;
    }
    ctx->pc = 0x323AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323AE8u);
        ctx->pc = 0x323AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AE0u;
        // 0x323ae4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323AE0u, 0x323AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323AE8u;
label_323ae8:
    // 0x323ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323aec:
    // 0x323aec: 0x3e00008  jr          $ra
label_323af0:
    if (ctx->pc == 0x323AF0u) {
        ctx->pc = 0x323AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AECu;
        // 0x323af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323AF4u;
        goto label_323af4;
    }
    ctx->pc = 0x323AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AECu;
        // 0x323af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323AF4u;
label_323af4:
    // 0x323af4: 0x0  nop
    ctx->pc = 0x323af4u;
    // NOP
    ctx->pc = 0x323af8u;
}
