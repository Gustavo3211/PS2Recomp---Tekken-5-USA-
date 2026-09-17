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

// Function: sub_00218698
// Address: 0x218698 - 0x218a30
void sub_00218698_0x218698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218698_0x218698");
#endif

    switch (ctx->pc) {
        case 0x2186d4u: goto label_2186d4;
        case 0x2186dcu: goto label_2186dc;
        case 0x218720u: goto label_218720;
        case 0x21872cu: goto label_21872c;
        case 0x218734u: goto label_218734;
        case 0x21873cu: goto label_21873c;
        case 0x218750u: goto label_218750;
        case 0x21878cu: goto label_21878c;
        case 0x2187a0u: goto label_2187a0;
        case 0x2187b8u: goto label_2187b8;
        case 0x2187c4u: goto label_2187c4;
        case 0x2187f8u: goto label_2187f8;
        case 0x21884cu: goto label_21884c;
        case 0x218874u: goto label_218874;
        case 0x218880u: goto label_218880;
        case 0x2188a8u: goto label_2188a8;
        case 0x2188d0u: goto label_2188d0;
        case 0x2188e0u: goto label_2188e0;
        case 0x218908u: goto label_218908;
        case 0x21893cu: goto label_21893c;
        case 0x218954u: goto label_218954;
        case 0x218988u: goto label_218988;
        case 0x218994u: goto label_218994;
        default: break;
    }

    ctx->pc = 0x218698u;

    // 0x218698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x218698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21869c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21869cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2186a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2186a4: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x2186a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x2186a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2186a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2186ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2186acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186b0: 0x260437e0  addiu       $a0, $s0, 0x37E0
    ctx->pc = 0x2186b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14304));
    // 0x2186b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2186b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2186b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2186b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2186bc: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x2186bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x2186c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2186c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2186c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2186c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186c8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2186c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2186cc: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2186CCu;
    SET_GPR_U32(ctx, 31, 0x2186D4u);
    ctx->pc = 0x2186D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186CCu;
    // 0x2186d0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2186CCu, 0x2186D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2186D4u;
label_2186d4:
    // 0x2186d4: 0xc0b77d0  jal         func_2DDF40
    ctx->pc = 0x2186D4u;
    SET_GPR_U32(ctx, 31, 0x2186DCu);
    ctx->pc = 0x2186D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186D4u;
    // 0x2186d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDF40u, 0x2186D4u, 0x2186DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2186DCu;
label_2186dc:
    // 0x2186dc: 0x26638858  addiu       $v1, $s3, -0x77A8
    ctx->pc = 0x2186dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
    // 0x2186e0: 0x8e260048  lw          $a2, 0x48($s1)
    ctx->pc = 0x2186e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2186e4: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x2186e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2186e8: 0x2cc50007  sltiu       $a1, $a2, 0x7
    ctx->pc = 0x2186e8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2186ec: 0x10a000b2  beqz        $a1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2186ECu;
    {
        const bool branch_taken_0x2186ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2186F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186ECu;
        // 0x2186f0: 0x449025  or          $s2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186ec) {
            ctx->pc = 0x2189B8u;
            goto label_2189b8;
        }
    }
    ctx->pc = 0x2186F4u;
    // 0x2186f4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2186f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2186f8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2186f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2186fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2186fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218700: 0x8c635b00  lw          $v1, 0x5B00($v1)
    ctx->pc = 0x218700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23296)));
    // 0x218704: 0x600008  jr          $v1
    ctx->pc = 0x218704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218710u: goto label_218710;
            case 0x218818u: goto label_218818;
            case 0x218888u: goto label_218888;
            case 0x2188B0u: goto label_2188b0;
            case 0x218960u: goto label_218960;
            case 0x2189A0u: goto label_2189a0;
            case 0x2189B0u: goto label_2189b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218704u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21870Cu;
    // 0x21870c: 0x0  nop
    ctx->pc = 0x21870cu;
    // NOP
label_218710:
    // 0x218710: 0x261037e0  addiu       $s0, $s0, 0x37E0
    ctx->pc = 0x218710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14304));
    // 0x218714: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x218714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x218718: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x218718u;
    SET_GPR_U32(ctx, 31, 0x218720u);
    ctx->pc = 0x21871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218718u;
    // 0x21871c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x218718u, 0x218720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218720u;
