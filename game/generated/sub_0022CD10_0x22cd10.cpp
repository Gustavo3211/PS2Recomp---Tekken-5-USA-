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

// Function: sub_0022CD10
// Address: 0x22cd10 - 0x22ce00
void sub_0022CD10_0x22cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CD10_0x22cd10");
#endif

    switch (ctx->pc) {
        case 0x22cd60u: goto label_22cd60;
        case 0x22cd70u: goto label_22cd70;
        case 0x22cd98u: goto label_22cd98;
        case 0x22cda8u: goto label_22cda8;
        default: break;
    }

    ctx->pc = 0x22cd10u;

    // 0x22cd10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22cd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22cd14: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x22cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x22cd18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22cd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22cd1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22cd1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22cd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22cd24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22cd24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd28: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x22cd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x22cd2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22cd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22cd30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22cd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22cd34: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22cd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x22cd38: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x22cd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x22cd3c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x22cd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x22cd40: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22cd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22cd44: 0x90970004  lbu         $s7, 0x4($a0)
    ctx->pc = 0x22cd44u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22cd48: 0x12e00021  beqz        $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x22CD48u;
    {
        const bool branch_taken_0x22cd48 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD48u;
        // 0x22cd4c: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd48) {
            ctx->pc = 0x22CDD0u;
            goto label_22cdd0;
        }
    }
    ctx->pc = 0x22CD50u;
    // 0x22cd50: 0x1ac00020  blez        $s6, . + 4 + (0x20 << 2)
    ctx->pc = 0x22CD50u;
    {
        const bool branch_taken_0x22cd50 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x22CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD50u;
        // 0x22cd54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd50) {
            ctx->pc = 0x22CDD4u;
            goto label_22cdd4;
        }
    }
    ctx->pc = 0x22CD58u;
    // 0x22cd58: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x22cd58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22cd5c: 0x0  nop
    ctx->pc = 0x22cd5cu;
    // NOP
label_22cd60:
    // 0x22cd60: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x22CD60u;
    {
        const bool branch_taken_0x22cd60 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x22CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD60u;
        // 0x22cd64: 0x26500008  addiu       $s0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd60) {
            ctx->pc = 0x22CDB4u;
            goto label_22cdb4;
        }
    }
    ctx->pc = 0x22CD68u;
    // 0x22cd68: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x22cd68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22cd6c: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x22cd6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22cd70:
    // 0x22cd70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cd74: 0x10550006  beq         $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x22CD74u;
    {
        const bool branch_taken_0x22cd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x22CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD74u;
        // 0x22cd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd74) {
            ctx->pc = 0x22CD90u;
            goto label_22cd90;
        }
    }
    ctx->pc = 0x22CD7Cu;
    // 0x22cd7c: 0x10540008  beq         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x22CD7Cu;
    {
        const bool branch_taken_0x22cd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x22cd7c) {
            ctx->pc = 0x22CDA0u;
            goto label_22cda0;
        }
    }
    ctx->pc = 0x22CD84u;
    // 0x22cd84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22CD84u;
    {
        const bool branch_taken_0x22cd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD84u;
        // 0x22cd88: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd84) {
            ctx->pc = 0x22CDACu;
            goto label_22cdac;
        }
    }
    ctx->pc = 0x22CD8Cu;
    // 0x22cd8c: 0x0  nop
    ctx->pc = 0x22cd8cu;
    // NOP
label_22cd90:
    // 0x22cd90: 0xc08b1ec  jal         func_22C7B0
    ctx->pc = 0x22CD90u;
    SET_GPR_U32(ctx, 31, 0x22CD98u);
    ctx->pc = 0x22CD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD90u;
    // 0x22cd94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C7B0u, 0x22CD90u, 0x22CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD98u;
label_22cd98:
    // 0x22cd98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22CD98u;
    {
        const bool branch_taken_0x22cd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD98u;
        // 0x22cd9c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd98) {
            ctx->pc = 0x22CDACu;
            goto label_22cdac;
        }
    }
    ctx->pc = 0x22CDA0u;
label_22cda0:
    // 0x22cda0: 0xc08b1ec  jal         func_22C7B0
    ctx->pc = 0x22CDA0u;
    SET_GPR_U32(ctx, 31, 0x22CDA8u);
    ctx->pc = 0x22CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CDA0u;
    // 0x22cda4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C7B0u, 0x22CDA0u, 0x22CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CDA8u;
label_22cda8:
    // 0x22cda8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22cda8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_22cdac:
    // 0x22cdac: 0x1e20fff0  bgtz        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x22CDACu;
    {
        const bool branch_taken_0x22cdac = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x22CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDACu;
        // 0x22cdb0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cdac) {
            ctx->pc = 0x22CD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cd70;
        }
    }
    ctx->pc = 0x22CDB4u;
label_22cdb4:
    // 0x22cdb4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22cdb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22cdb8: 0x277102a  slt         $v0, $s3, $s7
    ctx->pc = 0x22cdb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x22cdbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22CDBCu;
    {
        const bool branch_taken_0x22cdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDBCu;
        // 0x22cdc0: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cdbc) {
            ctx->pc = 0x22CDD0u;
            goto label_22cdd0;
        }
    }
    ctx->pc = 0x22CDC4u;
    // 0x22cdc4: 0x276102a  slt         $v0, $s3, $s6
    ctx->pc = 0x22cdc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x22cdc8: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x22CDC8u;
    {
        const bool branch_taken_0x22cdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cdc8) {
            ctx->pc = 0x22CDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CDC8u;
            // 0x22cdcc: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cd60;
        }
    }
    ctx->pc = 0x22CDD0u;
label_22cdd0:
    // 0x22cdd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22cdd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22cdd4:
    // 0x22cdd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22cdd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22cdd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22cdd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cddc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22cddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22cde0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22cde0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cde4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x22cde4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22cde8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x22cde8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cdec: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x22cdecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22cdf0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22cdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x22CDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDF4u;
        // 0x22cdf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CDFCu;
    // 0x22cdfc: 0x0  nop
    ctx->pc = 0x22cdfcu;
    // NOP
    ctx->pc = 0x22ce00u;
}
