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

// Function: sub_002E1060
// Address: 0x2e1060 - 0x2e1360
void sub_002E1060_0x2e1060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1060_0x2e1060");
#endif

    switch (ctx->pc) {
        case 0x2e1074u: goto label_2e1074;
        case 0x2e10dcu: goto label_2e10dc;
        case 0x2e1210u: goto label_2e1210;
        default: break;
    }

    ctx->pc = 0x2e1060u;

    // 0x2e1060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1068: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e1068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e106c: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x2E106Cu;
    SET_GPR_U32(ctx, 31, 0x2E1074u);
    ctx->pc = 0x2E1070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E106Cu;
    // 0x2e1070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x2E106Cu, 0x2E1074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1074u;
label_2e1074:
    // 0x2e1074: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2E1074u;
    {
        const bool branch_taken_0x2e1074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1074u;
        // 0x2e1078: 0x26050074  addiu       $a1, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1074) {
            ctx->pc = 0x2E11B0u;
            goto label_2e11b0;
        }
    }
    ctx->pc = 0x2E107Cu;
    // 0x2e107c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e1080: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1080u;
    {
        const bool branch_taken_0x2e1080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1080u;
        // 0x2e1084: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1080) {
            ctx->pc = 0x2E1098u;
            goto label_2e1098;
        }
    }
    ctx->pc = 0x2E1088u;
    // 0x2e1088: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e1088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e108c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e1090: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1090u;
    {
        const bool branch_taken_0x2e1090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1090) {
            ctx->pc = 0x2E10A4u;
            goto label_2e10a4;
        }
    }
    ctx->pc = 0x2E1098u;
label_2e1098:
    // 0x2e1098: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e1098u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e109c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e109cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e10a0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e10a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e10a4:
    // 0x2e10a4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E10A4u;
    {
        const bool branch_taken_0x2e10a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10A4u;
        // 0x2e10a8: 0x26040094  addiu       $a0, $s0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e10a4) {
            ctx->pc = 0x2E10E0u;
            goto label_2e10e0;
        }
    }
    ctx->pc = 0x2E10ACu;
    // 0x2e10ac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e10acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e10b0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E10B0u;
    {
        const bool branch_taken_0x2e10b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e10b0) {
            ctx->pc = 0x2E10B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E10B0u;
            // 0x2e10b4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E10CCu;
            goto label_2e10cc;
        }
    }
    ctx->pc = 0x2E10B8u;
    // 0x2e10b8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e10bc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e10c0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E10C0u;
    {
        const bool branch_taken_0x2e10c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e10c0) {
            ctx->pc = 0x2E10D4u;
            goto label_2e10d4;
        }
    }
    ctx->pc = 0x2E10C8u;
    // 0x2e10c8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e10c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e10cc:
    // 0x2e10cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e10ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e10d0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e10d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e10d4:
    // 0x2e10d4: 0xc0b85ea  jal         func_2E17A8
    ctx->pc = 0x2E10D4u;
    SET_GPR_U32(ctx, 31, 0x2E10DCu);
    ctx->pc = 0x2E17A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E17A8u, 0x2E10D4u, 0x2E10DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10DCu;
label_2e10dc:
    // 0x2e10dc: 0x26040094  addiu       $a0, $s0, 0x94
    ctx->pc = 0x2e10dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_2e10e0:
    // 0x2e10e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e10e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E10E4u;
    {
        const bool branch_taken_0x2e10e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10E4u;
        // 0x2e10e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e10e4) {
            ctx->pc = 0x2E10FCu;
            goto label_2e10fc;
        }
    }
    ctx->pc = 0x2E10ECu;
    // 0x2e10ec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e10ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e10f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e10f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E10F4u;
    {
        const bool branch_taken_0x2e10f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e10f4) {
            ctx->pc = 0x2E1108u;
            goto label_2e1108;
        }
    }
    ctx->pc = 0x2E10FCu;
