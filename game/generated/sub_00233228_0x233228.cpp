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

// Function: sub_00233228
// Address: 0x233228 - 0x233b18
void sub_00233228_0x233228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233228_0x233228");
#endif

    switch (ctx->pc) {
        case 0x23325cu: goto label_23325c;
        case 0x233274u: goto label_233274;
        case 0x2332b8u: goto label_2332b8;
        case 0x2332c4u: goto label_2332c4;
        case 0x2332e8u: goto label_2332e8;
        case 0x233308u: goto label_233308;
        case 0x2333bcu: goto label_2333bc;
        case 0x2333d8u: goto label_2333d8;
        case 0x233418u: goto label_233418;
        case 0x23345cu: goto label_23345c;
        case 0x233484u: goto label_233484;
        case 0x233540u: goto label_233540;
        case 0x23355cu: goto label_23355c;
        case 0x23361cu: goto label_23361c;
        case 0x2336acu: goto label_2336ac;
        case 0x2336b8u: goto label_2336b8;
        case 0x233860u: goto label_233860;
        case 0x2338b0u: goto label_2338b0;
        case 0x2338f0u: goto label_2338f0;
        case 0x2339f0u: goto label_2339f0;
        case 0x233a28u: goto label_233a28;
        case 0x233a44u: goto label_233a44;
        case 0x233a84u: goto label_233a84;
        case 0x233ac8u: goto label_233ac8;
        default: break;
    }

    ctx->pc = 0x233228u;

    // 0x233228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23322c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23322cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x233230: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x233230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23323c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23323cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x233240: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x233240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233244: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x233248: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x233248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23324c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23324cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x233250: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x233250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x233254: 0xc08cbf6  jal         func_232FD8
    ctx->pc = 0x233254u;
    SET_GPR_U32(ctx, 31, 0x23325Cu);
    ctx->pc = 0x233258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233254u;
    // 0x233258: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FD8u, 0x233254u, 0x23325Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23325Cu;
label_23325c:
    // 0x23325c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x23325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233260: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x233260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x233264: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x233264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233268: 0x2484dda0  addiu       $a0, $a0, -0x2260
    ctx->pc = 0x233268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    // 0x23326c: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x23326Cu;
    SET_GPR_U32(ctx, 31, 0x233274u);
    ctx->pc = 0x233270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23326Cu;
    // 0x233270: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x23326Cu, 0x233274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233274u;
label_233274:
    // 0x233274: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x233274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233278: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x233278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23327c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23327cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x233280: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x233280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x233284: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x233284u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x233288: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x233288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23328c: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x23328cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x233290: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x233290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233294: 0xe602004c  swc1        $f2, 0x4C($s0)
    ctx->pc = 0x233294u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x233298: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x233298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x23329c: 0x8623000e  lh          $v1, 0xE($s1)
    ctx->pc = 0x23329cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2332a0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2332a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2332a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2332a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2332a8: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x2332a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x2332ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2332acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2332b0: 0xc040572  jal         func_1015C8
    ctx->pc = 0x2332B0u;
    SET_GPR_U32(ctx, 31, 0x2332B8u);
    ctx->pc = 0x2332B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332B0u;
    // 0x2332b4: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1015C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1015C8u, 0x2332B0u, 0x2332B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332B8u;
label_2332b8:
    // 0x2332b8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2332b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2332bc: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x2332BCu;
    SET_GPR_U32(ctx, 31, 0x2332C4u);
    ctx->pc = 0x2332C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332BCu;
    // 0x2332c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x2332BCu, 0x2332C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332C4u;
label_2332c4:
    // 0x2332c4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2332c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2332c8: 0xae140028  sw          $s4, 0x28($s0)
    ctx->pc = 0x2332c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 20));
    // 0x2332cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2332ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332d0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2332d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2332d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2332d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2332d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332dc: 0x96420166  lhu         $v0, 0x166($s2)
    ctx->pc = 0x2332dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 358)));
    // 0x2332e0: 0xc08cb7a  jal         func_232DE8
    ctx->pc = 0x2332E0u;
    SET_GPR_U32(ctx, 31, 0x2332E8u);
    ctx->pc = 0x2332E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332E0u;
    // 0x2332e4: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232DE8u, 0x2332E0u, 0x2332E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332E8u;
label_2332e8:
    // 0x2332e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2332e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2332ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2332ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2332f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2332f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2332f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2332f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2332f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2332f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2332fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2332fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x233300: 0x3e00008  jr          $ra
    ctx->pc = 0x233300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233300u;
        // 0x233304: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233308u;
