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

// Function: sub_0011BFC8
// Address: 0x11bfc8 - 0x11c1b8
void sub_0011BFC8_0x11bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BFC8_0x11bfc8");
#endif

    switch (ctx->pc) {
        case 0x11bfe8u: goto label_11bfe8;
        case 0x11bff4u: goto label_11bff4;
        case 0x11c020u: goto label_11c020;
        case 0x11c038u: goto label_11c038;
        case 0x11c04cu: goto label_11c04c;
        case 0x11c05cu: goto label_11c05c;
        case 0x11c070u: goto label_11c070;
        case 0x11c078u: goto label_11c078;
        case 0x11c098u: goto label_11c098;
        case 0x11c0acu: goto label_11c0ac;
        case 0x11c0d0u: goto label_11c0d0;
        case 0x11c0d8u: goto label_11c0d8;
        case 0x11c134u: goto label_11c134;
        case 0x11c174u: goto label_11c174;
        case 0x11c188u: goto label_11c188;
        case 0x11c1a4u: goto label_11c1a4;
        default: break;
    }

    ctx->pc = 0x11bfc8u;

label_11bfc8:
    // 0x11bfc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11bfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11bfcc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11bfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11bfd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11bfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11bfd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11bfd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11bfdc: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x11bfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
    // 0x11bfe0: 0xc046e74  jal         func_11B9D0
    ctx->pc = 0x11BFE0u;
    SET_GPR_U32(ctx, 31, 0x11BFE8u);
    ctx->pc = 0x11BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFE0u;
    // 0x11bfe4: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B9D0u, 0x11BFE0u, 0x11BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFE8u;
label_11bfe8:
    // 0x11bfe8: 0x8e0427e8  lw          $a0, 0x27E8($s0)
    ctx->pc = 0x11bfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10216)));
    // 0x11bfec: 0xc043cfc  jal         func_10F3F0
    ctx->pc = 0x11BFECu;
    SET_GPR_U32(ctx, 31, 0x11BFF4u);
    ctx->pc = 0x10F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3F0u, 0x11BFECu, 0x11BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFF4u;
label_11bff4:
    // 0x11bff4: 0x8e0327e8  lw          $v1, 0x27E8($s0)
    ctx->pc = 0x11bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10216)));
    // 0x11bff8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11BFF8u;
    {
        const bool branch_taken_0x11bff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFF8u;
        // 0x11bffc: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bff8) {
            ctx->pc = 0x11C028u;
            goto label_11c028;
        }
    }
    ctx->pc = 0x11C000u;
    // 0x11c000: 0x8c4327d0  lw          $v1, 0x27D0($v0)
    ctx->pc = 0x11c000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10192)));
    // 0x11c004: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11C004u;
    {
        const bool branch_taken_0x11c004 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C004u;
        // 0x11c008: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c004) {
            ctx->pc = 0x11C04Cu;
            goto label_11c04c;
        }
    }
    ctx->pc = 0x11C00Cu;
    // 0x11c00c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x11c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x11c010: 0x8c4627dc  lw          $a2, 0x27DC($v0)
    ctx->pc = 0x11c010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10204)));
    // 0x11c014: 0x2484e640  addiu       $a0, $a0, -0x19C0
    ctx->pc = 0x11c014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960704));
    // 0x11c018: 0xc044794  jal         func_111E50
    ctx->pc = 0x11C018u;
    SET_GPR_U32(ctx, 31, 0x11C020u);
    ctx->pc = 0x11C01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C018u;
    // 0x11c01c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x11C018u, 0x11C020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C020u;
label_11c020:
    // 0x11c020: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x11C020u;
    {
        const bool branch_taken_0x11c020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C020u;
        // 0x11c024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c020) {
            ctx->pc = 0x11C108u;
            goto label_11c108;
        }
    }
    ctx->pc = 0x11C028u;
label_11c028:
    // 0x11c028: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11c028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11c02c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c030: 0xc04706e  jal         func_11C1B8
    ctx->pc = 0x11C030u;
    SET_GPR_U32(ctx, 31, 0x11C038u);
    ctx->pc = 0x11C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C030u;
    // 0x11c034: 0xac5127dc  sw          $s1, 0x27DC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 10204), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1B8u, 0x11C030u, 0x11C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C038u;
