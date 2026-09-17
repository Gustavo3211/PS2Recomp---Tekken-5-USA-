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

// Function: sub_002EAB58
// Address: 0x2eab58 - 0x2eabc8
void sub_002EAB58_0x2eab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAB58_0x2eab58");
#endif

    switch (ctx->pc) {
        case 0x2eab78u: goto label_2eab78;
        case 0x2eabacu: goto label_2eabac;
        default: break;
    }

    ctx->pc = 0x2eab58u;

    // 0x2eab58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eab58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eab5c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2eab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2eab60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eab60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eab64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eab64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eab6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2eab70: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2EAB70u;
    SET_GPR_U32(ctx, 31, 0x2EAB78u);
    ctx->pc = 0x2EAB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB70u;
    // 0x2eab74: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2EAB70u, 0x2EAB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB78u;
label_2eab78:
    // 0x2eab78: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x2eab78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2eab7c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eab80: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EAB80u;
    {
        const bool branch_taken_0x2eab80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eab80) {
            ctx->pc = 0x2EAB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAB80u;
            // 0x2eab84: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAB9Cu;
            goto label_2eab9c;
        }
    }
    ctx->pc = 0x2EAB88u;
    // 0x2eab88: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eab88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eab8c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eab90: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EAB90u;
    {
        const bool branch_taken_0x2eab90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eab90) {
            ctx->pc = 0x2EABA4u;
            goto label_2eaba4;
        }
    }
    ctx->pc = 0x2EAB98u;
    // 0x2eab98: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eab98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eab9c:
    // 0x2eab9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eab9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaba0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eaba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eaba4:
    // 0x2eaba4: 0xc0a160a  jal         func_285828
    ctx->pc = 0x2EABA4u;
    SET_GPR_U32(ctx, 31, 0x2EABACu);
    ctx->pc = 0x285828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285828u, 0x2EABA4u, 0x2EABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EABACu;
label_2eabac:
    // 0x2eabac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eabacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eabb0: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2eabb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x2eabb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eabb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eabb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eabb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eabbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EABBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABBCu;
        // 0x2eabc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EABBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EABC4u;
    // 0x2eabc4: 0x0  nop
    ctx->pc = 0x2eabc4u;
    // NOP
    ctx->pc = 0x2eabc8u;
}