label_233308:
    // 0x233308: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x233308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x23330c: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x23330cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x233310: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x233310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233314: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x233314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x233318: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x233318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23331c: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x23331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
    // 0x233320: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x233320u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233324: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x233324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x233328: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x233328u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23332c: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x23332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x233330: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x233330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x233334: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x233334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x233338: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x233338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x23333c: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x23333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x233340: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x233340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x233344: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x233344u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x233348: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x233348u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x23334c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x23334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x233350: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x233350u;
    {
        const bool branch_taken_0x233350 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x233354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233350u;
        // 0x233354: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233350) {
            ctx->pc = 0x233360u;
            goto label_233360;
        }
    }
    ctx->pc = 0x233358u;
    // 0x233358: 0xafbe00b0  sw          $fp, 0xB0($sp)
    ctx->pc = 0x233358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 30));
    // 0x23335c: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x23335cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_233360:
    // 0x233360: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x233360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x233364: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x233364u;
    {
        const bool branch_taken_0x233364 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x233364) {
            ctx->pc = 0x233374u;
            goto label_233374;
        }
    }
    ctx->pc = 0x23336Cu;
    // 0x23336c: 0xafb700b0  sw          $s7, 0xB0($sp)
    ctx->pc = 0x23336cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 23));
    // 0x233370: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x233370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_233374:
    // 0x233374: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x233374u;
    {
        const bool branch_taken_0x233374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x233374) {
            ctx->pc = 0x2333B4u;
            goto label_2333b4;
        }
    }
    ctx->pc = 0x23337Cu;
    // 0x23337c: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x23337cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x233380: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x233380u;
    {
        const bool branch_taken_0x233380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233380u;
        // 0x233384: 0x24034000  addiu       $v1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233380) {
            ctx->pc = 0x2333B4u;
            goto label_2333b4;
        }
    }
    ctx->pc = 0x233388u;
    // 0x233388: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x233388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23338c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23338cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x233390: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x233390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x233394: 0xe6410040  swc1        $f1, 0x40($s2)
    ctx->pc = 0x233394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x233398: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x233398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23339c: 0xe642004c  swc1        $f2, 0x4C($s2)
    ctx->pc = 0x23339cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x2333a0: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x2333a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x2333a4: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x2333a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2333a8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2333a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2333ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2333acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2333b0: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x2333b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
label_2333b4:
    // 0x2333b4: 0xc040572  jal         func_1015C8
    ctx->pc = 0x2333B4u;
    SET_GPR_U32(ctx, 31, 0x2333BCu);
    ctx->pc = 0x1015C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1015C8u, 0x2333B4u, 0x2333BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333BCu;
label_2333bc:
    // 0x2333bc: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2333bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2333c0: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x2333c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2333c4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2333c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2333c8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2333c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2333cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2333ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2333d0: 0xc0972e4  jal         func_25CB90
    ctx->pc = 0x2333D0u;
    SET_GPR_U32(ctx, 31, 0x2333D8u);
    ctx->pc = 0x2333D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333D0u;
    // 0x2333d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB90u, 0x2333D0u, 0x2333D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333D8u;
label_2333d8:
    // 0x2333d8: 0x96430050  lhu         $v1, 0x50($s2)
    ctx->pc = 0x2333d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2333dc: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x2333dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2333e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2333e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2333e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2333E4u;
    {
        const bool branch_taken_0x2333e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2333E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333E4u;
        // 0x2333e8: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2333e4) {
            ctx->pc = 0x233400u;
            goto label_233400;
        }
    }
    ctx->pc = 0x2333ECu;
    // 0x2333ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2333ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2333f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2333f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2333f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2333F4u;
    {
        const bool branch_taken_0x2333f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2333F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333F4u;
        // 0x2333f8: 0xc7808590  lwc1        $f0, -0x7A70($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2333f4) {
            ctx->pc = 0x233410u;
            goto label_233410;
        }
    }
    ctx->pc = 0x2333FCu;
    // 0x2333fc: 0x0  nop
    ctx->pc = 0x2333fcu;
    // NOP
label_233400:
    // 0x233400: 0xc7818594  lwc1        $f1, -0x7A6C($gp)
    ctx->pc = 0x233400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233404: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x233404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x233408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23340c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23340cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_233410:
    // 0x233410: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x233410u;
    SET_GPR_U32(ctx, 31, 0x233418u);
    ctx->pc = 0x233414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233410u;
    // 0x233414: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x233410u, 0x233418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233418u;
label_233418:
    // 0x233418: 0x96430050  lhu         $v1, 0x50($s2)
    ctx->pc = 0x233418u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x23341c: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x23341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x233420: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x233420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x233424: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x233424u;
    {
        const bool branch_taken_0x233424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233424u;
        // 0x233428: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233424) {
            ctx->pc = 0x233440u;
            goto label_233440;
        }
    }
    ctx->pc = 0x23342Cu;
    // 0x23342c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23342cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233430: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x233430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x233434: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x233434u;
    {
        const bool branch_taken_0x233434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233434u;
        // 0x233438: 0xc7808598  lwc1        $f0, -0x7A68($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x233434) {
            ctx->pc = 0x233454u;
            goto label_233454;
        }
    }
    ctx->pc = 0x23343Cu;
    // 0x23343c: 0x0  nop
    ctx->pc = 0x23343cu;
    // NOP
label_233440:
    // 0x233440: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x233440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x233444: 0xc781859c  lwc1        $f1, -0x7A64($gp)
    ctx->pc = 0x233444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233448: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x233448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23344c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23344cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x233450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_233454:
    // 0x233454: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x233454u;
    SET_GPR_U32(ctx, 31, 0x23345Cu);
    ctx->pc = 0x233458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233454u;
    // 0x233458: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x233454u, 0x23345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23345Cu;
label_23345c:
    // 0x23345c: 0xc78185a0  lwc1        $f1, -0x7A60($gp)
    ctx->pc = 0x23345cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233460: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x233460u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x233464: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x233464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233468: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x233468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x23346c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23346cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x233470: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x233470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233474: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x233474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x233478: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23347c: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x23347Cu;
    SET_GPR_U32(ctx, 31, 0x233484u);
    ctx->pc = 0x233480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23347Cu;
    // 0x233480: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x23347Cu, 0x233484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233484u;
