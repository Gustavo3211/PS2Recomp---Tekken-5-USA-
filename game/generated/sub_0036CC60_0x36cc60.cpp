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

// Function: sub_0036CC60
// Address: 0x36cc60 - 0x36cd68
void sub_0036CC60_0x36cc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CC60_0x36cc60");
#endif

    switch (ctx->pc) {
        case 0x36cc84u: goto label_36cc84;
        case 0x36cc9cu: goto label_36cc9c;
        case 0x36cce8u: goto label_36cce8;
        default: break;
    }

    ctx->pc = 0x36cc60u;

    // 0x36cc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36cc64: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36cc68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36cc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36cc6c: 0x24506fe8  addiu       $s0, $v0, 0x6FE8
    ctx->pc = 0x36cc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28648));
    // 0x36cc70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6FE8u));
    // 0x36cc74: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36CC74u;
    {
        const bool branch_taken_0x36cc74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC74u;
        // 0x36cc78: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cc74) {
            ctx->pc = 0x36CC9Cu;
            goto label_36cc9c;
        }
    }
    ctx->pc = 0x36CC7Cu;
    // 0x36cc7c: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36CC7Cu;
    SET_GPR_U32(ctx, 31, 0x36CC84u);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36CC7Cu, 0x36CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CC84u;
label_36cc84:
    // 0x36cc84: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36cc84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36cc88: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36cc88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36cc8c: 0x24a5dab0  addiu       $a1, $a1, -0x2550
    ctx->pc = 0x36cc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957744));
    // 0x36cc90: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36cc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36cc94: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36CC94u;
    SET_GPR_U32(ctx, 31, 0x36CC9Cu);
    ctx->pc = 0x36CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CC94u;
    // 0x36cc98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36CC94u, 0x36CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CC9Cu;
label_36cc9c:
    // 0x36cc9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36cc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36cca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cca4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36cca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36cca8: 0x3e00008  jr          $ra
    ctx->pc = 0x36CCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CCA8u;
        // 0x36ccac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CCB0u;
    // 0x36ccb0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x36ccb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ccb4: 0x5200029  bltz        $t1, . + 4 + (0x29 << 2)
    ctx->pc = 0x36CCB4u;
    {
        const bool branch_taken_0x36ccb4 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x36ccb4) {
            ctx->pc = 0x36CD5Cu;
            goto label_36cd5c;
        }
    }
    ctx->pc = 0x36CCBCu;
    // 0x36ccbc: 0x8c870158  lw          $a3, 0x158($a0)
    ctx->pc = 0x36ccbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x36ccc0: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x36ccc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x36ccc4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x36CCC4u;
    {
        const bool branch_taken_0x36ccc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ccc4) {
            ctx->pc = 0x36CD5Cu;
            goto label_36cd5c;
        }
    }
    ctx->pc = 0x36CCCCu;
    // 0x36cccc: 0x18e00014  blez        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x36CCCCu;
    {
        const bool branch_taken_0x36cccc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x36CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CCCCu;
        // 0x36ccd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cccc) {
            ctx->pc = 0x36CD20u;
            goto label_36cd20;
        }
    }
    ctx->pc = 0x36CCD4u;
    // 0x36ccd4: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x36ccd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x36ccd8: 0x240befff  addiu       $t3, $zero, -0x1001
    ctx->pc = 0x36ccd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x36ccdc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x36ccdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cce0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x36cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x36cce4: 0x0  nop
    ctx->pc = 0x36cce4u;
    // NOP
label_36cce8:
    // 0x36cce8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x36cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x36ccec: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x36ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x36ccf0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x36CCF0u;
    {
        const bool branch_taken_0x36ccf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CCF0u;
        // 0x36ccf4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ccf0) {
            ctx->pc = 0x36CD08u;
            goto label_36cd08;
        }
    }
    ctx->pc = 0x36CCF8u;
    // 0x36ccf8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x36ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x36ccfc: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x36ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x36cd00: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x36cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x36cd04: 0x8c870158  lw          $a3, 0x158($a0)
    ctx->pc = 0x36cd04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
label_36cd08:
    // 0x36cd08: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x36cd08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x36cd0c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x36CD0Cu;
    {
        const bool branch_taken_0x36cd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36cd0c) {
            ctx->pc = 0x36CD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36CD0Cu;
            // 0x36cd10: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36CCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36cce8;
        }
    }
    ctx->pc = 0x36CD14u;
    // 0x36cd14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36CD14u;
    {
        const bool branch_taken_0x36cd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD14u;
        // 0x36cd18: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cd14) {
            ctx->pc = 0x36CD28u;
            goto label_36cd28;
        }
    }
    ctx->pc = 0x36CD1Cu;
    // 0x36cd1c: 0x0  nop
    ctx->pc = 0x36cd1cu;
    // NOP
label_36cd20:
    // 0x36cd20: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x36cd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x36cd24: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x36cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_36cd28:
    // 0x36cd28: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x36cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x36cd2c: 0x8c450160  lw          $a1, 0x160($v0)
    ctx->pc = 0x36cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x36cd30: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x36CD30u;
    {
        const bool branch_taken_0x36cd30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cd30) {
            ctx->pc = 0x36CD5Cu;
            goto label_36cd5c;
        }
    }
    ctx->pc = 0x36CD38u;
    // 0x36cd38: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x36CD38u;
    {
        const bool branch_taken_0x36cd38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD38u;
        // 0x36cd3c: 0x8ca20080  lw          $v0, 0x80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cd38) {
            ctx->pc = 0x36CD50u;
            goto label_36cd50;
        }
    }
    ctx->pc = 0x36CD40u;
    // 0x36cd40: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x36cd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x36cd44: 0x3e00008  jr          $ra
    ctx->pc = 0x36CD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD44u;
        // 0x36cd48: 0xaca20080  sw          $v0, 0x80($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CD4Cu;
    // 0x36cd4c: 0x0  nop
    ctx->pc = 0x36cd4cu;
    // NOP
label_36cd50:
    // 0x36cd50: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x36cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x36cd54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x36cd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x36cd58: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x36cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
label_36cd5c:
    // 0x36cd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x36CD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CD64u;
    // 0x36cd64: 0x0  nop
    ctx->pc = 0x36cd64u;
    // NOP
    ctx->pc = 0x36cd68u;
}
