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

// Function: sub_00346DE0
// Address: 0x346de0 - 0x346ee8
void sub_00346DE0_0x346de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346DE0_0x346de0");
#endif

    switch (ctx->pc) {
        case 0x346e2cu: goto label_346e2c;
        case 0x346e34u: goto label_346e34;
        case 0x346e48u: goto label_346e48;
        case 0x346e70u: goto label_346e70;
        case 0x346e78u: goto label_346e78;
        case 0x346e88u: goto label_346e88;
        case 0x346e98u: goto label_346e98;
        case 0x346ea8u: goto label_346ea8;
        case 0x346ec4u: goto label_346ec4;
        default: break;
    }

    ctx->pc = 0x346de0u;

    // 0x346de0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x346de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x346de4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x346de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x346de8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x346de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x346dec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x346decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346df0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x346df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x346df4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x346df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x346df8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x346df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x346dfc: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x346dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x346e00: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x346e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x346e04: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x346e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x346e08: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x346E08u;
    {
        const bool branch_taken_0x346e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x346E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E08u;
        // 0x346e0c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e08) {
            ctx->pc = 0x346E20u;
            goto label_346e20;
        }
    }
    ctx->pc = 0x346E10u;
    // 0x346e10: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x346e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x346e14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x346E14u;
    {
        const bool branch_taken_0x346e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E14u;
        // 0x346e18: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e14) {
            ctx->pc = 0x346E24u;
            goto label_346e24;
        }
    }
    ctx->pc = 0x346E1Cu;
    // 0x346e1c: 0x0  nop
    ctx->pc = 0x346e1cu;
    // NOP
label_346e20:
    // 0x346e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x346e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346e24:
    // 0x346e24: 0xc0d2536  jal         func_3494D8
    ctx->pc = 0x346E24u;
    SET_GPR_U32(ctx, 31, 0x346E2Cu);
    ctx->pc = 0x346E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E24u;
    // 0x346e28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3494D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3494D8u, 0x346E24u, 0x346E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E2Cu;
label_346e2c:
    // 0x346e2c: 0xc0d24b4  jal         func_3492D0
    ctx->pc = 0x346E2Cu;
    SET_GPR_U32(ctx, 31, 0x346E34u);
    ctx->pc = 0x346E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E2Cu;
    // 0x346e30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3492D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3492D0u, 0x346E2Cu, 0x346E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E34u;
label_346e34:
    // 0x346e34: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x346E34u;
    {
        const bool branch_taken_0x346e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346e34) {
            ctx->pc = 0x346E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346E34u;
            // 0x346e38: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346E58u;
            goto label_346e58;
        }
    }
    ctx->pc = 0x346E3Cu;
    // 0x346e3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346e40: 0xc0d2404  jal         func_349010
    ctx->pc = 0x346E40u;
    SET_GPR_U32(ctx, 31, 0x346E48u);
    ctx->pc = 0x346E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E40u;
    // 0x346e44: 0x94850002  lhu         $a1, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349010u, 0x346E40u, 0x346E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E48u;
label_346e48:
    // 0x346e48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x346e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346e4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x346e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346e50: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x346E50u;
    {
        const bool branch_taken_0x346e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E50u;
        // 0x346e54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e50) {
            ctx->pc = 0x346EBCu;
            goto label_346ebc;
        }
    }
    ctx->pc = 0x346E58u;
label_346e58:
    // 0x346e58: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x346e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x346e5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x346E5Cu;
    {
        const bool branch_taken_0x346e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E5Cu;
        // 0x346e60: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e5c) {
            ctx->pc = 0x346E78u;
            goto label_346e78;
        }
    }
    ctx->pc = 0x346E64u;
    // 0x346e64: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x346e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    // 0x346e68: 0xc0c89d4  jal         func_322750
    ctx->pc = 0x346E68u;
    SET_GPR_U32(ctx, 31, 0x346E70u);
    ctx->pc = 0x346E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E68u;
    // 0x346e6c: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322750u, 0x346E68u, 0x346E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E70u;
label_346e70:
    // 0x346e70: 0xc0d2582  jal         func_349608
    ctx->pc = 0x346E70u;
    SET_GPR_U32(ctx, 31, 0x346E78u);
    ctx->pc = 0x346E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E70u;
    // 0x346e74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349608u, 0x346E70u, 0x346E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E78u;
label_346e78:
    // 0x346e78: 0x96320002  lhu         $s2, 0x2($s1)
    ctx->pc = 0x346e78u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x346e7c: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x346e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x346e80: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x346E80u;
    {
        const bool branch_taken_0x346e80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E80u;
        // 0x346e84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e80) {
            ctx->pc = 0x346EB4u;
            goto label_346eb4;
        }
    }
    ctx->pc = 0x346E88u;
label_346e88:
    // 0x346e88: 0xce000028  pref        0x00, 0x28($s0)
    ctx->pc = 0x346e88u;
    // PREF instruction (ignored)
    // 0x346e8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346e90: 0xc0d24f8  jal         func_3493E0
    ctx->pc = 0x346E90u;
    SET_GPR_U32(ctx, 31, 0x346E98u);
    ctx->pc = 0x346E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E90u;
    // 0x346e94: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3493E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3493E0u, 0x346E90u, 0x346E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E98u;
label_346e98:
    // 0x346e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346e9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x346e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ea0: 0xc0d1b40  jal         func_346D00
    ctx->pc = 0x346EA0u;
    SET_GPR_U32(ctx, 31, 0x346EA8u);
    ctx->pc = 0x346EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346EA0u;
    // 0x346ea4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346D00u, 0x346EA0u, 0x346EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346EA8u;
label_346ea8:
    // 0x346ea8: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x346ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x346eac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x346EACu;
    {
        const bool branch_taken_0x346eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346EACu;
        // 0x346eb0: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346eac) {
            ctx->pc = 0x346E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346e88;
        }
    }
    ctx->pc = 0x346EB4u;
label_346eb4:
    // 0x346eb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x346eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346eb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x346eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_346ebc:
    // 0x346ebc: 0xc0d256c  jal         func_3495B0
    ctx->pc = 0x346EBCu;
    SET_GPR_U32(ctx, 31, 0x346EC4u);
    ctx->pc = 0x3495B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3495B0u, 0x346EBCu, 0x346EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346EC4u;
label_346ec4:
    // 0x346ec4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x346ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ec8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x346ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x346ecc: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x346eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346ed0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x346ed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x346ed4: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x346ed4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x346ed8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x346ed8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x346edc: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x346edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x346ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x346EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346EE0u;
        // 0x346ee4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346EE8u;
}
