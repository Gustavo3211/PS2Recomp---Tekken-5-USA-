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

// Function: sub_0027A138
// Address: 0x27a138 - 0x27a350
void sub_0027A138_0x27a138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A138_0x27a138");
#endif

    switch (ctx->pc) {
        case 0x27a17cu: goto label_27a17c;
        case 0x27a190u: goto label_27a190;
        case 0x27a248u: goto label_27a248;
        case 0x27a25cu: goto label_27a25c;
        case 0x27a270u: goto label_27a270;
        case 0x27a2d8u: goto label_27a2d8;
        default: break;
    }

    ctx->pc = 0x27a138u;

    // 0x27a138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27a138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27a13c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a140: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27a140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27a144: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27a144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27a148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a14c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27a14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a154: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27a154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27a158: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27a15c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27a15cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a160: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27a160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27a164: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x27a164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a168: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x27a168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x27a16c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27a16cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a170: 0xaf82ca84  sw          $v0, -0x357C($gp)
    ctx->pc = 0x27a170u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953604), GPR_U32(ctx, 2));
    // 0x27a174: 0xc080b84  jal         func_202E10
    ctx->pc = 0x27A174u;
    SET_GPR_U32(ctx, 31, 0x27A17Cu);
    ctx->pc = 0x27A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A174u;
    // 0x27a178: 0xaf82ca80  sw          $v0, -0x3580($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953600), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202E10u, 0x27A174u, 0x27A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A17Cu;
label_27a17c:
    // 0x27a17c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x27a17cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27a180: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x27a180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27a184: 0x50620049  beql        $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x27A184u;
    {
        const bool branch_taken_0x27a184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a184) {
            ctx->pc = 0x27A188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A184u;
            // 0x27a188: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A2ACu;
            goto label_27a2ac;
        }
    }
    ctx->pc = 0x27A18Cu;
    // 0x27a18c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x27a18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_27a190:
    // 0x27a190: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x27a190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x27a194: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27A194u;
    {
        const bool branch_taken_0x27a194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A194u;
        // 0x27a198: 0x34028006  ori         $v0, $zero, 0x8006 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a194) {
            ctx->pc = 0x27A1C0u;
            goto label_27a1c0;
        }
    }
    ctx->pc = 0x27A19Cu;
    // 0x27a19c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x27a19cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a1a0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x27a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x27a1a4: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x27a1a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x27a1a8: 0x8c8501b0  lw          $a1, 0x1B0($a0)
    ctx->pc = 0x27a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x27a1ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x27a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x27a1b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a1b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x27a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x27a1b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27A1B8u;
    {
        const bool branch_taken_0x27a1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1B8u;
        // 0x27a1bc: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1b8) {
            ctx->pc = 0x27A1D0u;
            goto label_27a1d0;
        }
    }
    ctx->pc = 0x27A1C0u;
label_27a1c0:
    // 0x27a1c0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A1C0u;
    {
        const bool branch_taken_0x27a1c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27a1c0) {
            ctx->pc = 0x27A1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A1C0u;
            // 0x27a1c4: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A1D4u;
            goto label_27a1d4;
        }
    }
    ctx->pc = 0x27A1C8u;
    // 0x27a1c8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x27A1C8u;
    {
        const bool branch_taken_0x27a1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1C8u;
        // 0x27a1cc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1c8) {
            ctx->pc = 0x27A294u;
            goto label_27a294;
        }
    }
    ctx->pc = 0x27A1D0u;