label_2e10fc:
    // 0x2e10fc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e10fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e1100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1104: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e1104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e1108:
    // 0x2e1108: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E1108u;
    {
        const bool branch_taken_0x2e1108 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1108) {
            ctx->pc = 0x2E110Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1108u;
            // 0x2e110c: 0x2604009c  addiu       $a0, $s0, 0x9C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1148u;
            goto label_2e1148;
        }
    }
    ctx->pc = 0x2E1110u;
    // 0x2e1110: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e1110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1114: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1114u;
    {
        const bool branch_taken_0x2e1114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1114u;
        // 0x2e1118: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1114) {
            ctx->pc = 0x2E112Cu;
            goto label_2e112c;
        }
    }
    ctx->pc = 0x2E111Cu;
    // 0x2e111c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e111cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1120: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e1120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1124: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1124u;
    {
        const bool branch_taken_0x2e1124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1124) {
            ctx->pc = 0x2E1128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1124u;
            // 0x2e1128: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E113Cu;
            goto label_2e113c;
        }
    }
    ctx->pc = 0x2E112Cu;
label_2e112c:
    // 0x2e112c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e112cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e1130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1134: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e1134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e1138: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e1138u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e113c:
    // 0x2e113c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e113cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2e1140: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x2e1140u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x2e1144: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x2e1144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
label_2e1148:
    // 0x2e1148: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e1148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e114c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E114Cu;
    {
        const bool branch_taken_0x2e114c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E114Cu;
        // 0x2e1150: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e114c) {
            ctx->pc = 0x2E1164u;
            goto label_2e1164;
        }
    }
    ctx->pc = 0x2E1154u;
    // 0x2e1154: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e1154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1158: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e1158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e115c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E115Cu;
    {
        const bool branch_taken_0x2e115c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e115c) {
            ctx->pc = 0x2E1170u;
            goto label_2e1170;
        }
    }
    ctx->pc = 0x2E1164u;
label_2e1164:
    // 0x2e1164: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e1164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e1168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e116c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e116cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e1170:
    // 0x2e1170: 0x50a0005e  beql        $a1, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x2E1170u;
    {
        const bool branch_taken_0x2e1170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1170) {
            ctx->pc = 0x2E1174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1170u;
            // 0x2e1174: 0x2604007c  addiu       $a0, $s0, 0x7C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E12ECu;
            goto label_2e12ec;
        }
    }
    ctx->pc = 0x2E1178u;
    // 0x2e1178: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e1178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e117c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E117Cu;
    {
        const bool branch_taken_0x2e117c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e117c) {
            ctx->pc = 0x2E1180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E117Cu;
            // 0x2e1180: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E119Cu;
            goto label_2e119c;
        }
    }
    ctx->pc = 0x2E1184u;
    // 0x2e1184: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e1184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1188: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e1188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e118c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1190: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1190u;
    {
        const bool branch_taken_0x2e1190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1190) {
            ctx->pc = 0x2E1194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1190u;
            // 0x2e1194: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E11A8u;
            goto label_2e11a8;
        }
    }
    ctx->pc = 0x2E1198u;
    // 0x2e1198: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e1198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e119c:
    // 0x2e119c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e119cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e11a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e11a4: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e11a8:
    // 0x2e11a8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2E11A8u;
    {
        const bool branch_taken_0x2e11a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E11A8u;
        // 0x2e11ac: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11a8) {
            ctx->pc = 0x2E12E4u;
            goto label_2e12e4;
        }
    }
    ctx->pc = 0x2E11B0u;
label_2e11b0:
    // 0x2e11b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e11b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E11B4u;
    {
        const bool branch_taken_0x2e11b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E11B4u;
        // 0x2e11b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11b4) {
            ctx->pc = 0x2E11CCu;
            goto label_2e11cc;
        }
    }
    ctx->pc = 0x2E11BCu;
    // 0x2e11bc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e11c0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e11c4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E11C4u;
    {
        const bool branch_taken_0x2e11c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e11c4) {
            ctx->pc = 0x2E11D8u;
            goto label_2e11d8;
        }
    }
    ctx->pc = 0x2E11CCu;
