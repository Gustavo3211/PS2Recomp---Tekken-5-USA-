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

// Function: sub_002EEF98
// Address: 0x2eef98 - 0x2ef0a0
void sub_002EEF98_0x2eef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEF98_0x2eef98");
#endif

    switch (ctx->pc) {
        case 0x2eef98u: goto label_2eef98;
        case 0x2eef9cu: goto label_2eef9c;
        case 0x2eefa0u: goto label_2eefa0;
        case 0x2eefa4u: goto label_2eefa4;
        case 0x2eefa8u: goto label_2eefa8;
        case 0x2eefacu: goto label_2eefac;
        case 0x2eefb0u: goto label_2eefb0;
        case 0x2eefb4u: goto label_2eefb4;
        case 0x2eefb8u: goto label_2eefb8;
        case 0x2eefbcu: goto label_2eefbc;
        case 0x2eefc0u: goto label_2eefc0;
        case 0x2eefc4u: goto label_2eefc4;
        case 0x2eefc8u: goto label_2eefc8;
        case 0x2eefccu: goto label_2eefcc;
        case 0x2eefd0u: goto label_2eefd0;
        case 0x2eefd4u: goto label_2eefd4;
        case 0x2eefd8u: goto label_2eefd8;
        case 0x2eefdcu: goto label_2eefdc;
        case 0x2eefe0u: goto label_2eefe0;
        case 0x2eefe4u: goto label_2eefe4;
        case 0x2eefe8u: goto label_2eefe8;
        case 0x2eefecu: goto label_2eefec;
        case 0x2eeff0u: goto label_2eeff0;
        case 0x2eeff4u: goto label_2eeff4;
        case 0x2eeff8u: goto label_2eeff8;
        case 0x2eeffcu: goto label_2eeffc;
        case 0x2ef000u: goto label_2ef000;
        case 0x2ef004u: goto label_2ef004;
        case 0x2ef008u: goto label_2ef008;
        case 0x2ef00cu: goto label_2ef00c;
        case 0x2ef010u: goto label_2ef010;
        case 0x2ef014u: goto label_2ef014;
        case 0x2ef018u: goto label_2ef018;
        case 0x2ef01cu: goto label_2ef01c;
        case 0x2ef020u: goto label_2ef020;
        case 0x2ef024u: goto label_2ef024;
        case 0x2ef028u: goto label_2ef028;
        case 0x2ef02cu: goto label_2ef02c;
        case 0x2ef030u: goto label_2ef030;
        case 0x2ef034u: goto label_2ef034;
        case 0x2ef038u: goto label_2ef038;
        case 0x2ef03cu: goto label_2ef03c;
        case 0x2ef040u: goto label_2ef040;
        case 0x2ef044u: goto label_2ef044;
        case 0x2ef048u: goto label_2ef048;
        case 0x2ef04cu: goto label_2ef04c;
        case 0x2ef050u: goto label_2ef050;
        case 0x2ef054u: goto label_2ef054;
        case 0x2ef058u: goto label_2ef058;
        case 0x2ef05cu: goto label_2ef05c;
        case 0x2ef060u: goto label_2ef060;
        case 0x2ef064u: goto label_2ef064;
        case 0x2ef068u: goto label_2ef068;
        case 0x2ef06cu: goto label_2ef06c;
        case 0x2ef070u: goto label_2ef070;
        case 0x2ef074u: goto label_2ef074;
        case 0x2ef078u: goto label_2ef078;
        case 0x2ef07cu: goto label_2ef07c;
        case 0x2ef080u: goto label_2ef080;
        case 0x2ef084u: goto label_2ef084;
        case 0x2ef088u: goto label_2ef088;
        case 0x2ef08cu: goto label_2ef08c;
        case 0x2ef090u: goto label_2ef090;
        case 0x2ef094u: goto label_2ef094;
        case 0x2ef098u: goto label_2ef098;
        case 0x2ef09cu: goto label_2ef09c;
        default: break;
    }

    ctx->pc = 0x2eef98u;

label_2eef98:
    // 0x2eef98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eef98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2eef9c:
    // 0x2eef9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eef9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2eefa0:
    // 0x2eefa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eefa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eefa4:
    // 0x2eefa4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eefa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2eefa8:
    // 0x2eefa8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2eefa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2eefac:
    // 0x2eefac: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2eefacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2eefb0:
    // 0x2eefb0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2eefb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2eefb4:
    // 0x2eefb4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2eefb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2eefb8:
    // 0x2eefb8: 0xa0f809  jalr        $a1
label_2eefbc:
    if (ctx->pc == 0x2EEFBCu) {
        ctx->pc = 0x2EEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFB8u;
        // 0x2eefbc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEFC0u;
        goto label_2eefc0;
    }
    ctx->pc = 0x2EEFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2EEFC0u);
        ctx->pc = 0x2EEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFB8u;
        // 0x2eefbc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEFB8u, 0x2EEFC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EEFC0u;