label_27a1d0:
    // 0x27a1d0: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x27a1d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_27a1d4:
    // 0x27a1d4: 0x8f83ca80  lw          $v1, -0x3580($gp)
    ctx->pc = 0x27a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953600)));
    // 0x27a1d8: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x27a1d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x27a1dc: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x27a1dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x27a1e0: 0xaf83ca80  sw          $v1, -0x3580($gp)
    ctx->pc = 0x27a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953600), GPR_U32(ctx, 3));
    // 0x27a1e4: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x27a1e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27a1e8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x27a1e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27a1ec: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x27A1ECu;
    {
        const bool branch_taken_0x27a1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a1ec) {
            ctx->pc = 0x27A1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A1ECu;
            // 0x27a1f0: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A298u;
            goto label_27a298;
        }
    }
    ctx->pc = 0x27A1F4u;
    // 0x27a1f4: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x27a1f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x27a1f8: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x27a1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x27a1fc: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x27A1FCu;
    {
        const bool branch_taken_0x27a1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a1fc) {
            ctx->pc = 0x27A200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A1FCu;
            // 0x27a200: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A298u;
            goto label_27a298;
        }
    }
    ctx->pc = 0x27A204u;
    // 0x27a204: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x27a204u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x27a208: 0x8f83ca84  lw          $v1, -0x357C($gp)
    ctx->pc = 0x27a208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953604)));
    // 0x27a20c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x27a20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x27a210: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x27a210u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x27a214: 0xaf83ca84  sw          $v1, -0x357C($gp)
    ctx->pc = 0x27a214u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953604), GPR_U32(ctx, 3));
    // 0x27a218: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x27a218u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x27a21c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x27a21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x27a220: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A220u;
    {
        const bool branch_taken_0x27a220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A220u;
        // 0x27a224: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a220) {
            ctx->pc = 0x27A234u;
            goto label_27a234;
        }
    }
    ctx->pc = 0x27A228u;
    // 0x27a228: 0xa6200178  sh          $zero, 0x178($s1)
    ctx->pc = 0x27a228u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 376), (uint16_t)GPR_U32(ctx, 0));
    // 0x27a22c: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x27a22cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x27a230: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x27a230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_27a234:
    // 0x27a234: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x27A234u;
    {
        const bool branch_taken_0x27a234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a234) {
            ctx->pc = 0x27A238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A234u;
            // 0x27a238: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A298u;
            goto label_27a298;
        }
    }
    ctx->pc = 0x27A23Cu;
    // 0x27a23c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a240: 0xc09e32e  jal         func_278CB8
    ctx->pc = 0x27A240u;
    SET_GPR_U32(ctx, 31, 0x27A248u);
    ctx->pc = 0x27A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A240u;
    // 0x27a244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278CB8u, 0x27A240u, 0x27A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A248u;
label_27a248:
    // 0x27a248: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27A248u;
    {
        const bool branch_taken_0x27a248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A248u;
        // 0x27a24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a248) {
            ctx->pc = 0x27A294u;
            goto label_27a294;
        }
    }
    ctx->pc = 0x27A250u;
    // 0x27a250: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27a250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a254: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x27A254u;
    SET_GPR_U32(ctx, 31, 0x27A25Cu);
    ctx->pc = 0x27A258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A254u;
    // 0x27a258: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x27A254u, 0x27A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A25Cu;
label_27a25c:
    // 0x27a25c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27A25Cu;
    {
        const bool branch_taken_0x27a25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A25Cu;
        // 0x27a260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a25c) {
            ctx->pc = 0x27A294u;
            goto label_27a294;
        }
    }
    ctx->pc = 0x27A264u;
    // 0x27a264: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27a264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a268: 0xc09ec0e  jal         func_27B038
    ctx->pc = 0x27A268u;
    SET_GPR_U32(ctx, 31, 0x27A270u);
    ctx->pc = 0x27A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A268u;
    // 0x27a26c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B038u, 0x27A268u, 0x27A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A270u;
label_27a270:
    // 0x27a270: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x27a270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x27a274: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x27a274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x27a278: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A278u;
    {
        const bool branch_taken_0x27a278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A278u;
        // 0x27a27c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a278) {
            ctx->pc = 0x27A288u;
            goto label_27a288;
        }
    }
    ctx->pc = 0x27A280u;
    // 0x27a280: 0xa6220178  sh          $v0, 0x178($s1)
    ctx->pc = 0x27a280u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 376), (uint16_t)GPR_U32(ctx, 2));
    // 0x27a284: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x27a284u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_27a288:
    // 0x27a288: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x27a288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x27a28c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A28Cu;
    {
        const bool branch_taken_0x27a28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a28c) {
            ctx->pc = 0x27A290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A28Cu;
            // 0x27a290: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A2ACu;
            goto label_27a2ac;
        }
    }
    ctx->pc = 0x27A294u;
