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

// Function: sub_003006E8
// Address: 0x3006e8 - 0x303858
void sub_003006E8_0x3006e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003006E8_0x3006e8");
#endif

    switch (ctx->pc) {
        case 0x300730u: goto label_300730;
        case 0x300754u: goto label_300754;
        case 0x300780u: goto label_300780;
        case 0x300818u: goto label_300818;
        case 0x300b34u: goto label_300b34;
        case 0x300b48u: goto label_300b48;
        case 0x300c5cu: goto label_300c5c;
        case 0x30101cu: goto label_30101c;
        case 0x301030u: goto label_301030;
        case 0x30113cu: goto label_30113c;
        case 0x3017acu: goto label_3017ac;
        case 0x3017c0u: goto label_3017c0;
        case 0x3018d4u: goto label_3018d4;
        case 0x301ae8u: goto label_301ae8;
        case 0x301b18u: goto label_301b18;
        case 0x301b48u: goto label_301b48;
        case 0x30313cu: goto label_30313c;
        case 0x303150u: goto label_303150;
        case 0x303168u: goto label_303168;
        case 0x30338cu: goto label_30338c;
        case 0x3033a0u: goto label_3033a0;
        case 0x3033b8u: goto label_3033b8;
        case 0x303548u: goto label_303548;
        case 0x303588u: goto label_303588;
        case 0x3035c8u: goto label_3035c8;
        case 0x3035f8u: goto label_3035f8;
        case 0x303648u: goto label_303648;
        case 0x3036c0u: goto label_3036c0;
        case 0x303770u: goto label_303770;
        case 0x303804u: goto label_303804;
        default: break;
    }

    ctx->pc = 0x3006e8u;

    // 0x3006e8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3006e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x3006ec: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x3006ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x3006f0: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x3006f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x3006f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3006f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3006f8: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x3006f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x3006fc: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x3006fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x300700: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x300700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x300704: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x300704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x300708: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x300708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x30070c: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x30070cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x300710: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x300710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x300714: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x300714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x300718: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x300718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x30071c: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x30071cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x300720: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x300720u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x300724: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x300724u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x300728: 0xc09362a  jal         func_24D8A8
    ctx->pc = 0x300728u;
    SET_GPR_U32(ctx, 31, 0x300730u);
    ctx->pc = 0x30072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300728u;
    // 0x30072c: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D8A8u, 0x300728u, 0x300730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300730u;
label_300730:
    // 0x300730: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x300730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300734: 0x12400c39  beqz        $s2, . + 4 + (0xC39 << 2)
    ctx->pc = 0x300734u;
    {
        const bool branch_taken_0x300734 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x300738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300734u;
        // 0x300738: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300734) {
            ctx->pc = 0x30381Cu;
            goto label_30381c;
        }
    }
    ctx->pc = 0x30073Cu;
    // 0x30073c: 0x24628858  addiu       $v0, $v1, -0x77A8
    ctx->pc = 0x30073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x300740: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x300740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x300744: 0x50600c36  beql        $v1, $zero, . + 4 + (0xC36 << 2)
    ctx->pc = 0x300744u;
    {
        const bool branch_taken_0x300744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x300744) {
            ctx->pc = 0x300748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300744u;
            // 0x300748: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303820u;
            goto label_303820;
        }
    }
    ctx->pc = 0x30074Cu;
    // 0x30074c: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x30074Cu;
    SET_GPR_U32(ctx, 31, 0x300754u);
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x30074Cu, 0x300754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300754u;
label_300754:
    // 0x300754: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x300754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x300758: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30075c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x30075cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x300760: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x300760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x300764: 0x26440130  addiu       $a0, $s2, 0x130
    ctx->pc = 0x300764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
    // 0x300768: 0x94a20012  lhu         $v0, 0x12($a1)
    ctx->pc = 0x300768u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x30076c: 0x24a30660  addiu       $v1, $a1, 0x660
    ctx->pc = 0x30076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1632));
    // 0x300770: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x300770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x300774: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x300774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x300778: 0x2787c500  addiu       $a3, $gp, -0x3B00
    ctx->pc = 0x300778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952192));
    // 0x30077c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x30077cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_300780:
    // 0x300780: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x300780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300784: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x300784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x300788: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x300788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30078c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x30078cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x300790: 0x0  nop
    ctx->pc = 0x300790u;
    // NOP
    // 0x300794: 0x14c8fffa  bne         $a2, $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x300794u;
    {
        const bool branch_taken_0x300794 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x300798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300794u;
        // 0x300798: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300794) {
            ctx->pc = 0x300780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300780;
        }
    }
    ctx->pc = 0x30079Cu;
    // 0x30079c: 0xc4a00670  lwc1        $f0, 0x670($a1)
    ctx->pc = 0x30079cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3007a0: 0xe6400140  swc1        $f0, 0x140($s2)
    ctx->pc = 0x3007a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 320), bits); }
    // 0x3007a4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3007a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3007a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3007A8u;
    {
        const bool branch_taken_0x3007a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3007ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007A8u;
        // 0x3007ac: 0x8fa50058  lw          $a1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3007a8) {
            ctx->pc = 0x3007C0u;
            goto label_3007c0;
        }
    }
    ctx->pc = 0x3007B0u;
    // 0x3007b0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x3007b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3007b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3007b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3007b8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x3007b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x3007bc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3007bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_3007c0:
    // 0x3007c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3007c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3007c4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3007c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3007c8: 0x18e00b5c  blez        $a3, . + 4 + (0xB5C << 2)
    ctx->pc = 0x3007C8u;
    {
        const bool branch_taken_0x3007c8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3007CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007C8u;
        // 0x3007cc: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3007c8) {
            ctx->pc = 0x30353Cu;
            goto label_30353c;
        }
    }
    ctx->pc = 0x3007D0u;
    // 0x3007d0: 0x26430110  addiu       $v1, $s2, 0x110
    ctx->pc = 0x3007d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x3007d4: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x3007d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x3007d8: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x3007d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x3007dc: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x3007dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3007e0: 0x265300c0  addiu       $s3, $s2, 0xC0
    ctx->pc = 0x3007e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x3007e4: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x3007e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x3007e8: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x3007e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x3007ec: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x3007ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3007f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3007f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3007f4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3007f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3007f8: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x3007f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3007fc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3007fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x300800: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x300800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x300804: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x300804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x300808: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x300808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x30080c: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x30080cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
    // 0x300810: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x300810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x300814: 0x0  nop
    ctx->pc = 0x300814u;
    // NOP
label_300818:
    // 0x300818: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x300818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30081c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x30081cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x300820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x300820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x300824: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x300824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x300828: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x300828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30082c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x30082cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x300830: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x300830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x300834: 0x10600b3b  beqz        $v1, . + 4 + (0xB3B << 2)
    ctx->pc = 0x300834u;
    {
        const bool branch_taken_0x300834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x300838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300834u;
        // 0x300838: 0x8ca8000c  lw          $t0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300834) {
            ctx->pc = 0x303524u;
            goto label_303524;
        }
    }
    ctx->pc = 0x30083Cu;
    // 0x30083c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x30083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x300840: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x300840u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x300844: 0x7e4200e0  sq          $v0, 0xE0($s2)
    ctx->pc = 0x300844u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 224), GPR_VEC(ctx, 2));
    // 0x300848: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x300848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30084c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x30084cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300850: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x300850u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x300854: 0x78c40020  lq          $a0, 0x20($a2)
    ctx->pc = 0x300854u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x300858: 0x78c50030  lq          $a1, 0x30($a2)
    ctx->pc = 0x300858u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x30085c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x30085cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x300860: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x300860u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
    // 0x300864: 0x7e440020  sq          $a0, 0x20($s2)
    ctx->pc = 0x300864u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 4));
    // 0x300868: 0x7e450030  sq          $a1, 0x30($s2)
    ctx->pc = 0x300868u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 5));
    // 0x30086c: 0x26470030  addiu       $a3, $s2, 0x30
    ctx->pc = 0x30086cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x300870: 0xf8e00000  sqc2        $vf0, 0x0($a3)
    ctx->pc = 0x300870u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x300874: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x300874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x300878: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x300878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30087c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x30087cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x300880: 0xda450010  lqc2        $vf5, 0x10($s2)
    ctx->pc = 0x300880u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x300884: 0xda460020  lqc2        $vf6, 0x20($s2)
    ctx->pc = 0x300884u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x300888: 0xda470030  lqc2        $vf7, 0x30($s2)
    ctx->pc = 0x300888u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x30088c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x30088cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300890: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x300890u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x300894: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x300894u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x300898: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x300898u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x30089c: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x30089cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3008a0: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x3008a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3008a4: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x3008a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3008a8: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x3008a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3008ac: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x3008acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3008b0: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x3008b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3008b4: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x3008b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3008b8: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x3008b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3008bc: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x3008bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3008c0: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x3008c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3008c4: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x3008c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3008c8: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x3008c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3008cc: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3008ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3008d0: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x3008d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3008d4: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x3008d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3008d8: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x3008d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3008dc: 0xf8e40000  sqc2        $vf4, 0x0($a3)
    ctx->pc = 0x3008dcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3008e0: 0xf8e50010  sqc2        $vf5, 0x10($a3)
    ctx->pc = 0x3008e0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3008e4: 0xf8e60020  sqc2        $vf6, 0x20($a3)
    ctx->pc = 0x3008e4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x3008e8: 0xf8e70030  sqc2        $vf7, 0x30($a3)
    ctx->pc = 0x3008e8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x3008ec: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x3008ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3008f0: 0x26550080  addiu       $s5, $s2, 0x80
    ctx->pc = 0x3008f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x3008f4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3008f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x3008f8: 0x7aa50000  lq          $a1, 0x0($s5)
    ctx->pc = 0x3008f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3008fc: 0x7aa40010  lq          $a0, 0x10($s5)
    ctx->pc = 0x3008fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x300900: 0x7aa60020  lq          $a2, 0x20($s5)
    ctx->pc = 0x300900u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x300904: 0x7aa20030  lq          $v0, 0x30($s5)
    ctx->pc = 0x300904u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x300908: 0x70853c88  pextlw      $a3, $a0, $a1
    ctx->pc = 0x300908u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x30090c: 0x708524a8  pextuw      $a0, $a0, $a1
    ctx->pc = 0x30090cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x300910: 0x70461c88  pextlw      $v1, $v0, $a2
    ctx->pc = 0x300910u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x300914: 0x704614a8  pextuw      $v0, $v0, $a2
    ctx->pc = 0x300914u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTUW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x300918: 0x70672b89  pcpyld      $a1, $v1, $a3
    ctx->pc = 0x300918u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x30091c: 0x70e33ba9  pcpyud      $a3, $a3, $v1
    ctx->pc = 0x30091cu;
    SET_GPR_VEC(ctx, 7, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x300920: 0x70443389  pcpyld      $a2, $v0, $a0
    ctx->pc = 0x300920u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x300924: 0x708223a9  pcpyud      $a0, $a0, $v0
    ctx->pc = 0x300924u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x300928: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x300928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x30092c: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x30092cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x300930: 0xafa80068  sw          $t0, 0x68($sp)
    ctx->pc = 0x300930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 8));
    // 0x300934: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x300934u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x300938: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x300938u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x30093c: 0x7c660020  sq          $a2, 0x20($v1)
    ctx->pc = 0x30093cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 6));
    // 0x300940: 0x7c640030  sq          $a0, 0x30($v1)
    ctx->pc = 0x300940u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 4));
    // 0x300944: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x300944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300948: 0x10800279  beqz        $a0, . + 4 + (0x279 << 2)
    ctx->pc = 0x300948u;
    {
        const bool branch_taken_0x300948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300948u;
        // 0x30094c: 0x26500100  addiu       $s0, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300948) {
            ctx->pc = 0x301330u;
            goto label_301330;
        }
    }
    ctx->pc = 0x300950u;
    // 0x300950: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x300950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x300954: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x300954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300958: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x300958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x30095c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x30095cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300960: 0xd8b10000  lqc2        $vf17, 0x0($a1)
    ctx->pc = 0x300960u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300964: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x300964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x300968: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x300968u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x30096c: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x30096cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300970: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x300970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300974: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x300974u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300978: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x300978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30097c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x30097cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300980: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x300980u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x300984: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x300984u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x300988: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x300988u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x30098c: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x30098cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x300990: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x300990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300994: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x300994u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300998: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x300998u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30099c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x30099cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3009a0: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x3009a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3009a4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3009a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3009a8: 0x27c200e0  addiu       $v0, $fp, 0xE0
    ctx->pc = 0x3009a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 224));
    // 0x3009ac: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x3009acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x3009b0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x3009b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3009b4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x3009b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3009b8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x3009b8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3009bc: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x3009bcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x3009c0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x3009c0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3009c4: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x3009c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3009c8: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x3009c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3009cc: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x3009ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3009d0: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x3009d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3009d4: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x3009d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3009d8: 0x7bc20110  lq          $v0, 0x110($fp)
    ctx->pc = 0x3009d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 272)));
    // 0x3009dc: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x3009dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x3009e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3009e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3009e4: 0x7fc200f0  sq          $v0, 0xF0($fp)
    ctx->pc = 0x3009e4u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 240), GPR_VEC(ctx, 2));
    // 0x3009e8: 0xc7c000f4  lwc1        $f0, 0xF4($fp)
    ctx->pc = 0x3009e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3009ec: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x3009ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3009f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3009f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3009f4: 0xe7c000f4  swc1        $f0, 0xF4($fp)
    ctx->pc = 0x3009f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 244), bits); }
    // 0x3009f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3009f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3009fc: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x3009fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x300a00: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x300a00u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300a04: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x300a04u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300a08: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x300a08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x300a0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x300a0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x300a10: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x300a10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300a14: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x300a14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300a18: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300a18u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300a1c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x300a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x300a20: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x300a20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300a24: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x300a24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x300a28: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x300a28u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x300a2c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x300a2cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x300a30: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300a30u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300a34: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x300a34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300a38: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x300a38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300a3c: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x300a3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300a40: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x300a40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300a44: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300a44u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300a48: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x300a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300a4c: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300a4cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300a50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x300a50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x300a54: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x300a54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x300a58: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x300a58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x300a5c: 0xd8f10000  lqc2        $vf17, 0x0($a3)
    ctx->pc = 0x300a5cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x300a60: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x300a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x300a64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x300a64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x300a68: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x300a68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x300a6c: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x300a6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300a70: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x300a70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300a74: 0xf8f00000  sqc2        $vf16, 0x0($a3)
    ctx->pc = 0x300a74u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300a78: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x300a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x300a7c: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x300a7cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x300a80: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x300a80u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300a84: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x300a84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300a88: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300a88u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300a8c: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x300a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x300a90: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x300a90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300a94: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x300a94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x300a98: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x300a98u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x300a9c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x300a9cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x300aa0: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300aa0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300aa4: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x300aa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300aa8: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x300aa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300aac: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x300aacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300ab0: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x300ab0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300ab4: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300ab8: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300ab8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300abc: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x300abcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x300ac0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x300ac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x300ac4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x300ac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x300ac8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x300ac8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x300acc: 0x4a0003bf  vwaitq
    ctx->pc = 0x300accu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x300ad0: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x300ad0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300ad4: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300ad8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x300ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x300adc: 0x26370020  addiu       $s7, $s1, 0x20
    ctx->pc = 0x300adcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x300ae0: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x300ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300ae4: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x300ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x300ae8: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x300ae8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300aec: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x300aecu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300af0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x300af0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x300af4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x300af4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x300af8: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x300af8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300afc: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x300afcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300b00: 0xfaf00000  sqc2        $vf16, 0x0($s7)
    ctx->pc = 0x300b00u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300b04: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x300b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x300b08: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x300b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x300b0c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x300b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300b10: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x300b10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x300b14: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x300b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300b18: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x300b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x300b1c: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x300b1cu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x300b20: 0x460d0344  c1          0xD0344
    ctx->pc = 0x300b20u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x300b24: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x300b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x300b28: 0xc7cc00c8  lwc1        $f12, 0xC8($fp)
    ctx->pc = 0x300b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x300b2c: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x300B2Cu;
    SET_GPR_U32(ctx, 31, 0x300B34u);
    ctx->pc = 0x300B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B2Cu;
    // 0x300b30: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x300B2Cu, 0x300B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B34u;
label_300b34:
    // 0x300b34: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x300b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x300b38: 0xc7cc00c4  lwc1        $f12, 0xC4($fp)
    ctx->pc = 0x300b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x300b3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x300b3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x300b40: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x300B40u;
    SET_GPR_U32(ctx, 31, 0x300B48u);
    ctx->pc = 0x300B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B40u;
    // 0x300b44: 0xc7cd00c0  lwc1        $f13, 0xC0($fp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x300B40u, 0x300B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B48u;
label_300b48:
    // 0x300b48: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x300b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x300b4c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x300b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x300b50: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x300B50u;
    {
        const bool branch_taken_0x300b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B50u;
        // 0x300b54: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b50) {
            ctx->pc = 0x300BD0u;
            goto label_300bd0;
        }
    }
    ctx->pc = 0x300B58u;
    // 0x300b58: 0xc6260054  lwc1        $f6, 0x54($s1)
    ctx->pc = 0x300b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x300b5c: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x300b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300b60: 0x4606a141  sub.s       $f5, $f20, $f6
    ctx->pc = 0x300b60u;
    ctx->f[5] = FPU_SUB_S(ctx->f[20], ctx->f[6]);
    // 0x300b64: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x300b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300b68: 0x46001901  sub.s       $f4, $f3, $f0
    ctx->pc = 0x300b68u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x300b6c: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x300b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300b70: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x300b70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x300b74: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x300b74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x300b78: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x300b78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x300b7c: 0x4601089c  madd.s      $f2, $f1, $f1
    ctx->pc = 0x300b7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x300b80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x300b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x300b84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x300b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x300b88: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x300b88u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x300b8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x300b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300b90: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x300B90u;
    {
        const bool branch_taken_0x300b90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x300b90) {
            ctx->pc = 0x300BA0u;
            goto label_300ba0;
        }
    }
    ctx->pc = 0x300B98u;
    // 0x300b98: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x300B98u;
    {
        const bool branch_taken_0x300b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B98u;
        // 0x300b9c: 0xe65400d4  swc1        $f20, 0xD4($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b98) {
            ctx->pc = 0x300C38u;
            goto label_300c38;
        }
    }
    ctx->pc = 0x300BA0u;
label_300ba0:
    // 0x300ba0: 0x0  nop
    ctx->pc = 0x300ba0u;
    // NOP
    // 0x300ba4: 0x0  nop
    ctx->pc = 0x300ba4u;
    // NOP
    // 0x300ba8: 0x46000896  rsqrt.s     $f2, $f1, $f0
    ctx->pc = 0x300ba8u;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[1]);
    // 0x300bac: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x300bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x300bb0: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x300bb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x300bb4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x300bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x300bb8: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x300bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x300bbc: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x300bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300bc0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x300bc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x300bc4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x300BC4u;
    {
        const bool branch_taken_0x300bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BC4u;
        // 0x300bc8: 0xe64200d8  swc1        $f2, 0xD8($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300bc4) {
            ctx->pc = 0x300C3Cu;
            goto label_300c3c;
        }
    }
    ctx->pc = 0x300BCCu;
    // 0x300bcc: 0x0  nop
    ctx->pc = 0x300bccu;
    // NOP
label_300bd0:
    // 0x300bd0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x300bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x300bd4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x300BD4u;
    {
        const bool branch_taken_0x300bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300bd4) {
            ctx->pc = 0x300BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300BD4u;
            // 0x300bd8: 0xe65400d4  swc1        $f20, 0xD4($s2) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x300C00u;
            goto label_300c00;
        }
    }
    ctx->pc = 0x300BDCu;
    // 0x300bdc: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x300bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300be0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x300be0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300be4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x300BE4u;
    {
        const bool branch_taken_0x300be4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x300be4) {
            ctx->pc = 0x300BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300BE4u;
            // 0x300be8: 0xe64000d4  swc1        $f0, 0xD4($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x300C00u;
            goto label_300c00;
        }
    }
    ctx->pc = 0x300BECu;
    // 0x300bec: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x300becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300bf0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x300bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300bf4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x300BF4u;
    {
        const bool branch_taken_0x300bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x300bf4) {
            ctx->pc = 0x300BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300BF4u;
            // 0x300bf8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x300BFCu;
            goto label_300bfc;
        }
    }
    ctx->pc = 0x300BFCu;
label_300bfc:
    // 0x300bfc: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x300bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
label_300c00:
    // 0x300c00: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x300c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x300c04: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x300c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x300c08: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x300C08u;
    {
        const bool branch_taken_0x300c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300c08) {
            ctx->pc = 0x300C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300C08u;
            // 0x300c0c: 0xe64300d8  swc1        $f3, 0xD8($s2) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x300C3Cu;
            goto label_300c3c;
        }
    }
    ctx->pc = 0x300C10u;
    // 0x300c10: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x300c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300c14: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x300c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300c18: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x300C18u;
    {
        const bool branch_taken_0x300c18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x300c18) {
            ctx->pc = 0x300C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300C18u;
            // 0x300c1c: 0xe64000d8  swc1        $f0, 0xD8($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x300C3Cu;
            goto label_300c3c;
        }
    }
    ctx->pc = 0x300C20u;
    // 0x300c20: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x300c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300c24: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x300c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300c28: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x300C28u;
    {
        const bool branch_taken_0x300c28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x300c28) {
            ctx->pc = 0x300C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300C28u;
            // 0x300c2c: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x300C30u;
            goto label_300c30;
        }
    }
    ctx->pc = 0x300C30u;
label_300c30:
    // 0x300c30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x300C30u;
    {
        const bool branch_taken_0x300c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C30u;
        // 0x300c34: 0xe64000d8  swc1        $f0, 0xD8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300c30) {
            ctx->pc = 0x300C3Cu;
            goto label_300c3c;
        }
    }
    ctx->pc = 0x300C38u;
label_300c38:
    // 0x300c38: 0xe64300d8  swc1        $f3, 0xD8($s2)
    ctx->pc = 0x300c38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
label_300c3c:
    // 0x300c3c: 0x264700d0  addiu       $a3, $s2, 0xD0
    ctx->pc = 0x300c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x300c40: 0xe65500d0  swc1        $f21, 0xD0($s2)
    ctx->pc = 0x300c40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x300c44: 0xafa7007c  sw          $a3, 0x7C($sp)
    ctx->pc = 0x300c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 7));
    // 0x300c48: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x300c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x300c4c: 0xe65500dc  swc1        $f21, 0xDC($s2)
    ctx->pc = 0x300c4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
    // 0x300c50: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x300c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300c54: 0xc0b7478  jal         func_2DD1E0
    ctx->pc = 0x300C54u;
    SET_GPR_U32(ctx, 31, 0x300C5Cu);
    ctx->pc = 0x300C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300C54u;
    // 0x300c58: 0x8fa6007c  lw          $a2, 0x7C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD1E0u, 0x300C54u, 0x300C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C5Cu;
label_300c5c:
    // 0x300c5c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x300c5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x300c60: 0xdaa50010  lqc2        $vf5, 0x10($s5)
    ctx->pc = 0x300c60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x300c64: 0xdaa60020  lqc2        $vf6, 0x20($s5)
    ctx->pc = 0x300c64u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x300c68: 0xdaa70030  lqc2        $vf7, 0x30($s5)
    ctx->pc = 0x300c68u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x300c6c: 0xda480000  lqc2        $vf8, 0x0($s2)
    ctx->pc = 0x300c6cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x300c70: 0xda490010  lqc2        $vf9, 0x10($s2)
    ctx->pc = 0x300c70u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x300c74: 0xda4a0020  lqc2        $vf10, 0x20($s2)
    ctx->pc = 0x300c74u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x300c78: 0xda4b0030  lqc2        $vf11, 0x30($s2)
    ctx->pc = 0x300c78u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x300c7c: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x300c7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300c80: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x300c80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300c84: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x300c84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300c88: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x300c88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x300c8c: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x300c8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300c90: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x300c90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300c94: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x300c94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300c98: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x300c98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x300c9c: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x300c9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300ca0: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x300ca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300ca4: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x300ca4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300ca8: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x300ca8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x300cac: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x300cacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300cb0: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x300cb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300cb4: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x300cb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300cb8: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x300cb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x300cbc: 0xfaa40000  sqc2        $vf4, 0x0($s5)
    ctx->pc = 0x300cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x300cc0: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x300cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x300cc4: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x300cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x300cc8: 0xfaa70030  sqc2        $vf7, 0x30($s5)
    ctx->pc = 0x300cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x300ccc: 0x7a4200e0  lq          $v0, 0xE0($s2)
    ctx->pc = 0x300cccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x300cd0: 0x26550080  addiu       $s5, $s2, 0x80
    ctx->pc = 0x300cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x300cd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x300cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300cd8: 0x7e4200b0  sq          $v0, 0xB0($s2)
    ctx->pc = 0x300cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 176), GPR_VEC(ctx, 2));
    // 0x300cdc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x300cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x300ce0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x300ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x300ce4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x300ce4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ce8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x300ce8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300cec: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x300cecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x300cf0: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x300cf0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x300cf4: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x300cf4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x300cf8: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x300cf8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300cfc: 0xd8c90010  lqc2        $vf9, 0x10($a2)
    ctx->pc = 0x300cfcu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x300d00: 0xd8ca0020  lqc2        $vf10, 0x20($a2)
    ctx->pc = 0x300d00u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x300d04: 0xd8cb0030  lqc2        $vf11, 0x30($a2)
    ctx->pc = 0x300d04u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x300d08: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x300d08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300d0c: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x300d0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300d10: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x300d10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300d14: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x300d14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x300d18: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x300d18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300d1c: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x300d1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300d20: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x300d20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300d24: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x300d24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x300d28: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x300d28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300d2c: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x300d2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300d30: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x300d30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300d34: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x300d34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x300d38: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x300d38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300d3c: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x300d3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300d40: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x300d40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300d44: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x300d44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x300d48: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x300d48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x300d4c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x300d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x300d50: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x300d50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x300d54: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x300d54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x300d58: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x300d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x300d5c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x300d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x300d60: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x300D60u;
    {
        const bool branch_taken_0x300d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300d60) {
            ctx->pc = 0x300D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300D60u;
            // 0x300d64: 0x24a40030  addiu       $a0, $a1, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300E28u;
            goto label_300e28;
        }
    }
    ctx->pc = 0x300D68u;
    // 0x300d68: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x300d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300d6c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x300d6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300d70: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x300D70u;
    {
        const bool branch_taken_0x300d70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x300d70) {
            ctx->pc = 0x300D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300D70u;
            // 0x300d74: 0xc6200064  lwc1        $f0, 0x64($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x300D88u;
            goto label_300d88;
        }
    }
    ctx->pc = 0x300D78u;
    // 0x300d78: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x300d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300d7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300d80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x300D80u;
    {
        const bool branch_taken_0x300d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D80u;
        // 0x300d84: 0x4600b001  sub.s       $f0, $f22, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300d80) {
            ctx->pc = 0x300D90u;
            goto label_300d90;
        }
    }
    ctx->pc = 0x300D88u;