label_218720:
    // 0x218720: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x218720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x218724: 0xc092486  jal         func_249218
    ctx->pc = 0x218724u;
    SET_GPR_U32(ctx, 31, 0x21872Cu);
    ctx->pc = 0x218728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218724u;
    // 0x218728: 0xac400050  sw          $zero, 0x50($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x218724u, 0x21872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21872Cu;
label_21872c:
    // 0x21872c: 0xc092490  jal         func_249240
    ctx->pc = 0x21872Cu;
    SET_GPR_U32(ctx, 31, 0x218734u);
    ctx->pc = 0x218730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21872Cu;
    // 0x218730: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249240u, 0x21872Cu, 0x218734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218734u;
label_218734:
    // 0x218734: 0xc092108  jal         func_248420
    ctx->pc = 0x218734u;
    SET_GPR_U32(ctx, 31, 0x21873Cu);
    ctx->pc = 0x248420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248420u, 0x218734u, 0x21873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21873Cu;
label_21873c:
    // 0x21873c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21873cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x218740: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x218740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x218744: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x218744u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x218748: 0xc0929f4  jal         func_24A7D0
    ctx->pc = 0x218748u;
    SET_GPR_U32(ctx, 31, 0x218750u);
    ctx->pc = 0x21874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218748u;
    // 0x21874c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A7D0u, 0x218748u, 0x218750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218750u;
label_218750:
    // 0x218750: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218754: 0x24425af0  addiu       $v0, $v0, 0x5AF0
    ctx->pc = 0x218754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23280));
    // 0x218758: 0x16400029  bnez        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x218758u;
    {
        const bool branch_taken_0x218758 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x21875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218758u;
        // 0x21875c: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218758) {
            ctx->pc = 0x218800u;
            goto label_218800;
        }
    }
    ctx->pc = 0x218760u;
    // 0x218760: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x218760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x218764: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x218764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x218768: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x218768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x21876c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x21876cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x218770: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x218770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218774: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x218778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21877c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21877cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218780: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x218780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x218784: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x218784u;
    SET_GPR_U32(ctx, 31, 0x21878Cu);
    ctx->pc = 0x218788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218784u;
    // 0x218788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x218784u, 0x21878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21878Cu;
label_21878c:
    // 0x21878c: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x21878cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x218790: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x218790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x218794: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x218794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218798: 0xc0a5f6c  jal         func_297DB0
    ctx->pc = 0x218798u;
    SET_GPR_U32(ctx, 31, 0x2187A0u);
    ctx->pc = 0x21879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218798u;
    // 0x21879c: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297DB0u, 0x218798u, 0x2187A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187A0u;
label_2187a0:
    // 0x2187a0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2187a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2187a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2187a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2187a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2187a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2187ac: 0xa0620052  sb          $v0, 0x52($v1)
    ctx->pc = 0x2187acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 82), (uint8_t)GPR_U32(ctx, 2));
    // 0x2187b0: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x2187B0u;
    SET_GPR_U32(ctx, 31, 0x2187B8u);
    ctx->pc = 0x2187B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187B0u;
    // 0x2187b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x2187B0u, 0x2187B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187B8u;
label_2187b8:
    // 0x2187b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2187b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187bc: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2187BCu;
    SET_GPR_U32(ctx, 31, 0x2187C4u);
    ctx->pc = 0x2187C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187BCu;
    // 0x2187c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2187BCu, 0x2187C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187C4u;
label_2187c4:
    // 0x2187c4: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x2187c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2187c8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2187c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2187cc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2187CCu;
    {
        const bool branch_taken_0x2187cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2187cc) {
            ctx->pc = 0x2187D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2187CCu;
            // 0x2187d0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2187E8u;
            goto label_2187e8;
        }
    }
    ctx->pc = 0x2187D4u;
    // 0x2187d4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2187d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2187d8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2187d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2187dc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2187DCu;
    {
        const bool branch_taken_0x2187dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2187dc) {
            ctx->pc = 0x2187F0u;
            goto label_2187f0;
        }
    }
    ctx->pc = 0x2187E4u;
    // 0x2187e4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2187e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2187e8:
    // 0x2187e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2187e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187ec: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2187ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2187f0:
    // 0x2187f0: 0xc0a1626  jal         func_285898
    ctx->pc = 0x2187F0u;
    SET_GPR_U32(ctx, 31, 0x2187F8u);
    ctx->pc = 0x285898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285898u, 0x2187F0u, 0x2187F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187F8u;