label_2eefc0:
    // 0x2eefc0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2eefc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2eefc4:
    // 0x2eefc4: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x2eefc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_2eefc8:
    // 0x2eefc8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2eefc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2eefcc:
    // 0x2eefcc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2eefccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2eefd0:
    // 0x2eefd0: 0x40f809  jalr        $v0
label_2eefd4:
    if (ctx->pc == 0x2EEFD4u) {
        ctx->pc = 0x2EEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFD0u;
        // 0x2eefd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEFD8u;
        goto label_2eefd8;
    }
    ctx->pc = 0x2EEFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EEFD8u);
        ctx->pc = 0x2EEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFD0u;
        // 0x2eefd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEFD0u, 0x2EEFD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EEFD8u;
label_2eefd8:
    // 0x2eefd8: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_2eefdc:
    if (ctx->pc == 0x2EEFDCu) {
        ctx->pc = 0x2EEFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFD8u;
        // 0x2eefdc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEFE0u;
        goto label_2eefe0;
    }
    ctx->pc = 0x2EEFD8u;
    {
        const bool branch_taken_0x2eefd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eefd8) {
            ctx->pc = 0x2EEFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEFD8u;
            // 0x2eefdc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF07Cu;
            goto label_2ef07c;
        }
    }
    ctx->pc = 0x2EEFE0u;
label_2eefe0:
    // 0x2eefe0: 0xc0bbb2a  jal         func_2EECA8
label_2eefe4:
    if (ctx->pc == 0x2EEFE4u) {
        ctx->pc = 0x2EEFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFE0u;
        // 0x2eefe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEFE8u;
        goto label_2eefe8;
    }
    ctx->pc = 0x2EEFE0u;
    SET_GPR_U32(ctx, 31, 0x2EEFE8u);
    ctx->pc = 0x2EEFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEFE0u;
    // 0x2eefe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EECA8u, 0x2EEFE0u, 0x2EEFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEFE8u;
label_2eefe8:
    // 0x2eefe8: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_2eefec:
    if (ctx->pc == 0x2EEFECu) {
        ctx->pc = 0x2EEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFE8u;
        // 0x2eefec: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEFF0u;
        goto label_2eeff0;
    }
    ctx->pc = 0x2EEFE8u;
    {
        const bool branch_taken_0x2eefe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eefe8) {
            ctx->pc = 0x2EEFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEFE8u;
            // 0x2eefec: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF07Cu;
            goto label_2ef07c;
        }
    }
    ctx->pc = 0x2EEFF0u;
label_2eeff0:
    // 0x2eeff0: 0xc0bb8c2  jal         func_2EE308
label_2eeff4:
    if (ctx->pc == 0x2EEFF4u) {
        ctx->pc = 0x2EEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFF0u;
        // 0x2eeff4: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEFF8u;
        goto label_2eeff8;
    }
    ctx->pc = 0x2EEFF0u;
    SET_GPR_U32(ctx, 31, 0x2EEFF8u);
    ctx->pc = 0x2EEFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEFF0u;
    // 0x2eeff4: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE308u, 0x2EEFF0u, 0x2EEFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEFF8u;
label_2eeff8:
    // 0x2eeff8: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x2eeff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2eeffc:
    // 0x2eeffc: 0x21bc3  sra         $v1, $v0, 15
    ctx->pc = 0x2eeffcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 15));
label_2ef000:
    // 0x2ef000: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x2ef000u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_2ef004:
    // 0x2ef004: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ef004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ef008:
    // 0x2ef008: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ef008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2ef00c:
    // 0x2ef00c: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x2ef00cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ef010:
    // 0x2ef010: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2ef010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2ef014:
    // 0x2ef014: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_2ef018:
    if (ctx->pc == 0x2EF018u) {
        ctx->pc = 0x2EF018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF014u;
        // 0x2ef018: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF01Cu;
        goto label_2ef01c;
    }
    ctx->pc = 0x2EF014u;
    {
        const bool branch_taken_0x2ef014 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EF018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF014u;
        // 0x2ef018: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef014) {
            ctx->pc = 0x2EF030u;
            goto label_2ef030;
        }
    }
    ctx->pc = 0x2EF01Cu;
label_2ef01c:
    // 0x2ef01c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2ef01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2ef020:
    // 0x2ef020: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2ef020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2ef024:
    // 0x2ef024: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ef028:
    if (ctx->pc == 0x2EF028u) {
        ctx->pc = 0x2EF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF024u;
        // 0x2ef028: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF02Cu;
        goto label_2ef02c;
    }
    ctx->pc = 0x2EF024u;
    {
        const bool branch_taken_0x2ef024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF024u;
        // 0x2ef028: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef024) {
            ctx->pc = 0x2EF034u;
            goto label_2ef034;
        }
    }
    ctx->pc = 0x2EF02Cu;