label_300d88:
    // 0x300d88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300d8c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x300d8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_300d90:
    // 0x300d90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x300d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300d94: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x300d94u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300d98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x300d98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x300d9c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x300d9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x300da0: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x300da0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300da4: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x300da4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300da8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x300da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x300dac: 0x8fb50060  lw          $s5, 0x60($sp)
    ctx->pc = 0x300dacu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x300db0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x300db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x300db4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x300db4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x300db8: 0xdaa50010  lqc2        $vf5, 0x10($s5)
    ctx->pc = 0x300db8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x300dbc: 0xdaa60020  lqc2        $vf6, 0x20($s5)
    ctx->pc = 0x300dbcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x300dc0: 0xdaa70030  lqc2        $vf7, 0x30($s5)
    ctx->pc = 0x300dc0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x300dc4: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x300dc4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300dc8: 0xd8c90010  lqc2        $vf9, 0x10($a2)
    ctx->pc = 0x300dc8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x300dcc: 0xd8ca0020  lqc2        $vf10, 0x20($a2)
    ctx->pc = 0x300dccu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x300dd0: 0xd8cb0030  lqc2        $vf11, 0x30($a2)
    ctx->pc = 0x300dd0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x300dd4: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x300dd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300dd8: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x300dd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300ddc: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x300ddcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300de0: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x300de0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x300de4: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x300de4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300de8: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x300de8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300dec: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x300decu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300df0: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x300df0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x300df4: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x300df4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300df8: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x300df8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300dfc: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x300dfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300e00: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x300e00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x300e04: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x300e04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300e08: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x300e08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300e0c: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x300e0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300e10: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x300e10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x300e14: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x300e14u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x300e18: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x300e18u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x300e1c: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x300e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x300e20: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x300e20u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x300e24: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x300e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_300e28:
    // 0x300e28: 0x265400f0  addiu       $s4, $s2, 0xF0
    ctx->pc = 0x300e28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x300e2c: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x300e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300e30: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x300e30u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300e34: 0xd8b10000  lqc2        $vf17, 0x0($a1)
    ctx->pc = 0x300e34u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300e38: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x300e38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x300e3c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x300e3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x300e40: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x300e40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300e44: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x300e44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300e48: 0xfa900000  sqc2        $vf16, 0x0($s4)
    ctx->pc = 0x300e48u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300e4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x300e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x300e50: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x300e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x300e54: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x300e54u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300e58: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x300e58u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300e5c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x300e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x300e60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x300e60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x300e64: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x300e64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300e68: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x300e68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300e6c: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x300e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300e70: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x300e70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x300e74: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x300e74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x300e78: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x300e78u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x300e7c: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x300e7cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x300e80: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x300e80u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x300e84: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x300e84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300e88: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x300e88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300e8c: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x300e8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300e90: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x300e90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300e94: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x300e94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300e98: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x300e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x300e9c: 0x27c200e0  addiu       $v0, $fp, 0xE0
    ctx->pc = 0x300e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 224));
    // 0x300ea0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x300ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x300ea4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x300ea4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300ea8: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x300ea8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x300eac: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x300eacu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x300eb0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x300eb0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x300eb4: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x300eb4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300eb8: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x300eb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300ebc: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x300ebcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300ec0: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x300ec0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300ec4: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x300ec4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300ec8: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x300ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300ecc: 0x7bc20110  lq          $v0, 0x110($fp)
    ctx->pc = 0x300eccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 272)));
    // 0x300ed0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x300ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x300ed4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x300ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x300ed8: 0x7fc200f0  sq          $v0, 0xF0($fp)
    ctx->pc = 0x300ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 240), GPR_VEC(ctx, 2));
    // 0x300edc: 0xc7c000f4  lwc1        $f0, 0xF4($fp)
    ctx->pc = 0x300edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300ee0: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x300ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300ee4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x300ee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x300ee8: 0xe7c000f4  swc1        $f0, 0xF4($fp)
    ctx->pc = 0x300ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 244), bits); }
    // 0x300eec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x300eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x300ef0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x300ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x300ef4: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x300ef4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300ef8: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x300ef8u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300efc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x300efcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x300f00: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x300f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x300f04: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x300f04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300f08: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x300f08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300f0c: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300f10: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x300f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x300f14: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x300f14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300f18: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x300f18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x300f1c: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x300f1cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x300f20: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x300f20u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x300f24: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300f24u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300f28: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x300f28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300f2c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x300f2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300f30: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x300f30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300f34: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x300f34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300f38: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300f38u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300f3c: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x300f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300f40: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300f40u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300f44: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x300f44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x300f48: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x300f48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x300f4c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x300f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x300f50: 0xd8b10000  lqc2        $vf17, 0x0($a1)
    ctx->pc = 0x300f50u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300f54: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x300f54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x300f58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x300f58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x300f5c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x300f5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x300f60: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x300f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300f64: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x300f64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300f68: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x300f68u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300f6c: 0x8fa7006c  lw          $a3, 0x6C($sp)
    ctx->pc = 0x300f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x300f70: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x300f70u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300f74: 0xd8f10000  lqc2        $vf17, 0x0($a3)
    ctx->pc = 0x300f74u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x300f78: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x300f78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300f7c: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300f80: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x300f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x300f84: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x300f84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300f88: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x300f88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x300f8c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x300f8cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x300f90: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x300f90u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x300f94: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300f94u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300f98: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x300f98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300f9c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x300f9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300fa0: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x300fa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300fa4: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x300fa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300fa8: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300fac: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300facu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300fb0: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x300fb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x300fb4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x300fb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x300fb8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x300fb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x300fbc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x300fbcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x300fc0: 0x4a0003bf  vwaitq
    ctx->pc = 0x300fc0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x300fc4: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x300fc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300fc8: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x300fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300fcc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x300fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x300fd0: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x300fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300fd4: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x300fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x300fd8: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x300fd8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300fdc: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x300fdcu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300fe0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x300fe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x300fe4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x300fe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x300fe8: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x300fe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300fec: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x300fecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300ff0: 0xfaf00000  sqc2        $vf16, 0x0($s7)
    ctx->pc = 0x300ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300ff4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x300ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300ff8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x300ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300ffc: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x300ffcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x301000: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x301000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x301004: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x301004u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x301008: 0x460d0344  c1          0xD0344
    ctx->pc = 0x301008u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x30100c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x30100cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x301010: 0xc7cc00c8  lwc1        $f12, 0xC8($fp)
    ctx->pc = 0x301010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301014: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x301014u;
    SET_GPR_U32(ctx, 31, 0x30101Cu);
    ctx->pc = 0x301018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301014u;
    // 0x301018: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x301014u, 0x30101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30101Cu;
label_30101c:
    // 0x30101c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x30101cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x301020: 0xc7cc00c4  lwc1        $f12, 0xC4($fp)
    ctx->pc = 0x301020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301024: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x301024u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x301028: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x301028u;
    SET_GPR_U32(ctx, 31, 0x301030u);
    ctx->pc = 0x30102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301028u;
    // 0x30102c: 0xc7cd00c0  lwc1        $f13, 0xC0($fp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x301028u, 0x301030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301030u;
label_301030:
    // 0x301030: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x301030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x301034: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x301034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x301038: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x301038u;
    {
        const bool branch_taken_0x301038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301038u;
        // 0x30103c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301038) {
            ctx->pc = 0x3010B8u;
            goto label_3010b8;
        }
    }
    ctx->pc = 0x301040u;
    // 0x301040: 0xc6260054  lwc1        $f6, 0x54($s1)
    ctx->pc = 0x301040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x301044: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x301044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301048: 0x4606a141  sub.s       $f5, $f20, $f6
    ctx->pc = 0x301048u;
    ctx->f[5] = FPU_SUB_S(ctx->f[20], ctx->f[6]);
    // 0x30104c: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x30104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301050: 0x46001901  sub.s       $f4, $f3, $f0
    ctx->pc = 0x301050u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x301054: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x301054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301058: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x301058u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x30105c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x30105cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x301060: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x301060u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x301064: 0x4601089c  madd.s      $f2, $f1, $f1
    ctx->pc = 0x301064u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x301068: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x301068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30106c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30106cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x301070: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x301070u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x301074: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301078: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x301078u;
    {
        const bool branch_taken_0x301078 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301078) {
            ctx->pc = 0x301088u;
            goto label_301088;
        }
    }
    ctx->pc = 0x301080u;
    // 0x301080: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x301080u;
    {
        const bool branch_taken_0x301080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301080u;
        // 0x301084: 0xe65400d4  swc1        $f20, 0xD4($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301080) {
            ctx->pc = 0x301120u;
            goto label_301120;
        }
    }
    ctx->pc = 0x301088u;
label_301088:
    // 0x301088: 0x0  nop
    ctx->pc = 0x301088u;
    // NOP
    // 0x30108c: 0x0  nop
    ctx->pc = 0x30108cu;
    // NOP
    // 0x301090: 0x46000896  rsqrt.s     $f2, $f1, $f0
    ctx->pc = 0x301090u;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[1]);
    // 0x301094: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x301094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x301098: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x301098u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x30109c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x30109cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3010a0: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x3010a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x3010a4: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x3010a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3010a8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3010a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3010ac: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3010ACu;
    {
        const bool branch_taken_0x3010ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3010B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010ACu;
        // 0x3010b0: 0xe64200d8  swc1        $f2, 0xD8($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010ac) {
            ctx->pc = 0x301124u;
            goto label_301124;
        }
    }
    ctx->pc = 0x3010B4u;
    // 0x3010b4: 0x0  nop
    ctx->pc = 0x3010b4u;
    // NOP
label_3010b8:
    // 0x3010b8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x3010b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3010bc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3010BCu;
    {
        const bool branch_taken_0x3010bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3010bc) {
            ctx->pc = 0x3010C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3010BCu;
            // 0x3010c0: 0xe65400d4  swc1        $f20, 0xD4($s2) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3010E8u;
            goto label_3010e8;
        }
    }
    ctx->pc = 0x3010C4u;
    // 0x3010c4: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x3010c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3010c8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3010c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3010cc: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x3010CCu;
    {
        const bool branch_taken_0x3010cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3010cc) {
            ctx->pc = 0x3010D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3010CCu;
            // 0x3010d0: 0xe64000d4  swc1        $f0, 0xD4($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3010E8u;
            goto label_3010e8;
        }
    }
    ctx->pc = 0x3010D4u;
    // 0x3010d4: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x3010d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3010d8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3010d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3010dc: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3010DCu;
    {
        const bool branch_taken_0x3010dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3010dc) {
            ctx->pc = 0x3010E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3010DCu;
            // 0x3010e0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3010E4u;
            goto label_3010e4;
        }
    }
    ctx->pc = 0x3010E4u;
label_3010e4:
    // 0x3010e4: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x3010e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
label_3010e8:
    // 0x3010e8: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x3010e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x3010ec: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3010ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3010f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3010F0u;
    {
        const bool branch_taken_0x3010f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3010f0) {
            ctx->pc = 0x3010F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3010F0u;
            // 0x3010f4: 0xe64300d8  swc1        $f3, 0xD8($s2) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x301124u;
            goto label_301124;
        }
    }
    ctx->pc = 0x3010F8u;
    // 0x3010f8: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x3010f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3010fc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3010fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301100: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x301100u;
    {
        const bool branch_taken_0x301100 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301100) {
            ctx->pc = 0x301104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301100u;
            // 0x301104: 0xe64000d8  swc1        $f0, 0xD8($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x301124u;
            goto label_301124;
        }
    }
    ctx->pc = 0x301108u;
    // 0x301108: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x301108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30110c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x30110cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301110: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x301110u;
    {
        const bool branch_taken_0x301110 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301110) {
            ctx->pc = 0x301114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301110u;
            // 0x301114: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x301118u;
            goto label_301118;
        }
    }
    ctx->pc = 0x301118u;
label_301118:
    // 0x301118: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x301118u;
    {
        const bool branch_taken_0x301118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301118u;
        // 0x30111c: 0xe64000d8  swc1        $f0, 0xD8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301118) {
            ctx->pc = 0x301124u;
            goto label_301124;
        }
    }
    ctx->pc = 0x301120u;
label_301120:
    // 0x301120: 0xe64300d8  swc1        $f3, 0xD8($s2)
    ctx->pc = 0x301120u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
label_301124:
    // 0x301124: 0xe65500d0  swc1        $f21, 0xD0($s2)
    ctx->pc = 0x301124u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x301128: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x301128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x30112c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30112cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301130: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x301130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x301134: 0xc0b7478  jal         func_2DD1E0
    ctx->pc = 0x301134u;
    SET_GPR_U32(ctx, 31, 0x30113Cu);
    ctx->pc = 0x301138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301134u;
    // 0x301138: 0xe65500dc  swc1        $f21, 0xDC($s2) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD1E0u, 0x301134u, 0x30113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30113Cu;
label_30113c:
    // 0x30113c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x30113cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x301140: 0xdaa50010  lqc2        $vf5, 0x10($s5)
    ctx->pc = 0x301140u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x301144: 0xdaa60020  lqc2        $vf6, 0x20($s5)
    ctx->pc = 0x301144u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x301148: 0xdaa70030  lqc2        $vf7, 0x30($s5)
    ctx->pc = 0x301148u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x30114c: 0xda480000  lqc2        $vf8, 0x0($s2)
    ctx->pc = 0x30114cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x301150: 0xda490010  lqc2        $vf9, 0x10($s2)
    ctx->pc = 0x301150u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x301154: 0xda4a0020  lqc2        $vf10, 0x20($s2)
    ctx->pc = 0x301154u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x301158: 0xda4b0030  lqc2        $vf11, 0x30($s2)
    ctx->pc = 0x301158u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x30115c: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x30115cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301160: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x301160u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301164: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x301164u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301168: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x301168u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x30116c: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x30116cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301170: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x301170u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301174: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x301174u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301178: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x301178u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x30117c: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x30117cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301180: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x301180u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301184: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x301184u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301188: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x301188u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x30118c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x30118cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301190: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x301190u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301194: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x301194u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301198: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x301198u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x30119c: 0xfaa40000  sqc2        $vf4, 0x0($s5)
    ctx->pc = 0x30119cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3011a0: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x3011a0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3011a4: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x3011a4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x3011a8: 0xfaa70030  sqc2        $vf7, 0x30($s5)
    ctx->pc = 0x3011a8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x3011ac: 0x7a4200e0  lq          $v0, 0xE0($s2)
    ctx->pc = 0x3011acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x3011b0: 0x26460080  addiu       $a2, $s2, 0x80
    ctx->pc = 0x3011b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x3011b4: 0x7e4200b0  sq          $v0, 0xB0($s2)
    ctx->pc = 0x3011b4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 176), GPR_VEC(ctx, 2));
    // 0x3011b8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3011b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3011bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3011bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3011c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3011c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3011c4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x3011c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3011c8: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x3011c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3011cc: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x3011ccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3011d0: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x3011d0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x3011d4: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x3011d4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3011d8: 0xd8690010  lqc2        $vf9, 0x10($v1)
    ctx->pc = 0x3011d8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3011dc: 0xd86a0020  lqc2        $vf10, 0x20($v1)
    ctx->pc = 0x3011dcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3011e0: 0xd86b0030  lqc2        $vf11, 0x30($v1)
    ctx->pc = 0x3011e0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x3011e4: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x3011e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3011e8: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x3011e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3011ec: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x3011ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3011f0: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x3011f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3011f4: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x3011f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3011f8: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x3011f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3011fc: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x3011fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301200: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x301200u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x301204: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x301204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301208: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x301208u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30120c: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x30120cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301210: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x301210u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x301214: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x301214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301218: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x301218u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30121c: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x30121cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301220: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x301220u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x301224: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x301224u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301228: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x301228u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x30122c: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x30122cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x301230: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x301230u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x301234: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x301234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x301238: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x301238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30123c: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x30123Cu;
    {
        const bool branch_taken_0x30123c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30123c) {
            ctx->pc = 0x301240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30123Cu;
            // 0x301240: 0xc620004c  lwc1        $f0, 0x4C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x301308u;
            goto label_301308;
        }
    }
    ctx->pc = 0x301244u;
    // 0x301244: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x301244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301248: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x301248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30124c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x30124Cu;
    {
        const bool branch_taken_0x30124c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30124c) {
            ctx->pc = 0x301250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30124Cu;
            // 0x301250: 0xc6200064  lwc1        $f0, 0x64($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x301268u;
            goto label_301268;
        }
    }
    ctx->pc = 0x301254u;
    // 0x301254: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x301254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301258: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x301258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30125c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30125Cu;
    {
        const bool branch_taken_0x30125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30125Cu;
        // 0x301260: 0x4600b001  sub.s       $f0, $f22, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30125c) {
            ctx->pc = 0x301270u;
            goto label_301270;
        }
    }
    ctx->pc = 0x301264u;
    // 0x301264: 0x0  nop
    ctx->pc = 0x301264u;
    // NOP
label_301268:
    // 0x301268: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x301268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30126c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x30126cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_301270:
    // 0x301270: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x301270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301274: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x301274u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301278: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x301278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30127c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x30127cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x301280: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x301280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301284: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x301284u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x301288: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x301288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30128c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x30128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x301290: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x301290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x301294: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x301294u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301298: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x301298u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30129c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x30129cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3012a0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x3012a0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x3012a4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x3012a4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3012a8: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x3012a8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3012ac: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x3012acu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3012b0: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x3012b0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3012b4: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x3012b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3012b8: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x3012b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3012bc: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x3012bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3012c0: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x3012c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3012c4: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x3012c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3012c8: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x3012c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3012cc: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x3012ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3012d0: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x3012d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3012d4: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x3012d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3012d8: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x3012d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3012dc: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x3012dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3012e0: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x3012e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3012e4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3012e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3012e8: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x3012e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3012ec: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x3012ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3012f0: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x3012f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3012f4: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x3012f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3012f8: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x3012f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3012fc: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x3012fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x301300: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x301300u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x301304: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x301304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_301308:
    // 0x301308: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x301308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x30130c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x30130cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301310: 0xd8b10000  lqc2        $vf17, 0x0($a1)
    ctx->pc = 0x301310u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x301314: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x301314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x301318: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x301318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x30131c: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x30131cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x301320: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x301320u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301324: 0xfa900000  sqc2        $vf16, 0x0($s4)
    ctx->pc = 0x301324u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x301328: 0x1000087b  b           . + 4 + (0x87B << 2)
    ctx->pc = 0x301328u;
    {
        const bool branch_taken_0x301328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301328u;
        // 0x30132c: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301328) {
            ctx->pc = 0x303518u;
            goto label_303518;
        }
    }
    ctx->pc = 0x301330u;
label_301330:
    // 0x301330: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x301330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x301334: 0x24a28858  addiu       $v0, $a1, -0x77A8
    ctx->pc = 0x301334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x301338: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x301338u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x30133c: 0x10600872  beqz        $v1, . + 4 + (0x872 << 2)
    ctx->pc = 0x30133Cu;
    {
        const bool branch_taken_0x30133c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x301340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30133Cu;
        // 0x301340: 0x26570100  addiu       $s7, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30133c) {
            ctx->pc = 0x303508u;
            goto label_303508;
        }
    }
    ctx->pc = 0x301344u;
    // 0x301344: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x301344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x301348: 0xc625004c  lwc1        $f5, 0x4C($s1)
    ctx->pc = 0x301348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30134c: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x30134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x301350: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x301350u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301354: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x301354u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x301358: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x301358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30135c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x30135cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x301360: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x301360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x301364: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x301364u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301368: 0xfaf00000  sqc2        $vf16, 0x0($s7)
    ctx->pc = 0x301368u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x30136c: 0x265400f0  addiu       $s4, $s2, 0xF0
    ctx->pc = 0x30136cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x301370: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x301370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x301374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x301374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301378: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x301378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30137c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x30137cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301380: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x301380u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x301384: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x301384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x301388: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x301388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x30138c: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x30138cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x301390: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x301390u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301394: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x301394u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x301398: 0x264700c0  addiu       $a3, $s2, 0xC0
    ctx->pc = 0x301398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x30139c: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x30139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3013a0: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x3013a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x3013a4: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x3013a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x3013a8: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x3013a8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3013ac: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x3013acu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3013b0: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x3013b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3013b4: 0xf8f00000  sqc2        $vf16, 0x0($a3)
    ctx->pc = 0x3013b4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3013b8: 0x264600c0  addiu       $a2, $s2, 0xC0
    ctx->pc = 0x3013b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x3013bc: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3013bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3013c0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3013c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3013c4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3013c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3013c8: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x3013c8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x3013cc: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x3013ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x3013d0: 0x4600011c  madd.s      $f4, $f0, $f0
    ctx->pc = 0x3013d0u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x3013d4: 0x46040104  c1          0x40104
    ctx->pc = 0x3013d4u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x3013d8: 0xc781955c  lwc1        $f1, -0x6AA4($gp)
    ctx->pc = 0x3013d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3013dc: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x3013dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3013e0: 0x4502006f  bc1fl       . + 4 + (0x6F << 2)
    ctx->pc = 0x3013E0u;
    {
        const bool branch_taken_0x3013e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3013e0) {
            ctx->pc = 0x3013E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3013E0u;
            // 0x3013e4: 0x7a4300f0  lq          $v1, 0xF0($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3015A0u;
            goto label_3015a0;
        }
    }
    ctx->pc = 0x3013E8u;
    // 0x3013e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3013e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3013ec: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x3013ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x3013f0: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x3013f0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3013f4: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x3013f4u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3013f8: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x3013f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3013fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3013fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x301400: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x301400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x301404: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x301404u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301408: 0xfaf00000  sqc2        $vf16, 0x0($s7)
    ctx->pc = 0x301408u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x30140c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x30140cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x301410: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x301410u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x301414: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x301414u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x301418: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x301418u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x30141c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x30141cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x301420: 0xdaf00000  lqc2        $vf16, 0x0($s7)
    ctx->pc = 0x301420u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x301424: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x301424u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301428: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x301428u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30142c: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x30142cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301430: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x301430u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301434: 0xfaf00000  sqc2        $vf16, 0x0($s7)
    ctx->pc = 0x301434u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x301438: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x301438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30143c: 0x27c200e0  addiu       $v0, $fp, 0xE0
    ctx->pc = 0x30143cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 224));
    // 0x301440: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x301440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x301444: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x301444u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301448: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x301448u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30144c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x30144cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x301450: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x301450u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x301454: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x301454u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301458: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x301458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30145c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x30145cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301460: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x301460u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301464: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x301464u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301468: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x301468u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x30146c: 0x7bc20110  lq          $v0, 0x110($fp)
    ctx->pc = 0x30146cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 272)));
    // 0x301470: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x301470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x301474: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x301474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x301478: 0x7fc200f0  sq          $v0, 0xF0($fp)
    ctx->pc = 0x301478u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 240), GPR_VEC(ctx, 2));
    // 0x30147c: 0xc7c000f4  lwc1        $f0, 0xF4($fp)
    ctx->pc = 0x30147cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301480: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x301480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301484: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x301484u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x301488: 0xe7c000f4  swc1        $f0, 0xF4($fp)
    ctx->pc = 0x301488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 244), bits); }
    // 0x30148c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x30148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x301490: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x301490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x301494: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x301494u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x301498: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x301498u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30149c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x30149cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3014a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3014a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3014a4: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x3014a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3014a8: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x3014a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3014ac: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x3014acu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3014b0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3014b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3014b4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x3014b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3014b8: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x3014b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3014bc: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x3014bcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3014c0: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x3014c0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x3014c4: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x3014c4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3014c8: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x3014c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3014cc: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x3014ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3014d0: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x3014d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3014d4: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x3014d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3014d8: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x3014d8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3014dc: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x3014dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3014e0: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x3014e0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3014e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3014e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3014e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3014e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3014ec: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x3014ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3014f0: 0xd8b10000  lqc2        $vf17, 0x0($a1)
    ctx->pc = 0x3014f0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3014f4: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x3014f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x3014f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3014f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3014fc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3014fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x301500: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x301500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301504: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x301504u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301508: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x301508u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x30150c: 0x8fa7006c  lw          $a3, 0x6C($sp)
    ctx->pc = 0x30150cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x301510: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x301510u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x301514: 0xd8f10000  lqc2        $vf17, 0x0($a3)
    ctx->pc = 0x301514u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x301518: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x301518u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x30151c: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x30151cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x301520: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x301520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x301524: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x301524u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301528: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x301528u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30152c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x30152cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x301530: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x301530u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x301534: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x301534u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x301538: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x301538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30153c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x30153cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301540: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x301540u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301544: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x301544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301548: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x301548u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x30154c: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x30154cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x301550: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x301550u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x301554: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x301554u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x301558: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x301558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x30155c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x30155cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x301560: 0x4a0003bf  vwaitq
    ctx->pc = 0x301560u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x301564: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x301564u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301568: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x301568u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x30156c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x30156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x301570: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x301570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301574: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x301574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x301578: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x301578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30157c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x30157cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301580: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x301580u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x301584: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x301584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x301588: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x301588u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x30158c: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x30158cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x301590: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x301590u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301594: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x301594u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x301598: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x301598u;
    {
        const bool branch_taken_0x301598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301598u;
        // 0x30159c: 0x8fa20098  lw          $v0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301598) {
            ctx->pc = 0x301788u;
            goto label_301788;
        }
    }
    ctx->pc = 0x3015A0u;