label_2187f8:
    // 0x2187f8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2187F8u;
    {
        const bool branch_taken_0x2187f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2187FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187F8u;
        // 0x2187fc: 0x8f849718  lw          $a0, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2187f8) {
            ctx->pc = 0x2189BCu;
            goto label_2189bc;
        }
    }
    ctx->pc = 0x218800u;
label_218800:
    // 0x218800: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x218800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x218804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218808: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x218808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21880c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x21880Cu;
    {
        const bool branch_taken_0x21880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21880Cu;
        // 0x218810: 0xa0400052  sb          $zero, 0x52($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 82), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21880c) {
            ctx->pc = 0x21894Cu;
            goto label_21894c;
        }
    }
    ctx->pc = 0x218814u;
    // 0x218814: 0x0  nop
    ctx->pc = 0x218814u;
    // NOP
label_218818:
    // 0x218818: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x218818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x21881c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21881cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x218820: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x218820u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x218824: 0x2610c450  addiu       $s0, $s0, -0x3BB0
    ctx->pc = 0x218824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952016));
    // 0x218828: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x218828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x21882c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21882cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218830: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x218830u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x218834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21883c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21883cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x218840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218844: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x218844u;
    SET_GPR_U32(ctx, 31, 0x21884Cu);
    ctx->pc = 0x218848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218844u;
    // 0x218848: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x218844u, 0x21884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21884Cu;
label_21884c:
    // 0x21884c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x21884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x218850: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x218850u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x218854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218858: 0xa0400052  sb          $zero, 0x52($v0)
    ctx->pc = 0x218858u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 82), (uint8_t)GPR_U32(ctx, 0));
    // 0x21885c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x21885cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x218860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218864: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x218864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218868: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x218868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21886c: 0xc0a5ec2  jal         func_297B08
    ctx->pc = 0x21886Cu;
    SET_GPR_U32(ctx, 31, 0x218874u);
    ctx->pc = 0x218870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21886Cu;
    // 0x218870: 0xaf809718  sw          $zero, -0x68E8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940440), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B08u, 0x21886Cu, 0x218874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218874u;
label_218874:
    // 0x218874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218878: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x218878u;
    SET_GPR_U32(ctx, 31, 0x218880u);
    ctx->pc = 0x21887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218878u;
    // 0x21887c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x218878u, 0x218880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218880u;
label_218880:
    // 0x218880: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x218880u;
    {
        const bool branch_taken_0x218880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218880u;
        // 0x218884: 0x8f849718  lw          $a0, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218880) {
            ctx->pc = 0x2189BCu;
            goto label_2189bc;
        }
    }
    ctx->pc = 0x218888u;
label_218888:
    // 0x218888: 0x8f849718  lw          $a0, -0x68E8($gp)
    ctx->pc = 0x218888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
    // 0x21888c: 0x2882003c  slti        $v0, $a0, 0x3C
    ctx->pc = 0x21888cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x218890: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x218890u;
    {
        const bool branch_taken_0x218890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218890u;
        // 0x218894: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218890) {
            ctx->pc = 0x2189BCu;
            goto label_2189bc;
        }
    }
    ctx->pc = 0x218898u;
    // 0x218898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21889c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x21889cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2188a0: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x2188A0u;
    SET_GPR_U32(ctx, 31, 0x2188A8u);
    ctx->pc = 0x2188A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188A0u;
    // 0x2188a4: 0xaf809718  sw          $zero, -0x68E8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940440), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x2188A0u, 0x2188A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188A8u;
label_2188a8:
    // 0x2188a8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2188A8u;
    {
        const bool branch_taken_0x2188a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2188ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188A8u;
        // 0x2188ac: 0x8f849718  lw          $a0, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188a8) {
            ctx->pc = 0x2189BCu;
            goto label_2189bc;
        }
    }
    ctx->pc = 0x2188B0u;
label_2188b0:
    // 0x2188b0: 0x8f849718  lw          $a0, -0x68E8($gp)
    ctx->pc = 0x2188b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
    // 0x2188b4: 0x26708858  addiu       $s0, $s3, -0x77A8
    ctx->pc = 0x2188b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
    // 0x2188b8: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2188b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2188bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2188bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2188c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2188C0u;
    {
        const bool branch_taken_0x2188c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2188C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188C0u;
        // 0x2188c4: 0xaf849718  sw          $a0, -0x68E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940440), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188c0) {
            ctx->pc = 0x2188E4u;
            goto label_2188e4;
        }
    }
    ctx->pc = 0x2188C8u;
    // 0x2188c8: 0xc08f324  jal         func_23CC90
    ctx->pc = 0x2188C8u;
    SET_GPR_U32(ctx, 31, 0x2188D0u);
    ctx->pc = 0x23CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CC90u, 0x2188C8u, 0x2188D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188D0u;