label_11c038:
    // 0x11c038: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C038u;
    {
        const bool branch_taken_0x11c038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C038u;
        // 0x11c03c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c038) {
            ctx->pc = 0x11C054u;
            goto label_11c054;
        }
    }
    ctx->pc = 0x11C040u;
    // 0x11c040: 0x8e0427e8  lw          $a0, 0x27E8($s0)
    ctx->pc = 0x11c040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10216)));
    // 0x11c044: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x11C044u;
    SET_GPR_U32(ctx, 31, 0x11C04Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x11C044u, 0x11C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C04Cu;
label_11c04c:
    // 0x11c04c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11C04Cu;
    {
        const bool branch_taken_0x11c04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C04Cu;
        // 0x11c050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c04c) {
            ctx->pc = 0x11C108u;
            goto label_11c108;
        }
    }
    ctx->pc = 0x11C054u;
label_11c054:
    // 0x11c054: 0xc0449ca  jal         func_112728
    ctx->pc = 0x11C054u;
    SET_GPR_U32(ctx, 31, 0x11C05Cu);
    ctx->pc = 0x11C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C054u;
    // 0x11c058: 0x3c120013  lui         $s2, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)19 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112728u, 0x11C054u, 0x11C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C05Cu;
label_11c05c:
    // 0x11c05c: 0x8e4227fc  lw          $v0, 0x27FC($s2)
    ctx->pc = 0x11c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10236)));
    // 0x11c060: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11C060u;
    {
        const bool branch_taken_0x11c060 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C060u;
        // 0x11c064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c060) {
            ctx->pc = 0x11C108u;
            goto label_11c108;
        }
    }
    ctx->pc = 0x11C068u;
    // 0x11c068: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11C068u;
    {
        const bool branch_taken_0x11c068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C068u;
        // 0x11c06c: 0x3c110013  lui         $s1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c068) {
            ctx->pc = 0x11C094u;
            goto label_11c094;
        }
    }
    ctx->pc = 0x11C070u;
label_11c070:
    // 0x11c070: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11c070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x11c074: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11c078:
    // 0x11c078: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11c078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c07c: 0x0  nop
    ctx->pc = 0x11c07cu;
    // NOP
    // 0x11c080: 0x0  nop
    ctx->pc = 0x11c080u;
    // NOP
    // 0x11c084: 0x0  nop
    ctx->pc = 0x11c084u;
    // NOP
    // 0x11c088: 0x0  nop
    ctx->pc = 0x11c088u;
    // NOP
    // 0x11c08c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C08Cu;
    {
        const bool branch_taken_0x11c08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11c08c) {
            ctx->pc = 0x11C078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c078;
        }
    }
    ctx->pc = 0x11C094u;
label_11c094:
    // 0x11c094: 0x26303990  addiu       $s0, $s1, 0x3990
    ctx->pc = 0x11c094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 14736));
label_11c098:
    // 0x11c098: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11c098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11c09c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0a0: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x11c0a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x11c0a4: 0xc044bb4  jal         func_112ED0
    ctx->pc = 0x11C0A4u;
    SET_GPR_U32(ctx, 31, 0x11C0ACu);
    ctx->pc = 0x11C0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C0A4u;
    // 0x11c0a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112ED0u, 0x11C0A4u, 0x11C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C0ACu;
label_11c0ac:
    // 0x11c0ac: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11C0ACu;
    {
        const bool branch_taken_0x11c0ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c0ac) {
            ctx->pc = 0x11C0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C0ACu;
            // 0x11c0b0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C0FCu;
            goto label_11c0fc;
        }
    }
    ctx->pc = 0x11C0B4u;
    // 0x11c0b4: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11c0b8: 0x8c4327d0  lw          $v1, 0x27D0($v0)
    ctx->pc = 0x11c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1327D0u));
    // 0x11c0bc: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C0BCu;
    {
        const bool branch_taken_0x11c0bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0BCu;
        // 0x11c0c0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0bc) {
            ctx->pc = 0x11C0D4u;
            goto label_11c0d4;
        }
    }
    ctx->pc = 0x11C0C4u;
    // 0x11c0c4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x11c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x11c0c8: 0xc044794  jal         func_111E50
    ctx->pc = 0x11C0C8u;
    SET_GPR_U32(ctx, 31, 0x11C0D0u);
    ctx->pc = 0x11C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C0C8u;
    // 0x11c0cc: 0x2484e668  addiu       $a0, $a0, -0x1998 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x11C0C8u, 0x11C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C0D0u;
