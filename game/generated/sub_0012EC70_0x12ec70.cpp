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

// Function: sub_0012EC70
// Address: 0x12ec70 - 0x12ed78
void sub_0012EC70_0x12ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EC70_0x12ec70");
#endif

    switch (ctx->pc) {
        case 0x12eca8u: goto label_12eca8;
        case 0x12ed14u: goto label_12ed14;
        case 0x12ed30u: goto label_12ed30;
        case 0x12ed40u: goto label_12ed40;
        default: break;
    }

    ctx->pc = 0x12ec70u;

    // 0x12ec70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ec74: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x12ec74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ec7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12ec7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12ec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12ec84: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12ec84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12ec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12ec8c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12ec8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ec94: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x12ec94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x12ec98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12ec9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12ec9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eca0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12eca4: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x12eca4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_12eca8:
    // 0x12eca8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x12eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12ecac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x12ecacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x12ecb0: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x12ecb0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12ecb4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x12ecb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12ecb8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x12ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x12ecbc: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x12ecbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12ecc0: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x12ecc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12ecc4: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x12ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x12ecc8: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x12ecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x12eccc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x12ecccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x12ecd0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12ecd4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x12ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x12ecd8: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x12ecd8u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x12ecdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12ece0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x12ece0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x12ece4: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x12ECE4u;
    {
        const bool branch_taken_0x12ece4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECE4u;
        // 0x12ece8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ece4) {
            ctx->pc = 0x12ECA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12eca8;
        }
    }
    ctx->pc = 0x12ECECu;
    // 0x12ecec: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x12ECECu;
    {
        const bool branch_taken_0x12ecec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECECu;
        // 0x12ecf0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecec) {
            ctx->pc = 0x12ED58u;
            goto label_12ed58;
        }
    }
    ctx->pc = 0x12ECF4u;
    // 0x12ecf4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x12ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12ecf8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x12ecf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12ecfc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12ECFCu;
    {
        const bool branch_taken_0x12ecfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECFCu;
        // 0x12ed00: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecfc) {
            ctx->pc = 0x12ED44u;
            goto label_12ed44;
        }
    }
    ctx->pc = 0x12ED04u;
    // 0x12ed04: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x12ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12ed08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12ed08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed0c: 0xc04bae6  jal         func_12EB98
    ctx->pc = 0x12ED0Cu;
    SET_GPR_U32(ctx, 31, 0x12ED14u);
    ctx->pc = 0x12ED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED0Cu;
    // 0x12ed10: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB98u, 0x12ED0Cu, 0x12ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED14u;
label_12ed14:
    // 0x12ed14: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x12ed14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12ed18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12ed18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed1c: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x12ed1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x12ed20: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x12ed20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12ed24: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x12ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x12ed28: 0xc04a125  jal         func_128494
    ctx->pc = 0x12ED28u;
    SET_GPR_U32(ctx, 31, 0x12ED30u);
    ctx->pc = 0x12ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED28u;
    // 0x12ed2c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x12ED28u, 0x12ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED30u;
label_12ed30:
    // 0x12ed30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12ed30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12ed34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed38: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12ED38u;
    SET_GPR_U32(ctx, 31, 0x12ED40u);
    ctx->pc = 0x12ED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED38u;
    // 0x12ed3c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12ED38u, 0x12ED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED40u;
label_12ed40:
    // 0x12ed40: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x12ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_12ed44:
    // 0x12ed44: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12ed44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12ed48: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12ed4c: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x12ed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x12ed50: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x12ed50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x12ed54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12ed54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12ed58:
    // 0x12ed58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ed58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ed5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12ed5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ed60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12ed60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ed64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12ed64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ed68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12ed68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ed6c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12ed6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ed70: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED70u;
        // 0x12ed74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ED70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ED78u;
}
