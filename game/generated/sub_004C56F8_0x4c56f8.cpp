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

// Function: sub_004C56F8
// Address: 0x4c56f8 - 0x4c5750
void sub_004C56F8_0x4c56f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C56F8_0x4c56f8");
#endif

    switch (ctx->pc) {
        case 0x4c5724u: goto label_4c5724;
        case 0x4c5738u: goto label_4c5738;
        default: break;
    }

    ctx->pc = 0x4c56f8u;

    // 0x4c56f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c56f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c56fc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c5700: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c5700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c5704: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c5704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c5708: 0x8c430efc  lw          $v1, 0xEFC($v0)
    ctx->pc = 0x4c5708u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0EFCu));
    // 0x4c570c: 0x8465015e  lh          $a1, 0x15E($v1)
    ctx->pc = 0x4c570cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 350)));
    // 0x4c5710: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5710u;
    {
        const bool branch_taken_0x4c5710 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5710u;
        // 0x4c5714: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5710) {
            ctx->pc = 0x4C5724u;
            goto label_4c5724;
        }
    }
    ctx->pc = 0x4C5718u;
    // 0x4c5718: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4c5718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4c571c: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4C571Cu;
    SET_GPR_U32(ctx, 31, 0x4C5724u);
    ctx->pc = 0x4C5720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C571Cu;
    // 0x4c5720: 0xa440f9ac  sh          $zero, -0x654($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965676), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4C571Cu, 0x4C5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5724u;
label_4c5724:
    // 0x4c5724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c5724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c5728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c572c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c572cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c5730: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4C5730u;
    ctx->pc = 0x4C5734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5730u;
    // 0x4c5734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4C5738u;
label_4c5738:
    // 0x4c5738: 0x248301bc  addiu       $v1, $a0, 0x1BC
    ctx->pc = 0x4c5738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
    // 0x4c573c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c573cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c5740: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c5740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c5744: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c5744u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c5748: 0x3e00008  jr          $ra
    ctx->pc = 0x4C5748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5748u;
        // 0x4c574c: 0xa480016a  sh          $zero, 0x16A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 362), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C5748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C5750u;
}