label_2188d0:
    // 0x2188d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2188D0u;
    {
        const bool branch_taken_0x2188d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2188d0) {
            ctx->pc = 0x2188D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2188D0u;
            // 0x2188d4: 0x26628858  addiu       $v0, $s3, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2188E8u;
            goto label_2188e8;
        }
    }
    ctx->pc = 0x2188D8u;
    // 0x2188d8: 0xc08f304  jal         func_23CC10
    ctx->pc = 0x2188D8u;
    SET_GPR_U32(ctx, 31, 0x2188E0u);
    ctx->pc = 0x23CC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CC10u, 0x2188D8u, 0x2188E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188E0u;
label_2188e0:
    // 0x2188e0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2188e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_2188e4:
    // 0x2188e4: 0x26628858  addiu       $v0, $s3, -0x77A8
    ctx->pc = 0x2188e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
label_2188e8:
    // 0x2188e8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2188e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2188ec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2188ECu;
    {
        const bool branch_taken_0x2188ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2188F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188ECu;
        // 0x2188f0: 0x8f849718  lw          $a0, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188ec) {
            ctx->pc = 0x218918u;
            goto label_218918;
        }
    }
    ctx->pc = 0x2188F4u;
    // 0x2188f4: 0x288200f0  slti        $v0, $a0, 0xF0
    ctx->pc = 0x2188f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)240) ? 1 : 0);
    // 0x2188f8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2188F8u;
    {
        const bool branch_taken_0x2188f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2188FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188F8u;
        // 0x2188fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188f8) {
            ctx->pc = 0x21892Cu;
            goto label_21892c;
        }
    }
    ctx->pc = 0x218900u;
    // 0x218900: 0xc08f324  jal         func_23CC90
    ctx->pc = 0x218900u;
    SET_GPR_U32(ctx, 31, 0x218908u);
    ctx->pc = 0x23CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CC90u, 0x218900u, 0x218908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218908u;
label_218908:
    // 0x218908: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x218908u;
    {
        const bool branch_taken_0x218908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218908) {
            ctx->pc = 0x21890Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218908u;
            // 0x21890c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21892Cu;
            goto label_21892c;
        }
    }
    ctx->pc = 0x218910u;
    // 0x218910: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x218910u;
    {
        const bool branch_taken_0x218910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218910) {
            ctx->pc = 0x21892Cu;
            goto label_21892c;
        }
    }
    ctx->pc = 0x218918u;
label_218918:
    // 0x218918: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x218918u;
    {
        const bool branch_taken_0x218918 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x21891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218918u;
        // 0x21891c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218918) {
            ctx->pc = 0x21892Cu;
            goto label_21892c;
        }
    }
    ctx->pc = 0x218920u;
    // 0x218920: 0x8f849718  lw          $a0, -0x68E8($gp)
    ctx->pc = 0x218920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
    // 0x218924: 0x288200f0  slti        $v0, $a0, 0xF0
    ctx->pc = 0x218924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)240) ? 1 : 0);
    // 0x218928: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x218928u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_21892c:
    // 0x21892c: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x21892Cu;
    {
        const bool branch_taken_0x21892c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x218930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21892Cu;
        // 0x218930: 0x8f849718  lw          $a0, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21892c) {
            ctx->pc = 0x2189BCu;
            goto label_2189bc;
        }
    }
    ctx->pc = 0x218934u;
    // 0x218934: 0xc0b4266  jal         func_2D0998
    ctx->pc = 0x218934u;
    SET_GPR_U32(ctx, 31, 0x21893Cu);
    ctx->pc = 0x2D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0998u, 0x218934u, 0x21893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21893Cu;
label_21893c:
    // 0x21893c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x218940: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x218940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x218944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218948: 0x52280a  movz        $a1, $v0, $s2
    ctx->pc = 0x218948u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_21894c:
    // 0x21894c: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x21894Cu;
    SET_GPR_U32(ctx, 31, 0x218954u);
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x21894Cu, 0x218954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218954u;
label_218954:
    // 0x218954: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x218954u;
    {
        const bool branch_taken_0x218954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218954u;
        // 0x218958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218954) {
            ctx->pc = 0x218A0Cu;
            goto label_218a0c;
        }
    }
    ctx->pc = 0x21895Cu;
    // 0x21895c: 0x0  nop
    ctx->pc = 0x21895cu;
    // NOP
