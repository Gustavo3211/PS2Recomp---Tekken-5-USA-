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

// Function: sub_0024E068
// Address: 0x24e068 - 0x24e1d8
void sub_0024E068_0x24e068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E068_0x24e068");
#endif

    switch (ctx->pc) {
        case 0x24e068u: goto label_24e068;
        case 0x24e06cu: goto label_24e06c;
        case 0x24e070u: goto label_24e070;
        case 0x24e074u: goto label_24e074;
        case 0x24e078u: goto label_24e078;
        case 0x24e07cu: goto label_24e07c;
        case 0x24e080u: goto label_24e080;
        case 0x24e084u: goto label_24e084;
        case 0x24e088u: goto label_24e088;
        case 0x24e08cu: goto label_24e08c;
        case 0x24e090u: goto label_24e090;
        case 0x24e094u: goto label_24e094;
        case 0x24e098u: goto label_24e098;
        case 0x24e09cu: goto label_24e09c;
        case 0x24e0a0u: goto label_24e0a0;
        case 0x24e0a4u: goto label_24e0a4;
        case 0x24e0a8u: goto label_24e0a8;
        case 0x24e0acu: goto label_24e0ac;
        case 0x24e0b0u: goto label_24e0b0;
        case 0x24e0b4u: goto label_24e0b4;
        case 0x24e0b8u: goto label_24e0b8;
        case 0x24e0bcu: goto label_24e0bc;
        case 0x24e0c0u: goto label_24e0c0;
        case 0x24e0c4u: goto label_24e0c4;
        case 0x24e0c8u: goto label_24e0c8;
        case 0x24e0ccu: goto label_24e0cc;
        case 0x24e0d0u: goto label_24e0d0;
        case 0x24e0d4u: goto label_24e0d4;
        case 0x24e0d8u: goto label_24e0d8;
        case 0x24e0dcu: goto label_24e0dc;
        case 0x24e0e0u: goto label_24e0e0;
        case 0x24e0e4u: goto label_24e0e4;
        case 0x24e0e8u: goto label_24e0e8;
        case 0x24e0ecu: goto label_24e0ec;
        case 0x24e0f0u: goto label_24e0f0;
        case 0x24e0f4u: goto label_24e0f4;
        case 0x24e0f8u: goto label_24e0f8;
        case 0x24e0fcu: goto label_24e0fc;
        case 0x24e100u: goto label_24e100;
        case 0x24e104u: goto label_24e104;
        case 0x24e108u: goto label_24e108;
        case 0x24e10cu: goto label_24e10c;
        case 0x24e110u: goto label_24e110;
        case 0x24e114u: goto label_24e114;
        case 0x24e118u: goto label_24e118;
        case 0x24e11cu: goto label_24e11c;
        case 0x24e120u: goto label_24e120;
        case 0x24e124u: goto label_24e124;
        case 0x24e128u: goto label_24e128;
        case 0x24e12cu: goto label_24e12c;
        case 0x24e130u: goto label_24e130;
        case 0x24e134u: goto label_24e134;
        case 0x24e138u: goto label_24e138;
        case 0x24e13cu: goto label_24e13c;
        case 0x24e140u: goto label_24e140;
        case 0x24e144u: goto label_24e144;
        case 0x24e148u: goto label_24e148;
        case 0x24e14cu: goto label_24e14c;
        case 0x24e150u: goto label_24e150;
        case 0x24e154u: goto label_24e154;
        case 0x24e158u: goto label_24e158;
        case 0x24e15cu: goto label_24e15c;
        case 0x24e160u: goto label_24e160;
        case 0x24e164u: goto label_24e164;
        case 0x24e168u: goto label_24e168;
        case 0x24e16cu: goto label_24e16c;
        case 0x24e170u: goto label_24e170;
        case 0x24e174u: goto label_24e174;
        case 0x24e178u: goto label_24e178;
        case 0x24e17cu: goto label_24e17c;
        case 0x24e180u: goto label_24e180;
        case 0x24e184u: goto label_24e184;
        case 0x24e188u: goto label_24e188;
        case 0x24e18cu: goto label_24e18c;
        case 0x24e190u: goto label_24e190;
        case 0x24e194u: goto label_24e194;
        case 0x24e198u: goto label_24e198;
        case 0x24e19cu: goto label_24e19c;
        case 0x24e1a0u: goto label_24e1a0;
        case 0x24e1a4u: goto label_24e1a4;
        case 0x24e1a8u: goto label_24e1a8;
        case 0x24e1acu: goto label_24e1ac;
        case 0x24e1b0u: goto label_24e1b0;
        case 0x24e1b4u: goto label_24e1b4;
        case 0x24e1b8u: goto label_24e1b8;
        case 0x24e1bcu: goto label_24e1bc;
        case 0x24e1c0u: goto label_24e1c0;
        case 0x24e1c4u: goto label_24e1c4;
        case 0x24e1c8u: goto label_24e1c8;
        case 0x24e1ccu: goto label_24e1cc;
        case 0x24e1d0u: goto label_24e1d0;
        case 0x24e1d4u: goto label_24e1d4;
        default: break;
    }

    ctx->pc = 0x24e068u;