label_3015a0:
    // 0x3015a0: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x3015a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3015a4: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3015a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x3015a8: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x3015a8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3015ac: 0xd8d10000  lqc2        $vf17, 0x0($a2)
    ctx->pc = 0x3015acu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3015b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3015b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3015b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3015b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3015b8: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x3015b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3015bc: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x3015bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3015c0: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x3015c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3015c4: 0xc64200f4  lwc1        $f2, 0xF4($s2)
    ctx->pc = 0x3015c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3015c8: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x3015c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3015cc: 0xc6440140  lwc1        $f4, 0x140($s2)
    ctx->pc = 0x3015ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3015d0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3015d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3015d4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3015d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x3015d8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3015d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3015dc: 0xc6430130  lwc1        $f3, 0x130($s2)
    ctx->pc = 0x3015dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3015e0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x3015e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x3015e4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3015e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3015e8: 0xe64200f4  swc1        $f2, 0xF4($s2)
    ctx->pc = 0x3015e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x3015ec: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x3015ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3015f0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3015f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3015f4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x3015f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3015f8: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x3015f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x3015fc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3015fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x301600: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x301600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x301604: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x301604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x301608: 0xc6420134  lwc1        $f2, 0x134($s2)
    ctx->pc = 0x301608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30160c: 0xc6430138  lwc1        $f3, 0x138($s2)
    ctx->pc = 0x30160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x301610: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x301610u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x301614: 0xc64000f4  lwc1        $f0, 0xF4($s2)
    ctx->pc = 0x301614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301618: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x301618u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x30161c: 0xc64100f8  lwc1        $f1, 0xF8($s2)
    ctx->pc = 0x30161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301620: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x301620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x301624: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x301624u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x301628: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x301628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x30162c: 0xe64100f8  swc1        $f1, 0xF8($s2)
    ctx->pc = 0x30162cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
    // 0x301630: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x301630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301634: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x301634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301638: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x301638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30163c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x30163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x301640: 0xc64100f4  lwc1        $f1, 0xF4($s2)
    ctx->pc = 0x301640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301644: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x301644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301648: 0xc64200f8  lwc1        $f2, 0xF8($s2)
    ctx->pc = 0x301648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30164c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30164cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x301650: 0xe64100f4  swc1        $f1, 0xF4($s2)
    ctx->pc = 0x301650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x301654: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x301654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301658: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x301658u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x30165c: 0xe64200f8  swc1        $f2, 0xF8($s2)
    ctx->pc = 0x30165cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
    // 0x301660: 0xe6350038  swc1        $f21, 0x38($s1)
    ctx->pc = 0x301660u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x301664: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x301664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x301668: 0xe6350034  swc1        $f21, 0x34($s1)
    ctx->pc = 0x301668u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x30166c: 0xe6350030  swc1        $f21, 0x30($s1)
    ctx->pc = 0x30166cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x301670: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x301670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x301674: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x301674u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301678: 0xd8b10000  lqc2        $vf17, 0x0($a1)
    ctx->pc = 0x301678u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30167c: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x30167cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x301680: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x301680u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x301684: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x301684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x301688: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x301688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x30168c: 0xf8d00000  sqc2        $vf16, 0x0($a2)
    ctx->pc = 0x30168cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x301690: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x301690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x301694: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x301694u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x301698: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x301698u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30169c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x30169cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3016a0: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x3016a0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3016a4: 0xd8d00000  lqc2        $vf16, 0x0($a2)
    ctx->pc = 0x3016a4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3016a8: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x3016a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3016ac: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x3016acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3016b0: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x3016b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3016b4: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x3016b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3016b8: 0xf8d00000  sqc2        $vf16, 0x0($a2)
    ctx->pc = 0x3016b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3016bc: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x3016bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3016c0: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x3016c0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3016c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3016c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3016c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3016c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3016cc: 0x8fa70084  lw          $a3, 0x84($sp)
    ctx->pc = 0x3016ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x3016d0: 0xd8f10000  lqc2        $vf17, 0x0($a3)
    ctx->pc = 0x3016d0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3016d4: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x3016d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x3016d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3016d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3016dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3016dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3016e0: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x3016e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3016e4: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x3016e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3016e8: 0xf8f00000  sqc2        $vf16, 0x0($a3)
    ctx->pc = 0x3016e8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3016ec: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3016ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3016f0: 0x264200e0  addiu       $v0, $s2, 0xE0
    ctx->pc = 0x3016f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x3016f4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3016f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3016f8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x3016f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3016fc: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x3016fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x301700: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x301700u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x301704: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x301704u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x301708: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x301708u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30170c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x30170cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301710: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x301710u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301714: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x301714u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301718: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x301718u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x30171c: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x30171cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x301720: 0x8fb40084  lw          $s4, 0x84($sp)
    ctx->pc = 0x301720u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x301724: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x301724u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x301728: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x301728u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30172c: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x30172cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301730: 0xfad00000  sqc2        $vf16, 0x0($s6)
    ctx->pc = 0x301730u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x301734: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x301734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x301738: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x301738u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30173c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x30173cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x301740: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x301740u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x301744: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x301744u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x301748: 0xdad00000  lqc2        $vf16, 0x0($s6)
    ctx->pc = 0x301748u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x30174c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x30174cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301750: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x301750u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301754: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x301754u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301758: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x301758u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x30175c: 0xfad00000  sqc2        $vf16, 0x0($s6)
    ctx->pc = 0x30175cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x301760: 0xafb60098  sw          $s6, 0x98($sp)
    ctx->pc = 0x301760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 22));
    // 0x301764: 0xdad00000  lqc2        $vf16, 0x0($s6)
    ctx->pc = 0x301764u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x301768: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x301768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x30176c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x30176cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x301770: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x301770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x301774: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x301774u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x301778: 0x4a0003bf  vwaitq
    ctx->pc = 0x301778u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x30177c: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x30177cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301780: 0xfad00000  sqc2        $vf16, 0x0($s6)
    ctx->pc = 0x301780u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x301784: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x301784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_301788:
    // 0x301788: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x301788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30178c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x30178cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x301790: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x301790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x301794: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x301794u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x301798: 0x460d0344  c1          0xD0344
    ctx->pc = 0x301798u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x30179c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x30179cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x3017a0: 0xc7cc00c8  lwc1        $f12, 0xC8($fp)
    ctx->pc = 0x3017a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3017a4: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x3017A4u;
    SET_GPR_U32(ctx, 31, 0x3017ACu);
    ctx->pc = 0x3017A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3017A4u;
    // 0x3017a8: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x3017A4u, 0x3017ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017ACu;
label_3017ac:
    // 0x3017ac: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x3017acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x3017b0: 0xc7cc00c4  lwc1        $f12, 0xC4($fp)
    ctx->pc = 0x3017b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3017b4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3017b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3017b8: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x3017B8u;
    SET_GPR_U32(ctx, 31, 0x3017C0u);
    ctx->pc = 0x3017BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3017B8u;
    // 0x3017bc: 0xc7cd00c0  lwc1        $f13, 0xC0($fp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x3017B8u, 0x3017C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017C0u;
label_3017c0:
    // 0x3017c0: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x3017c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x3017c4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3017c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3017c8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3017C8u;
    {
        const bool branch_taken_0x3017c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3017CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017C8u;
        // 0x3017cc: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3017c8) {
            ctx->pc = 0x301848u;
            goto label_301848;
        }
    }
    ctx->pc = 0x3017D0u;
    // 0x3017d0: 0xc6260054  lwc1        $f6, 0x54($s1)
    ctx->pc = 0x3017d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3017d4: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x3017d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3017d8: 0x4606a141  sub.s       $f5, $f20, $f6
    ctx->pc = 0x3017d8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[20], ctx->f[6]);
    // 0x3017dc: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x3017dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3017e0: 0x46001901  sub.s       $f4, $f3, $f0
    ctx->pc = 0x3017e0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3017e4: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x3017e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3017e8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x3017e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x3017ec: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x3017ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3017f0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3017f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3017f4: 0x4601089c  madd.s      $f2, $f1, $f1
    ctx->pc = 0x3017f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x3017f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3017f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3017fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3017fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x301800: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x301800u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x301804: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301808: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x301808u;
    {
        const bool branch_taken_0x301808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301808) {
            ctx->pc = 0x301818u;
            goto label_301818;
        }
    }
    ctx->pc = 0x301810u;
    // 0x301810: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x301810u;
    {
        const bool branch_taken_0x301810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301810u;
        // 0x301814: 0xe65400d4  swc1        $f20, 0xD4($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301810) {
            ctx->pc = 0x3018B0u;
            goto label_3018b0;
        }
    }
    ctx->pc = 0x301818u;
label_301818:
    // 0x301818: 0x0  nop
    ctx->pc = 0x301818u;
    // NOP
    // 0x30181c: 0x0  nop
    ctx->pc = 0x30181cu;
    // NOP
    // 0x301820: 0x46000896  rsqrt.s     $f2, $f1, $f0
    ctx->pc = 0x301820u;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[1]);
    // 0x301824: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x301824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x301828: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x301828u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x30182c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x30182cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x301830: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x301830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x301834: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x301834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301838: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x301838u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30183c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x30183Cu;
    {
        const bool branch_taken_0x30183c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30183Cu;
        // 0x301840: 0xe64200d8  swc1        $f2, 0xD8($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30183c) {
            ctx->pc = 0x3018B4u;
            goto label_3018b4;
        }
    }
    ctx->pc = 0x301844u;
    // 0x301844: 0x0  nop
    ctx->pc = 0x301844u;
    // NOP
label_301848:
    // 0x301848: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x301848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x30184c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x30184Cu;
    {
        const bool branch_taken_0x30184c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30184c) {
            ctx->pc = 0x301850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30184Cu;
            // 0x301850: 0xe65400d4  swc1        $f20, 0xD4($s2) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x301878u;
            goto label_301878;
        }
    }
    ctx->pc = 0x301854u;
    // 0x301854: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x301854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301858: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x301858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30185c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x30185Cu;
    {
        const bool branch_taken_0x30185c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30185c) {
            ctx->pc = 0x301860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30185Cu;
            // 0x301860: 0xe64000d4  swc1        $f0, 0xD4($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x301878u;
            goto label_301878;
        }
    }
    ctx->pc = 0x301864u;
    // 0x301864: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x301864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301868: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x301868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30186c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30186Cu;
    {
        const bool branch_taken_0x30186c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30186c) {
            ctx->pc = 0x301870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30186Cu;
            // 0x301870: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x301874u;
            goto label_301874;
        }
    }
    ctx->pc = 0x301874u;
label_301874:
    // 0x301874: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x301874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
label_301878:
    // 0x301878: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x301878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x30187c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x30187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x301880: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x301880u;
    {
        const bool branch_taken_0x301880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301880) {
            ctx->pc = 0x301884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301880u;
            // 0x301884: 0xe64300d8  swc1        $f3, 0xD8($s2) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3018B4u;
            goto label_3018b4;
        }
    }
    ctx->pc = 0x301888u;
    // 0x301888: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x301888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30188c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x30188cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301890: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x301890u;
    {
        const bool branch_taken_0x301890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301890) {
            ctx->pc = 0x301894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301890u;
            // 0x301894: 0xe64000d8  swc1        $f0, 0xD8($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3018B4u;
            goto label_3018b4;
        }
    }
    ctx->pc = 0x301898u;
    // 0x301898: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x301898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30189c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x30189cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3018a0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3018A0u;
    {
        const bool branch_taken_0x3018a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3018a0) {
            ctx->pc = 0x3018A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3018A0u;
            // 0x3018a4: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3018A8u;
            goto label_3018a8;
        }
    }
    ctx->pc = 0x3018A8u;
label_3018a8:
    // 0x3018a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3018A8u;
    {
        const bool branch_taken_0x3018a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3018ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018A8u;
        // 0x3018ac: 0xe64000d8  swc1        $f0, 0xD8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3018a8) {
            ctx->pc = 0x3018B4u;
            goto label_3018b4;
        }
    }
    ctx->pc = 0x3018B0u;
label_3018b0:
    // 0x3018b0: 0xe64300d8  swc1        $f3, 0xD8($s2)
    ctx->pc = 0x3018b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
label_3018b4:
    // 0x3018b4: 0x264700d0  addiu       $a3, $s2, 0xD0
    ctx->pc = 0x3018b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x3018b8: 0xe65500d0  swc1        $f21, 0xD0($s2)
    ctx->pc = 0x3018b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x3018bc: 0xafa7008c  sw          $a3, 0x8C($sp)
    ctx->pc = 0x3018bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 7));
    // 0x3018c0: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x3018c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x3018c4: 0xe65500dc  swc1        $f21, 0xDC($s2)
    ctx->pc = 0x3018c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
    // 0x3018c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3018c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3018cc: 0xc0b7478  jal         func_2DD1E0
    ctx->pc = 0x3018CCu;
    SET_GPR_U32(ctx, 31, 0x3018D4u);
    ctx->pc = 0x3018D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3018CCu;
    // 0x3018d0: 0x8fa6008c  lw          $a2, 0x8C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD1E0u, 0x3018CCu, 0x3018D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3018D4u;
label_3018d4:
    // 0x3018d4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x3018d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3018d8: 0xdaa50010  lqc2        $vf5, 0x10($s5)
    ctx->pc = 0x3018d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x3018dc: 0xdaa60020  lqc2        $vf6, 0x20($s5)
    ctx->pc = 0x3018dcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x3018e0: 0xdaa70030  lqc2        $vf7, 0x30($s5)
    ctx->pc = 0x3018e0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x3018e4: 0xda480000  lqc2        $vf8, 0x0($s2)
    ctx->pc = 0x3018e4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3018e8: 0xda490010  lqc2        $vf9, 0x10($s2)
    ctx->pc = 0x3018e8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3018ec: 0xda4a0020  lqc2        $vf10, 0x20($s2)
    ctx->pc = 0x3018ecu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3018f0: 0xda4b0030  lqc2        $vf11, 0x30($s2)
    ctx->pc = 0x3018f0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3018f4: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x3018f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3018f8: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x3018f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3018fc: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x3018fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301900: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x301900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x301904: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x301904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301908: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x301908u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30190c: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x30190cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301910: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x301910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x301914: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x301914u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301918: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x301918u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30191c: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x30191cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301920: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x301920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x301924: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x301924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301928: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x301928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30192c: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x30192cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301930: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x301930u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x301934: 0xfaa40000  sqc2        $vf4, 0x0($s5)
    ctx->pc = 0x301934u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301938: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x301938u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x30193c: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x30193cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x301940: 0xfaa70030  sqc2        $vf7, 0x30($s5)
    ctx->pc = 0x301940u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x301944: 0x7a4200e0  lq          $v0, 0xE0($s2)
    ctx->pc = 0x301944u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x301948: 0x26550080  addiu       $s5, $s2, 0x80
    ctx->pc = 0x301948u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x30194c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x30194cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301950: 0x7e4200b0  sq          $v0, 0xB0($s2)
    ctx->pc = 0x301950u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 176), GPR_VEC(ctx, 2));
    // 0x301954: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x301954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x301958: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x301958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30195c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x30195cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301960: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x301960u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x301964: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x301964u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x301968: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x301968u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x30196c: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x30196cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x301970: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x301970u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301974: 0xd8690010  lqc2        $vf9, 0x10($v1)
    ctx->pc = 0x301974u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x301978: 0xd86a0020  lqc2        $vf10, 0x20($v1)
    ctx->pc = 0x301978u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x30197c: 0xd86b0030  lqc2        $vf11, 0x30($v1)
    ctx->pc = 0x30197cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x301980: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x301980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301984: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x301984u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301988: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x301988u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30198c: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x30198cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x301990: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x301990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301994: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x301994u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301998: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x301998u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30199c: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x30199cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3019a0: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x3019a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3019a4: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x3019a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3019a8: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x3019a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3019ac: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x3019acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3019b0: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3019b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3019b4: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x3019b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3019b8: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x3019b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3019bc: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x3019bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3019c0: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x3019c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3019c4: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x3019c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3019c8: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x3019c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x3019cc: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x3019ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x3019d0: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x3019d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x3019d4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3019d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3019d8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3019D8u;
    {
        const bool branch_taken_0x3019d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3019DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019D8u;
        // 0x3019dc: 0x24a30030  addiu       $v1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3019d8) {
            ctx->pc = 0x301AA0u;
            goto label_301aa0;
        }
    }
    ctx->pc = 0x3019E0u;
    // 0x3019e0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3019e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3019e4: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x3019e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3019e8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3019E8u;
    {
        const bool branch_taken_0x3019e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3019e8) {
            ctx->pc = 0x3019ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3019E8u;
            // 0x3019ec: 0xc6200064  lwc1        $f0, 0x64($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x301A00u;
            goto label_301a00;
        }
    }
    ctx->pc = 0x3019F0u;
    // 0x3019f0: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x3019f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3019f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3019f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3019f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3019F8u;
    {
        const bool branch_taken_0x3019f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3019FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019F8u;
        // 0x3019fc: 0x4600b001  sub.s       $f0, $f22, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3019f8) {
            ctx->pc = 0x301A08u;
            goto label_301a08;
        }
    }
    ctx->pc = 0x301A00u;
label_301a00:
    // 0x301a00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x301a00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301a04: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x301a04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_301a08:
    // 0x301a08: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x301a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a0c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x301a0cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301a10: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x301a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x301a14: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x301a14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x301a18: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x301a18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301a1c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x301a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x301a20: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x301a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x301a24: 0x8fb50060  lw          $s5, 0x60($sp)
    ctx->pc = 0x301a24u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x301a28: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x301a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x301a2c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x301a2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x301a30: 0xdaa50010  lqc2        $vf5, 0x10($s5)
    ctx->pc = 0x301a30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x301a34: 0xdaa60020  lqc2        $vf6, 0x20($s5)
    ctx->pc = 0x301a34u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x301a38: 0xdaa70030  lqc2        $vf7, 0x30($s5)
    ctx->pc = 0x301a38u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x301a3c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x301a3cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301a40: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x301a40u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x301a44: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x301a44u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x301a48: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x301a48u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x301a4c: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x301a4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301a50: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x301a50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301a54: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x301a54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301a58: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x301a58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x301a5c: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x301a5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301a60: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x301a60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301a64: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x301a64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301a68: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x301a68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x301a6c: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x301a6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301a70: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x301a70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301a74: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x301a74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301a78: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x301a78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x301a7c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x301a7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301a80: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x301a80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301a84: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x301a84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301a88: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x301a88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x301a8c: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x301a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301a90: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x301a90u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x301a94: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x301a94u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x301a98: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x301a98u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x301a9c: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x301a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_301aa0:
    // 0x301aa0: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x301aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301aa4: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x301aa4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301aa8: 0xd8b10000  lqc2        $vf17, 0x0($a1)
    ctx->pc = 0x301aa8u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x301aac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x301aacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x301ab0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x301ab0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x301ab4: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x301ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x301ab8: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x301ab8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x301abc: 0xfa900000  sqc2        $vf16, 0x0($s4)
    ctx->pc = 0x301abcu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x301ac0: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x301ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x301ac4: 0x508005fa  beql        $a0, $zero, . + 4 + (0x5FA << 2)
    ctx->pc = 0x301AC4u;
    {
        const bool branch_taken_0x301ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x301ac4) {
            ctx->pc = 0x301AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301AC4u;
            // 0x301ac8: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3032B0u;
            goto label_3032b0;
        }
    }
    ctx->pc = 0x301ACCu;
    // 0x301acc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x301accu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x301ad0: 0x132005f6  beqz        $t9, . + 4 + (0x5F6 << 2)
    ctx->pc = 0x301AD0u;
    {
        const bool branch_taken_0x301ad0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x301AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AD0u;
        // 0x301ad4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ad0) {
            ctx->pc = 0x3032ACu;
            goto label_3032ac;
        }
    }
    ctx->pc = 0x301AD8u;
    // 0x301ad8: 0x8f2f0000  lw          $t7, 0x0($t9)
    ctx->pc = 0x301ad8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x301adc: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x301adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x301ae0: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x301AE0u;
    {
        const bool branch_taken_0x301ae0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x301AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AE0u;
        // 0x301ae4: 0x320182d  daddu       $v1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ae0) {
            ctx->pc = 0x301B04u;
            goto label_301b04;
        }
    }
    ctx->pc = 0x301AE8u;
label_301ae8:
    // 0x301ae8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x301ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x301aec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x301aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301af0: 0x0  nop
    ctx->pc = 0x301af0u;
    // NOP
    // 0x301af4: 0x0  nop
    ctx->pc = 0x301af4u;
    // NOP
    // 0x301af8: 0x0  nop
    ctx->pc = 0x301af8u;
    // NOP
    // 0x301afc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x301AFCu;
    {
        const bool branch_taken_0x301afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AFCu;
        // 0x301b00: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301afc) {
            ctx->pc = 0x301AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301ae8;
        }
    }
    ctx->pc = 0x301B04u;
label_301b04:
    // 0x301b04: 0x18800567  blez        $a0, . + 4 + (0x567 << 2)
    ctx->pc = 0x301B04u;
    {
        const bool branch_taken_0x301b04 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x301B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B04u;
        // 0x301b08: 0xafa40090  sw          $a0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301b04) {
            ctx->pc = 0x3030A4u;
            goto label_3030a4;
        }
    }
    ctx->pc = 0x301B0Cu;
    // 0x301b0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x301B0Cu;
    {
        const bool branch_taken_0x301b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301b0c) {
            ctx->pc = 0x301B20u;
            goto label_301b20;
        }
    }
    ctx->pc = 0x301B14u;
    // 0x301b14: 0x0  nop
    ctx->pc = 0x301b14u;
    // NOP
label_301b18:
    // 0x301b18: 0x8f2f0000  lw          $t7, 0x0($t9)
    ctx->pc = 0x301b18u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x301b1c: 0x0  nop
    ctx->pc = 0x301b1cu;
    // NOP
label_301b20:
    // 0x301b20: 0x11e0055c  beqz        $t7, . + 4 + (0x55C << 2)
    ctx->pc = 0x301B20u;
    {
        const bool branch_taken_0x301b20 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x301B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B20u;
        // 0x301b24: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301b20) {
            ctx->pc = 0x303094u;
            goto label_303094;
        }
    }
    ctx->pc = 0x301B28u;
    // 0x301b28: 0x8de30120  lw          $v1, 0x120($t7)
    ctx->pc = 0x301b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 288)));
    // 0x301b2c: 0x5860055a  blezl       $v1, . + 4 + (0x55A << 2)
    ctx->pc = 0x301B2Cu;
    {
        const bool branch_taken_0x301b2c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x301b2c) {
            ctx->pc = 0x301B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301B2Cu;
            // 0x301b30: 0x27390004  addiu       $t9, $t9, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303098u;
            goto label_303098;
        }
    }
    ctx->pc = 0x301B34u;
    // 0x301b34: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x301b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x301b38: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x301B38u;
    {
        const bool branch_taken_0x301b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x301B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B38u;
        // 0x301b3c: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301b38) {
            ctx->pc = 0x301B50u;
            goto label_301b50;
        }
    }
    ctx->pc = 0x301B40u;
    // 0x301b40: 0xc0b5920  jal         func_2D6480
    ctx->pc = 0x301B40u;
    SET_GPR_U32(ctx, 31, 0x301B48u);
    ctx->pc = 0x301B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301B40u;
    // 0x301b44: 0x7fb900a0  sq          $t9, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6480u, 0x301B40u, 0x301B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B48u;
label_301b48:
    // 0x301b48: 0x7bb900a0  lq          $t9, 0xA0($sp)
    ctx->pc = 0x301b48u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x301b4c: 0x8f2f0000  lw          $t7, 0x0($t9)
    ctx->pc = 0x301b4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_301b50:
    // 0x301b50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x301b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x301b54: 0x54400150  bnel        $v0, $zero, . + 4 + (0x150 << 2)
    ctx->pc = 0x301B54u;
    {
        const bool branch_taken_0x301b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301b54) {
            ctx->pc = 0x301B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301B54u;
            // 0x301b58: 0x8de40120  lw          $a0, 0x120($t7) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302098u;
            goto label_302098;
        }
    }
    ctx->pc = 0x301B5Cu;
    // 0x301b5c: 0x8de20120  lw          $v0, 0x120($t7)
    ctx->pc = 0x301b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 288)));
    // 0x301b60: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x301B60u;
    {
        const bool branch_taken_0x301b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B60u;
        // 0x301b64: 0x1e0802d  daddu       $s0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301b60) {
            ctx->pc = 0x301EC0u;
            goto label_301ec0;
        }
    }
    ctx->pc = 0x301B68u;
    // 0x301b68: 0x79e20100  lq          $v0, 0x100($t7)
    ctx->pc = 0x301b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 15), 256)));
    // 0x301b6c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x301b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x301b70: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x301b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x301b74: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x301b74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x301b78: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x301b78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x301b7c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x301b7cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x301b80: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x301b80u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x301b84: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x301b84u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x301b88: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x301b88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301b8c: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x301b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x301b90: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x301b90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x301b94: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x301b94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x301b98: 0xc5e00130  lwc1        $f0, 0x130($t7)
    ctx->pc = 0x301b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301b9c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x301b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301ba0: 0xc7819560  lwc1        $f1, -0x6AA0($gp)
    ctx->pc = 0x301ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301ba4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x301ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301ba8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x301BA8u;
    {
        const bool branch_taken_0x301ba8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x301BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BA8u;
        // 0x301bac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ba8) {
            ctx->pc = 0x301BC0u;
            goto label_301bc0;
        }
    }
    ctx->pc = 0x301BB0u;
    // 0x301bb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x301bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x301bb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x301BB4u;
    {
        const bool branch_taken_0x301bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BB4u;
        // 0x301bb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301bb4) {
            ctx->pc = 0x301BC8u;
            goto label_301bc8;
        }
    }
    ctx->pc = 0x301BBCu;
    // 0x301bbc: 0x0  nop
    ctx->pc = 0x301bbcu;
    // NOP
label_301bc0:
    // 0x301bc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x301bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x301bc4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x301bc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301bc8:
    // 0x301bc8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x301bc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x301bcc: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x301bccu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x301bd0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x301bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x301bd4: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x301bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x301bd8: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x301bd8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x301bdc: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x301bdcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x301be0: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x301be0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301be4: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x301be4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x301be8: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x301be8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301bec: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x301becu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301bf0: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x301bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301bf4: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x301bf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301bf8: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x301bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301bfc: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x301bfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301c00: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x301c00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301c04: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x301c04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301c08: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x301c08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301c0c: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x301c0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x301c10: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x301c10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301c14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x301C14u;
    {
        const bool branch_taken_0x301c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x301C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C14u;
        // 0x301c18: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c14) {
            ctx->pc = 0x301C28u;
            goto label_301c28;
        }
    }
    ctx->pc = 0x301C1Cu;
    // 0x301c1c: 0x4a0003bf  vwaitq
    ctx->pc = 0x301c1cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x301c20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x301C20u;
    {
        const bool branch_taken_0x301c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C20u;
        // 0x301c24: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c20) {
            ctx->pc = 0x301C30u;
            goto label_301c30;
        }
    }
    ctx->pc = 0x301C28u;
