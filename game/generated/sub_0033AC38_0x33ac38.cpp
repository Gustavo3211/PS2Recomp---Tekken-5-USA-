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

// Function: sub_0033AC38
// Address: 0x33ac38 - 0x33ad08
void sub_0033AC38_0x33ac38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AC38_0x33ac38");
#endif

    switch (ctx->pc) {
        case 0x33ac90u: goto label_33ac90;
        case 0x33acdcu: goto label_33acdc;
        default: break;
    }

    ctx->pc = 0x33ac38u;

    // 0x33ac38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x33ac38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x33ac3c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x33ac3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x33ac40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33ac40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ac44: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x33ac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x33ac48: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x33ac48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33ac4c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x33ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33ac50: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x33ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33ac54: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x33ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x33ac58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33ac58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ac5c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x33ac5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x33ac60: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x33ac60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33ac64: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x33ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x33ac68: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x33ac68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ac6c: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x33ac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x33ac70: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x33ac70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33ac74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x33ac74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x33ac78: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x33ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x33ac7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x33ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x33ac80: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x33ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x33ac84: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x33ac84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x33ac88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x33ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33ac8c: 0x0  nop
    ctx->pc = 0x33ac8cu;
    // NOP
label_33ac90:
    // 0x33ac90: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x33ac90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x33ac94: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x33ac94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x33ac98: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x33ac98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ac9c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x33ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x33aca0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x33aca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x33aca4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33aca8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x33aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x33acac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33acacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33acb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33acb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x33acb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33acb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33acbc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x33acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33acc0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x33acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x33acc4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x33acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x33acc8: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33ACC8u;
    {
        const bool branch_taken_0x33acc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x33acc8) {
            ctx->pc = 0x33ACCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33ACC8u;
            // 0x33accc: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33ACE8u;
            goto label_33ace8;
        }
    }
    ctx->pc = 0x33ACD0u;
    // 0x33acd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33acd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33acd4: 0xc0ceb42  jal         func_33AD08
    ctx->pc = 0x33ACD4u;
    SET_GPR_U32(ctx, 31, 0x33ACDCu);
    ctx->pc = 0x33ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ACD4u;
    // 0x33acd8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AD08u, 0x33ACD4u, 0x33ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ACDCu;
label_33acdc:
    // 0x33acdc: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x33ACDCu;
    {
        const bool branch_taken_0x33acdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACDCu;
        // 0x33ace0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33acdc) {
            ctx->pc = 0x33AC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ac90;
        }
    }
    ctx->pc = 0x33ACE4u;
    // 0x33ace4: 0x0  nop
    ctx->pc = 0x33ace4u;
    // NOP
label_33ace8:
    // 0x33ace8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x33ace8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33acec: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x33acecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33acf0: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x33acf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33acf4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x33acf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33acf8: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x33acf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x33acfc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x33acfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33ad00: 0x3e00008  jr          $ra
    ctx->pc = 0x33AD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD00u;
        // 0x33ad04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AD08u;
}
