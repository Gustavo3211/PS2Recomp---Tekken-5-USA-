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

// Function: sub_002A76F8
// Address: 0x2a76f8 - 0x2a77e0
void sub_002A76F8_0x2a76f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A76F8_0x2a76f8");
#endif

    switch (ctx->pc) {
        case 0x2a772cu: goto label_2a772c;
        case 0x2a7750u: goto label_2a7750;
        case 0x2a7758u: goto label_2a7758;
        case 0x2a7798u: goto label_2a7798;
        default: break;
    }

    ctx->pc = 0x2a76f8u;

    // 0x2a76f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a76f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a76fc: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2a76fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2a7700: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a7700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a7704: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2a7704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a7708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a770c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a770cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7710: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a7710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7714: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a7714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a7718: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a7718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a771c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a771cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7720: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a7720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a7724: 0xc0a9d00  jal         func_2A7400
    ctx->pc = 0x2A7724u;
    SET_GPR_U32(ctx, 31, 0x2A772Cu);
    ctx->pc = 0x2A7728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7724u;
    // 0x2a7728: 0x68e03  sra         $s1, $a2, 24 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7400u, 0x2A7724u, 0x2A772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A772Cu;
label_2a772c:
    // 0x2a772c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a772cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a7730: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a7730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7734: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x2a7734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2a7738: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2a7738u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a773c: 0x10710011  beq         $v1, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A773Cu;
    {
        const bool branch_taken_0x2a773c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2A7740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A773Cu;
        // 0x2a7740: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a773c) {
            ctx->pc = 0x2A7784u;
            goto label_2a7784;
        }
    }
    ctx->pc = 0x2A7744u;
    // 0x2a7744: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A7744u;
    {
        const bool branch_taken_0x2a7744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7744u;
        // 0x2a7748: 0x66102a  slt         $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7744) {
            ctx->pc = 0x2A775Cu;
            goto label_2a775c;
        }
    }
    ctx->pc = 0x2A774Cu;
    // 0x2a774c: 0x0  nop
    ctx->pc = 0x2a774cu;
    // NOP
label_2a7750:
    // 0x2a7750: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2A7750u;
    {
        const bool branch_taken_0x2a7750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7750u;
        // 0x2a7754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7750) {
            ctx->pc = 0x2A77C0u;
            goto label_2a77c0;
        }
    }
    ctx->pc = 0x2A7758u;
label_2a7758:
    // 0x2a7758: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2a7758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2a775c:
    // 0x2a775c: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x2a775cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2a7760: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a7760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7764: 0x0  nop
    ctx->pc = 0x2a7764u;
    // NOP
    // 0x2a7768: 0x0  nop
    ctx->pc = 0x2a7768u;
    // NOP
    // 0x2a776c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A776Cu;
    {
        const bool branch_taken_0x2a776c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A776Cu;
        // 0x2a7770: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a776c) {
            ctx->pc = 0x2A7750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7750;
        }
    }
    ctx->pc = 0x2A7774u;
    // 0x2a7774: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2a7774u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a7778: 0x0  nop
    ctx->pc = 0x2a7778u;
    // NOP
    // 0x2a777c: 0x1451fff6  bne         $v0, $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A777Cu;
    {
        const bool branch_taken_0x2a777c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2A7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A777Cu;
        // 0x2a7780: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a777c) {
            ctx->pc = 0x2A7758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7758;
        }
    }
    ctx->pc = 0x2A7784u;
label_2a7784:
    // 0x2a7784: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2a7784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a7788: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a7788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a778c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2a778cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2a7790: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a7790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a7794: 0x0  nop
    ctx->pc = 0x2a7794u;
    // NOP
label_2a7798:
    // 0x2a7798: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a7798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a779c: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x2a779cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a77a0: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2a77a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a77a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A77A4u;
    {
        const bool branch_taken_0x2a77a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A77A4u;
        // 0x2a77a8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a77a4) {
            ctx->pc = 0x2A77BCu;
            goto label_2a77bc;
        }
    }
    ctx->pc = 0x2A77ACu;
    // 0x2a77ac: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2a77acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a77b0: 0x0  nop
    ctx->pc = 0x2a77b0u;
    // NOP
    // 0x2a77b4: 0x5451fff8  bnel        $v0, $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A77B4u;
    {
        const bool branch_taken_0x2a77b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2a77b4) {
            ctx->pc = 0x2A77B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A77B4u;
            // 0x2a77b8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7798;
        }
    }
    ctx->pc = 0x2A77BCu;
label_2a77bc:
    // 0x2a77bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a77c0:
    // 0x2a77c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a77c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a77c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a77c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a77c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a77c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a77cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a77ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a77d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a77d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a77d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A77D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A77D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A77D4u;
        // 0x2a77d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A77D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A77DCu;
    // 0x2a77dc: 0x0  nop
    ctx->pc = 0x2a77dcu;
    // NOP
    ctx->pc = 0x2a77e0u;
}