label_233484:
    // 0x233484: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x233484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x233488: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x233488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x23348c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23348Cu;
    {
        const bool branch_taken_0x23348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23348Cu;
        // 0x233490: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23348c) {
            ctx->pc = 0x23349Cu;
            goto label_23349c;
        }
    }
    ctx->pc = 0x233494u;
    // 0x233494: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x233494u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x233498: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x233498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_23349c:
    // 0x23349c: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x23349cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2334a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2334A0u;
    {
        const bool branch_taken_0x2334a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2334A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334A0u;
        // 0x2334a4: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2334a0) {
            ctx->pc = 0x2334B0u;
            goto label_2334b0;
        }
    }
    ctx->pc = 0x2334A8u;
    // 0x2334a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2334a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2334ac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2334acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2334b0:
    // 0x2334b0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2334b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2334b4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2334b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2334b8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2334b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2334bc: 0x461511c2  mul.s       $f7, $f2, $f21
    ctx->pc = 0x2334bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2334c0: 0xc6430040  lwc1        $f3, 0x40($s2)
    ctx->pc = 0x2334c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2334c4: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2334c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2334c8: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x2334c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2334cc: 0x46142202  mul.s       $f8, $f4, $f20
    ctx->pc = 0x2334ccu;
    ctx->f[8] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2334d0: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x2334d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2334d4: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x2334d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x2334d8: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x2334d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2334dc: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2334dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2334e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2334e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2334e4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2334e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2334e8: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2334e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2334ec: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2334ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2334f0: 0xe645006c  swc1        $f5, 0x6C($s2)
    ctx->pc = 0x2334f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x2334f4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2334f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2334f8: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2334f8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2334fc: 0xe6410064  swc1        $f1, 0x64($s2)
    ctx->pc = 0x2334fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x233500: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x233500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x233504: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x233504u;
    {
        const bool branch_taken_0x233504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233504u;
        // 0x233508: 0xe6430060  swc1        $f3, 0x60($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x233504) {
            ctx->pc = 0x233548u;
            goto label_233548;
        }
    }
    ctx->pc = 0x23350Cu;
    // 0x23350c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x23350cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x233510: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x233510u;
    {
        const bool branch_taken_0x233510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233510u;
        // 0x233514: 0x26540070  addiu       $s4, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233510) {
            ctx->pc = 0x233548u;
            goto label_233548;
        }
    }
    ctx->pc = 0x233518u;
    // 0x233518: 0x26530060  addiu       $s3, $s2, 0x60
    ctx->pc = 0x233518u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x23351c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23351cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x233520: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x233520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233524: 0x2444dda0  addiu       $a0, $v0, -0x2260
    ctx->pc = 0x233524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958496));
    // 0x233528: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x233528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23352c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x23352cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233530: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x233530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233534: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x233534u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233538: 0xc08dbea  jal         func_236FA8
    ctx->pc = 0x233538u;
    SET_GPR_U32(ctx, 31, 0x233540u);
    ctx->pc = 0x23353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233538u;
    // 0x23353c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FA8u, 0x233538u, 0x233540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233540u;
label_233540:
    // 0x233540: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x233540u;
    {
        const bool branch_taken_0x233540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233540u;
        // 0x233544: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x233540) {
            ctx->pc = 0x23365Cu;
            goto label_23365c;
        }
    }
    ctx->pc = 0x233548u;
label_233548:
    // 0x233548: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x233548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x23354c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23354cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x233550: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233554: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x233554u;
    SET_GPR_U32(ctx, 31, 0x23355Cu);
    ctx->pc = 0x233558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233554u;
    // 0x233558: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x233554u, 0x23355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23355Cu;