label_27a294:
    // 0x27a294: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x27a294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_27a298:
    // 0x27a298: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x27a298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27a29c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x27a29cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27a2a0: 0x1462ffbb  bne         $v1, $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x27A2A0u;
    {
        const bool branch_taken_0x27a2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2A0u;
        // 0x27a2a4: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2a0) {
            ctx->pc = 0x27A190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a190;
        }
    }
    ctx->pc = 0x27A2A8u;
    // 0x27a2a8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x27a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27a2ac:
    // 0x27a2ac: 0x24043fff  addiu       $a0, $zero, 0x3FFF
    ctx->pc = 0x27a2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x27a2b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a2b4: 0x54640010  bnel        $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27A2B4u;
    {
        const bool branch_taken_0x27a2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27a2b4) {
            ctx->pc = 0x27A2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A2B4u;
            // 0x27a2b8: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A2F8u;
            goto label_27a2f8;
        }
    }
    ctx->pc = 0x27A2BCu;
    // 0x27a2bc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x27a2bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27a2c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x27a2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27a2c4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27A2C4u;
    {
        const bool branch_taken_0x27a2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a2c4) {
            ctx->pc = 0x27A2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A2C4u;
            // 0x27a2c8: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A2F8u;
            goto label_27a2f8;
        }
    }
    ctx->pc = 0x27A2CCu;
    // 0x27a2cc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x27a2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27a2d0: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x27a2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x27a2d4: 0x0  nop
    ctx->pc = 0x27a2d4u;
    // NOP
label_27a2d8:
    // 0x27a2d8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x27a2d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27a2dc: 0x0  nop
    ctx->pc = 0x27a2dcu;
    // NOP
    // 0x27a2e0: 0x0  nop
    ctx->pc = 0x27a2e0u;
    // NOP
    // 0x27a2e4: 0x0  nop
    ctx->pc = 0x27a2e4u;
    // NOP
    // 0x27a2e8: 0x0  nop
    ctx->pc = 0x27a2e8u;
    // NOP
    // 0x27a2ec: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27A2ECu;
    {
        const bool branch_taken_0x27a2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27a2ec) {
            ctx->pc = 0x27A2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A2ECu;
            // 0x27a2f0: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a2d8;
        }
    }
    ctx->pc = 0x27A2F4u;
    // 0x27a2f4: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x27a2f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_27a2f8:
    // 0x27a2f8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x27a2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x27a2fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27A2FCu;
    {
        const bool branch_taken_0x27a2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2FCu;
        // 0x27a300: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2fc) {
            ctx->pc = 0x27A328u;
            goto label_27a328;
        }
    }
    ctx->pc = 0x27A304u;
    // 0x27a304: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x27a304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27a308: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27A308u;
    {
        const bool branch_taken_0x27a308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A308u;
        // 0x27a30c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a308) {
            ctx->pc = 0x27A32Cu;
            goto label_27a32c;
        }
    }
    ctx->pc = 0x27A310u;
    // 0x27a310: 0x862202c4  lh          $v0, 0x2C4($s1)
    ctx->pc = 0x27a310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 708)));
    // 0x27a314: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A314u;
    {
        const bool branch_taken_0x27a314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A314u;
        // 0x27a318: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a314) {
            ctx->pc = 0x27A32Cu;
            goto label_27a32c;
        }
    }
    ctx->pc = 0x27A31Cu;
    // 0x27a31c: 0x1000ff97  b           . + 4 + (-0x69 << 2)
    ctx->pc = 0x27A31Cu;
    {
        const bool branch_taken_0x27a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A31Cu;
        // 0x27a320: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a31c) {
            ctx->pc = 0x27A17Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a17c;
        }
    }
    ctx->pc = 0x27A324u;
    // 0x27a324: 0x0  nop
    ctx->pc = 0x27a324u;
    // NOP
label_27a328:
    // 0x27a328: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27a328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27a32c:
    // 0x27a32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27a330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27a334: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27a334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a338: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27a338u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27a33c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27a33cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a340: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x27a340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27a344: 0x3e00008  jr          $ra
    ctx->pc = 0x27A344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A344u;
        // 0x27a348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A34Cu;
    // 0x27a34c: 0x0  nop
    ctx->pc = 0x27a34cu;
    // NOP
    ctx->pc = 0x27a350u;
}