label_2e11cc:
    // 0x2e11cc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e11ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e11d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e11d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11d4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e11d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e11d8:
    // 0x2e11d8: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E11D8u;
    {
        const bool branch_taken_0x2e11d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E11D8u;
        // 0x2e11dc: 0x26040094  addiu       $a0, $s0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11d8) {
            ctx->pc = 0x2E1214u;
            goto label_2e1214;
        }
    }
    ctx->pc = 0x2E11E0u;
    // 0x2e11e0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e11e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e11e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E11E4u;
    {
        const bool branch_taken_0x2e11e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e11e4) {
            ctx->pc = 0x2E11E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E11E4u;
            // 0x2e11e8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1200u;
            goto label_2e1200;
        }
    }
    ctx->pc = 0x2E11ECu;
    // 0x2e11ec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e11ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e11f0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e11f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E11F4u;
    {
        const bool branch_taken_0x2e11f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e11f4) {
            ctx->pc = 0x2E1208u;
            goto label_2e1208;
        }
    }
    ctx->pc = 0x2E11FCu;
    // 0x2e11fc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e11fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e1200:
    // 0x2e1200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e1200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1204: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e1204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e1208:
    // 0x2e1208: 0xc0b8612  jal         func_2E1848
    ctx->pc = 0x2E1208u;
    SET_GPR_U32(ctx, 31, 0x2E1210u);
    ctx->pc = 0x2E1848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1848u, 0x2E1208u, 0x2E1210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1210u;
label_2e1210:
    // 0x2e1210: 0x26040094  addiu       $a0, $s0, 0x94
    ctx->pc = 0x2e1210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_2e1214:
    // 0x2e1214: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e1214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1218: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1218u;
    {
        const bool branch_taken_0x2e1218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1218u;
        // 0x2e121c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1218) {
            ctx->pc = 0x2E1230u;
            goto label_2e1230;
        }
    }
    ctx->pc = 0x2E1220u;
    // 0x2e1220: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e1220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1224: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e1224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1228: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1228u;
    {
        const bool branch_taken_0x2e1228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1228) {
            ctx->pc = 0x2E123Cu;
            goto label_2e123c;
        }
    }
    ctx->pc = 0x2E1230u;
label_2e1230:
    // 0x2e1230: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e1230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e1234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1238: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e1238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e123c:
    // 0x2e123c: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E123Cu;
    {
        const bool branch_taken_0x2e123c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e123c) {
            ctx->pc = 0x2E1240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E123Cu;
            // 0x2e1240: 0x2604009c  addiu       $a0, $s0, 0x9C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1280u;
            goto label_2e1280;
        }
    }
    ctx->pc = 0x2E1244u;
    // 0x2e1244: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e1244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1248u;
    {
        const bool branch_taken_0x2e1248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1248u;
        // 0x2e124c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1248) {
            ctx->pc = 0x2E1260u;
            goto label_2e1260;
        }
    }
    ctx->pc = 0x2E1250u;
    // 0x2e1250: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e1250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1254: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e1254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1258: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1258u;
    {
        const bool branch_taken_0x2e1258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1258) {
            ctx->pc = 0x2E125Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1258u;
            // 0x2e125c: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1270u;
            goto label_2e1270;
        }
    }
    ctx->pc = 0x2E1260u;
label_2e1260:
    // 0x2e1260: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e1260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e1264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1268: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e1268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e126c: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e126cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e1270:
    // 0x2e1270: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e1270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e1274: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e1274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e1278: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x2e1278u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x2e127c: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x2e127cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