label_11c0d0:
    // 0x11c0d0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11c0d4:
    // 0x11c0d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11c0d8:
    // 0x11c0d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c0dc: 0x0  nop
    ctx->pc = 0x11c0dcu;
    // NOP
    // 0x11c0e0: 0x0  nop
    ctx->pc = 0x11c0e0u;
    // NOP
    // 0x11c0e4: 0x0  nop
    ctx->pc = 0x11c0e4u;
    // NOP
    // 0x11c0e8: 0x0  nop
    ctx->pc = 0x11c0e8u;
    // NOP
    // 0x11c0ec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C0ECu;
    {
        const bool branch_taken_0x11c0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11c0ec) {
            ctx->pc = 0x11C0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c0d8;
        }
    }
    ctx->pc = 0x11C0F4u;
    // 0x11c0f4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11C0F4u;
    {
        const bool branch_taken_0x11c0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0F4u;
        // 0x11c0f8: 0x26303990  addiu       $s0, $s1, 0x3990 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 14736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0f4) {
            ctx->pc = 0x11C098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c098;
        }
    }
    ctx->pc = 0x11C0FCu;
label_11c0fc:
    // 0x11c0fc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11C0FCu;
    {
        const bool branch_taken_0x11c0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0FCu;
        // 0x11c100: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0fc) {
            ctx->pc = 0x11C070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c070;
        }
    }
    ctx->pc = 0x11C104u;
    // 0x11c104: 0xae4027fc  sw          $zero, 0x27FC($s2)
    ctx->pc = 0x11c104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10236), GPR_U32(ctx, 0));
label_11c108:
    // 0x11c108: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11c108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c10c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11c10cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c110: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11c110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c118: 0x3e00008  jr          $ra
    ctx->pc = 0x11C118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C118u;
        // 0x11c11c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C120u;
    // 0x11c120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c124: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x11c124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c128: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11c128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11c12c: 0xc046ff2  jal         func_11BFC8
    ctx->pc = 0x11C12Cu;
    SET_GPR_U32(ctx, 31, 0x11C134u);
    ctx->pc = 0x11C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C12Cu;
    // 0x11c130: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BFC8u;
    goto label_11bfc8;
    ctx->pc = 0x11C134u;
label_11c134:
    // 0x11c134: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C134u;
    {
        const bool branch_taken_0x11c134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C134u;
        // 0x11c138: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c134) {
            ctx->pc = 0x11C144u;
            goto label_11c144;
        }
    }
    ctx->pc = 0x11C13Cu;
    // 0x11c13c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11C13Cu;
    {
        const bool branch_taken_0x11c13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C13Cu;
        // 0x11c140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c13c) {
            ctx->pc = 0x11C1A8u;
            goto label_11c1a8;
        }
    }
    ctx->pc = 0x11C144u;
label_11c144:
    // 0x11c144: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x11c144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x11c148: 0x24502840  addiu       $s0, $v0, 0x2840
    ctx->pc = 0x11c148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x11c14c: 0x24843990  addiu       $a0, $a0, 0x3990
    ctx->pc = 0x11c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14736));
    // 0x11c150: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11c150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c154: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11c154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11c158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c15c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c15cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c160: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11c160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c164: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11c164u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c168: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11c168u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c16c: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x11C16Cu;
    SET_GPR_U32(ctx, 31, 0x11C174u);
    ctx->pc = 0x11C170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C16Cu;
    // 0x11c170: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x11C16Cu, 0x11C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C174u;
label_11c174:
    // 0x11c174: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C174u;
    {
        const bool branch_taken_0x11c174 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C174u;
        // 0x11c178: 0x3c030013  lui         $v1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c174) {
            ctx->pc = 0x11C190u;
            goto label_11c190;
        }
    }
    ctx->pc = 0x11C17Cu;
    // 0x11c17c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11c180: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x11C180u;
    SET_GPR_U32(ctx, 31, 0x11C188u);
    ctx->pc = 0x11C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C180u;
    // 0x11c184: 0x8c4427e8  lw          $a0, 0x27E8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x11C180u, 0x11C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C188u;
label_11c188:
    // 0x11c188: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11C188u;
    {
        const bool branch_taken_0x11c188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C188u;
        // 0x11c18c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c188) {
            ctx->pc = 0x11C1A8u;
            goto label_11c1a8;
        }
    }
    ctx->pc = 0x11C190u;
label_11c190:
    // 0x11c190: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11c190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x11c194: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x11c194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x11c198: 0x8c6427e8  lw          $a0, 0x27E8($v1)
    ctx->pc = 0x11c198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10216)));
    // 0x11c19c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x11C19Cu;
    SET_GPR_U32(ctx, 31, 0x11C1A4u);
    ctx->pc = 0x11C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C19Cu;
    // 0x11c1a0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x11C19Cu, 0x11C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1A4u;
label_11c1a4:
    // 0x11c1a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11c1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c1a8:
    // 0x11c1a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11c1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c1ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11c1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x11C1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1B0u;
        // 0x11c1b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C1B8u;
}