label_23355c:
    // 0x23355c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23355cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x233560: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x233560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x233564: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x233564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x233568: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x233568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x23356c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23356Cu;
    {
        const bool branch_taken_0x23356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23356Cu;
        // 0x233570: 0xe7a8000c  swc1        $f8, 0xC($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23356c) {
            ctx->pc = 0x233580u;
            goto label_233580;
        }
    }
    ctx->pc = 0x233574u;
    // 0x233574: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x233574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233578: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x233578u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x23357c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x23357cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_233580:
    // 0x233580: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x233580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x233584: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x233584u;
    {
        const bool branch_taken_0x233584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233584u;
        // 0x233588: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x233584) {
            ctx->pc = 0x233594u;
            goto label_233594;
        }
    }
    ctx->pc = 0x23358Cu;
    // 0x23358c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x23358cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x233590: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x233590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_233594:
    // 0x233594: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x233594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x233598: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x233598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23359c: 0x46151182  mul.s       $f6, $f2, $f21
    ctx->pc = 0x23359cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2335a0: 0xc6430040  lwc1        $f3, 0x40($s2)
    ctx->pc = 0x2335a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2335a4: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2335a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2335a8: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x2335a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2335ac: 0x461421c2  mul.s       $f7, $f4, $f20
    ctx->pc = 0x2335acu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2335b0: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x2335b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2335b4: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x2335b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x2335b8: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x2335b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2335bc: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2335bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2335c0: 0xe648007c  swc1        $f8, 0x7C($s2)
    ctx->pc = 0x2335c0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x2335c4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2335c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2335c8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2335c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2335cc: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2335ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2335d0: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2335d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2335d4: 0xe6410074  swc1        $f1, 0x74($s2)
    ctx->pc = 0x2335d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x2335d8: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x2335d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x2335dc: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2335DCu;
    {
        const bool branch_taken_0x2335dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2335E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335DCu;
        // 0x2335e0: 0xe6430070  swc1        $f3, 0x70($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335dc) {
            ctx->pc = 0x233650u;
            goto label_233650;
        }
    }
    ctx->pc = 0x2335E4u;
    // 0x2335e4: 0x96030166  lhu         $v1, 0x166($s0)
    ctx->pc = 0x2335e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x2335e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2335e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2335ec: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2335ECu;
    {
        const bool branch_taken_0x2335ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2335F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335ECu;
        // 0x2335f0: 0x26540070  addiu       $s4, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335ec) {
            ctx->pc = 0x233654u;
            goto label_233654;
        }
    }
    ctx->pc = 0x2335F4u;
    // 0x2335f4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2335f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2335f8: 0x26530060  addiu       $s3, $s2, 0x60
    ctx->pc = 0x2335f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x2335fc: 0x2464dda0  addiu       $a0, $v1, -0x2260
    ctx->pc = 0x2335fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x233600: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x233600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x233604: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x233604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233608: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x233608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23360c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x23360cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233610: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x233610u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233614: 0xc08dbea  jal         func_236FA8
    ctx->pc = 0x233614u;
    SET_GPR_U32(ctx, 31, 0x23361Cu);
    ctx->pc = 0x233618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233614u;
    // 0x233618: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FA8u, 0x233614u, 0x23361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23361Cu;
label_23361c:
    // 0x23361c: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x23361cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233620: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x233620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x233624: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x233624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x233628: 0xc6410078  lwc1        $f1, 0x78($s2)
    ctx->pc = 0x233628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23362c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x23362cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x233630: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x233630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x233634: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x233634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x233638: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x233638u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x23363c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x23363cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x233640: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x233640u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x233644: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x233644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x233648: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x233648u;
    {
        const bool branch_taken_0x233648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233648u;
        // 0x23364c: 0xe6410078  swc1        $f1, 0x78($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x233648) {
            ctx->pc = 0x233658u;
            goto label_233658;
        }
    }
    ctx->pc = 0x233650u;
label_233650:
    // 0x233650: 0x26540070  addiu       $s4, $s2, 0x70
    ctx->pc = 0x233650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_233654:
    // 0x233654: 0x26530060  addiu       $s3, $s2, 0x60
    ctx->pc = 0x233654u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_233658:
    // 0x233658: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x233658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23365c:
    // 0x23365c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x23365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x233660: 0xc78285a4  lwc1        $f2, -0x7A5C($gp)
    ctx->pc = 0x233660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x233664: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x233664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x233668: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23366c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x23366cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x233670: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x233670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x233674: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x233674u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x233678: 0xe6410080  swc1        $f1, 0x80($s2)
    ctx->pc = 0x233678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    // 0x23367c: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x23367Cu;
    {
        const bool branch_taken_0x23367c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23367Cu;
        // 0x233680: 0xe6400088  swc1        $f0, 0x88($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23367c) {
            ctx->pc = 0x2337A8u;
            goto label_2337a8;
        }
    }
    ctx->pc = 0x233684u;
    // 0x233684: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x233684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x233688: 0x10800048  beqz        $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x233688u;
    {
        const bool branch_taken_0x233688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233688u;
        // 0x23368c: 0x2862003c  slti        $v0, $v1, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233688) {
            ctx->pc = 0x2337ACu;
            goto label_2337ac;
        }
    }
    ctx->pc = 0x233690u;
    // 0x233690: 0x84820148  lh          $v0, 0x148($a0)
    ctx->pc = 0x233690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x233694: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x233694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x233698: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x233698u;
    {
        const bool branch_taken_0x233698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233698) {
            ctx->pc = 0x23369Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233698u;
            // 0x23369c: 0x2862003c  slti        $v0, $v1, 0x3C (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2337ACu;
            goto label_2337ac;
        }
    }
    ctx->pc = 0x2336A0u;
    // 0x2336a0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2336a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2336a4: 0xc08c1e6  jal         func_230798
    ctx->pc = 0x2336A4u;
    SET_GPR_U32(ctx, 31, 0x2336ACu);
    ctx->pc = 0x2336A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336A4u;
    // 0x2336a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230798u, 0x2336A4u, 0x2336ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336ACu;
label_2336ac:
    // 0x2336ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2336acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2336b0: 0xc08c208  jal         func_230820
    ctx->pc = 0x2336B0u;
    SET_GPR_U32(ctx, 31, 0x2336B8u);
    ctx->pc = 0x2336B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336B0u;
    // 0x2336b4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x2336B0u, 0x2336B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336B8u;