label_218960:
    // 0x218960: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x218960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x218964: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x218964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218968: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x218968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x21896c: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x21896cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x218970: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x218970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x218974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x218978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21897c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21897cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218980: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x218980u;
    SET_GPR_U32(ctx, 31, 0x218988u);
    ctx->pc = 0x218984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218980u;
    // 0x218984: 0xaf809718  sw          $zero, -0x68E8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940440), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x218980u, 0x218988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218988u;
label_218988:
    // 0x218988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21898c: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x21898Cu;
    SET_GPR_U32(ctx, 31, 0x218994u);
    ctx->pc = 0x218990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21898Cu;
    // 0x218990: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x21898Cu, 0x218994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218994u;
label_218994:
    // 0x218994: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x218994u;
    {
        const bool branch_taken_0x218994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218994u;
        // 0x218998: 0x8f849718  lw          $a0, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218994) {
            ctx->pc = 0x2189BCu;
            goto label_2189bc;
        }
    }
    ctx->pc = 0x21899Cu;
    // 0x21899c: 0x0  nop
    ctx->pc = 0x21899cu;
    // NOP
label_2189a0:
    // 0x2189a0: 0x8f849718  lw          $a0, -0x68E8($gp)
    ctx->pc = 0x2189a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
    // 0x2189a4: 0x2882003c  slti        $v0, $a0, 0x3C
    ctx->pc = 0x2189a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2189a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2189A8u;
    {
        const bool branch_taken_0x2189a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2189ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189A8u;
        // 0x2189ac: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189a8) {
            ctx->pc = 0x2189BCu;
            goto label_2189bc;
        }
    }
    ctx->pc = 0x2189B0u;
label_2189b0:
    // 0x2189b0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2189b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2189b4: 0xa0400069  sb          $zero, 0x69($v0)
    ctx->pc = 0x2189b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 105), (uint8_t)GPR_U32(ctx, 0));
label_2189b8:
    // 0x2189b8: 0x8f849718  lw          $a0, -0x68E8($gp)
    ctx->pc = 0x2189b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
label_2189bc:
    // 0x2189bc: 0x26628858  addiu       $v0, $s3, -0x77A8
    ctx->pc = 0x2189bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
    // 0x2189c0: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2189c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2189c4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2189c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2189c8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2189C8u;
    {
        const bool branch_taken_0x2189c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2189CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189C8u;
        // 0x2189cc: 0xaf849718  sw          $a0, -0x68E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940440), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189c8) {
            ctx->pc = 0x2189F0u;
            goto label_2189f0;
        }
    }
    ctx->pc = 0x2189D0u;
    // 0x2189d0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2189d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2189d4: 0x24440053  addiu       $a0, $v0, 0x53
    ctx->pc = 0x2189d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 83));
    // 0x2189d8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2189d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2189dc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2189DCu;
    {
        const bool branch_taken_0x2189dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2189E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189DCu;
        // 0x2189e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189dc) {
            ctx->pc = 0x218A0Cu;
            goto label_218a0c;
        }
    }
    ctx->pc = 0x2189E4u;
    // 0x2189e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2189e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2189e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2189E8u;
    {
        const bool branch_taken_0x2189e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2189ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189E8u;
        // 0x2189ec: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189e8) {
            ctx->pc = 0x218A08u;
            goto label_218a08;
        }
    }
    ctx->pc = 0x2189F0u;
label_2189f0:
    // 0x2189f0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2189f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2189f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2189f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2189f8: 0x24420053  addiu       $v0, $v0, 0x53
    ctx->pc = 0x2189f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 83));
    // 0x2189fc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2189fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218a00: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x218A00u;
    {
        const bool branch_taken_0x218a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x218a00) {
            ctx->pc = 0x218A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218A00u;
            // 0x218a04: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218A08u;
            goto label_218a08;
        }
    }
    ctx->pc = 0x218A08u;
label_218a08:
    // 0x218a08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x218a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218a0c:
    // 0x218a0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218a10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218a14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x218a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218a18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x218a18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218a1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x218a1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218a20: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x218a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218a24: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x218a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x218a28: 0x3e00008  jr          $ra
    ctx->pc = 0x218A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A28u;
        // 0x218a2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218A30u;
}
