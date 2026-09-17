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

// Function: sub_0026EC70
// Address: 0x26ec70 - 0x26ed80
void sub_0026EC70_0x26ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EC70_0x26ec70");
#endif

    switch (ctx->pc) {
        case 0x26ecc8u: goto label_26ecc8;
        case 0x26ed10u: goto label_26ed10;
        case 0x26ed1cu: goto label_26ed1c;
        default: break;
    }

    ctx->pc = 0x26ec70u;

    // 0x26ec70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26ec74: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x26ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26ec78: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x26ec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x26ec7c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x26ec7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26ec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26ec84: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x26ec84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26ec88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26ec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26ec8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26ec8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26ec90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26ec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26ec94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x26ec98: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x26ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x26ec9c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x26ec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x26eca0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26eca4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x26eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x26eca8: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x26eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x26ecac: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x26ecacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x26ecb0: 0x8c930014  lw          $s3, 0x14($a0)
    ctx->pc = 0x26ecb0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x26ecb4: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x26ecb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26ecb8: 0x10450024  beq         $v0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x26ECB8u;
    {
        const bool branch_taken_0x26ecb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x26ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECB8u;
        // 0x26ecbc: 0x34178005  ori         $s7, $zero, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ecb8) {
            ctx->pc = 0x26ED4Cu;
            goto label_26ed4c;
        }
    }
    ctx->pc = 0x26ECC0u;
    // 0x26ecc0: 0x34168000  ori         $s6, $zero, 0x8000
    ctx->pc = 0x26ecc0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26ecc4: 0x0  nop
    ctx->pc = 0x26ecc4u;
    // NOP
label_26ecc8:
    // 0x26ecc8: 0x5457000b  bnel        $v0, $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x26ECC8u;
    {
        const bool branch_taken_0x26ecc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x26ecc8) {
            ctx->pc = 0x26ECCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ECC8u;
            // 0x26eccc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26ECF8u;
            goto label_26ecf8;
        }
    }
    ctx->pc = 0x26ECD0u;
    // 0x26ecd0: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26ecd4: 0x96640008  lhu         $a0, 0x8($s3)
    ctx->pc = 0x26ecd4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x26ecd8: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x26ecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x26ecdc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x26ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x26ece0: 0x96710014  lhu         $s1, 0x14($s3)
    ctx->pc = 0x26ece0u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x26ece4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26ece8: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x26ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x26ecec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x26ececu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x26ecf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26ECF0u;
    {
        const bool branch_taken_0x26ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECF0u;
        // 0x26ecf4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ecf0) {
            ctx->pc = 0x26ECFCu;
            goto label_26ecfc;
        }
    }
    ctx->pc = 0x26ECF8u;
label_26ecf8:
    // 0x26ecf8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x26ecf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26ecfc:
    // 0x26ecfc: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x26ECFCu;
    {
        const bool branch_taken_0x26ecfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECFCu;
        // 0x26ed00: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ecfc) {
            ctx->pc = 0x26ED3Cu;
            goto label_26ed3c;
        }
    }
    ctx->pc = 0x26ED04u;
    // 0x26ed04: 0x32b4ffff  andi        $s4, $s5, 0xFFFF
    ctx->pc = 0x26ed04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x26ed08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ed08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed0c: 0x0  nop
    ctx->pc = 0x26ed0cu;
    // NOP
label_26ed10:
    // 0x26ed10: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x26ed10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x26ed14: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x26ED14u;
    SET_GPR_U32(ctx, 31, 0x26ED1Cu);
    ctx->pc = 0x26ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED14u;
    // 0x26ed18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x26ED14u, 0x26ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED1Cu;
label_26ed1c:
    // 0x26ed1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26ED1Cu;
    {
        const bool branch_taken_0x26ed1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED1Cu;
        // 0x26ed20: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed1c) {
            ctx->pc = 0x26ED30u;
            goto label_26ed30;
        }
    }
    ctx->pc = 0x26ED24u;
    // 0x26ed24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26ED24u;
    {
        const bool branch_taken_0x26ed24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED24u;
        // 0x26ed28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed24) {
            ctx->pc = 0x26ED50u;
            goto label_26ed50;
        }
    }
    ctx->pc = 0x26ED2Cu;
    // 0x26ed2c: 0x0  nop
    ctx->pc = 0x26ed2cu;
    // NOP
label_26ed30:
    // 0x26ed30: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x26ed30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26ed34: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x26ED34u;
    {
        const bool branch_taken_0x26ed34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED34u;
        // 0x26ed38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed34) {
            ctx->pc = 0x26ED10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ed10;
        }
    }
    ctx->pc = 0x26ED3Cu;
label_26ed3c:
    // 0x26ed3c: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x26ed3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x26ed40: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x26ed40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26ed44: 0x1456ffe0  bne         $v0, $s6, . + 4 + (-0x20 << 2)
    ctx->pc = 0x26ED44u;
    {
        const bool branch_taken_0x26ed44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x26ed44) {
            ctx->pc = 0x26ECC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ecc8;
        }
    }
    ctx->pc = 0x26ED4Cu;
label_26ed4c:
    // 0x26ed4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26ed4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ed50:
    // 0x26ed50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26ed50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ed54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26ed54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26ed58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26ed58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ed5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x26ed5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26ed60: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x26ed60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ed64: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x26ed64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed68: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x26ed68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ed6c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x26ed6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26ed70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26ed70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ed74: 0x3e00008  jr          $ra
    ctx->pc = 0x26ED74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED74u;
        // 0x26ed78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ED74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26ED7Cu;
    // 0x26ed7c: 0x0  nop
    ctx->pc = 0x26ed7cu;
    // NOP
    ctx->pc = 0x26ed80u;
}