label_2336b8:
    // 0x2336b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2336b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2336bc: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2336bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2336c0: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x2336c0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2336c4: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x2336c4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2336c8: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x2336c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2336cc: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2336ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2336d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2336d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2336d4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2336d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2336d8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2336d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2336dc: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2336dcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2336e0: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x2336e0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2336e4: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x2336e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2336e8: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2336e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2336ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2336ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2336f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2336f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2336f4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2336f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2336f8: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x2336f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2336fc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2336fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233700: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x233700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233704: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x233704u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x233708: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x233708u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x23370c: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x23370cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x233710: 0x460118d6  rsqrt.s     $f3, $f3, $f1
    ctx->pc = 0x233710u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x233714: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x233714u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233718: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x233718u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23371c: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x23371cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x233720: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x233720u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x233724: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x233724u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x233728: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x233728u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23372c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x23372cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x233730: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x233730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x233734: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x233734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x233738: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x233738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23373c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x23373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233740: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x233740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233744: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x233744u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x233748: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x233748u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x23374c: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x23374cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x233750: 0x460118d6  rsqrt.s     $f3, $f3, $f1
    ctx->pc = 0x233750u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x233754: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x233754u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233758: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x233758u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23375c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x23375cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x233760: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x233760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x233764: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x233764u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x233768: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x233768u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23376c: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x23376cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x233770: 0xc7a60074  lwc1        $f6, 0x74($sp)
    ctx->pc = 0x233770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x233774: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x233774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x233778: 0xc7a40080  lwc1        $f4, 0x80($sp)
    ctx->pc = 0x233778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23377c: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x23377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x233780: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x233780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233784: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x233784u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x233788: 0x4602301e  madda.s     $f6, $f2
    ctx->pc = 0x233788u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[2])));
    // 0x23378c: 0x460028dc  madd.s      $f3, $f5, $f0
    ctx->pc = 0x23378cu;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[0]));
    // 0x233790: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x233790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233794: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x233794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x233798: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x233798u;
    {
        const bool branch_taken_0x233798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233798u;
        // 0x23379c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233798) {
            ctx->pc = 0x2337A8u;
            goto label_2337a8;
        }
    }
    ctx->pc = 0x2337A0u;
    // 0x2337a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2337a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2337a4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x2337a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_2337a8:
    // 0x2337a8: 0x2862003c  slti        $v0, $v1, 0x3C
    ctx->pc = 0x2337a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
label_2337ac:
    // 0x2337ac: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2337ACu;
    {
        const bool branch_taken_0x2337ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2337ac) {
            ctx->pc = 0x2337B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2337ACu;
            // 0x2337b0: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2337E0u;
            goto label_2337e0;
        }
    }
    ctx->pc = 0x2337B4u;
    // 0x2337b4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2337b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2337b8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2337B8u;
    {
        const bool branch_taken_0x2337b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2337b8) {
            ctx->pc = 0x2337BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2337B8u;
            // 0x2337bc: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2337E0u;
            goto label_2337e0;
        }
    }
    ctx->pc = 0x2337C0u;
    // 0x2337c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2337c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2337c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2337c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2337c8: 0xc78285a8  lwc1        $f2, -0x7A58($gp)
    ctx->pc = 0x2337c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2337cc: 0xc6410088  lwc1        $f1, 0x88($s2)
    ctx->pc = 0x2337ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2337d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2337d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2337d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2337d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2337d8: 0xe6410088  swc1        $f1, 0x88($s2)
    ctx->pc = 0x2337d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x2337dc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2337dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2337e0:
    // 0x2337e0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2337E0u;
    {
        const bool branch_taken_0x2337e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2337E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337E0u;
        // 0x2337e4: 0x26550090  addiu       $s5, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337e0) {
            ctx->pc = 0x233848u;
            goto label_233848;
        }
    }
    ctx->pc = 0x2337E8u;
    // 0x2337e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2337e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2337ec: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x2337ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2337f0: 0x264200c0  addiu       $v0, $s2, 0xC0
    ctx->pc = 0x2337f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x2337f4: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2337f4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2337f8: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x2337f8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2337fc: 0x4bff8428  vadd.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x2337fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x233800: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x233800u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x233804: 0x265600a0  addiu       $s6, $s2, 0xA0
    ctx->pc = 0x233804u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x233808: 0xc78485ac  lwc1        $f4, -0x7A54($gp)
    ctx->pc = 0x233808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23380c: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x23380cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x233810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x233810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x233814: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x233814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x233818: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x233818u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x23381c: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x23381cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233820: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x233820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x233824: 0xc64200d0  lwc1        $f2, 0xD0($s2)
    ctx->pc = 0x233824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x233828: 0xc64000d4  lwc1        $f0, 0xD4($s2)
    ctx->pc = 0x233828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23382c: 0xe6400080  swc1        $f0, 0x80($s2)
    ctx->pc = 0x23382cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    // 0x233830: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x233830u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x233834: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x233834u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x233838: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x233838u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x23383c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23383Cu;
    {
        const bool branch_taken_0x23383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23383Cu;
        // 0x233840: 0xe6420088  swc1        $f2, 0x88($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23383c) {
            ctx->pc = 0x23384Cu;
            goto label_23384c;
        }
    }
    ctx->pc = 0x233844u;
    // 0x233844: 0x0  nop
    ctx->pc = 0x233844u;
    // NOP
