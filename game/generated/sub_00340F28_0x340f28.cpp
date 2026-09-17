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

// Function: sub_00340F28
// Address: 0x340f28 - 0x340fe0
void sub_00340F28_0x340f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340F28_0x340f28");
#endif

    switch (ctx->pc) {
        case 0x340f28u: goto label_340f28;
        case 0x340f2cu: goto label_340f2c;
        case 0x340f30u: goto label_340f30;
        case 0x340f34u: goto label_340f34;
        case 0x340f38u: goto label_340f38;
        case 0x340f3cu: goto label_340f3c;
        case 0x340f40u: goto label_340f40;
        case 0x340f44u: goto label_340f44;
        case 0x340f48u: goto label_340f48;
        case 0x340f4cu: goto label_340f4c;
        case 0x340f50u: goto label_340f50;
        case 0x340f54u: goto label_340f54;
        case 0x340f58u: goto label_340f58;
        case 0x340f5cu: goto label_340f5c;
        case 0x340f60u: goto label_340f60;
        case 0x340f64u: goto label_340f64;
        case 0x340f68u: goto label_340f68;
        case 0x340f6cu: goto label_340f6c;
        case 0x340f70u: goto label_340f70;
        case 0x340f74u: goto label_340f74;
        case 0x340f78u: goto label_340f78;
        case 0x340f7cu: goto label_340f7c;
        case 0x340f80u: goto label_340f80;
        case 0x340f84u: goto label_340f84;
        case 0x340f88u: goto label_340f88;
        case 0x340f8cu: goto label_340f8c;
        case 0x340f90u: goto label_340f90;
        case 0x340f94u: goto label_340f94;
        case 0x340f98u: goto label_340f98;
        case 0x340f9cu: goto label_340f9c;
        case 0x340fa0u: goto label_340fa0;
        case 0x340fa4u: goto label_340fa4;
        case 0x340fa8u: goto label_340fa8;
        case 0x340facu: goto label_340fac;
        case 0x340fb0u: goto label_340fb0;
        case 0x340fb4u: goto label_340fb4;
        case 0x340fb8u: goto label_340fb8;
        case 0x340fbcu: goto label_340fbc;
        case 0x340fc0u: goto label_340fc0;
        case 0x340fc4u: goto label_340fc4;
        case 0x340fc8u: goto label_340fc8;
        case 0x340fccu: goto label_340fcc;
        case 0x340fd0u: goto label_340fd0;
        case 0x340fd4u: goto label_340fd4;
        case 0x340fd8u: goto label_340fd8;
        case 0x340fdcu: goto label_340fdc;
        default: break;
    }

    ctx->pc = 0x340f28u;

label_340f28:
    // 0x340f28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x340f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_340f2c:
    // 0x340f2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x340f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_340f30:
    // 0x340f30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x340f30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340f34:
    // 0x340f34: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x340f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_340f38:
    // 0x340f38: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x340f38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340f3c:
    // 0x340f3c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x340f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_340f40:
    // 0x340f40: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x340f40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_340f44:
    // 0x340f44: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x340f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_340f48:
    // 0x340f48: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x340f48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340f4c:
    // 0x340f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_340f50:
    // 0x340f50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x340f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_340f54:
    // 0x340f54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x340f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_340f58:
    // 0x340f58: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x340f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_340f5c:
    // 0x340f5c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x340f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_340f60:
    // 0x340f60: 0x9695000a  lhu         $s5, 0xA($s4)
    ctx->pc = 0x340f60u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_340f64:
    // 0x340f64: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_340f68:
    if (ctx->pc == 0x340F68u) {
        ctx->pc = 0x340F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F64u;
        // 0x340f68: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340F6Cu;
        goto label_340f6c;
    }
    ctx->pc = 0x340F64u;
    {
        const bool branch_taken_0x340f64 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x340F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F64u;
        // 0x340f68: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f64) {
            ctx->pc = 0x340FB0u;
            goto label_340fb0;
        }
    }
    ctx->pc = 0x340F6Cu;