label_24e068:
    // 0x24e068: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24e068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24e06c:
    // 0x24e06c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24e06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_24e070:
    // 0x24e070: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x24e070u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
label_24e074:
    // 0x24e074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24e074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24e078:
    // 0x24e078: 0x2683fb10  addiu       $v1, $s4, -0x4F0
    ctx->pc = 0x24e078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966032));
label_24e07c:
    // 0x24e07c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24e07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_24e080:
    // 0x24e080: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24e080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_24e084:
    // 0x24e084: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24e084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_24e088:
    // 0x24e088: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24e088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_24e08c:
    // 0x24e08c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24e08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_24e090:
    // 0x24e090: 0x8c620274  lw          $v0, 0x274($v1)
    ctx->pc = 0x24e090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 628)));
label_24e094:
    // 0x24e094: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_24e098:
    if (ctx->pc == 0x24E098u) {
        ctx->pc = 0x24E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E094u;
        // 0x24e098: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E09Cu;
        goto label_24e09c;
    }
    ctx->pc = 0x24E094u;
    {
        const bool branch_taken_0x24e094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E094u;
        // 0x24e098: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e094) {
            ctx->pc = 0x24E1B4u;
            goto label_24e1b4;
        }
    }
    ctx->pc = 0x24E09Cu;
label_24e09c:
    // 0x24e09c: 0x8c620278  lw          $v0, 0x278($v1)
    ctx->pc = 0x24e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
label_24e0a0:
    // 0x24e0a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_24e0a4:
    if (ctx->pc == 0x24E0A4u) {
        ctx->pc = 0x24E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0A0u;
        // 0x24e0a4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E0A8u;
        goto label_24e0a8;
    }
    ctx->pc = 0x24E0A0u;
    {
        const bool branch_taken_0x24e0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0A0u;
        // 0x24e0a4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e0a0) {
            ctx->pc = 0x24E0C8u;
            goto label_24e0c8;
        }
    }
    ctx->pc = 0x24E0A8u;
label_24e0a8:
    // 0x24e0a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24e0a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24e0ac:
    // 0x24e0ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24e0acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_24e0b0:
    // 0x24e0b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24e0b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24e0b4:
    // 0x24e0b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24e0b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_24e0b8:
    // 0x24e0b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24e0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24e0bc:
    // 0x24e0bc: 0x8093796  j           func_24DE58
label_24e0c0:
    if (ctx->pc == 0x24E0C0u) {
        ctx->pc = 0x24E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0BCu;
        // 0x24e0c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E0C4u;
        goto label_24e0c4;
    }
    ctx->pc = 0x24E0BCu;
    ctx->pc = 0x24E0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E0BCu;
    // 0x24e0c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DE58u;
    sub_0024DE58_0x24de58(rdram, ctx, runtime); return;
    ctx->pc = 0x24E0C4u;