label_233848:
    // 0x233848: 0x265600a0  addiu       $s6, $s2, 0xA0
    ctx->pc = 0x233848u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_23384c:
    // 0x23384c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23384cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x233850: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x233850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233854: 0x2444dda0  addiu       $a0, $v0, -0x2260
    ctx->pc = 0x233854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958496));
    // 0x233858: 0xc08db80  jal         func_236E00
    ctx->pc = 0x233858u;
    SET_GPR_U32(ctx, 31, 0x233860u);
    ctx->pc = 0x23385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233858u;
    // 0x23385c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236E00u, 0x233858u, 0x233860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233860u;
label_233860:
    // 0x233860: 0xc6420088  lwc1        $f2, 0x88($s2)
    ctx->pc = 0x233860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x233864: 0xc78385b0  lwc1        $f3, -0x7A50($gp)
    ctx->pc = 0x233864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x233868: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x233868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23386c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23386Cu;
    {
        const bool branch_taken_0x23386c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23386c) {
            ctx->pc = 0x233888u;
            goto label_233888;
        }
    }
    ctx->pc = 0x233874u;
    // 0x233874: 0xc64100b8  lwc1        $f1, 0xB8($s2)
    ctx->pc = 0x233874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233878: 0xc78085b4  lwc1        $f0, -0x7A4C($gp)
    ctx->pc = 0x233878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23387c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23387cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x233880: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x233880u;
    {
        const bool branch_taken_0x233880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x233880) {
            ctx->pc = 0x2338A8u;
            goto label_2338a8;
        }
    }
    ctx->pc = 0x233888u;
label_233888:
    // 0x233888: 0xc78085b8  lwc1        $f0, -0x7A48($gp)
    ctx->pc = 0x233888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23388c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23388cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x233890: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x233890u;
    {
        const bool branch_taken_0x233890 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x233890) {
            ctx->pc = 0x233894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233890u;
            // 0x233894: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2338B8u;
            goto label_2338b8;
        }
    }
    ctx->pc = 0x233898u;
    // 0x233898: 0xc64000b8  lwc1        $f0, 0xB8($s2)
    ctx->pc = 0x233898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23389c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x23389cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2338a0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2338A0u;
    {
        const bool branch_taken_0x2338a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2338a0) {
            ctx->pc = 0x2338A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2338A0u;
            // 0x2338a4: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2338B8u;
            goto label_2338b8;
        }
    }
    ctx->pc = 0x2338A8u;
label_2338a8:
    // 0x2338a8: 0xc08c686  jal         func_231A18
    ctx->pc = 0x2338A8u;
    SET_GPR_U32(ctx, 31, 0x2338B0u);
    ctx->pc = 0x231A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A18u, 0x2338A8u, 0x2338B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338B0u;
label_2338b0:
    // 0x2338b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2338B0u;
    {
        const bool branch_taken_0x2338b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338B0u;
        // 0x2338b4: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338b0) {
            ctx->pc = 0x233908u;
            goto label_233908;
        }
    }
    ctx->pc = 0x2338B8u;
label_2338b8:
    // 0x2338b8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2338B8u;
    {
        const bool branch_taken_0x2338b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338B8u;
        // 0x2338bc: 0x27b00070  addiu       $s0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338b8) {
            ctx->pc = 0x233904u;
            goto label_233904;
        }
    }
    ctx->pc = 0x2338C0u;
    // 0x2338c0: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2338c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2338c4: 0xc64c0080  lwc1        $f12, 0x80($s2)
    ctx->pc = 0x2338c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2338c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2338c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338cc: 0xc64d00b0  lwc1        $f13, 0xB0($s2)
    ctx->pc = 0x2338ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2338d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2338d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338d4: 0xc78e85bc  lwc1        $f14, -0x7A44($gp)
    ctx->pc = 0x2338d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2338d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2338d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338dc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2338dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338e0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2338e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338e4: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2338e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338e8: 0xc08daf8  jal         func_236BE0
    ctx->pc = 0x2338E8u;
    SET_GPR_U32(ctx, 31, 0x2338F0u);
    ctx->pc = 0x2338ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338E8u;
    // 0x2338ec: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x2338E8u, 0x2338F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338F0u;
label_2338f0:
    // 0x2338f0: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2338f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2338f4: 0xe6400080  swc1        $f0, 0x80($s2)
    ctx->pc = 0x2338f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    // 0x2338f8: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x2338f8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x2338fc: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2338fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x233900: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x233900u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_233904:
    // 0x233904: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x233904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_233908:
    // 0x233908: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x233908u;
    {
        const bool branch_taken_0x233908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233908) {
            ctx->pc = 0x23390Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233908u;
            // 0x23390c: 0x7a620000  lq          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2339A8u;
            goto label_2339a8;
        }
    }
    ctx->pc = 0x233910u;
    // 0x233910: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x233910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x233914: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x233914u;
    {
        const bool branch_taken_0x233914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233914u;
        // 0x233918: 0x264300c0  addiu       $v1, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233914) {
            ctx->pc = 0x233968u;
            goto label_233968;
        }
    }
    ctx->pc = 0x23391Cu;
    // 0x23391c: 0xc6420088  lwc1        $f2, 0x88($s2)
    ctx->pc = 0x23391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x233920: 0xc78385c0  lwc1        $f3, -0x7A40($gp)
    ctx->pc = 0x233920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x233924: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x233924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x233928: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x233928u;
    {
        const bool branch_taken_0x233928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x233928) {
            ctx->pc = 0x233944u;
            goto label_233944;
        }
    }
    ctx->pc = 0x233930u;
    // 0x233930: 0xc64100b8  lwc1        $f1, 0xB8($s2)
    ctx->pc = 0x233930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233934: 0xc78085c4  lwc1        $f0, -0x7A3C($gp)
    ctx->pc = 0x233934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233938: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x233938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23393c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x23393Cu;
    {
        const bool branch_taken_0x23393c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x233940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23393Cu;
        // 0x233940: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23393c) {
            ctx->pc = 0x23396Cu;
            goto label_23396c;
        }
    }
    ctx->pc = 0x233944u;