label_2ef02c:
    // 0x2ef02c: 0x0  nop
    ctx->pc = 0x2ef02cu;
    // NOP
label_2ef030:
    // 0x2ef030: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2ef030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2ef034:
    // 0x2ef034: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2ef034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ef038:
    // 0x2ef038: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ef038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2ef03c:
    // 0x2ef03c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2ef040:
    if (ctx->pc == 0x2EF040u) {
        ctx->pc = 0x2EF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF03Cu;
        // 0x2ef040: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF044u;
        goto label_2ef044;
    }
    ctx->pc = 0x2EF03Cu;
    {
        const bool branch_taken_0x2ef03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef03c) {
            ctx->pc = 0x2EF040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF03Cu;
            // 0x2ef040: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF044u;
            goto label_2ef044;
        }
    }
    ctx->pc = 0x2EF044u;
label_2ef044:
    // 0x2ef044: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
label_2ef048:
    if (ctx->pc == 0x2EF048u) {
        ctx->pc = 0x2EF048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF044u;
        // 0x2ef048: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF04Cu;
        goto label_2ef04c;
    }
    ctx->pc = 0x2EF044u;
    {
        const bool branch_taken_0x2ef044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef044) {
            ctx->pc = 0x2EF048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF044u;
            // 0x2ef048: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF07Cu;
            goto label_2ef07c;
        }
    }
    ctx->pc = 0x2EF04Cu;
label_2ef04c:
    // 0x2ef04c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2ef04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ef050:
    // 0x2ef050: 0x5045000a  beql        $v0, $a1, . + 4 + (0xA << 2)
label_2ef054:
    if (ctx->pc == 0x2EF054u) {
        ctx->pc = 0x2EF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF050u;
        // 0x2ef054: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF058u;
        goto label_2ef058;
    }
    ctx->pc = 0x2EF050u;
    {
        const bool branch_taken_0x2ef050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ef050) {
            ctx->pc = 0x2EF054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF050u;
            // 0x2ef054: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF07Cu;
            goto label_2ef07c;
        }
    }
    ctx->pc = 0x2EF058u;
label_2ef058:
    // 0x2ef058: 0xc0bbb46  jal         func_2EED18
label_2ef05c:
    if (ctx->pc == 0x2EF05Cu) {
        ctx->pc = 0x2EF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF058u;
        // 0x2ef05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF060u;
        goto label_2ef060;
    }
    ctx->pc = 0x2EF058u;
    SET_GPR_U32(ctx, 31, 0x2EF060u);
    ctx->pc = 0x2EF05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF058u;
    // 0x2ef05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EED18u, 0x2EF058u, 0x2EF060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF060u;
label_2ef060:
    // 0x2ef060: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ef060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ef064:
    // 0x2ef064: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x2ef064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_2ef068:
    // 0x2ef068: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ef068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef06c:
    // 0x2ef06c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ef06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ef070:
    // 0x2ef070: 0x60f809  jalr        $v1
label_2ef074:
    if (ctx->pc == 0x2EF074u) {
        ctx->pc = 0x2EF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF070u;
        // 0x2ef074: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF078u;
        goto label_2ef078;
    }
    ctx->pc = 0x2EF070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF078u);
        ctx->pc = 0x2EF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF070u;
        // 0x2ef074: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF070u, 0x2EF078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF078u;
label_2ef078:
    // 0x2ef078: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ef078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ef07c:
    // 0x2ef07c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2ef07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_2ef080:
    // 0x2ef080: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ef080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef084:
    // 0x2ef084: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ef084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ef088:
    // 0x2ef088: 0x60f809  jalr        $v1
label_2ef08c:
    if (ctx->pc == 0x2EF08Cu) {
        ctx->pc = 0x2EF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF088u;
        // 0x2ef08c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF090u;
        goto label_2ef090;
    }
    ctx->pc = 0x2EF088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF090u);
        ctx->pc = 0x2EF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF088u;
        // 0x2ef08c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF088u, 0x2EF090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF090u;
label_2ef090:
    // 0x2ef090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ef090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef094:
    // 0x2ef094: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ef094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ef098:
    // 0x2ef098: 0x3e00008  jr          $ra
label_2ef09c:
    if (ctx->pc == 0x2EF09Cu) {
        ctx->pc = 0x2EF09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF098u;
        // 0x2ef09c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF0A0u;
        goto label_fallthrough_0x2ef098;
    }
    ctx->pc = 0x2EF098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF098u;
        // 0x2ef09c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ef098:
    ctx->pc = 0x2EF0A0u;
}