label_24e0c4:
    // 0x24e0c4: 0x0  nop
    ctx->pc = 0x24e0c4u;
    // NOP
label_24e0c8:
    // 0x24e0c8: 0x8c700104  lw          $s0, 0x104($v1)
    ctx->pc = 0x24e0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_24e0cc:
    // 0x24e0cc: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_24e0d0:
    if (ctx->pc == 0x24E0D0u) {
        ctx->pc = 0x24E0D4u;
        goto label_24e0d4;
    }
    ctx->pc = 0x24E0CCu;
    {
        const bool branch_taken_0x24e0cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e0cc) {
            ctx->pc = 0x24E174u;
            goto label_24e174;
        }
    }
    ctx->pc = 0x24E0D4u;
label_24e0d4:
    // 0x24e0d4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x24e0d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24e0d8:
    // 0x24e0d8: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x24e0d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
label_24e0dc:
    // 0x24e0dc: 0x2672026c  addiu       $s2, $s3, 0x26C
    ctx->pc = 0x24e0dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 620));
label_24e0e0:
    // 0x24e0e0: 0x8602011a  lh          $v0, 0x11A($s0)
    ctx->pc = 0x24e0e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 282)));
label_24e0e4:
    // 0x24e0e4: 0x0  nop
    ctx->pc = 0x24e0e4u;
    // NOP
label_24e0e8:
    // 0x24e0e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24e0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24e0ec:
    // 0x24e0ec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_24e0f0:
    if (ctx->pc == 0x24E0F0u) {
        ctx->pc = 0x24E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0ECu;
        // 0x24e0f0: 0x8e110104  lw          $s1, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E0F4u;
        goto label_24e0f4;
    }
    ctx->pc = 0x24E0ECu;
    {
        const bool branch_taken_0x24e0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0ECu;
        // 0x24e0f0: 0x8e110104  lw          $s1, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e0ec) {
            ctx->pc = 0x24E168u;
            goto label_24e168;
        }
    }
    ctx->pc = 0x24E0F4u;
label_24e0f4:
    // 0x24e0f4: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x24e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_24e0f8:
    // 0x24e0f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_24e0fc:
    if (ctx->pc == 0x24E0FCu) {
        ctx->pc = 0x24E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0F8u;
        // 0x24e0fc: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E100u;
        goto label_24e100;
    }
    ctx->pc = 0x24E0F8u;
    {
        const bool branch_taken_0x24e0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e0f8) {
            ctx->pc = 0x24E0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E0F8u;
            // 0x24e0fc: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E10Cu;
            goto label_24e10c;
        }
    }
    ctx->pc = 0x24E100u;
label_24e100:
    // 0x24e100: 0x40f809  jalr        $v0
label_24e104:
    if (ctx->pc == 0x24E104u) {
        ctx->pc = 0x24E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E100u;
        // 0x24e104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E108u;
        goto label_24e108;
    }
    ctx->pc = 0x24E100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24E108u);
        ctx->pc = 0x24E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E100u;
        // 0x24e104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E100u, 0x24E108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E108u;
label_24e108:
    // 0x24e108: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x24e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_24e10c:
    // 0x24e10c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_24e110:
    if (ctx->pc == 0x24E110u) {
        ctx->pc = 0x24E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E10Cu;
        // 0x24e110: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E114u;
        goto label_24e114;
    }
    ctx->pc = 0x24E10Cu;
    {
        const bool branch_taken_0x24e10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e10c) {
            ctx->pc = 0x24E110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E10Cu;
            // 0x24e110: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E120u;
            goto label_24e120;
        }
    }
    ctx->pc = 0x24E114u;
label_24e114:
    // 0x24e114: 0x40f809  jalr        $v0