label_233944:
    // 0x233944: 0xc78085c8  lwc1        $f0, -0x7A38($gp)
    ctx->pc = 0x233944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233948: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x233948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23394c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x23394Cu;
    {
        const bool branch_taken_0x23394c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x233950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23394Cu;
        // 0x233950: 0x264300c0  addiu       $v1, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23394c) {
            ctx->pc = 0x233980u;
            goto label_233980;
        }
    }
    ctx->pc = 0x233954u;
    // 0x233954: 0xc64000b8  lwc1        $f0, 0xB8($s2)
    ctx->pc = 0x233954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233958: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x233958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23395c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x23395Cu;
    {
        const bool branch_taken_0x23395c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x233960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23395Cu;
        // 0x233960: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23395c) {
            ctx->pc = 0x233984u;
            goto label_233984;
        }
    }
    ctx->pc = 0x233964u;
    // 0x233964: 0x264300c0  addiu       $v1, $s2, 0xC0
    ctx->pc = 0x233964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_233968:
    // 0x233968: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x233968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23396c:
    // 0x23396c: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x23396cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x233970: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x233970u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233974: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x233974u;
    {
        const bool branch_taken_0x233974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233974u;
        // 0x233978: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31 (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x233974) {
            ctx->pc = 0x233990u;
            goto label_233990;
        }
    }
    ctx->pc = 0x23397Cu;
    // 0x23397c: 0x0  nop
    ctx->pc = 0x23397cu;
    // NOP
label_233980:
    // 0x233980: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x233980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_233984:
    // 0x233984: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x233984u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x233988: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x233988u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23398c: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x23398cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
label_233990:
    // 0x233990: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x233990u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x233994: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x233994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233998: 0xc6410088  lwc1        $f1, 0x88($s2)
    ctx->pc = 0x233998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23399c: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x23399cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x2339a0: 0xe64100d0  swc1        $f1, 0xD0($s2)
    ctx->pc = 0x2339a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x2339a4: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x2339a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2339a8:
    // 0x2339a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2339a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2339ac: 0xc78085cc  lwc1        $f0, -0x7A34($gp)
    ctx->pc = 0x2339acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2339b0: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x2339b0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x2339b4: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x2339b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2339b8: 0x7ec30000  sq          $v1, 0x0($s6)
    ctx->pc = 0x2339b8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
    // 0x2339bc: 0xc64d0088  lwc1        $f13, 0x88($s2)
    ctx->pc = 0x2339bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2339c0: 0xc64c0080  lwc1        $f12, 0x80($s2)
    ctx->pc = 0x2339c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2339c4: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x2339c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2339c8: 0xe64d00b8  swc1        $f13, 0xB8($s2)
    ctx->pc = 0x2339c8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
    // 0x2339cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2339CCu;
    {
        const bool branch_taken_0x2339cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2339D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339CCu;
        // 0x2339d0: 0xe64c00b0  swc1        $f12, 0xB0($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2339cc) {
            ctx->pc = 0x2339D8u;
            goto label_2339d8;
        }
    }
    ctx->pc = 0x2339D4u;
    // 0x2339d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2339d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2339d8:
    // 0x2339d8: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x2339d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x2339dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2339dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2339e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2339e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339e8: 0xc08cc4e  jal         func_233138
    ctx->pc = 0x2339E8u;
    SET_GPR_U32(ctx, 31, 0x2339F0u);
    ctx->pc = 0x2339ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2339E8u;
    // 0x2339ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233138u, 0x2339E8u, 0x2339F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2339F0u;
label_2339f0:
    // 0x2339f0: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x2339f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2339f4: 0x14800036  bnez        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2339F4u;
    {
        const bool branch_taken_0x2339f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2339F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339F4u;
        // 0x2339f8: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2339f4) {
            ctx->pc = 0x233AD0u;
            goto label_233ad0;
        }
    }
    ctx->pc = 0x2339FCu;
    // 0x2339fc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2339fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x233a00: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x233a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x233a04: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x233a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x233a08: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x233A08u;
    {
        const bool branch_taken_0x233a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a08) {
            ctx->pc = 0x233A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233A08u;
            // 0x233a0c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233A10u;
            goto label_233a10;
        }
    }
    ctx->pc = 0x233A10u;
label_233a10:
    // 0x233a10: 0x1480002f  bnez        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x233A10u;
    {
        const bool branch_taken_0x233a10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x233A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A10u;
        // 0x233a14: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a10) {
            ctx->pc = 0x233AD0u;
            goto label_233ad0;
        }
    }
    ctx->pc = 0x233A18u;
    // 0x233a18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a1c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x233a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a20: 0xc08cb86  jal         func_232E18
    ctx->pc = 0x233A20u;
    SET_GPR_U32(ctx, 31, 0x233A28u);
    ctx->pc = 0x233A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A20u;
    // 0x233a24: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232E18u, 0x233A20u, 0x233A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A28u;
