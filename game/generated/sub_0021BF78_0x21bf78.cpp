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

// Function: sub_0021BF78
// Address: 0x21bf78 - 0x21c120
void sub_0021BF78_0x21bf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BF78_0x21bf78");
#endif

    switch (ctx->pc) {
        case 0x21bfd4u: goto label_21bfd4;
        case 0x21bfe0u: goto label_21bfe0;
        case 0x21bff0u: goto label_21bff0;
        case 0x21bff8u: goto label_21bff8;
        case 0x21c000u: goto label_21c000;
        case 0x21c050u: goto label_21c050;
        case 0x21c068u: goto label_21c068;
        case 0x21c074u: goto label_21c074;
        case 0x21c084u: goto label_21c084;
        case 0x21c090u: goto label_21c090;
        case 0x21c0b0u: goto label_21c0b0;
        case 0x21c0c0u: goto label_21c0c0;
        case 0x21c0d8u: goto label_21c0d8;
        case 0x21c0e4u: goto label_21c0e4;
        case 0x21c0f0u: goto label_21c0f0;
        case 0x21c0f8u: goto label_21c0f8;
        case 0x21c100u: goto label_21c100;
        default: break;
    }

    ctx->pc = 0x21bf78u;

    // 0x21bf78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21bf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21bf7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21bf80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21bf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21bf84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21bf84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bf8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21bf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21bf90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21bf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21bf94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21bf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21bf98: 0x9233002b  lbu         $s3, 0x2B($s1)
    ctx->pc = 0x21bf98u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x21bf9c: 0x56620059  bnel        $s3, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x21BF9Cu;
    {
        const bool branch_taken_0x21bf9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x21bf9c) {
            ctx->pc = 0x21BFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BF9Cu;
            // 0x21bfa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C104u;
            goto label_21c104;
        }
    }
    ctx->pc = 0x21BFA4u;
    // 0x21bfa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21bfa8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x21bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21bfac: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x21BFACu;
    {
        const bool branch_taken_0x21bfac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21bfac) {
            ctx->pc = 0x21C040u;
            goto label_21c040;
        }
    }
    ctx->pc = 0x21BFB4u;
    // 0x21bfb4: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x21bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x21bfb8: 0x9224002d  lbu         $a0, 0x2D($s1)
    ctx->pc = 0x21bfb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
    // 0x21bfbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21bfc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bfc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21bfc8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x21bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x21bfcc: 0xc086644  jal         func_219910
    ctx->pc = 0x21BFCCu;
    SET_GPR_U32(ctx, 31, 0x21BFD4u);
    ctx->pc = 0x21BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFCCu;
    // 0x21bfd0: 0x245000e0  addiu       $s0, $v0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21BFCCu, 0x21BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFD4u;
label_21bfd4:
    // 0x21bfd4: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x21bfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x21bfd8: 0xc086b22  jal         func_21AC88
    ctx->pc = 0x21BFD8u;
    SET_GPR_U32(ctx, 31, 0x21BFE0u);
    ctx->pc = 0x21BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFD8u;
    // 0x21bfdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC88u, 0x21BFD8u, 0x21BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFE0u;
label_21bfe0:
    // 0x21bfe0: 0x9224002e  lbu         $a0, 0x2E($s1)
    ctx->pc = 0x21bfe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x21bfe4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21bfe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bfe8: 0xc08664a  jal         func_219928
    ctx->pc = 0x21BFE8u;
    SET_GPR_U32(ctx, 31, 0x21BFF0u);
    ctx->pc = 0x21BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFE8u;
    // 0x21bfec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x21BFE8u, 0x21BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFF0u;
label_21bff0:
    // 0x21bff0: 0xc086b42  jal         func_21AD08
    ctx->pc = 0x21BFF0u;
    SET_GPR_U32(ctx, 31, 0x21BFF8u);
    ctx->pc = 0x21BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFF0u;
    // 0x21bff4: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AD08u, 0x21BFF0u, 0x21BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFF8u;