label_301c28:
    // 0x301c28: 0x4a0003bf  vwaitq
    ctx->pc = 0x301c28u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x301c2c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x301c2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_301c30:
    // 0x301c30: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x301c30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x301c34: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x301c34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x301c38: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x301c38u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x301c3c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x301c3cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x301c40: 0x4a5c0700  vaddx.z     $vf28, $vf0, $vf28x
    ctx->pc = 0x301c40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301c44: 0x4a9c0744  vsubx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x301c44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301c48: 0x4a5c0741  vaddy.z     $vf29, $vf0, $vf28y
    ctx->pc = 0x301c48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301c4c: 0x4ac4e1bd  vmulay.yz   $ACC, $vf28, $vf4y
    ctx->pc = 0x301c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x301c50: 0x4ac4e90a  vmaddz.yz   $vf4, $vf29, $vf4z
    ctx->pc = 0x301c50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x301c54: 0x4ac5e1bd  vmulay.yz   $ACC, $vf28, $vf5y
    ctx->pc = 0x301c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x301c58: 0x4ac5e94a  vmaddz.yz   $vf5, $vf29, $vf5z
    ctx->pc = 0x301c58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x301c5c: 0x4ac6e1bd  vmulay.yz   $ACC, $vf28, $vf6y
    ctx->pc = 0x301c5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x301c60: 0x4ac6e98a  vmaddz.yz   $vf6, $vf29, $vf6z
    ctx->pc = 0x301c60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x301c64: 0x4ac7e1bd  vmulay.yz   $ACC, $vf28, $vf7y
    ctx->pc = 0x301c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x301c68: 0x4ac7e9ca  vmaddz.yz   $vf7, $vf29, $vf7z
    ctx->pc = 0x301c68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x301c6c: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x301c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301c70: 0xf8c50010  sqc2        $vf5, 0x10($a2)
    ctx->pc = 0x301c70u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x301c74: 0xf8c60020  sqc2        $vf6, 0x20($a2)
    ctx->pc = 0x301c74u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x301c78: 0xf8c70030  sqc2        $vf7, 0x30($a2)
    ctx->pc = 0x301c78u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x301c7c: 0xc7819564  lwc1        $f1, -0x6A9C($gp)
    ctx->pc = 0x301c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301c80: 0xc5e00134  lwc1        $f0, 0x134($t7)
    ctx->pc = 0x301c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301c84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x301c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301c88: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x301c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301c8c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x301C8Cu;
    {
        const bool branch_taken_0x301c8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x301C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C8Cu;
        // 0x301c90: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c8c) {
            ctx->pc = 0x301CA0u;
            goto label_301ca0;
        }
    }
    ctx->pc = 0x301C94u;
    // 0x301c94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x301c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x301c98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x301C98u;
    {
        const bool branch_taken_0x301c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C98u;
        // 0x301c9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c98) {
            ctx->pc = 0x301CA8u;
            goto label_301ca8;
        }
    }
    ctx->pc = 0x301CA0u;
label_301ca0:
    // 0x301ca0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x301ca0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x301ca4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x301ca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301ca8:
    // 0x301ca8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x301ca8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x301cac: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x301cacu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x301cb0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x301cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x301cb4: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x301cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x301cb8: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x301cb8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x301cbc: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x301cbcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x301cc0: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x301cc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301cc4: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x301cc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x301cc8: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x301cc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301ccc: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x301cccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301cd0: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x301cd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301cd4: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x301cd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301cd8: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x301cd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301cdc: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x301cdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301ce0: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x301ce0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301ce4: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x301ce4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301ce8: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x301ce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301cec: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x301cecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x301cf0: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x301cf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301cf4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x301CF4u;
    {
        const bool branch_taken_0x301cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x301CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CF4u;
        // 0x301cf8: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301cf4) {
            ctx->pc = 0x301D08u;
            goto label_301d08;
        }
    }
    ctx->pc = 0x301CFCu;
    // 0x301cfc: 0x4a0003bf  vwaitq
    ctx->pc = 0x301cfcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x301d00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x301D00u;
    {
        const bool branch_taken_0x301d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D00u;
        // 0x301d04: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d00) {
            ctx->pc = 0x301D10u;
            goto label_301d10;
        }
    }
    ctx->pc = 0x301D08u;
label_301d08:
    // 0x301d08: 0x4a0003bf  vwaitq
    ctx->pc = 0x301d08u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x301d0c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x301d0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_301d10:
    // 0x301d10: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x301d10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x301d14: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x301d14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x301d18: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x301d18u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x301d1c: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x301d1cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x301d20: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x301d20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301d24: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x301d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301d28: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x301d28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301d2c: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x301d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x301d30: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x301d30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x301d34: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x301d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x301d38: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x301d38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x301d3c: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x301d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x301d40: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x301d40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x301d44: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x301d44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x301d48: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x301d48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x301d4c: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x301d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301d50: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x301d50u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x301d54: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x301d54u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x301d58: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x301d58u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x301d5c: 0xc7819568  lwc1        $f1, -0x6A98($gp)
    ctx->pc = 0x301d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301d60: 0xc5e00138  lwc1        $f0, 0x138($t7)
    ctx->pc = 0x301d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301d64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x301d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301d68: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x301d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301d6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x301D6Cu;
    {
        const bool branch_taken_0x301d6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x301D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D6Cu;
        // 0x301d70: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d6c) {
            ctx->pc = 0x301D80u;
            goto label_301d80;
        }
    }
    ctx->pc = 0x301D74u;
    // 0x301d74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x301d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x301d78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x301D78u;
    {
        const bool branch_taken_0x301d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D78u;
        // 0x301d7c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d78) {
            ctx->pc = 0x301D88u;
            goto label_301d88;
        }
    }
    ctx->pc = 0x301D80u;
label_301d80:
    // 0x301d80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x301d80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x301d84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x301d84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301d88:
    // 0x301d88: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x301d88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x301d8c: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x301d8cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x301d90: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x301d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x301d94: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x301d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x301d98: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x301d98u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x301d9c: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x301d9cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x301da0: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x301da0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301da4: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x301da4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x301da8: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x301da8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301dac: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x301dacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301db0: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x301db0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301db4: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x301db4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301db8: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x301db8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301dbc: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x301dbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301dc0: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x301dc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301dc4: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x301dc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301dc8: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x301dc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301dcc: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x301dccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x301dd0: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x301dd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301dd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x301DD4u;
    {
        const bool branch_taken_0x301dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x301DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DD4u;
        // 0x301dd8: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301dd4) {
            ctx->pc = 0x301DE8u;
            goto label_301de8;
        }
    }
    ctx->pc = 0x301DDCu;
    // 0x301ddc: 0x4a0003bf  vwaitq
    ctx->pc = 0x301ddcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x301de0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x301DE0u;
    {
        const bool branch_taken_0x301de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DE0u;
        // 0x301de4: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301de0) {
            ctx->pc = 0x301DF0u;
            goto label_301df0;
        }
    }
    ctx->pc = 0x301DE8u;
label_301de8:
    // 0x301de8: 0x4a0003bf  vwaitq
    ctx->pc = 0x301de8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x301dec: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x301decu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_301df0:
    // 0x301df0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x301df0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x301df4: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x301df4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x301df8: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x301df8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x301dfc: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x301dfcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x301e00: 0x4a9c0740  vaddx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x301e00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301e04: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x301e04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x301e08: 0x4b1c0704  vsubx.x     $vf28, $vf0, $vf28x
    ctx->pc = 0x301e08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x301e0c: 0x4b84e9bc  vmulax.xy   $ACC, $vf29, $vf4x
    ctx->pc = 0x301e0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x301e10: 0x4b84e109  vmaddy.xy   $vf4, $vf28, $vf4y
    ctx->pc = 0x301e10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x301e14: 0x4b85e9bc  vmulax.xy   $ACC, $vf29, $vf5x
    ctx->pc = 0x301e14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x301e18: 0x4b85e149  vmaddy.xy   $vf5, $vf28, $vf5y
    ctx->pc = 0x301e18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x301e1c: 0x4b86e9bc  vmulax.xy   $ACC, $vf29, $vf6x
    ctx->pc = 0x301e1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x301e20: 0x4b86e189  vmaddy.xy   $vf6, $vf28, $vf6y
    ctx->pc = 0x301e20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x301e24: 0x4b87e9bc  vmulax.xy   $ACC, $vf29, $vf7x
    ctx->pc = 0x301e24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x301e28: 0x4b87e1c9  vmaddy.xy   $vf7, $vf28, $vf7y
    ctx->pc = 0x301e28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x301e2c: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x301e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301e30: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x301e30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x301e34: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x301e34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x301e38: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x301e38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x301e3c: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x301e3cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x301e40: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x301e40u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301e44: 0x4bd039e8  vadd.xyz    $vf7, $vf7, $vf16
    ctx->pc = 0x301e44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x301e48: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x301e48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x301e4c: 0x25e600d0  addiu       $a2, $t7, 0xD0
    ctx->pc = 0x301e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 208));
    // 0x301e50: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x301e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x301e54: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x301e54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x301e58: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x301e58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x301e5c: 0x78e40020  lq          $a0, 0x20($a3)
    ctx->pc = 0x301e5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x301e60: 0x78e50030  lq          $a1, 0x30($a3)
    ctx->pc = 0x301e60u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x301e64: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x301e64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x301e68: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x301e68u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x301e6c: 0x7cc40020  sq          $a0, 0x20($a2)
    ctx->pc = 0x301e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 4));
    // 0x301e70: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x301e70u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
    // 0x301e74: 0xc5e40150  lwc1        $f4, 0x150($t7)
    ctx->pc = 0x301e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x301e78: 0xc5e50154  lwc1        $f5, 0x154($t7)
    ctx->pc = 0x301e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x301e7c: 0xc5e30158  lwc1        $f3, 0x158($t7)
    ctx->pc = 0x301e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x301e80: 0x0  nop
    ctx->pc = 0x301e80u;
    // NOP
    // 0x301e84: 0x0  nop
    ctx->pc = 0x301e84u;
    // NOP
    // 0x301e88: 0x4604b003  div.s       $f0, $f22, $f4
    ctx->pc = 0x301e88u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[4];
    // 0x301e8c: 0x0  nop
    ctx->pc = 0x301e8cu;
    // NOP
    // 0x301e90: 0x0  nop
    ctx->pc = 0x301e90u;
    // NOP
    // 0x301e94: 0x4605b083  div.s       $f2, $f22, $f5
    ctx->pc = 0x301e94u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[2] = ctx->f[22] / ctx->f[5];
    // 0x301e98: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x301e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x301e9c: 0x0  nop
    ctx->pc = 0x301e9cu;
    // NOP
    // 0x301ea0: 0x0  nop
    ctx->pc = 0x301ea0u;
    // NOP
    // 0x301ea4: 0x4603b043  div.s       $f1, $f22, $f3
    ctx->pc = 0x301ea4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[1] = ctx->f[22] / ctx->f[3];
    // 0x301ea8: 0xe5e20004  swc1        $f2, 0x4($t7)
    ctx->pc = 0x301ea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x301eac: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x301eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x301eb0: 0x8f2f0000  lw          $t7, 0x0($t9)
    ctx->pc = 0x301eb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x301eb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x301EB4u;
    {
        const bool branch_taken_0x301eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301EB4u;
        // 0x301eb8: 0x8e020120  lw          $v0, 0x120($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301eb4) {
            ctx->pc = 0x301ECCu;
            goto label_301ecc;
        }
    }
    ctx->pc = 0x301EBCu;
    // 0x301ebc: 0x0  nop
    ctx->pc = 0x301ebcu;
    // NOP
label_301ec0:
    // 0x301ec0: 0xc5e40150  lwc1        $f4, 0x150($t7)
    ctx->pc = 0x301ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x301ec4: 0xc5e50154  lwc1        $f5, 0x154($t7)
    ctx->pc = 0x301ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x301ec8: 0xc5e30158  lwc1        $f3, 0x158($t7)
    ctx->pc = 0x301ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_301ecc:
    // 0x301ecc: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x301ECCu;
    {
        const bool branch_taken_0x301ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301ECCu;
        // 0x301ed0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ecc) {
            ctx->pc = 0x301FF0u;
            goto label_301ff0;
        }
    }
    ctx->pc = 0x301ED4u;
    // 0x301ed4: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x301ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x301ed8: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x301ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x301edc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x301edcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301ee0: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x301ee0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x301ee4: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x301ee4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x301ee8: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x301ee8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x301eec: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x301eecu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301ef0: 0xd8690010  lqc2        $vf9, 0x10($v1)
    ctx->pc = 0x301ef0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x301ef4: 0xd86a0020  lqc2        $vf10, 0x20($v1)
    ctx->pc = 0x301ef4u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x301ef8: 0xd86b0030  lqc2        $vf11, 0x30($v1)
    ctx->pc = 0x301ef8u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x301efc: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x301efcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301f00: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x301f00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301f04: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x301f04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301f08: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x301f08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x301f0c: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x301f0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301f10: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x301f10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301f14: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x301f14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301f18: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x301f18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x301f1c: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x301f1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301f20: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x301f20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301f24: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x301f24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301f28: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x301f28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x301f2c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x301f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301f30: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x301f30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301f34: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x301f34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x301f38: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x301f38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x301f3c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x301f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301f40: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x301f40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x301f44: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x301f44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x301f48: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x301f48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x301f4c: 0x260e0090  addiu       $t6, $s0, 0x90
    ctx->pc = 0x301f4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x301f50: 0x260a0050  addiu       $t2, $s0, 0x50
    ctx->pc = 0x301f50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x301f54: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x301f54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x301f58: 0x79430010  lq          $v1, 0x10($t2)
    ctx->pc = 0x301f58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x301f5c: 0x79440020  lq          $a0, 0x20($t2)
    ctx->pc = 0x301f5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x301f60: 0x79450030  lq          $a1, 0x30($t2)
    ctx->pc = 0x301f60u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x301f64: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x301f64u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x301f68: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x301f68u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x301f6c: 0x7dc40020  sq          $a0, 0x20($t6)
    ctx->pc = 0x301f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 32), GPR_VEC(ctx, 4));
    // 0x301f70: 0x7dc50030  sq          $a1, 0x30($t6)
    ctx->pc = 0x301f70u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 48), GPR_VEC(ctx, 5));
    // 0x301f74: 0x260c0010  addiu       $t4, $s0, 0x10
    ctx->pc = 0x301f74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x301f78: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x301f78u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f7c: 0x1140001f  beqz        $t2, . + 4 + (0x1F << 2)
    ctx->pc = 0x301F7Cu;
    {
        const bool branch_taken_0x301f7c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x301F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F7Cu;
        // 0x301f80: 0x180582d  daddu       $t3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301f7c) {
            ctx->pc = 0x301FFCu;
            goto label_301ffc;
        }
    }
    ctx->pc = 0x301F84u;
    // 0x301f84: 0x5180001e  beql        $t4, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x301F84u;
    {
        const bool branch_taken_0x301f84 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x301f84) {
            ctx->pc = 0x301F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301F84u;
            // 0x301f88: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302000u;
            goto label_302000;
        }
    }
    ctx->pc = 0x301F8Cu;
    // 0x301f8c: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x301f8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x301f90: 0x79630010  lq          $v1, 0x10($t3)
    ctx->pc = 0x301f90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x301f94: 0x79640020  lq          $a0, 0x20($t3)
    ctx->pc = 0x301f94u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x301f98: 0x48250000  qmfc2.ni    $a1, $vf0
    ctx->pc = 0x301f98u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x301f9c: 0x70623488  pextlw      $a2, $v1, $v0
    ctx->pc = 0x301f9cu;
    SET_GPR_VEC(ctx, 6, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x301fa0: 0x70623ca8  pextuw      $a3, $v1, $v0
    ctx->pc = 0x301fa0u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x301fa4: 0x70a44488  pextlw      $t0, $a1, $a0
    ctx->pc = 0x301fa4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x301fa8: 0x70a44ca8  pextuw      $t1, $a1, $a0
    ctx->pc = 0x301fa8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x301fac: 0x71061389  pcpyld      $v0, $t0, $a2
    ctx->pc = 0x301facu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x301fb0: 0x70c81ba9  pcpyud      $v1, $a2, $t0
    ctx->pc = 0x301fb0u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x301fb4: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x301fb4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
    // 0x301fb8: 0xd9670030  lqc2        $vf7, 0x30($t3)
    ctx->pc = 0x301fb8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x301fbc: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x301fbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x301fc0: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x301fc0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x301fc4: 0x48a43000  qmtc2.ni    $a0, $vf6
    ctx->pc = 0x301fc4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x301fc8: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x301fc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x301fcc: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x301fccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x301fd0: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x301fd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x301fd4: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x301fd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x301fd8: 0x7da20000  sq          $v0, 0x0($t5)
    ctx->pc = 0x301fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 2));
    // 0x301fdc: 0x7da30010  sq          $v1, 0x10($t5)
    ctx->pc = 0x301fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 3));
    // 0x301fe0: 0x7da40020  sq          $a0, 0x20($t5)
    ctx->pc = 0x301fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 4));
    // 0x301fe4: 0xf9a70030  sqc2        $vf7, 0x30($t5)
    ctx->pc = 0x301fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x301fe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x301FE8u;
    {
        const bool branch_taken_0x301fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301FE8u;
        // 0x301fec: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301fe8) {
            ctx->pc = 0x302000u;
            goto label_302000;
        }
    }
    ctx->pc = 0x301FF0u;
label_301ff0:
    // 0x301ff0: 0x260c0010  addiu       $t4, $s0, 0x10
    ctx->pc = 0x301ff0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x301ff4: 0x260e0090  addiu       $t6, $s0, 0x90
    ctx->pc = 0x301ff4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x301ff8: 0x260a0050  addiu       $t2, $s0, 0x50
    ctx->pc = 0x301ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_301ffc:
    // 0x301ffc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x301ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_302000:
    // 0x302000: 0xd9440000  lqc2        $vf4, 0x0($t2)
    ctx->pc = 0x302000u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x302004: 0xd9450010  lqc2        $vf5, 0x10($t2)
    ctx->pc = 0x302004u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x302008: 0xd9460020  lqc2        $vf6, 0x20($t2)
    ctx->pc = 0x302008u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x30200c: 0xd9470030  lqc2        $vf7, 0x30($t2)
    ctx->pc = 0x30200cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x302010: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x302010u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x302014: 0x4bd0212a  vmul.xyz    $vf4, $vf4, $vf16
    ctx->pc = 0x302014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x302018: 0x4bd0296a  vmul.xyz    $vf5, $vf5, $vf16
    ctx->pc = 0x302018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x30201c: 0x4bd031aa  vmul.xyz    $vf6, $vf6, $vf16
    ctx->pc = 0x30201cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x302020: 0x4bd039ea  vmul.xyz    $vf7, $vf7, $vf16
    ctx->pc = 0x302020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x302024: 0xd9c80000  lqc2        $vf8, 0x0($t6)
    ctx->pc = 0x302024u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x302028: 0xd9c90010  lqc2        $vf9, 0x10($t6)
    ctx->pc = 0x302028u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x30202c: 0xd9ca0020  lqc2        $vf10, 0x20($t6)
    ctx->pc = 0x30202cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x302030: 0xd9cb0030  lqc2        $vf11, 0x30($t6)
    ctx->pc = 0x302030u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 48)));
    // 0x302034: 0x4bd0422a  vmul.xyz    $vf8, $vf8, $vf16
    ctx->pc = 0x302034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x302038: 0x4bd04a6a  vmul.xyz    $vf9, $vf9, $vf16
    ctx->pc = 0x302038u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x30203c: 0x4bd052aa  vmul.xyz    $vf10, $vf10, $vf16
    ctx->pc = 0x30203cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x302040: 0x4bd05aea  vmul.xyz    $vf11, $vf11, $vf16
    ctx->pc = 0x302040u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x302044: 0xd98c0000  lqc2        $vf12, 0x0($t4)
    ctx->pc = 0x302044u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x302048: 0xd98d0010  lqc2        $vf13, 0x10($t4)
    ctx->pc = 0x302048u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x30204c: 0xd98e0020  lqc2        $vf14, 0x20($t4)
    ctx->pc = 0x30204cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x302050: 0xd98f0030  lqc2        $vf15, 0x30($t4)
    ctx->pc = 0x302050u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x302054: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x302054u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x302058: 0x4bd06318  vmulx.xyz   $vf12, $vf12, $vf16x
    ctx->pc = 0x302058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x30205c: 0x4bd06b59  vmuly.xyz   $vf13, $vf13, $vf16y
    ctx->pc = 0x30205cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x302060: 0x4bd0739a  vmulz.xyz   $vf14, $vf14, $vf16z
    ctx->pc = 0x302060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x302064: 0x46032000  add.s       $f0, $f4, $f3
    ctx->pc = 0x302064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x302068: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x302068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30206c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30206cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302070: 0x0  nop
    ctx->pc = 0x302070u;
    // NOP
    // 0x302074: 0x0  nop
    ctx->pc = 0x302074u;
    // NOP
    // 0x302078: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x302078u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x30207c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30207cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x302080: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x302080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x302084: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x302084u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x302088: 0x4a6303bc  vdiv        $Q, $vf0w, $vf3x
    ctx->pc = 0x302088u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x30208c: 0x4a0003bf  vwaitq
    ctx->pc = 0x30208cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x302090: 0x4a8000e0  vaddq.y     $vf3, $vf0, $Q
    ctx->pc = 0x302090u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x302094: 0x8de40120  lw          $a0, 0x120($t7)
    ctx->pc = 0x302094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 288)));
label_302098:
    // 0x302098: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x302098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30209c: 0x10820150  beq         $a0, $v0, . + 4 + (0x150 << 2)
    ctx->pc = 0x30209Cu;
    {
        const bool branch_taken_0x30209c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3020A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30209Cu;
        // 0x3020a0: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30209c) {
            ctx->pc = 0x3025E0u;
            goto label_3025e0;
        }
    }
    ctx->pc = 0x3020A4u;
    // 0x3020a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3020A4u;
    {
        const bool branch_taken_0x3020a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3020A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020A4u;
        // 0x3020a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020a4) {
            ctx->pc = 0x3020C0u;
            goto label_3020c0;
        }
    }
    ctx->pc = 0x3020ACu;
    // 0x3020ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3020acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3020b0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3020B0u;
    {
        const bool branch_taken_0x3020b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3020B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020B0u;
        // 0x3020b4: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020b0) {
            ctx->pc = 0x3020D0u;
            goto label_3020d0;
        }
    }
    ctx->pc = 0x3020B8u;
    // 0x3020b8: 0x100003f7  b           . + 4 + (0x3F7 << 2)
    ctx->pc = 0x3020B8u;
    {
        const bool branch_taken_0x3020b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3020BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020B8u;
        // 0x3020bc: 0x27390004  addiu       $t9, $t9, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020b8) {
            ctx->pc = 0x303098u;
            goto label_303098;
        }
    }
    ctx->pc = 0x3020C0u;
label_3020c0:
    // 0x3020c0: 0x10820233  beq         $a0, $v0, . + 4 + (0x233 << 2)
    ctx->pc = 0x3020C0u;
    {
        const bool branch_taken_0x3020c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3020C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020C0u;
        // 0x3020c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020c0) {
            ctx->pc = 0x302990u;
            goto label_302990;
        }
    }
    ctx->pc = 0x3020C8u;
    // 0x3020c8: 0x148203f2  bne         $a0, $v0, . + 4 + (0x3F2 << 2)
    ctx->pc = 0x3020C8u;
    {
        const bool branch_taken_0x3020c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3020CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020C8u;
        // 0x3020cc: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020c8) {
            ctx->pc = 0x303094u;
            goto label_303094;
        }
    }
    ctx->pc = 0x3020D0u;
label_3020d0:
    // 0x3020d0: 0xc781956c  lwc1        $f1, -0x6A94($gp)
    ctx->pc = 0x3020d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3020d4: 0xc7809570  lwc1        $f0, -0x6A90($gp)
    ctx->pc = 0x3020d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3020d8: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x3020d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3020dc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3020dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3020e0: 0x8f240000  lw          $a0, 0x0($t9)
    ctx->pc = 0x3020e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x3020e4: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x3020e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3020e8: 0x8c830120  lw          $v1, 0x120($a0)
    ctx->pc = 0x3020e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x3020ec: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3020ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3020f0: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x3020f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x3020f4: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x3020f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3020f8: 0x146000a5  bnez        $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x3020F8u;
    {
        const bool branch_taken_0x3020f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3020FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020F8u;
        // 0x3020fc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020f8) {
            ctx->pc = 0x302390u;
            goto label_302390;
        }
    }
    ctx->pc = 0x302100u;
    // 0x302100: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x302100u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x302104: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x302104u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x302108: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x302108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30210c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x30210cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x302110: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x302110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x302114: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x302114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x302118: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x302118u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30211c: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x30211cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x302120: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x302120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302124: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x302124u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302128: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x302128u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30212c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x30212cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302130: 0x4bf141bc  vmulax.xyzw $ACC, $vf8, $vf17x
    ctx->pc = 0x302130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302134: 0x4bf148bd  vmadday.xyzw $ACC, $vf9, $vf17y
    ctx->pc = 0x302134u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302138: 0x4bf150be  vmaddaz.xyzw $ACC, $vf10, $vf17z
    ctx->pc = 0x302138u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30213c: 0x4bf15c4b  vmaddw.xyzw $vf17, $vf11, $vf17w
    ctx->pc = 0x30213cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x302140: 0x4b100041  vaddy.x     $vf1, $vf0, $vf16y
    ctx->pc = 0x302140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302144: 0x4b110081  vaddy.x     $vf2, $vf0, $vf17y
    ctx->pc = 0x302144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302148: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x302148u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30214c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x30214cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x302150: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x302150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x302154: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x302154u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302158: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x302158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30215c: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x30215cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302160: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x302160u;
    {
        const bool branch_taken_0x302160 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302160) {
            ctx->pc = 0x302174u;
            goto label_302174;
        }
    }
    ctx->pc = 0x302168u;
    // 0x302168: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x302168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30216c: 0x45010117  bc1t        . + 4 + (0x117 << 2)
    ctx->pc = 0x30216Cu;
    {
        const bool branch_taken_0x30216c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x302170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30216Cu;
        // 0x302170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30216c) {
            ctx->pc = 0x3025CCu;
            goto label_3025cc;
        }
    }
    ctx->pc = 0x302174u;
