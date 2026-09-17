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

// Function: sub_002201A8
// Address: 0x2201a8 - 0x220360
void sub_002201A8_0x2201a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002201A8_0x2201a8");
#endif

    switch (ctx->pc) {
        case 0x220204u: goto label_220204;
        case 0x22021cu: goto label_22021c;
        case 0x220298u: goto label_220298;
        case 0x2202acu: goto label_2202ac;
        case 0x2202b8u: goto label_2202b8;
        case 0x2202d0u: goto label_2202d0;
        case 0x2202e8u: goto label_2202e8;
        case 0x2202f4u: goto label_2202f4;
        case 0x220310u: goto label_220310;
        case 0x220318u: goto label_220318;
        case 0x220328u: goto label_220328;
        default: break;
    }

    ctx->pc = 0x2201a8u;

    // 0x2201a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2201a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2201ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2201acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2201b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2201b4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2201b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201b8: 0x2e830014  sltiu       $v1, $s4, 0x14
    ctx->pc = 0x2201b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2201bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2201bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2201c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2201c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2201c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2201c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2201c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2201cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2201ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201d0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2201d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2201d4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2201d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2201d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2201dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2201dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2201e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2201e4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2201e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201e8: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x2201E8u;
    {
        const bool branch_taken_0x2201e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201E8u;
        // 0x2201ec: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201e8) {
            ctx->pc = 0x220334u;
            goto label_220334;
        }
    }
    ctx->pc = 0x2201F0u;
    // 0x2201f0: 0x2c830050  sltiu       $v1, $a0, 0x50
    ctx->pc = 0x2201f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x2201f4: 0x50600050  beql        $v1, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x2201F4u;
    {
        const bool branch_taken_0x2201f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2201f4) {
            ctx->pc = 0x2201F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2201F4u;
            // 0x2201f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220338u;
            goto label_220338;
        }
    }
    ctx->pc = 0x2201FCu;
    // 0x2201fc: 0xc086438  jal         func_2190E0
    ctx->pc = 0x2201FCu;
    SET_GPR_U32(ctx, 31, 0x220204u);
    ctx->pc = 0x220200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201FCu;
    // 0x220200: 0x32730001  andi        $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2190E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2190E0u, 0x2201FCu, 0x220204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220204u;
label_220204:
    // 0x220204: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x220204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220208: 0x2e43001e  sltiu       $v1, $s2, 0x1E
    ctx->pc = 0x220208u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x22020c: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x22020Cu;
    {
        const bool branch_taken_0x22020c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22020Cu;
        // 0x220210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22020c) {
            ctx->pc = 0x220334u;
            goto label_220334;
        }
    }
    ctx->pc = 0x220214u;
    // 0x220214: 0xc086428  jal         func_2190A0
    ctx->pc = 0x220214u;
    SET_GPR_U32(ctx, 31, 0x22021Cu);
    ctx->pc = 0x220218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220214u;
    // 0x220218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2190A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2190A0u, 0x220214u, 0x22021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22021Cu;
label_22021c:
    // 0x22021c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22021Cu;
    {
        const bool branch_taken_0x22021c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x220220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22021Cu;
        // 0x220220: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22021c) {
            ctx->pc = 0x220238u;
            goto label_220238;
        }
    }
    ctx->pc = 0x220224u;
    // 0x220224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220228: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x220228u;
    {
        const bool branch_taken_0x220228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220228u;
        // 0x22022c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220228) {
            ctx->pc = 0x220268u;
            goto label_220268;
        }
    }
    ctx->pc = 0x220230u;
    // 0x220230: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x220230u;
    {
        const bool branch_taken_0x220230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220230u;
        // 0x220234: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220230) {
            ctx->pc = 0x220338u;
            goto label_220338;
        }
    }
    ctx->pc = 0x220238u;
label_220238:
    // 0x220238: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x220238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x22023c: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x22023cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x220240: 0x24424520  addiu       $v0, $v0, 0x4520
    ctx->pc = 0x220240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17696));
    // 0x220244: 0x34847e04  ori         $a0, $a0, 0x7E04
    ctx->pc = 0x220244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32260);
    // 0x220248: 0x24424910  addiu       $v0, $v0, 0x4910
    ctx->pc = 0x220248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18704));
    // 0x22024c: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x22024cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x220250: 0x91202b  sltu        $a0, $a0, $s1
    ctx->pc = 0x220250u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x220254: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x220254u;
    {
        const bool branch_taken_0x220254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220254u;
        // 0x220258: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220254) {
            ctx->pc = 0x220288u;
            goto label_220288;
        }
    }
    ctx->pc = 0x22025Cu;
    // 0x22025c: 0x3c110005  lui         $s1, 0x5
    ctx->pc = 0x22025cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)5 << 16));
    // 0x220260: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x220260u;
    {
        const bool branch_taken_0x220260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220260u;
        // 0x220264: 0x36317e04  ori         $s1, $s1, 0x7E04 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32260);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220260) {
            ctx->pc = 0x220288u;
            goto label_220288;
        }
    }
    ctx->pc = 0x220268u;