label_21bff8:
    // 0x21bff8: 0xc07c47a  jal         func_1F11E8
    ctx->pc = 0x21BFF8u;
    SET_GPR_U32(ctx, 31, 0x21C000u);
    ctx->pc = 0x21BFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFF8u;
    // 0x21bffc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F11E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F11E8u, 0x21BFF8u, 0x21C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C000u;
label_21c000:
    // 0x21c000: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x21c000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21c004: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x21C004u;
    {
        const bool branch_taken_0x21c004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c004) {
            ctx->pc = 0x21C008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C004u;
            // 0x21c008: 0xa6120010  sh          $s2, 0x10($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C030u;
            goto label_21c030;
        }
    }
    ctx->pc = 0x21C00Cu;
    // 0x21c00c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x21c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21c010: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x21c010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21c014: 0xa2130012  sb          $s3, 0x12($s0)
    ctx->pc = 0x21c014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 19));
    // 0x21c018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c01c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x21c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21c020: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21c020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21c024: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x21c024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x21c028: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21c028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x21c02c: 0xa6120010  sh          $s2, 0x10($s0)
    ctx->pc = 0x21c02cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 18));
label_21c030:
    // 0x21c030: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x21c030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x21c034: 0xa2000013  sb          $zero, 0x13($s0)
    ctx->pc = 0x21c034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x21c038: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x21C038u;
    {
        const bool branch_taken_0x21c038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C038u;
        // 0x21c03c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c038) {
            ctx->pc = 0x21C100u;
            goto label_21c100;
        }
    }
    ctx->pc = 0x21C040u;
label_21c040:
    // 0x21c040: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x21C040u;
    {
        const bool branch_taken_0x21c040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c040) {
            ctx->pc = 0x21C0D0u;
            goto label_21c0d0;
        }
    }
    ctx->pc = 0x21C048u;
    // 0x21c048: 0xc086644  jal         func_219910
    ctx->pc = 0x21C048u;
    SET_GPR_U32(ctx, 31, 0x21C050u);
    ctx->pc = 0x21C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C048u;
    // 0x21c04c: 0x9224002d  lbu         $a0, 0x2D($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21C048u, 0x21C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C050u;
label_21c050:
    // 0x21c050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21c050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c054: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x21c054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x21c058: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21C058u;
    {
        const bool branch_taken_0x21c058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21c058) {
            ctx->pc = 0x21C05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C058u;
            // 0x21c05c: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C098u;
            goto label_21c098;
        }
    }
    ctx->pc = 0x21C060u;
    // 0x21c060: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21C060u;
    SET_GPR_U32(ctx, 31, 0x21C068u);
    ctx->pc = 0x21C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C060u;
    // 0x21c064: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21C060u, 0x21C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C068u;
label_21c068:
    // 0x21c068: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21c068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c06c: 0xc0863a4  jal         func_218E90
    ctx->pc = 0x21C06Cu;
    SET_GPR_U32(ctx, 31, 0x21C074u);
    ctx->pc = 0x21C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C06Cu;
    // 0x21c070: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E90u, 0x21C06Cu, 0x21C074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C074u;
label_21c074:
    // 0x21c074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c078: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21c078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c07c: 0xc0865a8  jal         func_2196A0
    ctx->pc = 0x21C07Cu;
    SET_GPR_U32(ctx, 31, 0x21C084u);
    ctx->pc = 0x21C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C07Cu;
    // 0x21c080: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2196A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2196A0u, 0x21C07Cu, 0x21C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C084u;
label_21c084:
    // 0x21c084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c088: 0xc086396  jal         func_218E58
    ctx->pc = 0x21C088u;
    SET_GPR_U32(ctx, 31, 0x21C090u);
    ctx->pc = 0x21C08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C088u;
    // 0x21c08c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x21C088u, 0x21C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C090u;