label_302174:
    // 0x302174: 0x4bd08d2c  vsub.xyz    $vf20, $vf17, $vf16
    ctx->pc = 0x302174u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[17], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x302178: 0x4bd4a0aa  vmul.xyz    $vf2, $vf20, $vf20
    ctx->pc = 0x302178u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x30217c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x30217cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302180: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x302180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302184: 0x4a2203bd  .word       0x4A2203BD                   # vsqrt       $Q, $vf2x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x302184u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x302188: 0x4a0003bf  vwaitq
    ctx->pc = 0x302188u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x30218c: 0x4843b000  cfc2.ni     $v1, $vi22
    ctx->pc = 0x30218cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x302190: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302194: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x302194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302198: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x302198u;
    {
        const bool branch_taken_0x302198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302198) {
            ctx->pc = 0x302228u;
            goto label_302228;
        }
    }
    ctx->pc = 0x3021A0u;
    // 0x3021a0: 0x46151834  c.lt.s      $f3, $f21
    ctx->pc = 0x3021a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3021a4: 0x45010109  bc1t        . + 4 + (0x109 << 2)
    ctx->pc = 0x3021A4u;
    {
        const bool branch_taken_0x3021a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3021A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3021A4u;
        // 0x3021a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3021a4) {
            ctx->pc = 0x3025CCu;
            goto label_3025cc;
        }
    }
    ctx->pc = 0x3021ACu;
    // 0x3021ac: 0x4bd0806a  vmul.xyz    $vf1, $vf16, $vf16
    ctx->pc = 0x3021acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3021b0: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x3021b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3021b4: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x3021b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3021b8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3021b8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3021bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3021bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3021c0: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x3021c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3021c4: 0x45010101  bc1t        . + 4 + (0x101 << 2)
    ctx->pc = 0x3021C4u;
    {
        const bool branch_taken_0x3021c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3021C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3021C4u;
        // 0x3021c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3021c4) {
            ctx->pc = 0x3025CCu;
            goto label_3025cc;
        }
    }
    ctx->pc = 0x3021CCu;
    // 0x3021cc: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x3021ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3021d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x3021d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3021d4: 0x4bc084dc  vmulq.xyz   $vf19, $vf16, $Q
    ctx->pc = 0x3021d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3021d8: 0x4bd305e8  vadd.xyz    $vf23, $vf0, $vf19
    ctx->pc = 0x3021d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3021dc: 0x4bd385ac  vsub.xyz    $vf22, $vf16, $vf19
    ctx->pc = 0x3021dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3021e0: 0x4bd7b0aa  vmul.xyz    $vf2, $vf22, $vf23
    ctx->pc = 0x3021e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3021e4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3021e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3021e8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3021e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3021ec: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x3021ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3021f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3021f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3021f4: 0x4a810044  vsubx.y     $vf1, $vf0, $vf1x
    ctx->pc = 0x3021f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3021f8: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x3021f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3021fc: 0x4bd302bc  vadda.xyz   $ACC, $vf19, $vf0
    ctx->pc = 0x3021fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[19]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302200: 0x4bc1bcc9  vmaddy.xyz  $vf19, $vf23, $vf1y
    ctx->pc = 0x302200u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302204: 0x4a209cd8  vmulx.w     $vf19, $vf19, $vf0x
    ctx->pc = 0x302204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302208: 0x4a209ce8  vadd.w      $vf19, $vf19, $vf0
    ctx->pc = 0x302208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x30220c: 0x4bf361bc  vmulax.xyzw $ACC, $vf12, $vf19x
    ctx->pc = 0x30220cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302210: 0x4bf368bd  vmadday.xyzw $ACC, $vf13, $vf19y
    ctx->pc = 0x302210u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302214: 0x4bf370be  vmaddaz.xyzw $ACC, $vf14, $vf19z
    ctx->pc = 0x302214u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302218: 0x4bf37ccb  vmaddw.xyzw $vf19, $vf15, $vf19w
    ctx->pc = 0x302218u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x30221c: 0xf8b30000  sqc2        $vf19, 0x0($a1)
    ctx->pc = 0x30221cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x302220: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x302220u;
    {
        const bool branch_taken_0x302220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302220u;
        // 0x302224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302220) {
            ctx->pc = 0x3025CCu;
            goto label_3025cc;
        }
    }
    ctx->pc = 0x302228u;
label_302228:
    // 0x302228: 0x4b0000a0  vaddq.x     $vf2, $vf0, $Q
    ctx->pc = 0x302228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x30222c: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x30222cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x302230: 0x4a0003bf  vwaitq
    ctx->pc = 0x302230u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x302234: 0x4a8000a0  vaddq.y     $vf2, $vf0, $Q
    ctx->pc = 0x302234u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302238: 0x4bd4806a  vmul.xyz    $vf1, $vf16, $vf20
    ctx->pc = 0x302238u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30223c: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x30223cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302240: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x302240u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302244: 0x4b020859  vmuly.x     $vf1, $vf1, $vf2y
    ctx->pc = 0x302244u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302248: 0x4b01006c  vsub.x      $vf1, $vf0, $vf1
    ctx->pc = 0x302248u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30224c: 0x4bc2a519  vmuly.xyz   $vf20, $vf20, $vf2y
    ctx->pc = 0x30224cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x302250: 0x4bc1a1bc  vmulax.xyz  $ACC, $vf20, $vf1x
    ctx->pc = 0x302250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302254: 0x4bc0854b  vmaddw.xyz  $vf21, $vf16, $vf0w
    ctx->pc = 0x302254u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x302258: 0x4bd5a86a  vmul.xyz    $vf1, $vf21, $vf21
    ctx->pc = 0x302258u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30225c: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x30225cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302260: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x302260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302264: 0x4a2103bd  .word       0x4A2103BD                   # vsqrt       $Q, $vf1x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x302264u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x302268: 0x4a0003bf  vwaitq
    ctx->pc = 0x302268u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x30226c: 0x4a800060  vaddq.y     $vf1, $vf0, $Q
    ctx->pc = 0x30226cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302270: 0x4843b000  cfc2.ni     $v1, $vi22
    ctx->pc = 0x302270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x302274: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x302274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x302278: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30227c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30227cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302280: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x302280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302284: 0x450100d1  bc1t        . + 4 + (0xD1 << 2)
    ctx->pc = 0x302284u;
    {
        const bool branch_taken_0x302284 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x302288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302284u;
        // 0x302288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302284) {
            ctx->pc = 0x3025CCu;
            goto label_3025cc;
        }
    }
    ctx->pc = 0x30228Cu;
    // 0x30228c: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x30228cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302290: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x302290u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302294: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x302294u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302298: 0x4a2203bd  .word       0x4A2203BD                   # vsqrt       $Q, $vf2x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x302298u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x30229c: 0x4a0003bf  vwaitq
    ctx->pc = 0x30229cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3022a0: 0x4843b000  cfc2.ni     $v1, $vi22
    ctx->pc = 0x3022a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3022a4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3022a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3022a8: 0x4bd58cec  vsub.xyz    $vf19, $vf17, $vf21
    ctx->pc = 0x3022a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[17], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3022ac: 0x4bd585ec  vsub.xyz    $vf23, $vf16, $vf21
    ctx->pc = 0x3022acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3022b0: 0x4bd79cea  vmul.xyz    $vf19, $vf19, $vf23
    ctx->pc = 0x3022b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3022b4: 0x4b139cc1  vaddy.x     $vf19, $vf19, $vf19y
    ctx->pc = 0x3022b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3022b8: 0x4b139cc2  vaddz.x     $vf19, $vf19, $vf19z
    ctx->pc = 0x3022b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3022bc: 0x48239800  qmfc2.ni    $v1, $vf19
    ctx->pc = 0x3022bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x3022c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3022c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3022c4: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x3022c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3022c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3022C8u;
    {
        const bool branch_taken_0x3022c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3022c8) {
            ctx->pc = 0x3022DCu;
            goto label_3022dc;
        }
    }
    ctx->pc = 0x3022D0u;
    // 0x3022d0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x3022d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3022d4: 0x450100bd  bc1t        . + 4 + (0xBD << 2)
    ctx->pc = 0x3022D4u;
    {
        const bool branch_taken_0x3022d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3022D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3022D4u;
        // 0x3022d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3022d4) {
            ctx->pc = 0x3025CCu;
            goto label_3025cc;
        }
    }
    ctx->pc = 0x3022DCu;
label_3022dc:
    // 0x3022dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3022dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3022e0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3022e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3022e4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3022e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3022e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3022e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3022ec: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3022ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3022f0: 0x46010044  c1          0x10044
    ctx->pc = 0x3022f0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x3022f4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3022f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3022f8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3022f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3022fc: 0x4bc1a1bc  vmulax.xyz  $ACC, $vf20, $vf1x
    ctx->pc = 0x3022fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302300: 0x4bc0accb  vmaddw.xyz  $vf19, $vf21, $vf0w
    ctx->pc = 0x302300u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302304: 0x4a209cd8  vmulx.w     $vf19, $vf19, $vf0x
    ctx->pc = 0x302304u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302308: 0x4a209ce8  vadd.w      $vf19, $vf19, $vf0
    ctx->pc = 0x302308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x30230c: 0x4b130041  vaddy.x     $vf1, $vf0, $vf19y
    ctx->pc = 0x30230cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302310: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x302310u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302314: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x302314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x302318: 0x46151834  c.lt.s      $f3, $f21
    ctx->pc = 0x302318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30231c: 0x450100ab  bc1t        . + 4 + (0xAB << 2)
    ctx->pc = 0x30231Cu;
    {
        const bool branch_taken_0x30231c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x302320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30231Cu;
        // 0x302320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30231c) {
            ctx->pc = 0x3025CCu;
            goto label_3025cc;
        }
    }
    ctx->pc = 0x302324u;
    // 0x302324: 0x4bd305e8  vadd.xyz    $vf23, $vf0, $vf19
    ctx->pc = 0x302324u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x302328: 0x4605b001  sub.s       $f0, $f22, $f5
    ctx->pc = 0x302328u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[5]);
    // 0x30232c: 0x4bd385ac  vsub.xyz    $vf22, $vf16, $vf19
    ctx->pc = 0x30232cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x302330: 0x4bd7b0aa  vmul.xyz    $vf2, $vf22, $vf23
    ctx->pc = 0x302330u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302334: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x302334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302338: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x302338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x30233c: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x30233cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302340: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x302340u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x302344: 0x4a810044  vsubx.y     $vf1, $vf0, $vf1x
    ctx->pc = 0x302344u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302348: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x302348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30234c: 0x4bd302bc  vadda.xyz   $ACC, $vf19, $vf0
    ctx->pc = 0x30234cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[19]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302350: 0x4bc1bcc9  vmaddy.xyz  $vf19, $vf23, $vf1y
    ctx->pc = 0x302350u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302354: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x302354u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302358: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x302358u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x30235c: 0x4bd602bc  vadda.xyz   $ACC, $vf22, $vf0
    ctx->pc = 0x30235cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[22]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302360: 0x4bc2bd8c  vmsubx.xyz  $vf22, $vf23, $vf2x
    ctx->pc = 0x302360u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x302364: 0x4bc1b598  vmulx.xyz   $vf22, $vf22, $vf1x
    ctx->pc = 0x302364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x302368: 0x4bd69ce8  vadd.xyz    $vf19, $vf19, $vf22
    ctx->pc = 0x302368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], ctx->vu0_vf[22]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x30236c: 0x4a209cd8  vmulx.w     $vf19, $vf19, $vf0x
    ctx->pc = 0x30236cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302370: 0x4a209ce8  vadd.w      $vf19, $vf19, $vf0
    ctx->pc = 0x302370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302374: 0x4bf361bc  vmulax.xyzw $ACC, $vf12, $vf19x
    ctx->pc = 0x302374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302378: 0x4bf368bd  vmadday.xyzw $ACC, $vf13, $vf19y
    ctx->pc = 0x302378u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30237c: 0x4bf370be  vmaddaz.xyzw $ACC, $vf14, $vf19z
    ctx->pc = 0x30237cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302380: 0x4bf37ccb  vmaddw.xyzw $vf19, $vf15, $vf19w
    ctx->pc = 0x302380u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302384: 0xf8b30000  sqc2        $vf19, 0x0($a1)
    ctx->pc = 0x302384u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x302388: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x302388u;
    {
        const bool branch_taken_0x302388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302388u;
        // 0x30238c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302388) {
            ctx->pc = 0x3025CCu;
            goto label_3025cc;
        }
    }
    ctx->pc = 0x302390u;
label_302390:
    // 0x302390: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x302390u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x302394: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x302394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x302398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x302398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30239c: 0x46000906  mov.s       $f4, $f1
    ctx->pc = 0x30239cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[1]);
    // 0x3023a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3023a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3023a4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3023a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3023a8: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x3023a8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3023ac: 0xd8b10000  lqc2        $vf17, 0x0($a1)
    ctx->pc = 0x3023acu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3023b0: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x3023b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3023b4: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x3023b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3023b8: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x3023b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3023bc: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x3023bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3023c0: 0x4bf141bc  vmulax.xyzw $ACC, $vf8, $vf17x
    ctx->pc = 0x3023c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3023c4: 0x4bf148bd  vmadday.xyzw $ACC, $vf9, $vf17y
    ctx->pc = 0x3023c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3023c8: 0x4bf150be  vmaddaz.xyzw $ACC, $vf10, $vf17z
    ctx->pc = 0x3023c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3023cc: 0x4bf15c4b  vmaddw.xyzw $vf17, $vf11, $vf17w
    ctx->pc = 0x3023ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3023d0: 0x4bd08d2c  vsub.xyz    $vf20, $vf17, $vf16
    ctx->pc = 0x3023d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[17], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x3023d4: 0x4bd4a0aa  vmul.xyz    $vf2, $vf20, $vf20
    ctx->pc = 0x3023d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3023d8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3023d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3023dc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3023dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3023e0: 0x4a2203bd  .word       0x4A2203BD                   # vsqrt       $Q, $vf2x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3023e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x3023e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x3023e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3023e8: 0x4843b000  cfc2.ni     $v1, $vi22
    ctx->pc = 0x3023e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3023ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3023ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3023f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3023f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3023f4: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x3023F4u;
    {
        const bool branch_taken_0x3023f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3023f4) {
            ctx->pc = 0x302478u;
            goto label_302478;
        }
    }
    ctx->pc = 0x3023FCu;
    // 0x3023fc: 0x4bd0806a  vmul.xyz    $vf1, $vf16, $vf16
    ctx->pc = 0x3023fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302400: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x302400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302404: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x302404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302408: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x302408u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30240c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30240cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302410: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x302410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302414: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
    ctx->pc = 0x302414u;
    {
        const bool branch_taken_0x302414 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x302418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302414u;
        // 0x302418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302414) {
            ctx->pc = 0x3025CCu;
            goto label_3025cc;
        }
    }
    ctx->pc = 0x30241Cu;
    // 0x30241c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x30241cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x302420: 0x4a0003bf  vwaitq
    ctx->pc = 0x302420u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x302424: 0x4bc084dc  vmulq.xyz   $vf19, $vf16, $Q
    ctx->pc = 0x302424u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302428: 0x4bd305e8  vadd.xyz    $vf23, $vf0, $vf19
    ctx->pc = 0x302428u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x30242c: 0x4bd385ac  vsub.xyz    $vf22, $vf16, $vf19
    ctx->pc = 0x30242cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x302430: 0x4bd7b0aa  vmul.xyz    $vf2, $vf22, $vf23
    ctx->pc = 0x302430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302434: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x302434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302438: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x302438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x30243c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x30243cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302440: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x302440u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x302444: 0x4a810044  vsubx.y     $vf1, $vf0, $vf1x
    ctx->pc = 0x302444u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302448: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x302448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30244c: 0x4bd302bc  vadda.xyz   $ACC, $vf19, $vf0
    ctx->pc = 0x30244cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[19]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302450: 0x4bc1bcc9  vmaddy.xyz  $vf19, $vf23, $vf1y
    ctx->pc = 0x302450u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302454: 0x4a209cd8  vmulx.w     $vf19, $vf19, $vf0x
    ctx->pc = 0x302454u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302458: 0x4a209ce8  vadd.w      $vf19, $vf19, $vf0
    ctx->pc = 0x302458u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x30245c: 0x4bf361bc  vmulax.xyzw $ACC, $vf12, $vf19x
    ctx->pc = 0x30245cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302460: 0x4bf368bd  vmadday.xyzw $ACC, $vf13, $vf19y
    ctx->pc = 0x302460u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302464: 0x4bf370be  vmaddaz.xyzw $ACC, $vf14, $vf19z
    ctx->pc = 0x302464u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302468: 0x4bf37ccb  vmaddw.xyzw $vf19, $vf15, $vf19w
    ctx->pc = 0x302468u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x30246c: 0xfbb30000  sqc2        $vf19, 0x0($sp)
    ctx->pc = 0x30246cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x302470: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x302470u;
    {
        const bool branch_taken_0x302470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302470u;
        // 0x302474: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302470) {
            ctx->pc = 0x3025CCu;
            goto label_3025cc;
        }
    }
    ctx->pc = 0x302478u;
label_302478:
    // 0x302478: 0x4b0000a0  vaddq.x     $vf2, $vf0, $Q
    ctx->pc = 0x302478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x30247c: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x30247cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x302480: 0x4a0003bf  vwaitq
    ctx->pc = 0x302480u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x302484: 0x4a8000a0  vaddq.y     $vf2, $vf0, $Q
    ctx->pc = 0x302484u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302488: 0x4bd4806a  vmul.xyz    $vf1, $vf16, $vf20
    ctx->pc = 0x302488u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30248c: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x30248cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302490: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x302490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302494: 0x4b020859  vmuly.x     $vf1, $vf1, $vf2y
    ctx->pc = 0x302494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302498: 0x4b01006c  vsub.x      $vf1, $vf0, $vf1
    ctx->pc = 0x302498u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30249c: 0x4bc2a519  vmuly.xyz   $vf20, $vf20, $vf2y
    ctx->pc = 0x30249cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x3024a0: 0x4bc1a1bc  vmulax.xyz  $ACC, $vf20, $vf1x
    ctx->pc = 0x3024a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3024a4: 0x4bc0854b  vmaddw.xyz  $vf21, $vf16, $vf0w
    ctx->pc = 0x3024a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3024a8: 0x4bd5a86a  vmul.xyz    $vf1, $vf21, $vf21
    ctx->pc = 0x3024a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3024ac: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x3024acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3024b0: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x3024b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3024b4: 0x4a2103bd  .word       0x4A2103BD                   # vsqrt       $Q, $vf1x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3024b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x3024b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3024b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3024bc: 0x4a800060  vaddq.y     $vf1, $vf0, $Q
    ctx->pc = 0x3024bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3024c0: 0x4843b000  cfc2.ni     $v1, $vi22
    ctx->pc = 0x3024c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3024c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3024c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3024c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3024c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3024cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3024ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3024d0: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3024d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3024d4: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x3024D4u;
    {
        const bool branch_taken_0x3024d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3024D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024D4u;
        // 0x3024d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3024d4) {
            ctx->pc = 0x3025CCu;
            goto label_3025cc;
        }
    }
    ctx->pc = 0x3024DCu;
    // 0x3024dc: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x3024dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3024e0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3024e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3024e4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3024e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3024e8: 0x4a2203bd  .word       0x4A2203BD                   # vsqrt       $Q, $vf2x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3024e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x3024ec: 0x4a0003bf  vwaitq
    ctx->pc = 0x3024ecu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3024f0: 0x4843b000  cfc2.ni     $v1, $vi22
    ctx->pc = 0x3024f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3024f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3024f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3024f8: 0x4bd58cec  vsub.xyz    $vf19, $vf17, $vf21
    ctx->pc = 0x3024f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[17], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3024fc: 0x4bd585ec  vsub.xyz    $vf23, $vf16, $vf21
    ctx->pc = 0x3024fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x302500: 0x4bd79cea  vmul.xyz    $vf19, $vf19, $vf23
    ctx->pc = 0x302500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302504: 0x4b139cc1  vaddy.x     $vf19, $vf19, $vf19y
    ctx->pc = 0x302504u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302508: 0x4b139cc2  vaddz.x     $vf19, $vf19, $vf19z
    ctx->pc = 0x302508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x30250c: 0x48239800  qmfc2.ni    $v1, $vf19
    ctx->pc = 0x30250cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x302510: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302514: 0x0  nop
    ctx->pc = 0x302514u;
    // NOP
    // 0x302518: 0x0  nop
    ctx->pc = 0x302518u;
    // NOP
    // 0x30251c: 0x0  nop
    ctx->pc = 0x30251cu;
    // NOP
    // 0x302520: 0x0  nop
    ctx->pc = 0x302520u;
    // NOP
    // 0x302524: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x302524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302528: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x302528u;
    {
        const bool branch_taken_0x302528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302528) {
            ctx->pc = 0x30253Cu;
            goto label_30253c;
        }
    }
    ctx->pc = 0x302530u;
    // 0x302530: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x302530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302534: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x302534u;
    {
        const bool branch_taken_0x302534 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x302538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302534u;
        // 0x302538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302534) {
            ctx->pc = 0x3025CCu;
            goto label_3025cc;
        }
    }
    ctx->pc = 0x30253Cu;
label_30253c:
    // 0x30253c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30253cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x302540: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x302540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x302544: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x302544u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302548: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x302548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30254c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30254cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x302550: 0x46010044  c1          0x10044
    ctx->pc = 0x302550u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x302554: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x302554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x302558: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x302558u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x30255c: 0x4bc1a1bc  vmulax.xyz  $ACC, $vf20, $vf1x
    ctx->pc = 0x30255cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302560: 0x4bc0accb  vmaddw.xyz  $vf19, $vf21, $vf0w
    ctx->pc = 0x302560u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302564: 0x4bd305e8  vadd.xyz    $vf23, $vf0, $vf19
    ctx->pc = 0x302564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x302568: 0x4604b001  sub.s       $f0, $f22, $f4
    ctx->pc = 0x302568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[4]);
    // 0x30256c: 0x4bd385ac  vsub.xyz    $vf22, $vf16, $vf19
    ctx->pc = 0x30256cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x302570: 0x4bd7b0aa  vmul.xyz    $vf2, $vf22, $vf23
    ctx->pc = 0x302570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302574: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x302574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302578: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x302578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x30257c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x30257cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302580: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x302580u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x302584: 0x4a810044  vsubx.y     $vf1, $vf0, $vf1x
    ctx->pc = 0x302584u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302588: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x302588u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30258c: 0x4bd302bc  vadda.xyz   $ACC, $vf19, $vf0
    ctx->pc = 0x30258cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[19]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302590: 0x4bc1bcc9  vmaddy.xyz  $vf19, $vf23, $vf1y
    ctx->pc = 0x302590u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302594: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x302594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302598: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x302598u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x30259c: 0x4bd602bc  vadda.xyz   $ACC, $vf22, $vf0
    ctx->pc = 0x30259cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[22]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3025a0: 0x4bc2bd8c  vmsubx.xyz  $vf22, $vf23, $vf2x
    ctx->pc = 0x3025a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3025a4: 0x4bc1b598  vmulx.xyz   $vf22, $vf22, $vf1x
    ctx->pc = 0x3025a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x3025a8: 0x4bd69ce8  vadd.xyz    $vf19, $vf19, $vf22
    ctx->pc = 0x3025a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], ctx->vu0_vf[22]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3025ac: 0x4a209cd8  vmulx.w     $vf19, $vf19, $vf0x
    ctx->pc = 0x3025acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3025b0: 0x4a209ce8  vadd.w      $vf19, $vf19, $vf0
    ctx->pc = 0x3025b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3025b4: 0x4bf361bc  vmulax.xyzw $ACC, $vf12, $vf19x
    ctx->pc = 0x3025b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3025b8: 0x4bf368bd  vmadday.xyzw $ACC, $vf13, $vf19y
    ctx->pc = 0x3025b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3025bc: 0x4bf370be  vmaddaz.xyzw $ACC, $vf14, $vf19z
    ctx->pc = 0x3025bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3025c0: 0x4bf37ccb  vmaddw.xyzw $vf19, $vf15, $vf19w
    ctx->pc = 0x3025c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3025c4: 0xf8930000  sqc2        $vf19, 0x0($a0)
    ctx->pc = 0x3025c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x3025c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3025c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3025cc:
    // 0x3025cc: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x3025ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x3025d0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3025d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3025d4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3025d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3025d8: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x3025D8u;
    {
        const bool branch_taken_0x3025d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3025DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025D8u;
        // 0x3025dc: 0xafa70094  sw          $a3, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3025d8) {
            ctx->pc = 0x30297Cu;
            goto label_30297c;
        }
    }
    ctx->pc = 0x3025E0u;
label_3025e0:
    // 0x3025e0: 0xc7809574  lwc1        $f0, -0x6A8C($gp)
    ctx->pc = 0x3025e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3025e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3025e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3025e8: 0xc7819578  lwc1        $f1, -0x6A88($gp)
    ctx->pc = 0x3025e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3025ec: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3025ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3025f0: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x3025f0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x3025f4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x3025f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3025f8: 0x46000906  mov.s       $f4, $f1
    ctx->pc = 0x3025f8u;
    ctx->f[4] = FPU_MOV_S(ctx->f[1]);
    // 0x3025fc: 0xc782957c  lwc1        $f2, -0x6A84($gp)
    ctx->pc = 0x3025fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x302600: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x302600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x302604: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x302604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x302608: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x302608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30260c: 0x7ae40000  lq          $a0, 0x0($s7)
    ctx->pc = 0x30260cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x302610: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x302610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x302614: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x302614u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302618: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x302618u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30261c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x30261cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302620: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x302620u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302624: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x302624u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302628: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x302628u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x30262c: 0x4bf141bc  vmulax.xyzw $ACC, $vf8, $vf17x
    ctx->pc = 0x30262cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302630: 0x4bf148bd  vmadday.xyzw $ACC, $vf9, $vf17y
    ctx->pc = 0x302630u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302634: 0x4bf150be  vmaddaz.xyzw $ACC, $vf10, $vf17z
    ctx->pc = 0x302634u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302638: 0x4bf15c4b  vmaddw.xyzw $vf17, $vf11, $vf17w
    ctx->pc = 0x302638u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x30263c: 0x4be006aa  vmul.xyzw   $vf26, $vf0, $vf0
    ctx->pc = 0x30263cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x302640: 0x4be006ea  vmul.xyzw   $vf27, $vf0, $vf0
    ctx->pc = 0x302640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x302644: 0x4b50d6a8  vadd.xz     $vf26, $vf26, $vf16
    ctx->pc = 0x302644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x302648: 0x4b51dee8  vadd.xz     $vf27, $vf27, $vf17
    ctx->pc = 0x302648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x30264c: 0x4bdadd2c  vsub.xyz    $vf20, $vf27, $vf26
    ctx->pc = 0x30264cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x302650: 0x4b100041  vaddy.x     $vf1, $vf0, $vf16y
    ctx->pc = 0x302650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302654: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x302654u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302658: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x302658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30265c: 0x4b110041  vaddy.x     $vf1, $vf0, $vf17y
    ctx->pc = 0x30265cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302660: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x302660u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302668: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x302668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x30266c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30266cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302670: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x302670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302674: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x302674u;
    {
        const bool branch_taken_0x302674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302674) {
            ctx->pc = 0x302688u;
            goto label_302688;
        }
    }
    ctx->pc = 0x30267Cu;
    // 0x30267c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30267cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302680: 0x450100ba  bc1t        . + 4 + (0xBA << 2)
    ctx->pc = 0x302680u;
    {
        const bool branch_taken_0x302680 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x302684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302680u;
        // 0x302684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302680) {
            ctx->pc = 0x30296Cu;
            goto label_30296c;
        }
    }
    ctx->pc = 0x302688u;
label_302688:
    // 0x302688: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x302688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30268c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30268cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302690: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x302690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302694: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x302694u;
    {
        const bool branch_taken_0x302694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302694) {
            ctx->pc = 0x3026A8u;
            goto label_3026a8;
        }
    }
    ctx->pc = 0x30269Cu;
    // 0x30269c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30269cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3026a0: 0x450100b2  bc1t        . + 4 + (0xB2 << 2)
    ctx->pc = 0x3026A0u;
    {
        const bool branch_taken_0x3026a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3026A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026A0u;
        // 0x3026a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3026a0) {
            ctx->pc = 0x30296Cu;
            goto label_30296c;
        }
    }
    ctx->pc = 0x3026A8u;