label_220268:
    // 0x220268: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x220268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x22026c: 0x142180  sll         $a0, $s4, 6
    ctx->pc = 0x22026cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x220270: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x220270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x220274: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x220274u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x220278: 0x261095b0  addiu       $s0, $s0, -0x6A50
    ctx->pc = 0x220278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940080));
    // 0x22027c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x22027cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x220280: 0x51182b  sltu        $v1, $v0, $s1
    ctx->pc = 0x220280u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x220284: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x220284u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_220288:
    // 0x220288: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x220288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x22028c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22028cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220290: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x220290u;
    SET_GPR_U32(ctx, 31, 0x220298u);
    ctx->pc = 0x220294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220290u;
    // 0x220294: 0xae110034  sw          $s1, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x220290u, 0x220298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220298u;
label_220298:
    // 0x220298: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x220298u;
    {
        const bool branch_taken_0x220298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220298u;
        // 0x22029c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220298) {
            ctx->pc = 0x220300u;
            goto label_220300;
        }
    }
    ctx->pc = 0x2202A0u;
    // 0x2202a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2202a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202a4: 0xc0b2346  jal         func_2C8D18
    ctx->pc = 0x2202A4u;
    SET_GPR_U32(ctx, 31, 0x2202ACu);
    ctx->pc = 0x2202A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202A4u;
    // 0x2202a8: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8D18u, 0x2202A4u, 0x2202ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202ACu;
label_2202ac:
    // 0x2202ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2202acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202b0: 0xc0a6432  jal         func_2990C8
    ctx->pc = 0x2202B0u;
    SET_GPR_U32(ctx, 31, 0x2202B8u);
    ctx->pc = 0x2202B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202B0u;
    // 0x2202b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2990C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2990C8u, 0x2202B0u, 0x2202B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202B8u;
label_2202b8:
    // 0x2202b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2202B8u;
    {
        const bool branch_taken_0x2202b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2202BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202B8u;
        // 0x2202bc: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202b8) {
            ctx->pc = 0x2202D8u;
            goto label_2202d8;
        }
    }
    ctx->pc = 0x2202C0u;
    // 0x2202c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2202c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202c4: 0x24a52d28  addiu       $a1, $a1, 0x2D28
    ctx->pc = 0x2202c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11560));
    // 0x2202c8: 0xc04a58e  jal         func_129638
    ctx->pc = 0x2202C8u;
    SET_GPR_U32(ctx, 31, 0x2202D0u);
    ctx->pc = 0x2202CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202C8u;
    // 0x2202cc: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x2202C8u, 0x2202D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202D0u;
label_2202d0:
    // 0x2202d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2202D0u;
    {
        const bool branch_taken_0x2202d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2202D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202D0u;
        // 0x2202d4: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202d0) {
            ctx->pc = 0x2202ECu;
            goto label_2202ec;
        }
    }
    ctx->pc = 0x2202D8u;
label_2202d8:
    // 0x2202d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2202d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2202dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202e0: 0xc04a58e  jal         func_129638
    ctx->pc = 0x2202E0u;
    SET_GPR_U32(ctx, 31, 0x2202E8u);
    ctx->pc = 0x2202E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202E0u;
    // 0x2202e4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x2202E0u, 0x2202E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202E8u;
label_2202e8:
    // 0x2202e8: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x2202e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
label_2202ec:
    // 0x2202ec: 0xc0b22e6  jal         func_2C8B98
    ctx->pc = 0x2202ECu;
    SET_GPR_U32(ctx, 31, 0x2202F4u);
    ctx->pc = 0x2202F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202ECu;
    // 0x2202f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B98u, 0x2202ECu, 0x2202F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202F4u;
label_2202f4:
    // 0x2202f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2202F4u;
    {
        const bool branch_taken_0x2202f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2202F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202F4u;
        // 0x2202f8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202f4) {
            ctx->pc = 0x220330u;
            goto label_220330;
        }
    }
    ctx->pc = 0x2202FCu;
    // 0x2202fc: 0x0  nop
    ctx->pc = 0x2202fcu;
    // NOP
label_220300:
    // 0x220300: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x220300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x220304: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x220304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220308: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x220308u;
    SET_GPR_U32(ctx, 31, 0x220310u);
    ctx->pc = 0x22030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220308u;
    // 0x22030c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x220308u, 0x220310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220310u;
label_220310:
    // 0x220310: 0xc08e498  jal         func_239260
    ctx->pc = 0x220310u;
    SET_GPR_U32(ctx, 31, 0x220318u);
    ctx->pc = 0x220314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220310u;
    // 0x220314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239260u, 0x220310u, 0x220318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220318u;
label_220318:
    // 0x220318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22031c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22031cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220320: 0xc04a58e  jal         func_129638
    ctx->pc = 0x220320u;
    SET_GPR_U32(ctx, 31, 0x220328u);
    ctx->pc = 0x220324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220320u;
    // 0x220324: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x220320u, 0x220328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220328u;
label_220328:
    // 0x220328: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x220328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22032c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x22032cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_220330:
    // 0x220330: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x220330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_220334:
    // 0x220334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_220338:
    // 0x220338: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22033c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22033cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220340: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x220340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220344: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x220344u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220348: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x220348u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22034c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x22034cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220350: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x220350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220354: 0x3e00008  jr          $ra
    ctx->pc = 0x220354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220354u;
        // 0x220358: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22035Cu;
    // 0x22035c: 0x0  nop
    ctx->pc = 0x22035cu;
    // NOP
    ctx->pc = 0x220360u;
}