label_233a28:
    // 0x233a28: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x233A28u;
    {
        const bool branch_taken_0x233a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A28u;
        // 0x233a2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a28) {
            ctx->pc = 0x233A34u;
            goto label_233a34;
        }
    }
    ctx->pc = 0x233A30u;
    // 0x233a30: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x233a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_233a34:
    // 0x233a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a38: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x233a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a3c: 0xc08cba0  jal         func_232E80
    ctx->pc = 0x233A3Cu;
    SET_GPR_U32(ctx, 31, 0x233A44u);
    ctx->pc = 0x233A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A3Cu;
    // 0x233a40: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232E80u, 0x233A3Cu, 0x233A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A44u;
label_233a44:
    // 0x233a44: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x233A44u;
    {
        const bool branch_taken_0x233a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a44) {
            ctx->pc = 0x233A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233A44u;
            // 0x233a48: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233A88u;
            goto label_233a88;
        }
    }
    ctx->pc = 0x233A4Cu;
    // 0x233a4c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x233a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x233a50: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x233A50u;
    {
        const bool branch_taken_0x233a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a50) {
            ctx->pc = 0x233A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233A50u;
            // 0x233a54: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233AE4u;
            goto label_233ae4;
        }
    }
    ctx->pc = 0x233A58u;
    // 0x233a58: 0x94630166  lhu         $v1, 0x166($v1)
    ctx->pc = 0x233a58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 358)));
    // 0x233a5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x233a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233a60: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x233A60u;
    {
        const bool branch_taken_0x233a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A60u;
        // 0x233a64: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a60) {
            ctx->pc = 0x233A88u;
            goto label_233a88;
        }
    }
    ctx->pc = 0x233A68u;
    // 0x233a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233a6c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x233a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x233a70: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x233a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x233a74: 0x2464dda0  addiu       $a0, $v1, -0x2260
    ctx->pc = 0x233a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x233a78: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x233a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a7c: 0xc08df28  jal         func_237CA0
    ctx->pc = 0x233A7Cu;
    SET_GPR_U32(ctx, 31, 0x233A84u);
    ctx->pc = 0x233A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A7Cu;
    // 0x233a80: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237CA0u, 0x233A7Cu, 0x233A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A84u;
label_233a84:
    // 0x233a84: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x233a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_233a88:
    // 0x233a88: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x233A88u;
    {
        const bool branch_taken_0x233a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a88) {
            ctx->pc = 0x233A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233A88u;
            // 0x233a8c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233AE4u;
            goto label_233ae4;
        }
    }
    ctx->pc = 0x233A90u;
    // 0x233a90: 0x94830166  lhu         $v1, 0x166($a0)
    ctx->pc = 0x233a90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 358)));
    // 0x233a94: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x233a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x233a98: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x233A98u;
    {
        const bool branch_taken_0x233a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x233a98) {
            ctx->pc = 0x233A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233A98u;
            // 0x233a9c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233AE4u;
            goto label_233ae4;
        }
    }
    ctx->pc = 0x233AA0u;
    // 0x233aa0: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x233aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x233aa4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x233AA4u;
    {
        const bool branch_taken_0x233aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233aa4) {
            ctx->pc = 0x233AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233AA4u;
            // 0x233aa8: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233AE4u;
            goto label_233ae4;
        }
    }
    ctx->pc = 0x233AACu;
    // 0x233aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233ab0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x233ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x233ab4: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x233ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x233ab8: 0x2464dda0  addiu       $a0, $v1, -0x2260
    ctx->pc = 0x233ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x233abc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x233abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ac0: 0xc08df28  jal         func_237CA0
    ctx->pc = 0x233AC0u;
    SET_GPR_U32(ctx, 31, 0x233AC8u);
    ctx->pc = 0x233AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233AC0u;
    // 0x233ac4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237CA0u, 0x233AC0u, 0x233AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233AC8u;
label_233ac8:
    // 0x233ac8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x233AC8u;
    {
        const bool branch_taken_0x233ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AC8u;
        // 0x233acc: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ac8) {
            ctx->pc = 0x233AE4u;
            goto label_233ae4;
        }
    }
    ctx->pc = 0x233AD0u;
label_233ad0:
    // 0x233ad0: 0x2843003d  slti        $v1, $v0, 0x3D
    ctx->pc = 0x233ad0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x233ad4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x233AD4u;
    {
        const bool branch_taken_0x233ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AD4u;
        // 0x233ad8: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ad4) {
            ctx->pc = 0x233AE0u;
            goto label_233ae0;
        }
    }
    ctx->pc = 0x233ADCu;
    // 0x233adc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x233adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_233ae0:
    // 0x233ae0: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x233ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_233ae4:
    // 0x233ae4: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x233ae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x233ae8: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x233ae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x233aec: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x233aecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x233af0: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x233af0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x233af4: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x233af4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x233af8: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x233af8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x233afc: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x233afcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x233b00: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x233b00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x233b04: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x233b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x233b08: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x233b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x233b0c: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x233b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x233b10: 0x3e00008  jr          $ra
    ctx->pc = 0x233B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B10u;
        // 0x233b14: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233B18u;
}