label_24e118:
    if (ctx->pc == 0x24E118u) {
        ctx->pc = 0x24E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E114u;
        // 0x24e118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E11Cu;
        goto label_24e11c;
    }
    ctx->pc = 0x24E114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24E11Cu);
        ctx->pc = 0x24E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E114u;
        // 0x24e118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E114u, 0x24E11Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E11Cu;
label_24e11c:
    // 0x24e11c: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x24e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_24e120:
    // 0x24e120: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_24e124:
    if (ctx->pc == 0x24E124u) {
        ctx->pc = 0x24E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E120u;
        // 0x24e124: 0xac510104  sw          $s1, 0x104($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E128u;
        goto label_24e128;
    }
    ctx->pc = 0x24E120u;
    {
        const bool branch_taken_0x24e120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E120u;
        // 0x24e124: 0xac510104  sw          $s1, 0x104($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e120) {
            ctx->pc = 0x24E138u;
            goto label_24e138;
        }
    }
    ctx->pc = 0x24E128u;
label_24e128:
    // 0x24e128: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x24e128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_24e12c:
    // 0x24e12c: 0x10000004  b           . + 4 + (0x4 << 2)
label_24e130:
    if (ctx->pc == 0x24E130u) {
        ctx->pc = 0x24E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E12Cu;
        // 0x24e130: 0xae220100  sw          $v0, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E134u;
        goto label_24e134;
    }
    ctx->pc = 0x24E12Cu;
    {
        const bool branch_taken_0x24e12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E12Cu;
        // 0x24e130: 0xae220100  sw          $v0, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e12c) {
            ctx->pc = 0x24E140u;
            goto label_24e140;
        }
    }
    ctx->pc = 0x24E134u;
label_24e134:
    // 0x24e134: 0x0  nop
    ctx->pc = 0x24e134u;
    // NOP
label_24e138:
    // 0x24e138: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x24e138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_24e13c:
    // 0x24e13c: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x24e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
label_24e140:
    // 0x24e140: 0x26a3fc40  addiu       $v1, $s5, -0x3C0
    ctx->pc = 0x24e140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966336));
label_24e144:
    // 0x24e144: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x24e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_24e148:
    // 0x24e148: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24e14c:
    if (ctx->pc == 0x24E14Cu) {
        ctx->pc = 0x24E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E148u;
        // 0x24e14c: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E150u;
        goto label_24e150;
    }
    ctx->pc = 0x24E148u;
    {
        const bool branch_taken_0x24e148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E148u;
        // 0x24e14c: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e148) {
            ctx->pc = 0x24E154u;
            goto label_24e154;
        }
    }
    ctx->pc = 0x24E150u;
label_24e150:
    // 0x24e150: 0xac500100  sw          $s0, 0x100($v0)
    ctx->pc = 0x24e150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 16));
label_24e154:
    // 0x24e154: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x24e154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_24e158:
    // 0x24e158: 0xac700104  sw          $s0, 0x104($v1)
    ctx->pc = 0x24e158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 16));
label_24e15c:
    // 0x24e15c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x24e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24e160:
    // 0x24e160: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_24e164:
    // 0x24e164: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x24e164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_24e168:
    // 0x24e168: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x24e168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24e16c:
    // 0x24e16c: 0x5600ffde  bnel        $s0, $zero, . + 4 + (-0x22 << 2)
label_24e170:
    if (ctx->pc == 0x24E170u) {
        ctx->pc = 0x24E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E16Cu;
        // 0x24e170: 0x8602011a  lh          $v0, 0x11A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 282)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E174u;
        goto label_24e174;
    }
    ctx->pc = 0x24E16Cu;
    {
        const bool branch_taken_0x24e16c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e16c) {
            ctx->pc = 0x24E170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E16Cu;
            // 0x24e170: 0x8602011a  lh          $v0, 0x11A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 282)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e0e8;
        }
    }
    ctx->pc = 0x24E174u;