label_3026a8:
    // 0x3026a8: 0x4bd4a0aa  vmul.xyz    $vf2, $vf20, $vf20
    ctx->pc = 0x3026a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3026ac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3026acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3026b0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3026b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3026b4: 0x4a2203bd  .word       0x4A2203BD                   # vsqrt       $Q, $vf2x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3026b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x3026b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3026b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3026bc: 0x4843b000  cfc2.ni     $v1, $vi22
    ctx->pc = 0x3026bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3026c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3026c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3026c4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3026c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3026c8: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x3026C8u;
    {
        const bool branch_taken_0x3026c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3026c8) {
            ctx->pc = 0x302768u;
            goto label_302768;
        }
    }
    ctx->pc = 0x3026D0u;
    // 0x3026d0: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x3026d0u;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
    // 0x3026d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3026d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3026d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3026d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3026dc: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x3026dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3026e0: 0x450100a2  bc1t        . + 4 + (0xA2 << 2)
    ctx->pc = 0x3026E0u;
    {
        const bool branch_taken_0x3026e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3026E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026E0u;
        // 0x3026e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3026e0) {
            ctx->pc = 0x30296Cu;
            goto label_30296c;
        }
    }
    ctx->pc = 0x3026E8u;
    // 0x3026e8: 0x4b50806a  vmul.xz     $vf1, $vf16, $vf16
    ctx->pc = 0x3026e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3026ec: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x3026ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3026f0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3026f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3026f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3026f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3026f8: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x3026f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3026fc: 0x4501009b  bc1t        . + 4 + (0x9B << 2)
    ctx->pc = 0x3026FCu;
    {
        const bool branch_taken_0x3026fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x302700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026FCu;
        // 0x302700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3026fc) {
            ctx->pc = 0x30296Cu;
            goto label_30296c;
        }
    }
    ctx->pc = 0x302704u;
    // 0x302704: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x302704u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x302708: 0x4a9004e8  vadd.y      $vf19, $vf0, $vf16
    ctx->pc = 0x302708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x30270c: 0x4a0003bf  vwaitq
    ctx->pc = 0x30270cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x302710: 0x4b4084dc  vmulq.xz    $vf19, $vf16, $Q
    ctx->pc = 0x302710u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302714: 0x4bd305e8  vadd.xyz    $vf23, $vf0, $vf19
    ctx->pc = 0x302714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x302718: 0x4a8005e8  vadd.y      $vf23, $vf0, $vf0
    ctx->pc = 0x302718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x30271c: 0x4bd385ac  vsub.xyz    $vf22, $vf16, $vf19
    ctx->pc = 0x30271cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x302720: 0x4bd7b0aa  vmul.xyz    $vf2, $vf22, $vf23
    ctx->pc = 0x302720u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302724: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x302724u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302728: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x302728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x30272c: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x30272cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302730: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x302730u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x302734: 0x4a810044  vsubx.y     $vf1, $vf0, $vf1x
    ctx->pc = 0x302734u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302738: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x302738u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30273c: 0x4bd302bc  vadda.xyz   $ACC, $vf19, $vf0
    ctx->pc = 0x30273cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[19]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302740: 0x4bc1bcc9  vmaddy.xyz  $vf19, $vf23, $vf1y
    ctx->pc = 0x302740u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302744: 0x4a209cd8  vmulx.w     $vf19, $vf19, $vf0x
    ctx->pc = 0x302744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302748: 0x4a209ce8  vadd.w      $vf19, $vf19, $vf0
    ctx->pc = 0x302748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x30274c: 0x4bf361bc  vmulax.xyzw $ACC, $vf12, $vf19x
    ctx->pc = 0x30274cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302750: 0x4bf368bd  vmadday.xyzw $ACC, $vf13, $vf19y
    ctx->pc = 0x302750u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302754: 0x4bf370be  vmaddaz.xyzw $ACC, $vf14, $vf19z
    ctx->pc = 0x302754u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302758: 0x4bf37ccb  vmaddw.xyzw $vf19, $vf15, $vf19w
    ctx->pc = 0x302758u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x30275c: 0xf8b30000  sqc2        $vf19, 0x0($a1)
    ctx->pc = 0x30275cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x302760: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x302760u;
    {
        const bool branch_taken_0x302760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302760u;
        // 0x302764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302760) {
            ctx->pc = 0x30296Cu;
            goto label_30296c;
        }
    }
    ctx->pc = 0x302768u;
label_302768:
    // 0x302768: 0x4b0000a0  vaddq.x     $vf2, $vf0, $Q
    ctx->pc = 0x302768u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x30276c: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x30276cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x302770: 0x4a0003bf  vwaitq
    ctx->pc = 0x302770u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x302774: 0x4a8000a0  vaddq.y     $vf2, $vf0, $Q
    ctx->pc = 0x302774u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302778: 0x4bd4d06a  vmul.xyz    $vf1, $vf26, $vf20
    ctx->pc = 0x302778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30277c: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x30277cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302780: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x302780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302784: 0x4b020859  vmuly.x     $vf1, $vf1, $vf2y
    ctx->pc = 0x302784u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302788: 0x4b01006c  vsub.x      $vf1, $vf0, $vf1
    ctx->pc = 0x302788u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30278c: 0x4bc2a519  vmuly.xyz   $vf20, $vf20, $vf2y
    ctx->pc = 0x30278cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x302790: 0x4bc1a1bc  vmulax.xyz  $ACC, $vf20, $vf1x
    ctx->pc = 0x302790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302794: 0x4bc0d54b  vmaddw.xyz  $vf21, $vf26, $vf0w
    ctx->pc = 0x302794u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x302798: 0x4bd5a86a  vmul.xyz    $vf1, $vf21, $vf21
    ctx->pc = 0x302798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30279c: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x30279cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3027a0: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x3027a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3027a4: 0x4a2103bd  .word       0x4A2103BD                   # vsqrt       $Q, $vf1x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3027a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x3027a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3027a8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3027ac: 0x4a800060  vaddq.y     $vf1, $vf0, $Q
    ctx->pc = 0x3027acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3027b0: 0x4843b000  cfc2.ni     $v1, $vi22
    ctx->pc = 0x3027b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3027b4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3027b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3027b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3027b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3027bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3027bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3027c0: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x3027c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3027c4: 0x45010069  bc1t        . + 4 + (0x69 << 2)
    ctx->pc = 0x3027C4u;
    {
        const bool branch_taken_0x3027c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3027C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027C4u;
        // 0x3027c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3027c4) {
            ctx->pc = 0x30296Cu;
            goto label_30296c;
        }
    }
    ctx->pc = 0x3027CCu;
    // 0x3027cc: 0x4bdad0aa  vmul.xyz    $vf2, $vf26, $vf26
    ctx->pc = 0x3027ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3027d0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3027d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3027d4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3027d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3027d8: 0x4a2203bd  .word       0x4A2203BD                   # vsqrt       $Q, $vf2x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3027d8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x3027dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x3027dcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3027e0: 0x4843b000  cfc2.ni     $v1, $vi22
    ctx->pc = 0x3027e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3027e4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3027e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3027e8: 0x4bd5dcec  vsub.xyz    $vf19, $vf27, $vf21
    ctx->pc = 0x3027e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3027ec: 0x4bd5d5ec  vsub.xyz    $vf23, $vf26, $vf21
    ctx->pc = 0x3027ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[26], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3027f0: 0x4bd79cea  vmul.xyz    $vf19, $vf19, $vf23
    ctx->pc = 0x3027f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3027f4: 0x4b139cc1  vaddy.x     $vf19, $vf19, $vf19y
    ctx->pc = 0x3027f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3027f8: 0x4b139cc2  vaddz.x     $vf19, $vf19, $vf19z
    ctx->pc = 0x3027f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3027fc: 0x48239800  qmfc2.ni    $v1, $vf19
    ctx->pc = 0x3027fcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x302800: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302804: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x302804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302808: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x302808u;
    {
        const bool branch_taken_0x302808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302808) {
            ctx->pc = 0x30281Cu;
            goto label_30281c;
        }
    }
    ctx->pc = 0x302810u;
    // 0x302810: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x302810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302814: 0x45010055  bc1t        . + 4 + (0x55 << 2)
    ctx->pc = 0x302814u;
    {
        const bool branch_taken_0x302814 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x302818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302814u;
        // 0x302818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302814) {
            ctx->pc = 0x30296Cu;
            goto label_30296c;
        }
    }
    ctx->pc = 0x30281Cu;
label_30281c:
    // 0x30281c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30281cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x302820: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x302820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x302824: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x302824u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302828: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x302828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30282c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x30282cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x302830: 0x46010044  c1          0x10044
    ctx->pc = 0x302830u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x302834: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x302834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x302838: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x302838u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x30283c: 0x4bc1a1bc  vmulax.xyz  $ACC, $vf20, $vf1x
    ctx->pc = 0x30283cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302840: 0x4bc0accb  vmaddw.xyz  $vf19, $vf21, $vf0w
    ctx->pc = 0x302840u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302844: 0x4a209cd8  vmulx.w     $vf19, $vf19, $vf0x
    ctx->pc = 0x302844u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302848: 0x4a209ce8  vadd.w      $vf19, $vf19, $vf0
    ctx->pc = 0x302848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x30284c: 0x4bd1852c  vsub.xyz    $vf20, $vf16, $vf17
    ctx->pc = 0x30284cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x302850: 0x4a7403bc  vdiv        $Q, $vf0w, $vf20x
    ctx->pc = 0x302850u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x302854: 0x4a0003bf  vwaitq
    ctx->pc = 0x302854u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x302858: 0x4b11986c  vsub.x      $vf1, $vf19, $vf17
    ctx->pc = 0x302858u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[19], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30285c: 0x4b00085c  vmulq.x     $vf1, $vf1, $Q
    ctx->pc = 0x30285cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302860: 0x4bc08abc  vadda.xyz   $ACC, $vf0, $vf17
    ctx->pc = 0x302860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302864: 0x4bc1a4c8  vmaddx.xyz  $vf19, $vf20, $vf1x
    ctx->pc = 0x302864u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302868: 0x4b130041  vaddy.x     $vf1, $vf0, $vf19y
    ctx->pc = 0x302868u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30286c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x30286cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302870: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x302870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x302874: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x302874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x302878: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x302878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30287c: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x30287cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302880: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x302880u;
    {
        const bool branch_taken_0x302880 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x302884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302880u;
        // 0x302884: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302880) {
            ctx->pc = 0x30289Cu;
            goto label_30289c;
        }
    }
    ctx->pc = 0x302888u;
    // 0x302888: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x302888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x30288c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30288cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302890: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x302890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302894: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x302894u;
    {
        const bool branch_taken_0x302894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x302898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302894u;
        // 0x302898: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302894) {
            ctx->pc = 0x302900u;
            goto label_302900;
        }
    }
    ctx->pc = 0x30289Cu;
label_30289c:
    // 0x30289c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x30289cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3028a0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3028A0u;
    {
        const bool branch_taken_0x3028a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3028a0) {
            ctx->pc = 0x3028B0u;
            goto label_3028b0;
        }
    }
    ctx->pc = 0x3028A8u;
    // 0x3028a8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3028a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x3028ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3028acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3028b0:
    // 0x3028b0: 0x4af403bc  vdiv        $Q, $vf0w, $vf20y
    ctx->pc = 0x3028b0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x3028b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x3028b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3028b8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3028b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3028bc: 0x48a3f000  qmtc2.ni    $v1, $vf30
    ctx->pc = 0x3028bcu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3028c0: 0x4b11f045  vsuby.x     $vf1, $vf30, $vf17y
    ctx->pc = 0x3028c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3028c4: 0x4b00085c  vmulq.x     $vf1, $vf1, $Q
    ctx->pc = 0x3028c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3028c8: 0x4bc08abc  vadda.xyz   $ACC, $vf0, $vf17
    ctx->pc = 0x3028c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3028cc: 0x4bc1a4c8  vmaddx.xyz  $vf19, $vf20, $vf1x
    ctx->pc = 0x3028ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3028d0: 0x4b53986a  vmul.xz     $vf1, $vf19, $vf19
    ctx->pc = 0x3028d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3028d4: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x3028d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3028d8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3028d8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3028dc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3028dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3028e0: 0x4603b036  c.le.s      $f22, $f3
    ctx->pc = 0x3028e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3028e4: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x3028E4u;
    {
        const bool branch_taken_0x3028e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3028E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028E4u;
        // 0x3028e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3028e4) {
            ctx->pc = 0x30296Cu;
            goto label_30296c;
        }
    }
    ctx->pc = 0x3028ECu;
    // 0x3028ec: 0x4a9e05c0  vaddx.y     $vf23, $vf0, $vf30x
    ctx->pc = 0x3028ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3028f0: 0x4b4005e8  vadd.xz     $vf23, $vf0, $vf0
    ctx->pc = 0x3028f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3028f4: 0x4a97bde8  vadd.y      $vf23, $vf23, $vf23
    ctx->pc = 0x3028f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x3028f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3028F8u;
    {
        const bool branch_taken_0x3028f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3028FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028F8u;
        // 0x3028fc: 0x4605b001  sub.s       $f0, $f22, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3028f8) {
            ctx->pc = 0x30290Cu;
            goto label_30290c;
        }
    }
    ctx->pc = 0x302900u;
label_302900:
    // 0x302900: 0x4bd305e8  vadd.xyz    $vf23, $vf0, $vf19
    ctx->pc = 0x302900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x302904: 0x4a8005e8  vadd.y      $vf23, $vf0, $vf0
    ctx->pc = 0x302904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x302908: 0x4605b001  sub.s       $f0, $f22, $f5
    ctx->pc = 0x302908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[5]);
label_30290c:
    // 0x30290c: 0x4bd385ac  vsub.xyz    $vf22, $vf16, $vf19
    ctx->pc = 0x30290cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x302910: 0x4bd7b0aa  vmul.xyz    $vf2, $vf22, $vf23
    ctx->pc = 0x302910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302914: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x302914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x302918: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x302918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x30291c: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x30291cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302920: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x302920u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x302924: 0x4a810044  vsubx.y     $vf1, $vf0, $vf1x
    ctx->pc = 0x302924u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x302928: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x302928u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30292c: 0x4bd302bc  vadda.xyz   $ACC, $vf19, $vf0
    ctx->pc = 0x30292cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[19]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302930: 0x4bc1bcc9  vmaddy.xyz  $vf19, $vf23, $vf1y
    ctx->pc = 0x302930u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302934: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x302934u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302938: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x302938u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x30293c: 0x4bd602bc  vadda.xyz   $ACC, $vf22, $vf0
    ctx->pc = 0x30293cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[22]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302940: 0x4bc2bd8c  vmsubx.xyz  $vf22, $vf23, $vf2x
    ctx->pc = 0x302940u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x302944: 0x4bc1b598  vmulx.xyz   $vf22, $vf22, $vf1x
    ctx->pc = 0x302944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x302948: 0x4bd69ce8  vadd.xyz    $vf19, $vf19, $vf22
    ctx->pc = 0x302948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], ctx->vu0_vf[22]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x30294c: 0x4a209cd8  vmulx.w     $vf19, $vf19, $vf0x
    ctx->pc = 0x30294cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302950: 0x4a209ce8  vadd.w      $vf19, $vf19, $vf0
    ctx->pc = 0x302950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302954: 0x4bf361bc  vmulax.xyzw $ACC, $vf12, $vf19x
    ctx->pc = 0x302954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302958: 0x4bf368bd  vmadday.xyzw $ACC, $vf13, $vf19y
    ctx->pc = 0x302958u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30295c: 0x4bf370be  vmaddaz.xyzw $ACC, $vf14, $vf19z
    ctx->pc = 0x30295cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302960: 0x4bf37ccb  vmaddw.xyzw $vf19, $vf15, $vf19w
    ctx->pc = 0x302960u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x302964: 0xf8b30000  sqc2        $vf19, 0x0($a1)
    ctx->pc = 0x302964u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x302968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x302968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30296c:
    // 0x30296c: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x30296cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x302970: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x302970u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302974: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x302974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x302978: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x302978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_30297c:
    // 0x30297c: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x30297cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x302980: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x302980u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302984: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x302984u;
    {
        const bool branch_taken_0x302984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302984u;
        // 0x302988: 0x7ee20000  sq          $v0, 0x0($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302984) {
            ctx->pc = 0x303090u;
            goto label_303090;
        }
    }
    ctx->pc = 0x30298Cu;
    // 0x30298c: 0x0  nop
    ctx->pc = 0x30298cu;
    // NOP
label_302990:
    // 0x302990: 0xc7899580  lwc1        $f9, -0x6A80($gp)
    ctx->pc = 0x302990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x302994: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x302994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x302998: 0xc7889584  lwc1        $f8, -0x6A7C($gp)
    ctx->pc = 0x302998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x30299c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x30299cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3029a0: 0xda910000  lqc2        $vf17, 0x0($s4)
    ctx->pc = 0x3029a0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3029a4: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x3029a4u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3029a8: 0x4bf141bc  vmulax.xyzw $ACC, $vf8, $vf17x
    ctx->pc = 0x3029a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3029ac: 0x4bf148bd  vmadday.xyzw $ACC, $vf9, $vf17y
    ctx->pc = 0x3029acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3029b0: 0x4bf150be  vmaddaz.xyzw $ACC, $vf10, $vf17z
    ctx->pc = 0x3029b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3029b4: 0x4bf15c4b  vmaddw.xyzw $vf17, $vf11, $vf17w
    ctx->pc = 0x3029b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3029b8: 0x4bf261bc  vmulax.xyzw $ACC, $vf12, $vf18x
    ctx->pc = 0x3029b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3029bc: 0x4bf268bd  vmadday.xyzw $ACC, $vf13, $vf18y
    ctx->pc = 0x3029bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3029c0: 0x4bf270be  vmaddaz.xyzw $ACC, $vf14, $vf18z
    ctx->pc = 0x3029c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3029c4: 0x4bf27c8b  vmaddw.xyzw $vf18, $vf15, $vf18w
    ctx->pc = 0x3029c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3029c8: 0x4bc089ff  .word       0x4BC089FF                   # vclipw.xyz  $vf17, $vf0w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3029c8u;
    { __m128 fs = ctx->vu0_vf[17]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x3029cc: 0xfbb10000  sqc2        $vf17, 0x0($sp)
    ctx->pc = 0x3029ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x3029d0: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x3029d0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3029d4: 0x4bc091ff  .word       0x4BC091FF                   # vclipw.xyz  $vf18, $vf0w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3029d4u;
    { __m128 fs = ctx->vu0_vf[18]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x3029d8: 0xf8d20000  sqc2        $vf18, 0x0($a2)
    ctx->pc = 0x3029d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x3029dc: 0xd8df0000  lqc2        $vf31, 0x0($a2)
    ctx->pc = 0x3029dcu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3029e0: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x3029e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3029e4: 0x4a0002ff  vnop
    ctx->pc = 0x3029e4u;
    // NOP operation, no action needed for VU0
    // 0x3029e8: 0x48449000  cfc2.ni     $a0, $vi18
    ctx->pc = 0x3029e8u;
    SET_GPR_U32(ctx, 4, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x3029ec: 0x41182  srl         $v0, $a0, 6
    ctx->pc = 0x3029ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x3029f0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3029f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3029f4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x3029f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x3029f8: 0x144001a2  bnez        $v0, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x3029F8u;
    {
        const bool branch_taken_0x3029f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3029FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029F8u;
        // 0x3029fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3029f8) {
            ctx->pc = 0x303084u;
            goto label_303084;
        }
    }
    ctx->pc = 0x302A00u;
    // 0x302a00: 0x3082003f  andi        $v0, $a0, 0x3F
    ctx->pc = 0x302a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x302a04: 0x144000c2  bnez        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x302A04u;
    {
        const bool branch_taken_0x302a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A04u;
        // 0x302a08: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302a04) {
            ctx->pc = 0x302D10u;
            goto label_302d10;
        }
    }
    ctx->pc = 0x302A0Cu;
    // 0x302a0c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x302a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x302a10: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x302a10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x302a14: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x302a14u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x302a18: 0x4bf58c6a  vmul.xyzw   $vf17, $vf17, $vf21
    ctx->pc = 0x302a18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x302a1c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x302a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302a20: 0x46000105  abs.s       $f4, $f0
    ctx->pc = 0x302a20u;
    ctx->f[4] = FPU_ABS_S(ctx->f[0]);
    // 0x302a24: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x302a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302a28: 0x460008c5  abs.s       $f3, $f1
    ctx->pc = 0x302a28u;
    ctx->f[3] = FPU_ABS_S(ctx->f[1]);
    // 0x302a2c: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x302a2cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x302a30: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x302a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302a34: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x302a34u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x302a38: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x302a38u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x302a3c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x302a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x302a40: 0xf8710000  sqc2        $vf17, 0x0($v1)
    ctx->pc = 0x302a40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x302a44: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x302a44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302a48: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x302A48u;
    {
        const bool branch_taken_0x302a48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302a48) {
            ctx->pc = 0x302B38u;
            goto label_302b38;
        }
    }
    ctx->pc = 0x302A50u;
    // 0x302a50: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x302a50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302a54: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x302A54u;
    {
        const bool branch_taken_0x302a54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x302A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A54u;
        // 0x302a58: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302a54) {
            ctx->pc = 0x302B38u;
            goto label_302b38;
        }
    }
    ctx->pc = 0x302A5Cu;
    // 0x302a5c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x302a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302a60: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x302a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x302a64: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x302a64u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x302a68: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x302a68u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x302a6c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x302a6cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x302a70: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x302a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302a74: 0x460000dc  madd.s      $f3, $f0, $f0
    ctx->pc = 0x302a74u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x302a78: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x302a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x302a7c: 0x46001986  mov.s       $f6, $f3
    ctx->pc = 0x302a7cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[3]);
    // 0x302a80: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x302a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x302a84: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x302a84u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x302a88: 0x46033882  mul.s       $f2, $f7, $f3
    ctx->pc = 0x302a88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x302a8c: 0x46062143  div.s       $f5, $f4, $f6
    ctx->pc = 0x302a8cu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[5] = ctx->f[4] / ctx->f[6];
    // 0x302a90: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x302a90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302a94: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x302A94u;
    {
        const bool branch_taken_0x302a94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302a94) {
            ctx->pc = 0x302A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302A94u;
            // 0x302a98: 0x46081882  mul.s       $f2, $f3, $f8 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x302AB0u;
            goto label_302ab0;
        }
    }
    ctx->pc = 0x302A9Cu;
    // 0x302a9c: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x302a9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
    // 0x302aa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x302aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302aa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x302AA4u;
    {
        const bool branch_taken_0x302aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AA4u;
        // 0x302aa8: 0x46001882  mul.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302aa4) {
            ctx->pc = 0x302AB4u;
            goto label_302ab4;
        }
    }
    ctx->pc = 0x302AACu;
    // 0x302aac: 0x0  nop
    ctx->pc = 0x302aacu;
    // NOP
label_302ab0:
    // 0x302ab0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302ab4:
    // 0x302ab4: 0x460500c4  c1          0x500C4
    ctx->pc = 0x302ab4u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x302ab8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x302abc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x302abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302ac0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x302ac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x302ac4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x302ac4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302ac8: 0x48a2f000  qmtc2.ni    $v0, $vf30
    ctx->pc = 0x302ac8u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x302acc: 0x46062034  c.lt.s      $f4, $f6
    ctx->pc = 0x302accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302ad0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x302AD0u;
    {
        const bool branch_taken_0x302ad0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302ad0) {
            ctx->pc = 0x302AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302AD0u;
            // 0x302ad4: 0xe7b50038  swc1        $f21, 0x38($sp) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x302AF8u;
            goto label_302af8;
        }
    }
    ctx->pc = 0x302AD8u;
    // 0x302ad8: 0x46030101  sub.s       $f4, $f0, $f3
    ctx->pc = 0x302ad8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x302adc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x302adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302ae0: 0x46040882  mul.s       $f2, $f1, $f4
    ctx->pc = 0x302ae0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x302ae4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x302ae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x302ae8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x302ae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x302aec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x302AECu;
    {
        const bool branch_taken_0x302aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AECu;
        // 0x302af0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302aec) {
            ctx->pc = 0x302AFCu;
            goto label_302afc;
        }
    }
    ctx->pc = 0x302AF4u;
    // 0x302af4: 0x0  nop
    ctx->pc = 0x302af4u;
    // NOP
label_302af8:
    // 0x302af8: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x302af8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_302afc:
    // 0x302afc: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x302afcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x302b00: 0x4bf4842a  vmul.xyzw   $vf16, $vf16, $vf20
    ctx->pc = 0x302b00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302b04: 0xd8df0000  lqc2        $vf31, 0x0($a2)
    ctx->pc = 0x302b04u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x302b08: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x302b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x302b0c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x302b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x302b10: 0x4bff8428  vadd.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x302b10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302b14: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x302b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302b18: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x302b18u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x302b1c: 0x46153834  c.lt.s      $f7, $f21
    ctx->pc = 0x302b1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302b20: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x302B20u;
    {
        const bool branch_taken_0x302b20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x302b20) {
            ctx->pc = 0x302B30u;
            goto label_302b30;
        }
    }
    ctx->pc = 0x302B28u;
    // 0x302b28: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x302B28u;
    {
        const bool branch_taken_0x302b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B28u;
        // 0x302b2c: 0x4b1e8410  vmaxx.x     $vf16, $vf16, $vf30x (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b28) {
            ctx->pc = 0x302CF4u;
            goto label_302cf4;
        }
    }
    ctx->pc = 0x302B30u;
label_302b30:
    // 0x302b30: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x302B30u;
    {
        const bool branch_taken_0x302b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B30u;
        // 0x302b34: 0x4b1f8414  vminix.x    $vf16, $vf16, $vf31x (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b30) {
            ctx->pc = 0x302CF4u;
            goto label_302cf4;
        }
    }
    ctx->pc = 0x302B38u;
label_302b38:
    // 0x302b38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x302b38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302b3c: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x302B3Cu;
    {
        const bool branch_taken_0x302b3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x302B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B3Cu;
        // 0x302b40: 0xc7a00038  lwc1        $f0, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b3c) {
            ctx->pc = 0x302C20u;
            goto label_302c20;
        }
    }
    ctx->pc = 0x302B44u;
    // 0x302b44: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x302b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302b48: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x302b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b4c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x302b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302b50: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x302b50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x302b54: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x302b54u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x302b58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x302b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302b5c: 0x460000dc  madd.s      $f3, $f0, $f0
    ctx->pc = 0x302b5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x302b60: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x302b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x302b64: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x302b64u;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
    // 0x302b68: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x302b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302b6c: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x302b6cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x302b70: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x302b70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x302b74: 0x460520c3  div.s       $f3, $f4, $f5
    ctx->pc = 0x302b74u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[5];
    // 0x302b78: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x302b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302b7c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x302B7Cu;
    {
        const bool branch_taken_0x302b7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302b7c) {
            ctx->pc = 0x302B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302B7Cu;
            // 0x302b80: 0x46080882  mul.s       $f2, $f1, $f8 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x302B98u;
            goto label_302b98;
        }
    }
    ctx->pc = 0x302B84u;
    // 0x302b84: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x302b84u;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
    // 0x302b88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x302b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x302B8Cu;
    {
        const bool branch_taken_0x302b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B8Cu;
        // 0x302b90: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b8c) {
            ctx->pc = 0x302B9Cu;
            goto label_302b9c;
        }
    }
    ctx->pc = 0x302B94u;
    // 0x302b94: 0x0  nop
    ctx->pc = 0x302b94u;
    // NOP
