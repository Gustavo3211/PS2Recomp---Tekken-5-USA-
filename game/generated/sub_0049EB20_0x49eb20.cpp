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

// Function: sub_0049EB20
// Address: 0x49eb20 - 0x49ebf8
void sub_0049EB20_0x49eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EB20_0x49eb20");
#endif

    switch (ctx->pc) {
        case 0x49eb38u: goto label_49eb38;
        case 0x49eb74u: goto label_49eb74;
        default: break;
    }

    ctx->pc = 0x49eb20u;

    // 0x49eb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49eb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49eb24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49eb28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49eb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49eb2c: 0x8127a30  j           func_49E8C0
    ctx->pc = 0x49EB2Cu;
    ctx->pc = 0x49EB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EB2Cu;
    // 0x49eb30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E8C0u, 0x49EB2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49EB34u;
    // 0x49eb34: 0x0  nop
    ctx->pc = 0x49eb34u;
    // NOP
label_49eb38:
    // 0x49eb38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49eb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49eb3c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x49eb40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x49eb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x49eb44: 0x2450d680  addiu       $s0, $v0, -0x2980
    ctx->pc = 0x49eb44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x49eb48: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x49eb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x49eb4c: 0x26112378  addiu       $s1, $s0, 0x2378
    ctx->pc = 0x49eb4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9080));
    // 0x49eb50: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x49eb50u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F9F8u));
    // 0x49eb54: 0x2605237c  addiu       $a1, $s0, 0x237C
    ctx->pc = 0x49eb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9084));
    // 0x49eb58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x49eb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x49eb5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x49eb5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eb60: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x49eb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x49eb64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x49EB64u;
    {
        const bool branch_taken_0x49eb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB64u;
        // 0x49eb68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eb64) {
            ctx->pc = 0x49EB88u;
            goto label_49eb88;
        }
    }
    ctx->pc = 0x49EB6Cu;
    // 0x49eb6c: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x49EB6Cu;
    SET_GPR_U32(ctx, 31, 0x49EB74u);
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x49EB6Cu, 0x49EB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EB74u;
label_49eb74:
    // 0x49eb74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x49eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x49eb78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49eb7c: 0x2605237c  addiu       $a1, $s0, 0x237C
    ctx->pc = 0x49eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9084));
    // 0x49eb80: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49eb84: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x49eb84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_49eb88:
    // 0x49eb88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49eb8c: 0x240400d3  addiu       $a0, $zero, 0xD3
    ctx->pc = 0x49eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x49eb90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x49eb90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49eb94: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x49eb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x49eb98: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x49eb98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x49eb9c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x49eb9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49eba0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49eba4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x49eba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49eba8: 0xa45201b8  sh          $s2, 0x1B8($v0)
    ctx->pc = 0x49eba8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 440), (uint16_t)GPR_U32(ctx, 18));
    // 0x49ebac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x49ebacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49ebb0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ebb4: 0xa46001ba  sh          $zero, 0x1BA($v1)
    ctx->pc = 0x49ebb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 442), (uint16_t)GPR_U32(ctx, 0));
    // 0x49ebb8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ebbc: 0xa440014a  sh          $zero, 0x14A($v0)
    ctx->pc = 0x49ebbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 330), (uint16_t)GPR_U32(ctx, 0));
    // 0x49ebc0: 0x3e00008  jr          $ra
    ctx->pc = 0x49EBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EBC0u;
        // 0x49ebc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EBC8u;
    // 0x49ebc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49ebc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49ebcc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x49ebccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49ebd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ebd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ebd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ebd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ebd8: 0x8127ace  j           func_49EB38
    ctx->pc = 0x49EBD8u;
    ctx->pc = 0x49EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EBD8u;
    // 0x49ebdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB38u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_49eb38;
    ctx->pc = 0x49EBE0u;
    // 0x49ebe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49ebe4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x49ebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49ebe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ebe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ebec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ebecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ebf0: 0x8127ace  j           func_49EB38
    ctx->pc = 0x49EBF0u;
    ctx->pc = 0x49EBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EBF0u;
    // 0x49ebf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB38u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_49eb38;
    ctx->pc = 0x49EBF8u;
}