label_24e174:
    // 0x24e174: 0xc08f5bc  jal         func_23D6F0
label_24e178:
    if (ctx->pc == 0x24E178u) {
        ctx->pc = 0x24E17Cu;
        goto label_24e17c;
    }
    ctx->pc = 0x24E174u;
    SET_GPR_U32(ctx, 31, 0x24E17Cu);
    ctx->pc = 0x23D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D6F0u, 0x24E174u, 0x24E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E17Cu;
label_24e17c:
    // 0x24e17c: 0x2682fb10  addiu       $v0, $s4, -0x4F0
    ctx->pc = 0x24e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966032));
label_24e180:
    // 0x24e180: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x24e180u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_24e184:
    // 0x24e184: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_24e188:
    if (ctx->pc == 0x24E188u) {
        ctx->pc = 0x24E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E184u;
        // 0x24e188: 0x2683fb10  addiu       $v1, $s4, -0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E18Cu;
        goto label_24e18c;
    }
    ctx->pc = 0x24E184u;
    {
        const bool branch_taken_0x24e184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E184u;
        // 0x24e188: 0x2683fb10  addiu       $v1, $s4, -0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e184) {
            ctx->pc = 0x24E1A8u;
            goto label_24e1a8;
        }
    }
    ctx->pc = 0x24E18Cu;
label_24e18c:
    // 0x24e18c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x24e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_24e190:
    // 0x24e190: 0x40f809  jalr        $v0
label_24e194:
    if (ctx->pc == 0x24E194u) {
        ctx->pc = 0x24E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E190u;
        // 0x24e194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E198u;
        goto label_24e198;
    }
    ctx->pc = 0x24E190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24E198u);
        ctx->pc = 0x24E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E190u;
        // 0x24e194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E190u, 0x24E198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E198u;
label_24e198:
    // 0x24e198: 0x8e100104  lw          $s0, 0x104($s0)
    ctx->pc = 0x24e198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_24e19c:
    // 0x24e19c: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
label_24e1a0:
    if (ctx->pc == 0x24E1A0u) {
        ctx->pc = 0x24E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E19Cu;
        // 0x24e1a0: 0x8e020108  lw          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E1A4u;
        goto label_24e1a4;
    }
    ctx->pc = 0x24E19Cu;
    {
        const bool branch_taken_0x24e19c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e19c) {
            ctx->pc = 0x24E1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E19Cu;
            // 0x24e1a0: 0x8e020108  lw          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e190;
        }
    }
    ctx->pc = 0x24E1A4u;
label_24e1a4:
    // 0x24e1a4: 0x2683fb10  addiu       $v1, $s4, -0x4F0
    ctx->pc = 0x24e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966032));
label_24e1a8:
    // 0x24e1a8: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x24e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_24e1ac:
    // 0x24e1ac: 0xac620270  sw          $v0, 0x270($v1)
    ctx->pc = 0x24e1acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 624), GPR_U32(ctx, 2));
label_24e1b0:
    // 0x24e1b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24e1b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24e1b4:
    // 0x24e1b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24e1b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24e1b8:
    // 0x24e1b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24e1b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24e1bc:
    // 0x24e1bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24e1bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_24e1c0:
    // 0x24e1c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24e1c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24e1c4:
    // 0x24e1c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24e1c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_24e1c8:
    // 0x24e1c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24e1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24e1cc:
    // 0x24e1cc: 0x3e00008  jr          $ra
label_24e1d0:
    if (ctx->pc == 0x24E1D0u) {
        ctx->pc = 0x24E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1CCu;
        // 0x24e1d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E1D4u;
        goto label_24e1d4;
    }
    ctx->pc = 0x24E1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1CCu;
        // 0x24e1d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E1D4u;
label_24e1d4:
    // 0x24e1d4: 0x0  nop
    ctx->pc = 0x24e1d4u;
    // NOP
    ctx->pc = 0x24e1d8u;
}