label_302b98:
    // 0x302b98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302b9c:
    // 0x302b9c: 0x46030044  c1          0x30044
    ctx->pc = 0x302b9cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x302ba0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x302ba4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x302ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302ba8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x302ba8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x302bac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x302bacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302bb0: 0x48a2f000  qmtc2.ni    $v0, $vf30
    ctx->pc = 0x302bb0u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x302bb4: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x302bb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302bb8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x302BB8u;
    {
        const bool branch_taken_0x302bb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302bb8) {
            ctx->pc = 0x302BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302BB8u;
            // 0x302bbc: 0xe7b50038  swc1        $f21, 0x38($sp) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x302BE0u;
            goto label_302be0;
        }
    }
    ctx->pc = 0x302BC0u;
    // 0x302bc0: 0x46010101  sub.s       $f4, $f0, $f1
    ctx->pc = 0x302bc0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x302bc4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x302bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302bc8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x302bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302bcc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x302bccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x302bd0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x302bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x302bd4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x302bd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x302bd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x302BD8u;
    {
        const bool branch_taken_0x302bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BD8u;
        // 0x302bdc: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302bd8) {
            ctx->pc = 0x302BE4u;
            goto label_302be4;
        }
    }
    ctx->pc = 0x302BE0u;
label_302be0:
    // 0x302be0: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x302be0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_302be4:
    // 0x302be4: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x302be4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x302be8: 0x4bf4842a  vmul.xyzw   $vf16, $vf16, $vf20
    ctx->pc = 0x302be8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302bec: 0xd8df0000  lqc2        $vf31, 0x0($a2)
    ctx->pc = 0x302becu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x302bf0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x302bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x302bf4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x302bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x302bf8: 0x4bff8428  vadd.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x302bf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302bfc: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x302bfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302c00: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x302c00u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x302c04: 0x46153034  c.lt.s      $f6, $f21
    ctx->pc = 0x302c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302c08: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x302C08u;
    {
        const bool branch_taken_0x302c08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x302c08) {
            ctx->pc = 0x302C18u;
            goto label_302c18;
        }
    }
    ctx->pc = 0x302C10u;
    // 0x302c10: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x302C10u;
    {
        const bool branch_taken_0x302c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C10u;
        // 0x302c14: 0x4a9e8410  vmaxx.y     $vf16, $vf16, $vf30x (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c10) {
            ctx->pc = 0x302CF4u;
            goto label_302cf4;
        }
    }
    ctx->pc = 0x302C18u;
label_302c18:
    // 0x302c18: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x302C18u;
    {
        const bool branch_taken_0x302c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C18u;
        // 0x302c1c: 0x4a9f8414  vminix.y    $vf16, $vf16, $vf31x (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c18) {
            ctx->pc = 0x302CF4u;
            goto label_302cf4;
        }
    }
    ctx->pc = 0x302C20u;
label_302c20:
    // 0x302c20: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x302c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c24: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x302c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302c28: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x302c28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x302c2c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x302c2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x302c30: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x302c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302c34: 0x460000dc  madd.s      $f3, $f0, $f0
    ctx->pc = 0x302c34u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x302c38: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x302c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x302c3c: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x302c3cu;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
    // 0x302c40: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x302c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302c44: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x302c44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x302c48: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x302c48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x302c4c: 0x460520c3  div.s       $f3, $f4, $f5
    ctx->pc = 0x302c4cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[5];
    // 0x302c50: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x302c50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302c54: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x302C54u;
    {
        const bool branch_taken_0x302c54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302c54) {
            ctx->pc = 0x302C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302C54u;
            // 0x302c58: 0x46080882  mul.s       $f2, $f1, $f8 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x302C70u;
            goto label_302c70;
        }
    }
    ctx->pc = 0x302C5Cu;
    // 0x302c5c: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x302c5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
    // 0x302c60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x302c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x302C64u;
    {
        const bool branch_taken_0x302c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C64u;
        // 0x302c68: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c64) {
            ctx->pc = 0x302C74u;
            goto label_302c74;
        }
    }
    ctx->pc = 0x302C6Cu;
    // 0x302c6c: 0x0  nop
    ctx->pc = 0x302c6cu;
    // NOP
label_302c70:
    // 0x302c70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302c74:
    // 0x302c74: 0x46030044  c1          0x30044
    ctx->pc = 0x302c74u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x302c78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x302c7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x302c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302c80: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x302c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x302c84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x302c84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302c88: 0x48a2f000  qmtc2.ni    $v0, $vf30
    ctx->pc = 0x302c88u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x302c8c: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x302c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302c90: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x302C90u;
    {
        const bool branch_taken_0x302c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302c90) {
            ctx->pc = 0x302C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302C90u;
            // 0x302c94: 0xe7b50034  swc1        $f21, 0x34($sp) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x302CB8u;
            goto label_302cb8;
        }
    }
    ctx->pc = 0x302C98u;
    // 0x302c98: 0x46010101  sub.s       $f4, $f0, $f1
    ctx->pc = 0x302c98u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x302c9c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x302c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302ca0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x302ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302ca4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x302ca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x302ca8: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x302ca8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x302cac: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x302cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x302cb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x302CB0u;
    {
        const bool branch_taken_0x302cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CB0u;
        // 0x302cb4: 0xe7a20034  swc1        $f2, 0x34($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302cb0) {
            ctx->pc = 0x302CBCu;
            goto label_302cbc;
        }
    }
    ctx->pc = 0x302CB8u;
label_302cb8:
    // 0x302cb8: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x302cb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_302cbc:
    // 0x302cbc: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x302cbcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x302cc0: 0x4bf4842a  vmul.xyzw   $vf16, $vf16, $vf20
    ctx->pc = 0x302cc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302cc4: 0xd8df0000  lqc2        $vf31, 0x0($a2)
    ctx->pc = 0x302cc4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x302cc8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x302cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x302ccc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x302cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x302cd0: 0x4bff8428  vadd.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x302cd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302cd4: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x302cd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302cd8: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x302cd8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x302cdc: 0x46153034  c.lt.s      $f6, $f21
    ctx->pc = 0x302cdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302ce0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x302CE0u;
    {
        const bool branch_taken_0x302ce0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302ce0) {
            ctx->pc = 0x302CF0u;
            goto label_302cf0;
        }
    }
    ctx->pc = 0x302CE8u;
    // 0x302ce8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x302CE8u;
    {
        const bool branch_taken_0x302ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CE8u;
        // 0x302cec: 0x4a5f8414  vminix.z    $vf16, $vf16, $vf31x (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ce8) {
            ctx->pc = 0x302CF4u;
            goto label_302cf4;
        }
    }
    ctx->pc = 0x302CF0u;
label_302cf0:
    // 0x302cf0: 0x4a5e8410  vmaxx.z     $vf16, $vf16, $vf30x
    ctx->pc = 0x302cf0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
label_302cf4:
    // 0x302cf4: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x302cf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302cf8: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x302cf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302cfc: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x302cfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302d00: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x302d00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302d04: 0xfa900000  sqc2        $vf16, 0x0($s4)
    ctx->pc = 0x302d04u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x302d08: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x302D08u;
    {
        const bool branch_taken_0x302d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D08u;
        // 0x302d0c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d08) {
            ctx->pc = 0x303084u;
            goto label_303084;
        }
    }
    ctx->pc = 0x302D10u;
label_302d10:
    // 0x302d10: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x302d10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x302d14: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x302d14u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x302d18: 0x4bf58c6a  vmul.xyzw   $vf17, $vf17, $vf21
    ctx->pc = 0x302d18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x302d1c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x302d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x302d20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x302d24: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x302d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x302d28: 0xf8b10000  sqc2        $vf17, 0x0($a1)
    ctx->pc = 0x302d28u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x302d2c: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x302d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x302d30: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x302D30u;
    {
        const bool branch_taken_0x302d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D30u;
        // 0x302d34: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d30) {
            ctx->pc = 0x302E48u;
            goto label_302e48;
        }
    }
    ctx->pc = 0x302D38u;
    // 0x302d38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x302D38u;
    {
        const bool branch_taken_0x302d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D38u;
        // 0x302d3c: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d38) {
            ctx->pc = 0x302D58u;
            goto label_302d58;
        }
    }
    ctx->pc = 0x302D40u;
    // 0x302d40: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x302d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302d44: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x302d44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x302d48: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x302d48u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x302d4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x302D4Cu;
    {
        const bool branch_taken_0x302d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D4Cu;
        // 0x302d50: 0xdbb00000  lqc2        $vf16, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d4c) {
            ctx->pc = 0x302D6Cu;
            goto label_302d6c;
        }
    }
    ctx->pc = 0x302D54u;
    // 0x302d54: 0x0  nop
    ctx->pc = 0x302d54u;
    // NOP
label_302d58:
    // 0x302d58: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x302d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x302d5c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x302d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302d60: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x302d60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x302d64: 0x46001883  div.s       $f2, $f3, $f0
    ctx->pc = 0x302d64u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[0];
    // 0x302d68: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x302d68u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_302d6c:
    // 0x302d6c: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x302d6cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x302d70: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x302d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302d74: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x302d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302d78: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x302d78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x302d7c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x302d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302d80: 0x460108dc  madd.s      $f3, $f1, $f1
    ctx->pc = 0x302d80u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x302d84: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x302d84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302d88: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x302d88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x302d8c: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x302d8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302d90: 0x4bc1fc0c  vmsubx.xyz  $vf16, $vf31, $vf1x
    ctx->pc = 0x302d90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302d94: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x302d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302d98: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x302d98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x302d9c: 0x4bc081ff  .word       0x4BC081FF                   # vclipw.xyz  $vf16, $vf0w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x302d9cu;
    { __m128 fs = ctx->vu0_vf[16]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x302da0: 0xf8d00000  sqc2        $vf16, 0x0($a2)
    ctx->pc = 0x302da0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x302da4: 0x4a0002ff  vnop
    ctx->pc = 0x302da4u;
    // NOP operation, no action needed for VU0
    // 0x302da8: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x302da8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x302dac: 0x4a0002ff  vnop
    ctx->pc = 0x302dacu;
    // NOP operation, no action needed for VU0
    // 0x302db0: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x302db0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x302db4: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x302db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x302db8: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x302DB8u;
    {
        const bool branch_taken_0x302db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DB8u;
        // 0x302dbc: 0x3082000c  andi        $v0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302db8) {
            ctx->pc = 0x302E4Cu;
            goto label_302e4c;
        }
    }
    ctx->pc = 0x302DC0u;
    // 0x302dc0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x302dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302dc4: 0x46080142  mul.s       $f5, $f0, $f8
    ctx->pc = 0x302dc4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x302dc8: 0x46032003  div.s       $f0, $f4, $f3
    ctx->pc = 0x302dc8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[3];
    // 0x302dcc: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x302dccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302dd0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x302DD0u;
    {
        const bool branch_taken_0x302dd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x302DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DD0u;
        // 0x302dd4: 0xe7a50030  swc1        $f5, 0x30($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302dd0) {
            ctx->pc = 0x302E08u;
            goto label_302e08;
        }
    }
    ctx->pc = 0x302DD8u;
    // 0x302dd8: 0x0  nop
    ctx->pc = 0x302dd8u;
    // NOP
    // 0x302ddc: 0x0  nop
    ctx->pc = 0x302ddcu;
    // NOP
    // 0x302de0: 0x46000104  c1          0x104
    ctx->pc = 0x302de0u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x302de4: 0x4604b101  sub.s       $f4, $f22, $f4
    ctx->pc = 0x302de4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[22], ctx->f[4]);
    // 0x302de8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x302de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302dec: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x302decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302df0: 0x46040882  mul.s       $f2, $f1, $f4
    ctx->pc = 0x302df0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x302df4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x302df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x302df8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x302df8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x302dfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x302DFCu;
    {
        const bool branch_taken_0x302dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DFCu;
        // 0x302e00: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302dfc) {
            ctx->pc = 0x302E10u;
            goto label_302e10;
        }
    }
    ctx->pc = 0x302E04u;
    // 0x302e04: 0x0  nop
    ctx->pc = 0x302e04u;
    // NOP
label_302e08:
    // 0x302e08: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x302e08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x302e0c: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x302e0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_302e10:
    // 0x302e10: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x302e10u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x302e14: 0x4bf4842a  vmul.xyzw   $vf16, $vf16, $vf20
    ctx->pc = 0x302e14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302e18: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x302e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x302e1c: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x302e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x302e20: 0xd8d00000  lqc2        $vf16, 0x0($a2)
    ctx->pc = 0x302e20u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x302e24: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x302e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x302e28: 0xd8ff0000  lqc2        $vf31, 0x0($a3)
    ctx->pc = 0x302e28u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x302e2c: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x302e2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302e30: 0x4bc1fc08  vmaddx.xyz  $vf16, $vf31, $vf1x
    ctx->pc = 0x302e30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302e34: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x302e34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302e38: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x302e38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302e3c: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x302e3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302e40: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x302E40u;
    {
        const bool branch_taken_0x302e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E40u;
        // 0x302e44: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w (Delay Slot)
        { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e40) {
            ctx->pc = 0x303074u;
            goto label_303074;
        }
    }
    ctx->pc = 0x302E48u;
label_302e48:
    // 0x302e48: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x302e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
label_302e4c:
    // 0x302e4c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x302E4Cu;
    {
        const bool branch_taken_0x302e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E4Cu;
        // 0x302e50: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e4c) {
            ctx->pc = 0x302F60u;
            goto label_302f60;
        }
    }
    ctx->pc = 0x302E54u;
    // 0x302e54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x302E54u;
    {
        const bool branch_taken_0x302e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E54u;
        // 0x302e58: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e54) {
            ctx->pc = 0x302E70u;
            goto label_302e70;
        }
    }
    ctx->pc = 0x302E5Cu;
    // 0x302e5c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x302e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302e60: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x302e60u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x302e64: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x302e64u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x302e68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x302E68u;
    {
        const bool branch_taken_0x302e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E68u;
        // 0x302e6c: 0xdbb00000  lqc2        $vf16, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e68) {
            ctx->pc = 0x302E84u;
            goto label_302e84;
        }
    }
    ctx->pc = 0x302E70u;
label_302e70:
    // 0x302e70: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x302e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x302e74: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x302e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302e78: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x302e78u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x302e7c: 0x46001883  div.s       $f2, $f3, $f0
    ctx->pc = 0x302e7cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[0];
    // 0x302e80: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x302e80u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_302e84:
    // 0x302e84: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x302e84u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x302e88: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x302e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302e8c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x302e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302e90: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x302e90u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x302e94: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x302e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302e98: 0x460108dc  madd.s      $f3, $f1, $f1
    ctx->pc = 0x302e98u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x302e9c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x302e9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302ea0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x302ea0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x302ea4: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x302ea4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302ea8: 0x4bc1fc0c  vmsubx.xyz  $vf16, $vf31, $vf1x
    ctx->pc = 0x302ea8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302eac: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x302eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302eb0: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x302eb0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x302eb4: 0x4bc081ff  .word       0x4BC081FF                   # vclipw.xyz  $vf16, $vf0w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x302eb4u;
    { __m128 fs = ctx->vu0_vf[16]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x302eb8: 0xf8d00000  sqc2        $vf16, 0x0($a2)
    ctx->pc = 0x302eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x302ebc: 0x4a0002ff  vnop
    ctx->pc = 0x302ebcu;
    // NOP operation, no action needed for VU0
    // 0x302ec0: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x302ec0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x302ec4: 0x4a0002ff  vnop
    ctx->pc = 0x302ec4u;
    // NOP operation, no action needed for VU0
    // 0x302ec8: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x302ec8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x302ecc: 0x30420033  andi        $v0, $v0, 0x33
    ctx->pc = 0x302eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)51);
    // 0x302ed0: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x302ED0u;
    {
        const bool branch_taken_0x302ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302ED0u;
        // 0x302ed4: 0x30820030  andi        $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ed0) {
            ctx->pc = 0x302F64u;
            goto label_302f64;
        }
    }
    ctx->pc = 0x302ED8u;
    // 0x302ed8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x302ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302edc: 0x46080142  mul.s       $f5, $f0, $f8
    ctx->pc = 0x302edcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x302ee0: 0x46032003  div.s       $f0, $f4, $f3
    ctx->pc = 0x302ee0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[3];
    // 0x302ee4: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x302ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302ee8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x302EE8u;
    {
        const bool branch_taken_0x302ee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x302EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302EE8u;
        // 0x302eec: 0xe7a50034  swc1        $f5, 0x34($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ee8) {
            ctx->pc = 0x302F20u;
            goto label_302f20;
        }
    }
    ctx->pc = 0x302EF0u;
    // 0x302ef0: 0x0  nop
    ctx->pc = 0x302ef0u;
    // NOP
    // 0x302ef4: 0x0  nop
    ctx->pc = 0x302ef4u;
    // NOP
    // 0x302ef8: 0x46000104  c1          0x104
    ctx->pc = 0x302ef8u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x302efc: 0x4604b101  sub.s       $f4, $f22, $f4
    ctx->pc = 0x302efcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[22], ctx->f[4]);
    // 0x302f00: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x302f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302f04: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x302f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302f08: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x302f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x302f0c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x302f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x302f10: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x302f10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x302f14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x302F14u;
    {
        const bool branch_taken_0x302f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F14u;
        // 0x302f18: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f14) {
            ctx->pc = 0x302F28u;
            goto label_302f28;
        }
    }
    ctx->pc = 0x302F1Cu;
    // 0x302f1c: 0x0  nop
    ctx->pc = 0x302f1cu;
    // NOP
label_302f20:
    // 0x302f20: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x302f20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x302f24: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x302f24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_302f28:
    // 0x302f28: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x302f28u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x302f2c: 0x4bf4842a  vmul.xyzw   $vf16, $vf16, $vf20
    ctx->pc = 0x302f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302f30: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x302f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x302f34: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x302f34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x302f38: 0xd8d00000  lqc2        $vf16, 0x0($a2)
    ctx->pc = 0x302f38u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x302f3c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x302f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x302f40: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x302f40u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x302f44: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x302f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302f48: 0x4bc1fc08  vmaddx.xyz  $vf16, $vf31, $vf1x
    ctx->pc = 0x302f48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302f4c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x302f4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302f50: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x302f50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302f54: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x302f54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x302f58: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x302F58u;
    {
        const bool branch_taken_0x302f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F58u;
        // 0x302f5c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w (Delay Slot)
        { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f58) {
            ctx->pc = 0x303074u;
            goto label_303074;
        }
    }
    ctx->pc = 0x302F60u;
label_302f60:
    // 0x302f60: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x302f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
label_302f64:
    // 0x302f64: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x302F64u;
    {
        const bool branch_taken_0x302f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F64u;
        // 0x302f68: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f64) {
            ctx->pc = 0x303080u;
            goto label_303080;
        }
    }
    ctx->pc = 0x302F6Cu;
    // 0x302f6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x302F6Cu;
    {
        const bool branch_taken_0x302f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F6Cu;
        // 0x302f70: 0xc7a20008  lwc1        $f2, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f6c) {
            ctx->pc = 0x302F88u;
            goto label_302f88;
        }
    }
    ctx->pc = 0x302F74u;
    // 0x302f74: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x302f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302f78: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x302f78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x302f7c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x302f7cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x302f80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x302F80u;
    {
        const bool branch_taken_0x302f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F80u;
        // 0x302f84: 0xdbb00000  lqc2        $vf16, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f80) {
            ctx->pc = 0x302F9Cu;
            goto label_302f9c;
        }
    }
    ctx->pc = 0x302F88u;
label_302f88:
    // 0x302f88: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x302f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x302f8c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x302f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302f90: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x302f90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x302f94: 0x46001883  div.s       $f2, $f3, $f0
    ctx->pc = 0x302f94u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[0];
    // 0x302f98: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x302f98u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_302f9c:
    // 0x302f9c: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x302f9cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x302fa0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x302fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302fa4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x302fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302fa8: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x302fa8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x302fac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x302facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302fb0: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x302fb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x302fb4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x302fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302fb8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x302fb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x302fbc: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x302fbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x302fc0: 0x4bc1fc0c  vmsubx.xyz  $vf16, $vf31, $vf1x
    ctx->pc = 0x302fc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x302fc4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x302fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302fc8: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x302fc8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x302fcc: 0x4bc081ff  .word       0x4BC081FF                   # vclipw.xyz  $vf16, $vf0w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x302fccu;
    { __m128 fs = ctx->vu0_vf[16]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x302fd0: 0xf8d00000  sqc2        $vf16, 0x0($a2)
    ctx->pc = 0x302fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x302fd4: 0x4a0002ff  vnop
    ctx->pc = 0x302fd4u;
    // NOP operation, no action needed for VU0
    // 0x302fd8: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x302fd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x302fdc: 0x4a0002ff  vnop
    ctx->pc = 0x302fdcu;
    // NOP operation, no action needed for VU0
    // 0x302fe0: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x302fe0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x302fe4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x302fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x302fe8: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x302FE8u;
    {
        const bool branch_taken_0x302fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FE8u;
        // 0x302fec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302fe8) {
            ctx->pc = 0x303084u;
            goto label_303084;
        }
    }
    ctx->pc = 0x302FF0u;
    // 0x302ff0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x302ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302ff4: 0x46080142  mul.s       $f5, $f0, $f8
    ctx->pc = 0x302ff4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x302ff8: 0x46012003  div.s       $f0, $f4, $f1
    ctx->pc = 0x302ff8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[1];
    // 0x302ffc: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x302ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303000: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x303000u;
    {
        const bool branch_taken_0x303000 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x303004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303000u;
        // 0x303004: 0xe7a50038  swc1        $f5, 0x38($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303000) {
            ctx->pc = 0x303038u;
            goto label_303038;
        }
    }
    ctx->pc = 0x303008u;
    // 0x303008: 0x0  nop
    ctx->pc = 0x303008u;
    // NOP
    // 0x30300c: 0x0  nop
    ctx->pc = 0x30300cu;
    // NOP
    // 0x303010: 0x46000104  c1          0x104
    ctx->pc = 0x303010u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x303014: 0x4604b101  sub.s       $f4, $f22, $f4
    ctx->pc = 0x303014u;
    ctx->f[4] = FPU_SUB_S(ctx->f[22], ctx->f[4]);
    // 0x303018: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x303018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30301c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x30301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303020: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x303020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x303024: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x303024u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x303028: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x303028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30302c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30302Cu;
    {
        const bool branch_taken_0x30302c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30302Cu;
        // 0x303030: 0xe7a20034  swc1        $f2, 0x34($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30302c) {
            ctx->pc = 0x303040u;
            goto label_303040;
        }
    }
    ctx->pc = 0x303034u;
    // 0x303034: 0x0  nop
    ctx->pc = 0x303034u;
    // NOP
label_303038:
    // 0x303038: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x303038u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x30303c: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x30303cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_303040:
    // 0x303040: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x303040u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x303044: 0x4bf4842a  vmul.xyzw   $vf16, $vf16, $vf20
    ctx->pc = 0x303044u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x303048: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x303048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30304c: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x30304cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x303050: 0xd8d00000  lqc2        $vf16, 0x0($a2)
    ctx->pc = 0x303050u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x303054: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x303054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x303058: 0xd8bf0000  lqc2        $vf31, 0x0($a1)
    ctx->pc = 0x303058u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30305c: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x30305cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x303060: 0x4bc1fc08  vmaddx.xyz  $vf16, $vf31, $vf1x
    ctx->pc = 0x303060u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x303064: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x303064u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303068: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x303068u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30306c: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x30306cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303070: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x303070u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
label_303074:
    // 0x303074: 0xfa900000  sqc2        $vf16, 0x0($s4)
    ctx->pc = 0x303074u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x303078: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x303078u;
    {
        const bool branch_taken_0x303078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303078u;
        // 0x30307c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303078) {
            ctx->pc = 0x303084u;
            goto label_303084;
        }
    }
    ctx->pc = 0x303080u;
label_303080:
    // 0x303080: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x303080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303084:
    // 0x303084: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x303084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x303088: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x303088u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x30308c: 0xafa70094  sw          $a3, 0x94($sp)
    ctx->pc = 0x30308cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 7));
label_303090:
    // 0x303090: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x303090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_303094:
    // 0x303094: 0x27390004  addiu       $t9, $t9, 0x4
    ctx->pc = 0x303094u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
label_303098:
    // 0x303098: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x303098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30309c: 0x1c40fa9e  bgtz        $v0, . + 4 + (-0x562 << 2)
    ctx->pc = 0x30309Cu;
    {
        const bool branch_taken_0x30309c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3030A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30309Cu;
        // 0x3030a0: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30309c) {
            ctx->pc = 0x301B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301b18;
        }
    }
    ctx->pc = 0x3030A4u;
label_3030a4:
    // 0x3030a4: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x3030a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x3030a8: 0x10600080  beqz        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x3030A8u;
    {
        const bool branch_taken_0x3030a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3030ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030A8u;
        // 0x3030ac: 0x8fa40098  lw          $a0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3030a8) {
            ctx->pc = 0x3032ACu;
            goto label_3032ac;
        }
    }
    ctx->pc = 0x3030B0u;
    // 0x3030b0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x3030b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3030b4: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x3030b4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3030b8: 0xd8b10000  lqc2        $vf17, 0x0($a1)
    ctx->pc = 0x3030b8u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3030bc: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x3030bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3030c0: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x3030c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3030c4: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x3030c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x3030c8: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x3030c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3030cc: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x3030ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3030d0: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x3030d0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3030d4: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x3030d4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x3030d8: 0xdad00000  lqc2        $vf16, 0x0($s6)
    ctx->pc = 0x3030d8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3030dc: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x3030dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3030e0: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x3030e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3030e4: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x3030e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3030e8: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x3030e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3030ec: 0xfad00000  sqc2        $vf16, 0x0($s6)
    ctx->pc = 0x3030ecu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3030f0: 0xdad00000  lqc2        $vf16, 0x0($s6)
    ctx->pc = 0x3030f0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3030f4: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x3030f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3030f8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3030f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3030fc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3030fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x303100: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x303100u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x303104: 0x4a0003bf  vwaitq
    ctx->pc = 0x303104u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x303108: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x303108u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x30310c: 0xfad00000  sqc2        $vf16, 0x0($s6)
    ctx->pc = 0x30310cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x303110: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x303110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x303114: 0xafb60098  sw          $s6, 0x98($sp)
    ctx->pc = 0x303114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 22));
    // 0x303118: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x303118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30311c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x30311cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x303120: 0xc6cd0004  lwc1        $f13, 0x4($s6)
    ctx->pc = 0x303120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x303124: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x303124u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x303128: 0x460d0344  c1          0xD0344
    ctx->pc = 0x303128u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x30312c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x30312cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x303130: 0xc64c00c8  lwc1        $f12, 0xC8($s2)
    ctx->pc = 0x303130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303134: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x303134u;
    SET_GPR_U32(ctx, 31, 0x30313Cu);
    ctx->pc = 0x303138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303134u;
    // 0x303138: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x303134u, 0x30313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30313Cu;