label_340f6c:
    // 0x340f6c: 0x0  nop
    ctx->pc = 0x340f6cu;
    // NOP
label_340f70:
    // 0x340f70: 0x94b20004  lhu         $s2, 0x4($a1)
    ctx->pc = 0x340f70u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_340f74:
    // 0x340f74: 0x24b00018  addiu       $s0, $a1, 0x18
    ctx->pc = 0x340f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_340f78:
    // 0x340f78: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_340f7c:
    if (ctx->pc == 0x340F7Cu) {
        ctx->pc = 0x340F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F78u;
        // 0x340f7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340F80u;
        goto label_340f80;
    }
    ctx->pc = 0x340F78u;
    {
        const bool branch_taken_0x340f78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x340F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F78u;
        // 0x340f7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f78) {
            ctx->pc = 0x340FA0u;
            goto label_340fa0;
        }
    }
    ctx->pc = 0x340F80u;
label_340f80:
    // 0x340f80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x340f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_340f84:
    // 0x340f84: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x340f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_340f88:
    // 0x340f88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x340f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_340f8c:
    // 0x340f8c: 0x2c0f809  jalr        $s6
label_340f90:
    if (ctx->pc == 0x340F90u) {
        ctx->pc = 0x340F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F8Cu;
        // 0x340f90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340F94u;
        goto label_340f94;
    }
    ctx->pc = 0x340F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x340F94u);
        ctx->pc = 0x340F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F8Cu;
        // 0x340f90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340F8Cu, 0x340F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340F94u;
label_340f94:
    // 0x340f94: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x340f94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_340f98:
    // 0x340f98: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_340f9c:
    if (ctx->pc == 0x340F9Cu) {
        ctx->pc = 0x340F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F98u;
        // 0x340f9c: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340FA0u;
        goto label_340fa0;
    }
    ctx->pc = 0x340F98u;
    {
        const bool branch_taken_0x340f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x340F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F98u;
        // 0x340f9c: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f98) {
            ctx->pc = 0x340F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340f80;
        }
    }
    ctx->pc = 0x340FA0u;
label_340fa0:
    // 0x340fa0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x340fa0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_340fa4:
    // 0x340fa4: 0x2f5102b  sltu        $v0, $s7, $s5
    ctx->pc = 0x340fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_340fa8:
    // 0x340fa8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_340fac:
    if (ctx->pc == 0x340FACu) {
        ctx->pc = 0x340FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340FA8u;
        // 0x340fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340FB0u;
        goto label_340fb0;
    }
    ctx->pc = 0x340FA8u;
    {
        const bool branch_taken_0x340fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x340FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340FA8u;
        // 0x340fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340fa8) {
            ctx->pc = 0x340F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340f70;
        }
    }
    ctx->pc = 0x340FB0u;
label_340fb0:
    // 0x340fb0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x340fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_340fb4:
    // 0x340fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_340fb8:
    // 0x340fb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x340fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_340fbc:
    // 0x340fbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x340fbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_340fc0:
    // 0x340fc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x340fc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_340fc4:
    // 0x340fc4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x340fc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_340fc8:
    // 0x340fc8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x340fc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_340fcc:
    // 0x340fcc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x340fccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_340fd0:
    // 0x340fd0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x340fd0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_340fd4:
    // 0x340fd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x340fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_340fd8:
    // 0x340fd8: 0x3e00008  jr          $ra
label_340fdc:
    if (ctx->pc == 0x340FDCu) {
        ctx->pc = 0x340FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340FD8u;
        // 0x340fdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340FE0u;
        goto label_fallthrough_0x340fd8;
    }
    ctx->pc = 0x340FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340FD8u;
        // 0x340fdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x340fd8:
    ctx->pc = 0x340FE0u;
}
