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

// Function: sub_001F10C8
// Address: 0x1f10c8 - 0x1f11e8
void sub_001F10C8_0x1f10c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F10C8_0x1f10c8");
#endif

    switch (ctx->pc) {
        case 0x1f111cu: goto label_1f111c;
        case 0x1f112cu: goto label_1f112c;
        case 0x1f1144u: goto label_1f1144;
        case 0x1f1150u: goto label_1f1150;
        case 0x1f1158u: goto label_1f1158;
        case 0x1f11b0u: goto label_1f11b0;
        default: break;
    }

    ctx->pc = 0x1f10c8u;

    // 0x1f10c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f10c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f10cc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1f10ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f10d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f10d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f10d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f10d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f10d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f10dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f10dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f10e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f10e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f10e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f10e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f10e8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1f10e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1f10ec: 0x1065001a  beq         $v1, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F10ECu;
    {
        const bool branch_taken_0x1f10ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10ECu;
        // 0x1f10f0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f10ec) {
            ctx->pc = 0x1F1158u;
            goto label_1f1158;
        }
    }
    ctx->pc = 0x1F10F4u;
    // 0x1f10f4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1f10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1f10f8: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1f10f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1f10fc: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1f10fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1f1100: 0x261023b0  addiu       $s0, $s0, 0x23B0
    ctx->pc = 0x1f1100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9136));
    // 0x1f1104: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1f1104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x1f1108: 0x2611010c  addiu       $s1, $s0, 0x10C
    ctx->pc = 0x1f1108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    // 0x1f110c: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x1f110cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x1f1110: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1114: 0xc0404a4  jal         func_101290
    ctx->pc = 0x1F1114u;
    SET_GPR_U32(ctx, 31, 0x1F111Cu);
    ctx->pc = 0x1F1118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1114u;
    // 0x1f1118: 0x261200e4  addiu       $s2, $s0, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101290u, 0x1F1114u, 0x1F111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F111Cu;
label_1f111c:
    // 0x1f111c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f111cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1120: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1124: 0xc097f3e  jal         func_25FCF8
    ctx->pc = 0x1F1124u;
    SET_GPR_U32(ctx, 31, 0x1F112Cu);
    ctx->pc = 0x1F1128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1124u;
    // 0x1f1128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCF8u, 0x1F1124u, 0x1F112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F112Cu;
label_1f112c:
    // 0x1f112c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f1130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1134: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f1134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1138: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f1138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f113c: 0xc097fac  jal         func_25FEB0
    ctx->pc = 0x1F113Cu;
    SET_GPR_U32(ctx, 31, 0x1F1144u);
    ctx->pc = 0x1F1140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F113Cu;
    // 0x1f1140: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FEB0u, 0x1F113Cu, 0x1F1144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1144u;
label_1f1144:
    // 0x1f1144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1148: 0xc09833c  jal         func_260CF0
    ctx->pc = 0x1F1148u;
    SET_GPR_U32(ctx, 31, 0x1F1150u);
    ctx->pc = 0x1F114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1148u;
    // 0x1f114c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260CF0u, 0x1F1148u, 0x1F1150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1150u;
label_1f1150:
    // 0x1f1150: 0xc093796  jal         func_24DE58
    ctx->pc = 0x1F1150u;
    SET_GPR_U32(ctx, 31, 0x1F1158u);
    ctx->pc = 0x24DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DE58u, 0x1F1150u, 0x1F1158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1158u;
label_1f1158:
    // 0x1f1158: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x1f1158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1f115c: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1f115cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1f1160: 0x10850015  beq         $a0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F1160u;
    {
        const bool branch_taken_0x1f1160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F1164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1160u;
        // 0x1f1164: 0x2482ffed  addiu       $v0, $a0, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1160) {
            ctx->pc = 0x1F11B8u;
            goto label_1f11b8;
        }
    }
    ctx->pc = 0x1F1168u;
    // 0x1f1168: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1f1168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1f116c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f116cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f1170: 0xae650014  sw          $a1, 0x14($s3)
    ctx->pc = 0x1f1170u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 5));
    // 0x1f1174: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x1f1174u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
    // 0x1f1178: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1178u;
    {
        const bool branch_taken_0x1f1178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1178u;
        // 0x1f117c: 0xae640010  sw          $a0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1178) {
            ctx->pc = 0x1F11A0u;
            goto label_1f11a0;
        }
    }
    ctx->pc = 0x1F1180u;
    // 0x1f1180: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1f1180u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1f1184: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f1184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1188: 0x26038858  addiu       $v1, $s0, -0x77A8
    ctx->pc = 0x1f1188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x1f118c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1f118cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x1f1190: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F1190u;
    {
        const bool branch_taken_0x1f1190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1190u;
        // 0x1f1194: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1190) {
            ctx->pc = 0x1F11C0u;
            goto label_1f11c0;
        }
    }
    ctx->pc = 0x1F1198u;
    // 0x1f1198: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1198u;
    {
        const bool branch_taken_0x1f1198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1198) {
            ctx->pc = 0x1F11A8u;
            goto label_1f11a8;
        }
    }
    ctx->pc = 0x1F11A0u;
label_1f11a0:
    // 0x1f11a0: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1f11a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1f11a4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1f11a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_1f11a8:
    // 0x1f11a8: 0xc0983c2  jal         func_260F08
    ctx->pc = 0x1F11A8u;
    SET_GPR_U32(ctx, 31, 0x1F11B0u);
    ctx->pc = 0x1F11ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11A8u;
    // 0x1f11ac: 0x248423b0  addiu       $a0, $a0, 0x23B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260F08u, 0x1F11A8u, 0x1F11B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11B0u;
label_1f11b0:
    // 0x1f11b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F11B0u;
    {
        const bool branch_taken_0x1f11b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11B0u;
        // 0x1f11b4: 0x26038858  addiu       $v1, $s0, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11b0) {
            ctx->pc = 0x1F11C0u;
            goto label_1f11c0;
        }
    }
    ctx->pc = 0x1F11B8u;
label_1f11b8:
    // 0x1f11b8: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1f11b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1f11bc: 0x26038858  addiu       $v1, $s0, -0x77A8
    ctx->pc = 0x1f11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
label_1f11c0:
    // 0x1f11c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f11c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f11c4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1f11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1f11c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f11c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f11cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f11ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f11d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f11d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f11d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f11d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f11d8: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1f11d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x1f11dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F11DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11DCu;
        // 0x1f11e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F11DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F11E4u;
    // 0x1f11e4: 0x0  nop
    ctx->pc = 0x1f11e4u;
    // NOP
    ctx->pc = 0x1f11e8u;
}