label_30313c:
    // 0x30313c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x30313cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x303140: 0xc64c00c4  lwc1        $f12, 0xC4($s2)
    ctx->pc = 0x303140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303144: 0xc64d00c0  lwc1        $f13, 0xC0($s2)
    ctx->pc = 0x303144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x303148: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x303148u;
    SET_GPR_U32(ctx, 31, 0x303150u);
    ctx->pc = 0x30314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303148u;
    // 0x30314c: 0xe64000d4  swc1        $f0, 0xD4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x303148u, 0x303150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303150u;
label_303150:
    // 0x303150: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x303150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x303154: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x303154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
    // 0x303158: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x303158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x30315c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30315cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303160: 0xc0b7478  jal         func_2DD1E0
    ctx->pc = 0x303160u;
    SET_GPR_U32(ctx, 31, 0x303168u);
    ctx->pc = 0x303164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303160u;
    // 0x303164: 0x8fa6008c  lw          $a2, 0x8C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD1E0u, 0x303160u, 0x303168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303168u;
label_303168:
    // 0x303168: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x303168u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x30316c: 0xdaa50010  lqc2        $vf5, 0x10($s5)
    ctx->pc = 0x30316cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x303170: 0xdaa60020  lqc2        $vf6, 0x20($s5)
    ctx->pc = 0x303170u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x303174: 0xdaa70030  lqc2        $vf7, 0x30($s5)
    ctx->pc = 0x303174u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x303178: 0xda480000  lqc2        $vf8, 0x0($s2)
    ctx->pc = 0x303178u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30317c: 0xda490010  lqc2        $vf9, 0x10($s2)
    ctx->pc = 0x30317cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x303180: 0xda4a0020  lqc2        $vf10, 0x20($s2)
    ctx->pc = 0x303180u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x303184: 0xda4b0030  lqc2        $vf11, 0x30($s2)
    ctx->pc = 0x303184u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x303188: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x303188u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30318c: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x30318cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303190: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x303190u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303194: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x303194u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x303198: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x303198u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30319c: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x30319cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3031a0: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x3031a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3031a4: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x3031a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3031a8: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x3031a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3031ac: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x3031acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3031b0: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x3031b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3031b4: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x3031b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3031b8: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x3031b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3031bc: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x3031bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3031c0: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x3031c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3031c4: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x3031c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3031c8: 0xfaa40000  sqc2        $vf4, 0x0($s5)
    ctx->pc = 0x3031c8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3031cc: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x3031ccu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3031d0: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x3031d0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x3031d4: 0xfaa70030  sqc2        $vf7, 0x30($s5)
    ctx->pc = 0x3031d4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x3031d8: 0x7a4200e0  lq          $v0, 0xE0($s2)
    ctx->pc = 0x3031d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x3031dc: 0x8fb50060  lw          $s5, 0x60($sp)
    ctx->pc = 0x3031dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3031e0: 0x7e4200b0  sq          $v0, 0xB0($s2)
    ctx->pc = 0x3031e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 176), GPR_VEC(ctx, 2));
    // 0x3031e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3031e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3031e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3031e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3031ec: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x3031ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3031f0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x3031f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3031f4: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x3031f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3031f8: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x3031f8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3031fc: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x3031fcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x303200: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x303200u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303204: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x303204u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x303208: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x303208u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x30320c: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x30320cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x303210: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x303210u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303214: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x303214u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303218: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x303218u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30321c: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x30321cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x303220: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x303220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303224: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x303224u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303228: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x303228u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30322c: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x30322cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x303230: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x303230u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303234: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x303234u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303238: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x303238u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30323c: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x30323cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x303240: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x303240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303244: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x303244u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303248: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x303248u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30324c: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x30324cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x303250: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x303250u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x303254: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x303254u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x303258: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x303258u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x30325c: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x30325cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x303260: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x303260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x303264: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x303264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303268: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x303268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x30326c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x30326cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x303270: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x303270u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303274: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x303274u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x303278: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x303278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30327c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x30327cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x303280: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x303280u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x303284: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x303284u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x303288: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x303288u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x30328c: 0x8fb40084  lw          $s4, 0x84($sp)
    ctx->pc = 0x30328cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x303290: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x303290u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303294: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x303294u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x303298: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x303298u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30329c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x30329cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3032a0: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x3032a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3032a4: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x3032a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3032a8: 0xfa900000  sqc2        $vf16, 0x0($s4)
    ctx->pc = 0x3032a8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_3032ac:
    // 0x3032ac: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x3032acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_3032b0:
    // 0x3032b0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3032b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3032b4: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x3032B4u;
    {
        const bool branch_taken_0x3032b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3032B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032B4u;
        // 0x3032b8: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032b4) {
            ctx->pc = 0x303518u;
            goto label_303518;
        }
    }
    ctx->pc = 0x3032BCu;
    // 0x3032bc: 0xc64000f4  lwc1        $f0, 0xF4($s2)
    ctx->pc = 0x3032bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3032c0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x3032c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3032c4: 0x45000096  bc1f        . + 4 + (0x96 << 2)
    ctx->pc = 0x3032C4u;
    {
        const bool branch_taken_0x3032c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3032C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032C4u;
        // 0x3032c8: 0x8fa50058  lw          $a1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032c4) {
            ctx->pc = 0x303520u;
            goto label_303520;
        }
    }
    ctx->pc = 0x3032CCu;
    // 0x3032cc: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x3032ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3032d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3032d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3032d4: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x3032d4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3032d8: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x3032d8u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3032dc: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x3032dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3032e0: 0xf8f00000  sqc2        $vf16, 0x0($a3)
    ctx->pc = 0x3032e0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3032e4: 0xae4000c4  sw          $zero, 0xC4($s2)
    ctx->pc = 0x3032e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
    // 0x3032e8: 0xdad00000  lqc2        $vf16, 0x0($s6)
    ctx->pc = 0x3032e8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3032ec: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x3032ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3032f0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3032f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3032f4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3032f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3032f8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3032f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3032fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x3032fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x303300: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x303300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x303304: 0xfad00000  sqc2        $vf16, 0x0($s6)
    ctx->pc = 0x303304u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x303308: 0xc6410114  lwc1        $f1, 0x114($s2)
    ctx->pc = 0x303308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30330c: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x30330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303310: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x303310u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x303314: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x303314u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x303318: 0x4601081d  msub.s      $f0, $f1, $f1
    ctx->pc = 0x303318u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x30331c: 0x46000004  c1          0x4
    ctx->pc = 0x30331cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x303320: 0xdad00000  lqc2        $vf16, 0x0($s6)
    ctx->pc = 0x303320u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x303324: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x303324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x303328: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x303328u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x30332c: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x30332cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x303330: 0xfad00000  sqc2        $vf16, 0x0($s6)
    ctx->pc = 0x303330u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x303334: 0xe64100c4  swc1        $f1, 0xC4($s2)
    ctx->pc = 0x303334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x303338: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x303338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x30333c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x30333cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303340: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x303340u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x303344: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x303344u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x303348: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x303348u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x30334c: 0xdad00000  lqc2        $vf16, 0x0($s6)
    ctx->pc = 0x30334cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x303350: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x303350u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303354: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x303354u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303358: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x303358u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30335c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x30335cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x303360: 0xfad00000  sqc2        $vf16, 0x0($s6)
    ctx->pc = 0x303360u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x303364: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x303364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x303368: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x303368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30336c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x30336cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x303370: 0xc6cd0004  lwc1        $f13, 0x4($s6)
    ctx->pc = 0x303370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x303374: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x303374u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x303378: 0x460d0344  c1          0xD0344
    ctx->pc = 0x303378u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x30337c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x30337cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x303380: 0xc64c00c8  lwc1        $f12, 0xC8($s2)
    ctx->pc = 0x303380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303384: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x303384u;
    SET_GPR_U32(ctx, 31, 0x30338Cu);
    ctx->pc = 0x303388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303384u;
    // 0x303388: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x303384u, 0x30338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30338Cu;
label_30338c:
    // 0x30338c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x30338cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x303390: 0xc64c00c4  lwc1        $f12, 0xC4($s2)
    ctx->pc = 0x303390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303394: 0xc64d00c0  lwc1        $f13, 0xC0($s2)
    ctx->pc = 0x303394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x303398: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x303398u;
    SET_GPR_U32(ctx, 31, 0x3033A0u);
    ctx->pc = 0x30339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303398u;
    // 0x30339c: 0xe64000d4  swc1        $f0, 0xD4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x303398u, 0x3033A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033A0u;
label_3033a0:
    // 0x3033a0: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x3033a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x3033a4: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x3033a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
    // 0x3033a8: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x3033a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x3033ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3033acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3033b0: 0xc0b7478  jal         func_2DD1E0
    ctx->pc = 0x3033B0u;
    SET_GPR_U32(ctx, 31, 0x3033B8u);
    ctx->pc = 0x3033B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3033B0u;
    // 0x3033b4: 0x8fa6008c  lw          $a2, 0x8C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD1E0u, 0x3033B0u, 0x3033B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033B8u;
label_3033b8:
    // 0x3033b8: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x3033b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3033bc: 0xdaa50010  lqc2        $vf5, 0x10($s5)
    ctx->pc = 0x3033bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x3033c0: 0xdaa60020  lqc2        $vf6, 0x20($s5)
    ctx->pc = 0x3033c0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x3033c4: 0xdaa70030  lqc2        $vf7, 0x30($s5)
    ctx->pc = 0x3033c4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x3033c8: 0xda480000  lqc2        $vf8, 0x0($s2)
    ctx->pc = 0x3033c8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3033cc: 0xda490010  lqc2        $vf9, 0x10($s2)
    ctx->pc = 0x3033ccu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3033d0: 0xda4a0020  lqc2        $vf10, 0x20($s2)
    ctx->pc = 0x3033d0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3033d4: 0xda4b0030  lqc2        $vf11, 0x30($s2)
    ctx->pc = 0x3033d4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3033d8: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x3033d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3033dc: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x3033dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3033e0: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x3033e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3033e4: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x3033e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3033e8: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x3033e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3033ec: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x3033ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3033f0: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x3033f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3033f4: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x3033f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3033f8: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x3033f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3033fc: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x3033fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303400: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x303400u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303404: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x303404u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x303408: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x303408u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30340c: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x30340cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303410: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x303410u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303414: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x303414u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x303418: 0xfaa40000  sqc2        $vf4, 0x0($s5)
    ctx->pc = 0x303418u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30341c: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x30341cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x303420: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x303420u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x303424: 0xfaa70030  sqc2        $vf7, 0x30($s5)
    ctx->pc = 0x303424u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x303428: 0x7a4200e0  lq          $v0, 0xE0($s2)
    ctx->pc = 0x303428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x30342c: 0x7e4200b0  sq          $v0, 0xB0($s2)
    ctx->pc = 0x30342cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 176), GPR_VEC(ctx, 2));
    // 0x303430: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x303430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x303434: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x303434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x303438: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x303438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30343c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x30343cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x303440: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x303440u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x303444: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x303444u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x303448: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x303448u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x30344c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x30344cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303450: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x303450u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x303454: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x303454u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x303458: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x303458u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x30345c: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x30345cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303460: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x303460u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303464: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x303464u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303468: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x303468u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x30346c: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x30346cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303470: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x303470u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303474: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x303474u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303478: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x303478u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x30347c: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x30347cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303480: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x303480u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303484: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x303484u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303488: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x303488u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x30348c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x30348cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303490: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x303490u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303494: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x303494u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x303498: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x303498u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x30349c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x30349cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3034a0: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x3034a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3034a4: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x3034a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x3034a8: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x3034a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x3034ac: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3034acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3034b0: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x3034b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3034b4: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x3034b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x3034b8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x3034b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3034bc: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x3034bcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3034c0: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x3034c0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3034c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3034c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3034c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3034c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3034cc: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x3034ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3034d0: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x3034d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3034d4: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x3034d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3034d8: 0x8fa70084  lw          $a3, 0x84($sp)
    ctx->pc = 0x3034d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x3034dc: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x3034dcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3034e0: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x3034e0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3034e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3034e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3034e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3034e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3034ec: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x3034ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3034f0: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x3034f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3034f4: 0xf8f00000  sqc2        $vf16, 0x0($a3)
    ctx->pc = 0x3034f4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3034f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3034f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3034fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3034FCu;
    {
        const bool branch_taken_0x3034fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034FCu;
        // 0x303500: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034fc) {
            ctx->pc = 0x303524u;
            goto label_303524;
        }
    }
    ctx->pc = 0x303504u;
    // 0x303504: 0x0  nop
    ctx->pc = 0x303504u;
    // NOP
label_303508:
    // 0x303508: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x303508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30350c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30350Cu;
    {
        const bool branch_taken_0x30350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30350Cu;
        // 0x303510: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30350c) {
            ctx->pc = 0x303524u;
            goto label_303524;
        }
    }
    ctx->pc = 0x303514u;
    // 0x303514: 0x0  nop
    ctx->pc = 0x303514u;
    // NOP
label_303518:
    // 0x303518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x303518u;
    {
        const bool branch_taken_0x303518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303518u;
        // 0x30351c: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303518) {
            ctx->pc = 0x303524u;
            goto label_303524;
        }
    }
    ctx->pc = 0x303520u;
label_303520:
    // 0x303520: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x303520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_303524:
    // 0x303524: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x303524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x303528: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30352c: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x30352cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x303530: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x303530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x303534: 0x1440f4b8  bnez        $v0, . + 4 + (-0xB48 << 2)
    ctx->pc = 0x303534u;
    {
        const bool branch_taken_0x303534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303534u;
        // 0x303538: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303534) {
            ctx->pc = 0x300818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300818;
        }
    }
    ctx->pc = 0x30353Cu;
label_30353c:
    // 0x30353c: 0x18e00059  blez        $a3, . + 4 + (0x59 << 2)
    ctx->pc = 0x30353Cu;
    {
        const bool branch_taken_0x30353c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x303540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30353Cu;
        // 0x303540: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30353c) {
            ctx->pc = 0x3036A4u;
            goto label_3036a4;
        }
    }
    ctx->pc = 0x303544u;
    // 0x303544: 0x0  nop
    ctx->pc = 0x303544u;
    // NOP
label_303548:
    // 0x303548: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x303548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x30354c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x30354cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x303550: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x303550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x303554: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x303554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x303558: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x303558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30355c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x303560: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x303560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x303564: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x303564u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x303568: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x303568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x30356c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x30356Cu;
    {
        const bool branch_taken_0x30356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30356Cu;
        // 0x303570: 0x26b20010  addiu       $s2, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30356c) {
            ctx->pc = 0x303690u;
            goto label_303690;
        }
    }
    ctx->pc = 0x303574u;
    // 0x303574: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x303574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x303578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30357c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30357cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x303580: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x303580u;
    {
        const bool branch_taken_0x303580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303580u;
        // 0x303584: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303580) {
            ctx->pc = 0x3035A4u;
            goto label_3035a4;
        }
    }
    ctx->pc = 0x303588u;
label_303588:
    // 0x303588: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x303588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x30358c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303590: 0x0  nop
    ctx->pc = 0x303590u;
    // NOP
    // 0x303594: 0x0  nop
    ctx->pc = 0x303594u;
    // NOP
    // 0x303598: 0x0  nop
    ctx->pc = 0x303598u;
    // NOP
    // 0x30359c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30359Cu;
    {
        const bool branch_taken_0x30359c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3035A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30359Cu;
        // 0x3035a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30359c) {
            ctx->pc = 0x303588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303588;
        }
    }
    ctx->pc = 0x3035A4u;
label_3035a4:
    // 0x3035a4: 0x10a0003b  beqz        $a1, . + 4 + (0x3B << 2)
    ctx->pc = 0x3035A4u;
    {
        const bool branch_taken_0x3035a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3035A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035A4u;
        // 0x3035a8: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3035a4) {
            ctx->pc = 0x303694u;
            goto label_303694;
        }
    }
    ctx->pc = 0x3035ACu;
    // 0x3035ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3035acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3035b0: 0x12600039  beqz        $s3, . + 4 + (0x39 << 2)
    ctx->pc = 0x3035B0u;
    {
        const bool branch_taken_0x3035b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3035B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035B0u;
        // 0x3035b4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3035b0) {
            ctx->pc = 0x303698u;
            goto label_303698;
        }
    }
    ctx->pc = 0x3035B8u;
    // 0x3035b8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3035b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3035bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3035bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3035c0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3035C0u;
    {
        const bool branch_taken_0x3035c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3035C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035C0u;
        // 0x3035c4: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3035c0) {
            ctx->pc = 0x3035E4u;
            goto label_3035e4;
        }
    }
    ctx->pc = 0x3035C8u;
label_3035c8:
    // 0x3035c8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3035c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3035cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3035ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3035d0: 0x0  nop
    ctx->pc = 0x3035d0u;
    // NOP
    // 0x3035d4: 0x0  nop
    ctx->pc = 0x3035d4u;
    // NOP
    // 0x3035d8: 0x0  nop
    ctx->pc = 0x3035d8u;
    // NOP
    // 0x3035dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3035DCu;
    {
        const bool branch_taken_0x3035dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3035E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035DCu;
        // 0x3035e0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3035dc) {
            ctx->pc = 0x3035C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3035c8;
        }
    }
    ctx->pc = 0x3035E4u;
label_3035e4:
    // 0x3035e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3035e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3035e8: 0x5a80002a  blezl       $s4, . + 4 + (0x2A << 2)
    ctx->pc = 0x3035E8u;
    {
        const bool branch_taken_0x3035e8 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x3035e8) {
            ctx->pc = 0x3035ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3035E8u;
            // 0x3035ec: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303694u;
            goto label_303694;
        }
    }
    ctx->pc = 0x3035F0u;
    // 0x3035f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3035F0u;
    {
        const bool branch_taken_0x3035f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3035f0) {
            ctx->pc = 0x303600u;
            goto label_303600;
        }
    }
    ctx->pc = 0x3035F8u;
label_3035f8:
    // 0x3035f8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3035f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3035fc: 0x0  nop
    ctx->pc = 0x3035fcu;
    // NOP
label_303600:
    // 0x303600: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x303600u;
    {
        const bool branch_taken_0x303600 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x303604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303600u;
        // 0x303604: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303600) {
            ctx->pc = 0x30367Cu;
            goto label_30367c;
        }
    }
    ctx->pc = 0x303608u;
    // 0x303608: 0x8cc30120  lw          $v1, 0x120($a2)
    ctx->pc = 0x303608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
    // 0x30360c: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30360Cu;
    {
        const bool branch_taken_0x30360c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30360c) {
            ctx->pc = 0x303610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30360Cu;
            // 0x303610: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303680u;
            goto label_303680;
        }
    }
    ctx->pc = 0x303614u;
    // 0x303614: 0x8cc20124  lw          $v0, 0x124($a2)
    ctx->pc = 0x303614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 292)));
    // 0x303618: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x303618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30361c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x30361cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x303620: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x303620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x303624: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x303624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x303628: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x303628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30362c: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x30362cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x303630: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x303630u;
    {
        const bool branch_taken_0x303630 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x303634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303630u;
        // 0x303634: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303630) {
            ctx->pc = 0x30367Cu;
            goto label_30367c;
        }
    }
    ctx->pc = 0x303638u;
    // 0x303638: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x303638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x30363c: 0xc64c003c  lwc1        $f12, 0x3C($s2)
    ctx->pc = 0x30363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303640: 0xc0c0164  jal         func_300590
    ctx->pc = 0x303640u;
    SET_GPR_U32(ctx, 31, 0x303648u);
    ctx->pc = 0x303644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303640u;
    // 0x303644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300590u, 0x303640u, 0x303648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303648u;
label_303648:
    // 0x303648: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x303648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30364c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x30364cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x303650: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x303650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303654: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x303654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303658: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x303658u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30365c: 0xc4a30028  lwc1        $f3, 0x28($a1)
    ctx->pc = 0x30365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303660: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x303660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x303664: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x303664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303668: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x303668u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30366c: 0xe4a20024  swc1        $f2, 0x24($a1)
    ctx->pc = 0x30366cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x303670: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x303670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303674: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x303674u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x303678: 0xe4a30028  swc1        $f3, 0x28($a1)
    ctx->pc = 0x303678u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_30367c:
    // 0x30367c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x30367cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_303680:
    // 0x303680: 0x1e80ffdd  bgtz        $s4, . + 4 + (-0x23 << 2)
    ctx->pc = 0x303680u;
    {
        const bool branch_taken_0x303680 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x303684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303680u;
        // 0x303684: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303680) {
            ctx->pc = 0x3035F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3035f8;
        }
    }
    ctx->pc = 0x303688u;
    // 0x303688: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x303688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30368c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x30368cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_303690:
    // 0x303690: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x303690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_303694:
    // 0x303694: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x303694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_303698:
    // 0x303698: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x303698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x30369c: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x30369Cu;
    {
        const bool branch_taken_0x30369c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3036A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30369Cu;
        // 0x3036a0: 0xafa3005c  sw          $v1, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30369c) {
            ctx->pc = 0x303548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303548;
        }
    }
    ctx->pc = 0x3036A4u;
label_3036a4:
    // 0x3036a4: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x3036a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3036a8: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3036A8u;
    {
        const bool branch_taken_0x3036a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3036ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036A8u;
        // 0x3036ac: 0x24e4fffe  addiu       $a0, $a3, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036a8) {
            ctx->pc = 0x30375Cu;
            goto label_30375c;
        }
    }
    ctx->pc = 0x3036B0u;
    // 0x3036b0: 0x480002a  bltz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3036B0u;
    {
        const bool branch_taken_0x3036b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3036B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036B0u;
        // 0x3036b4: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036b0) {
            ctx->pc = 0x30375Cu;
            goto label_30375c;
        }
    }
    ctx->pc = 0x3036B8u;
    // 0x3036b8: 0xc7849588  lwc1        $f4, -0x6A78($gp)
    ctx->pc = 0x3036b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3036bc: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3036bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3036c0:
    // 0x3036c0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x3036c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3036c4: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3036c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3036c8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3036c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3036cc: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3036ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3036d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3036d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3036d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3036d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3036d8: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x3036d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3036dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3036dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3036e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3036e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3036e4: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x3036e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3036e8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x3036e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3036ec: 0xa3a821  addu        $s5, $a1, $v1
    ctx->pc = 0x3036ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3036f0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x3036f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3036f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3036f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3036f8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3036f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3036fc: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x3036fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x303700: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x303700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x303704: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x303704u;
    {
        const bool branch_taken_0x303704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x303708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303704u;
        // 0x303708: 0x26b20010  addiu       $s2, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303704) {
            ctx->pc = 0x303748u;
            goto label_303748;
        }
    }
    ctx->pc = 0x30370Cu;
    // 0x30370c: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x30370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303710: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x303710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303714: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x303714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x303718: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x303718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30371c: 0xc6430028  lwc1        $f3, 0x28($s2)
    ctx->pc = 0x30371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303720: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x303720u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x303724: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x303724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x303728: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x303728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30372c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x30372cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x303730: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x303730u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x303734: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x303734u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x303738: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x303738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30373c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x30373cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x303740: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x303740u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x303744: 0xe6430028  swc1        $f3, 0x28($s2)
    ctx->pc = 0x303744u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_303748:
    // 0x303748: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x303748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x30374c: 0x463ffdc  bgezl       $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x30374Cu;
    {
        const bool branch_taken_0x30374c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x30374c) {
            ctx->pc = 0x303750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30374Cu;
            // 0x303750: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3036C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3036c0;
        }
    }
    ctx->pc = 0x303754u;
    // 0x303754: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x303754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x303758: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x303758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30375c:
    // 0x30375c: 0x18e00027  blez        $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x30375Cu;
    {
        const bool branch_taken_0x30375c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x303760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30375Cu;
        // 0x303760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30375c) {
            ctx->pc = 0x3037FCu;
            goto label_3037fc;
        }
    }
    ctx->pc = 0x303764u;
    // 0x303764: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x303764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x303768: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x303768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30376c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x30376cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_303770:
    // 0x303770: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x303770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x303774: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x303774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x303778: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x303778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30377c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30377cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x303780: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x303780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x303784: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x303784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x303788: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x303788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x30378c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x30378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303790: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x303790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303794: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x303794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303798: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x303798u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x30379c: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x30379cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0])));
    // 0x3037a0: 0x460210dc  madd.s      $f3, $f2, $f2
    ctx->pc = 0x3037a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3037a4: 0x460300c4  c1          0x300C4
    ctx->pc = 0x3037a4u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x3037a8: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x3037a8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x3037ac: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3037acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3037b0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x3037B0u;
    {
        const bool branch_taken_0x3037b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3037B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037B0u;
        // 0x3037b4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3037b0) {
            ctx->pc = 0x3037F0u;
            goto label_3037f0;
        }
    }
    ctx->pc = 0x3037B8u;
    // 0x3037b8: 0x0  nop
    ctx->pc = 0x3037b8u;
    // NOP
    // 0x3037bc: 0x0  nop
    ctx->pc = 0x3037bcu;
    // NOP
    // 0x3037c0: 0x46002043  div.s       $f1, $f4, $f0
    ctx->pc = 0x3037c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[0];
    // 0x3037c4: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x3037c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3037c8: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x3037c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3037cc: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x3037ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3037d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3037d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3037d4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3037d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3037d8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3037d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3037dc: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x3037dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x3037e0: 0xe4620020  swc1        $f2, 0x20($v1)
    ctx->pc = 0x3037e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x3037e4: 0xe4630024  swc1        $f3, 0x24($v1)
    ctx->pc = 0x3037e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x3037e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3037e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3037ec: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3037ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3037f0:
    // 0x3037f0: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x3037f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3037f4: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3037F4u;
    {
        const bool branch_taken_0x3037f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3037F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037F4u;
        // 0x3037f8: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3037f4) {
            ctx->pc = 0x303770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303770;
        }
    }
    ctx->pc = 0x3037FCu;
label_3037fc:
    // 0x3037fc: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x3037FCu;
    SET_GPR_U32(ctx, 31, 0x303804u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x3037FCu, 0x303804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303804u;
label_303804:
    // 0x303804: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x303804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x303808: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x303808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30380c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x303810: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x303810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x303814: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x303814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x303818: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x303818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_30381c:
    // 0x30381c: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x30381cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_303820:
    // 0x303820: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x303820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x303824: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x303824u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x303828: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x303828u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x30382c: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x30382cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x303830: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x303830u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x303834: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x303834u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x303838: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x303838u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30383c: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x30383cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x303840: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x303840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x303844: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x303844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x303848: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x303848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30384c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x30384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x303850: 0x3e00008  jr          $ra
    ctx->pc = 0x303850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303850u;
        // 0x303854: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303858u;
}