label_2e1280:
    // 0x2e1280: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e1280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1284: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1284u;
    {
        const bool branch_taken_0x2e1284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1284u;
        // 0x2e1288: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1284) {
            ctx->pc = 0x2E129Cu;
            goto label_2e129c;
        }
    }
    ctx->pc = 0x2E128Cu;
    // 0x2e128c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e128cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1290: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e1290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1294: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1294u;
    {
        const bool branch_taken_0x2e1294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1294) {
            ctx->pc = 0x2E12A8u;
            goto label_2e12a8;
        }
    }
    ctx->pc = 0x2E129Cu;
label_2e129c:
    // 0x2e129c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e129cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e12a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e12a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e12a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e12a8:
    // 0x2e12a8: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E12A8u;
    {
        const bool branch_taken_0x2e12a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e12a8) {
            ctx->pc = 0x2E12ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E12A8u;
            // 0x2e12ac: 0x2604007c  addiu       $a0, $s0, 0x7C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E12ECu;
            goto label_2e12ec;
        }
    }
    ctx->pc = 0x2E12B0u;
    // 0x2e12b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e12b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E12B4u;
    {
        const bool branch_taken_0x2e12b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12B4u;
        // 0x2e12b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12b4) {
            ctx->pc = 0x2E12CCu;
            goto label_2e12cc;
        }
    }
    ctx->pc = 0x2E12BCu;
    // 0x2e12bc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e12bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e12c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e12c4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E12C4u;
    {
        const bool branch_taken_0x2e12c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e12c4) {
            ctx->pc = 0x2E12C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E12C4u;
            // 0x2e12c8: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E12DCu;
            goto label_2e12dc;
        }
    }
    ctx->pc = 0x2E12CCu;
label_2e12cc:
    // 0x2e12cc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e12ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e12d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e12d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e12d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e12d8: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e12dc:
    // 0x2e12dc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e12e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e12e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e12e4:
    // 0x2e12e4: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x2e12e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x2e12e8: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x2e12e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
label_2e12ec:
    // 0x2e12ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e12ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e12f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E12F0u;
    {
        const bool branch_taken_0x2e12f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12F0u;
        // 0x2e12f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12f0) {
            ctx->pc = 0x2E1308u;
            goto label_2e1308;
        }
    }
    ctx->pc = 0x2E12F8u;
    // 0x2e12f8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e12f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e12fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1300: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1300u;
    {
        const bool branch_taken_0x2e1300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1300) {
            ctx->pc = 0x2E1314u;
            goto label_2e1314;
        }
    }
    ctx->pc = 0x2E1308u;
label_2e1308:
    // 0x2e1308: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e1308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e130c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e130cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1310: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e1310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e1314:
    // 0x2e1314: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E1314u;
    {
        const bool branch_taken_0x2e1314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1314u;
        // 0x2e1318: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1314) {
            ctx->pc = 0x2E1354u;
            goto label_2e1354;
        }
    }
    ctx->pc = 0x2E131Cu;
    // 0x2e131c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1320: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1320u;
    {
        const bool branch_taken_0x2e1320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1320u;
        // 0x2e1324: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1320) {
            ctx->pc = 0x2E1338u;
            goto label_2e1338;
        }
    }
    ctx->pc = 0x2E1328u;
    // 0x2e1328: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e1328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e132c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1330: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1330u;
    {
        const bool branch_taken_0x2e1330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1330) {
            ctx->pc = 0x2E1334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1330u;
            // 0x2e1334: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1348u;
            goto label_2e1348;
        }
    }
    ctx->pc = 0x2E1338u;
label_2e1338:
    // 0x2e1338: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e1338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e133c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e133cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1340: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e1340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e1344: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e1344u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e1348:
    // 0x2e1348: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e1348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2e134c: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x2e134cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x2e1350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1354:
    // 0x2e1354: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e1354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1358: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1358u;
        // 0x2e135c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1360u;
}
