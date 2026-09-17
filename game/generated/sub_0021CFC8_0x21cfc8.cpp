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

// Function: sub_0021CFC8
// Address: 0x21cfc8 - 0x21d090
void sub_0021CFC8_0x21cfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CFC8_0x21cfc8");
#endif

    switch (ctx->pc) {
        case 0x21d014u: goto label_21d014;
        case 0x21d01cu: goto label_21d01c;
        case 0x21d024u: goto label_21d024;
        case 0x21d034u: goto label_21d034;
        case 0x21d040u: goto label_21d040;
        case 0x21d054u: goto label_21d054;
        case 0x21d05cu: goto label_21d05c;
        case 0x21d068u: goto label_21d068;
        case 0x21d070u: goto label_21d070;
        default: break;
    }

    ctx->pc = 0x21cfc8u;

    // 0x21cfc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21cfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21cfcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21cfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21cfd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21cfd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cfd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21cfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21cfd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21cfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cfdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21cfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21cfe0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21cfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21cfe4: 0x9242000e  lbu         $v0, 0xE($s2)
    ctx->pc = 0x21cfe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x21cfe8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x21CFE8u;
    {
        const bool branch_taken_0x21cfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFE8u;
        // 0x21cfec: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cfe8) {
            ctx->pc = 0x21D070u;
            goto label_21d070;
        }
    }
    ctx->pc = 0x21CFF0u;
    // 0x21cff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cff4: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x21cff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x21cff8: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x21cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x21cffc: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x21cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x21d000: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x21d000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x21d004: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x21d004u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x21d008: 0xae530050  sw          $s3, 0x50($s2)
    ctx->pc = 0x21d008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 19));
    // 0x21d00c: 0xc08562a  jal         func_2158A8
    ctx->pc = 0x21D00Cu;
    SET_GPR_U32(ctx, 31, 0x21D014u);
    ctx->pc = 0x21D010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D00Cu;
    // 0x21d010: 0xae400058  sw          $zero, 0x58($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2158A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2158A8u, 0x21D00Cu, 0x21D014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D014u;
label_21d014:
    // 0x21d014: 0xc085142  jal         func_214508
    ctx->pc = 0x21D014u;
    SET_GPR_U32(ctx, 31, 0x21D01Cu);
    ctx->pc = 0x21D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D014u;
    // 0x21d018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214508u, 0x21D014u, 0x21D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D01Cu;
label_21d01c:
    // 0x21d01c: 0xc0852e6  jal         func_214B98
    ctx->pc = 0x21D01Cu;
    SET_GPR_U32(ctx, 31, 0x21D024u);
    ctx->pc = 0x21D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D01Cu;
    // 0x21d020: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B98u, 0x21D01Cu, 0x21D024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D024u;
label_21d024:
    // 0x21d024: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21d024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21d028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d02c: 0xc0852e8  jal         func_214BA0
    ctx->pc = 0x21D02Cu;
    SET_GPR_U32(ctx, 31, 0x21D034u);
    ctx->pc = 0x21D030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D02Cu;
    // 0x21d030: 0xa2500028  sb          $s0, 0x28($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214BA0u, 0x21D02Cu, 0x21D034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D034u;
label_21d034:
    // 0x21d034: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21d034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d038: 0xc0852f4  jal         func_214BD0
    ctx->pc = 0x21D038u;
    SET_GPR_U32(ctx, 31, 0x21D040u);
    ctx->pc = 0x21D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D038u;
    // 0x21d03c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214BD0u, 0x21D038u, 0x21D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D040u;
label_21d040:
    // 0x21d040: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x21d040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d048: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21d048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d04c: 0xc08694a  jal         func_21A528
    ctx->pc = 0x21D04Cu;
    SET_GPR_U32(ctx, 31, 0x21D054u);
    ctx->pc = 0x21D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D04Cu;
    // 0x21d050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A528u, 0x21D04Cu, 0x21D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D054u;
label_21d054:
    // 0x21d054: 0xc08530c  jal         func_214C30
    ctx->pc = 0x21D054u;
    SET_GPR_U32(ctx, 31, 0x21D05Cu);
    ctx->pc = 0x21D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D054u;
    // 0x21d058: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214C30u, 0x21D054u, 0x21D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D05Cu;
label_21d05c:
    // 0x21d05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d060: 0xc086e48  jal         func_21B920
    ctx->pc = 0x21D060u;
    SET_GPR_U32(ctx, 31, 0x21D068u);
    ctx->pc = 0x21D064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D060u;
    // 0x21d064: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B920u, 0x21D060u, 0x21D068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D068u;
label_21d068:
    // 0x21d068: 0xc082fd0  jal         func_20BF40
    ctx->pc = 0x21D068u;
    SET_GPR_U32(ctx, 31, 0x21D070u);
    ctx->pc = 0x21D06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D068u;
    // 0x21d06c: 0xa240001d  sb          $zero, 0x1D($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 29), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BF40u, 0x21D068u, 0x21D070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D070u;
label_21d070:
    // 0x21d070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d074: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d078: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d07c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21d07cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d080: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21d080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d084: 0x3e00008  jr          $ra
    ctx->pc = 0x21D084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D084u;
        // 0x21d088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D08Cu;
    // 0x21d08c: 0x0  nop
    ctx->pc = 0x21d08cu;
    // NOP
    ctx->pc = 0x21d090u;
}