label_21c090:
    // 0x21c090: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x21c090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
    // 0x21c094: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x21c094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_21c098:
    // 0x21c098: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21c098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21c09c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21C09Cu;
    {
        const bool branch_taken_0x21c09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21c09c) {
            ctx->pc = 0x21C0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C09Cu;
            // 0x21c0a0: 0x9224002e  lbu         $a0, 0x2E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C0B8u;
            goto label_21c0b8;
        }
    }
    ctx->pc = 0x21C0A4u;
    // 0x21c0a4: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x21c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x21c0a8: 0xc086b4c  jal         func_21AD30
    ctx->pc = 0x21C0A8u;
    SET_GPR_U32(ctx, 31, 0x21C0B0u);
    ctx->pc = 0x21C0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C0A8u;
    // 0x21c0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AD30u, 0x21C0A8u, 0x21C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C0B0u;
label_21c0b0:
    // 0x21c0b0: 0xae2200dc  sw          $v0, 0xDC($s1)
    ctx->pc = 0x21c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
    // 0x21c0b4: 0x9224002e  lbu         $a0, 0x2E($s1)
    ctx->pc = 0x21c0b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
label_21c0b8:
    // 0x21c0b8: 0xc08664a  jal         func_219928
    ctx->pc = 0x21C0B8u;
    SET_GPR_U32(ctx, 31, 0x21C0C0u);
    ctx->pc = 0x21C0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C0B8u;
    // 0x21c0bc: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x21C0B8u, 0x21C0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C0C0u;
label_21c0c0:
    // 0x21c0c0: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x21c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x21c0c4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21c0c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21C0C8u;
    {
        const bool branch_taken_0x21c0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0C8u;
        // 0x21c0cc: 0xac438880  sw          $v1, -0x7780($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c0c8) {
            ctx->pc = 0x21C100u;
            goto label_21c100;
        }
    }
    ctx->pc = 0x21C0D0u;
label_21c0d0:
    // 0x21c0d0: 0xc086644  jal         func_219910
    ctx->pc = 0x21C0D0u;
    SET_GPR_U32(ctx, 31, 0x21C0D8u);
    ctx->pc = 0x21C0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C0D0u;
    // 0x21c0d4: 0x9224002d  lbu         $a0, 0x2D($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21C0D0u, 0x21C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C0D8u;
label_21c0d8:
    // 0x21c0d8: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x21c0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x21c0dc: 0xc086b22  jal         func_21AC88
    ctx->pc = 0x21C0DCu;
    SET_GPR_U32(ctx, 31, 0x21C0E4u);
    ctx->pc = 0x21C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C0DCu;
    // 0x21c0e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC88u, 0x21C0DCu, 0x21C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C0E4u;
label_21c0e4:
    // 0x21c0e4: 0x9224002e  lbu         $a0, 0x2E($s1)
    ctx->pc = 0x21c0e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x21c0e8: 0xc08664a  jal         func_219928
    ctx->pc = 0x21C0E8u;
    SET_GPR_U32(ctx, 31, 0x21C0F0u);
    ctx->pc = 0x21C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C0E8u;
    // 0x21c0ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x21C0E8u, 0x21C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C0F0u;
label_21c0f0:
    // 0x21c0f0: 0xc086b42  jal         func_21AD08
    ctx->pc = 0x21C0F0u;
    SET_GPR_U32(ctx, 31, 0x21C0F8u);
    ctx->pc = 0x21C0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C0F0u;
    // 0x21c0f4: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AD08u, 0x21C0F0u, 0x21C0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C0F8u;
label_21c0f8:
    // 0x21c0f8: 0xc07c47a  jal         func_1F11E8
    ctx->pc = 0x21C0F8u;
    SET_GPR_U32(ctx, 31, 0x21C100u);
    ctx->pc = 0x21C0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C0F8u;
    // 0x21c0fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F11E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F11E8u, 0x21C0F8u, 0x21C100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C100u;
label_21c100:
    // 0x21c100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c104:
    // 0x21c104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c108: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c10c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21c10cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c110: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21c110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c114: 0x3e00008  jr          $ra
    ctx->pc = 0x21C114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C114u;
        // 0x21c118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C11Cu;
    // 0x21c11c: 0x0  nop
    ctx->pc = 0x21c11cu;
    // NOP
    ctx->pc = 0x21c120u;
}
