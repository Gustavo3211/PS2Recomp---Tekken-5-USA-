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

// Function: sub_001F3000
// Address: 0x1f3000 - 0x1f30f0
void sub_001F3000_0x1f3000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3000_0x1f3000");
#endif

    switch (ctx->pc) {
        case 0x1f3020u: goto label_1f3020;
        case 0x1f3028u: goto label_1f3028;
        case 0x1f3034u: goto label_1f3034;
        case 0x1f3040u: goto label_1f3040;
        case 0x1f3068u: goto label_1f3068;
        case 0x1f3098u: goto label_1f3098;
        default: break;
    }

    ctx->pc = 0x1f3000u;

    // 0x1f3000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f3000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f3004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f3008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f3008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f300c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f300cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f3010: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f3010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f3014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f3014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f3018: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F3018u;
    SET_GPR_U32(ctx, 31, 0x1F3020u);
    ctx->pc = 0x1F301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3018u;
    // 0x1f301c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F3018u, 0x1F3020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3020u;
label_1f3020:
    // 0x1f3020: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x1F3020u;
    SET_GPR_U32(ctx, 31, 0x1F3028u);
    ctx->pc = 0x1F3024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3020u;
    // 0x1f3024: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x1F3020u, 0x1F3028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3028u;
label_1f3028:
    // 0x1f3028: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f3028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f302c: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F302Cu;
    SET_GPR_U32(ctx, 31, 0x1F3034u);
    ctx->pc = 0x1F3030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F302Cu;
    // 0x1f3030: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F302Cu, 0x1F3034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3034u;
label_1f3034:
    // 0x1f3034: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f3034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3038: 0xc09d486  jal         func_275218
    ctx->pc = 0x1F3038u;
    SET_GPR_U32(ctx, 31, 0x1F3040u);
    ctx->pc = 0x1F303Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3038u;
    // 0x1f303c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x1F3038u, 0x1F3040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3040u;
label_1f3040:
    // 0x1f3040: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x1f3040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x1f3044: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f3044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3048: 0x24e288d0  addiu       $v0, $a3, -0x7730
    ctx->pc = 0x1f3048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936784));
    // 0x1f304c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f304cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3050: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f3050u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1f3054: 0xac7106b0  sw          $s1, 0x6B0($v1)
    ctx->pc = 0x1f3054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1712), GPR_U32(ctx, 17));
    // 0x1f3058: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1f3058u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f305c: 0x1a400009  blez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F305Cu;
    {
        const bool branch_taken_0x1f305c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1F3060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F305Cu;
        // 0x1f3060: 0xac9106b0  sw          $s1, 0x6B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1712), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f305c) {
            ctx->pc = 0x1F3084u;
            goto label_1f3084;
        }
    }
    ctx->pc = 0x1F3064u;
    // 0x1f3064: 0x0  nop
    ctx->pc = 0x1f3064u;
    // NOP
label_1f3068:
    // 0x1f3068: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f3068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f306c: 0xae1106b0  sw          $s1, 0x6B0($s0)
    ctx->pc = 0x1f306cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1712), GPR_U32(ctx, 17));
    // 0x1f3070: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x1f3070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1f3074: 0x0  nop
    ctx->pc = 0x1f3074u;
    // NOP
    // 0x1f3078: 0x0  nop
    ctx->pc = 0x1f3078u;
    // NOP
    // 0x1f307c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F307Cu;
    {
        const bool branch_taken_0x1f307c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F307Cu;
        // 0x1f3080: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f307c) {
            ctx->pc = 0x1F3068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3068;
        }
    }
    ctx->pc = 0x1F3084u;
label_1f3084:
    // 0x1f3084: 0x1a60000c  blez        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x1F3084u;
    {
        const bool branch_taken_0x1f3084 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1F3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3084u;
        // 0x1f3088: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3084) {
            ctx->pc = 0x1F30B8u;
            goto label_1f30b8;
        }
    }
    ctx->pc = 0x1F308Cu;
    // 0x1f308c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f308cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3090: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f3090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f3094: 0x0  nop
    ctx->pc = 0x1f3094u;
    // NOP
label_1f3098:
    // 0x1f3098: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x1f3098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1f309c: 0x0  nop
    ctx->pc = 0x1f309cu;
    // NOP
    // 0x1f30a0: 0x0  nop
    ctx->pc = 0x1f30a0u;
    // NOP
    // 0x1f30a4: 0x0  nop
    ctx->pc = 0x1f30a4u;
    // NOP
    // 0x1f30a8: 0x0  nop
    ctx->pc = 0x1f30a8u;
    // NOP
    // 0x1f30ac: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F30ACu;
    {
        const bool branch_taken_0x1f30ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f30ac) {
            ctx->pc = 0x1F30B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F30ACu;
            // 0x1f30b0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3098;
        }
    }
    ctx->pc = 0x1F30B4u;
    // 0x1f30b4: 0xacc406b0  sw          $a0, 0x6B0($a2)
    ctx->pc = 0x1f30b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1712), GPR_U32(ctx, 4));
label_1f30b8:
    // 0x1f30b8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F30B8u;
    {
        const bool branch_taken_0x1f30b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F30BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30B8u;
        // 0x1f30bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f30b8) {
            ctx->pc = 0x1F30D4u;
            goto label_1f30d4;
        }
    }
    ctx->pc = 0x1F30C0u;
    // 0x1f30c0: 0x24e288d0  addiu       $v0, $a3, -0x7730
    ctx->pc = 0x1f30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936784));
    // 0x1f30c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f30c8: 0xac6006b4  sw          $zero, 0x6B4($v1)
    ctx->pc = 0x1f30c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1716), GPR_U32(ctx, 0));
    // 0x1f30cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1f30ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f30d0: 0xac8006b4  sw          $zero, 0x6B4($a0)
    ctx->pc = 0x1f30d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 0));
label_1f30d4:
    // 0x1f30d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f30d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f30d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f30d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f30dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f30dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f30e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f30e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f30e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F30E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30E4u;
        // 0x1f30e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F30E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F30ECu;
    // 0x1f30ec: 0x0  nop
    ctx->pc = 0x1f30ecu;
    // NOP
    ctx->pc = 0x1f30f0u;
}
