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

// Function: sub_004FC868
// Address: 0x4fc868 - 0x4fcba0
void sub_004FC868_0x4fc868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FC868_0x4fc868");
#endif

    switch (ctx->pc) {
        case 0x4fc944u: goto label_4fc944;
        case 0x4fc958u: goto label_4fc958;
        case 0x4fc970u: goto label_4fc970;
        case 0x4fc98cu: goto label_4fc98c;
        case 0x4fc9e0u: goto label_4fc9e0;
        default: break;
    }

    ctx->pc = 0x4fc868u;

    // 0x4fc868: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4fc868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4fc86c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4fc86cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc870: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x4fc870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x4fc874: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4fc874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc878: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x4fc878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x4fc87c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4fc87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fc880: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x4fc880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x4fc884: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x4fc884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x4fc888: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x4fc888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x4fc88c: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x4fc88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x4fc890: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x4fc890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x4fc894: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x4fc894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x4fc898: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x4fc898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x4fc89c: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x4fc89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x4fc8a0: 0x86150000  lh          $s5, 0x0($s0)
    ctx->pc = 0x4fc8a0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fc8a4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4fc8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4fc8a8: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x4fc8a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4fc8ac: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4fc8acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fc8b0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4fc8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4fc8b4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x4fc8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x4fc8b8: 0x2aa42000  slti        $a0, $s5, 0x2000
    ctx->pc = 0x4fc8b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x4fc8bc: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x4fc8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x4fc8c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4fc8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4fc8c4: 0x84f10000  lh          $s1, 0x0($a3)
    ctx->pc = 0x4fc8c4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4fc8c8: 0x108000a9  beqz        $a0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x4FC8C8u;
    {
        const bool branch_taken_0x4fc8c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC8C8u;
        // 0x4fc8cc: 0xafa30064  sw          $v1, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc8c8) {
            ctx->pc = 0x4FCB70u;
            goto label_4fcb70;
        }
    }
    ctx->pc = 0x4FC8D0u;
    // 0x4fc8d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4fc8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4fc8d4: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x4fc8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x4fc8d8: 0x7fa00010  sq          $zero, 0x10($sp)
    ctx->pc = 0x4fc8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 0));
    // 0x4fc8dc: 0x7fa00020  sq          $zero, 0x20($sp)
    ctx->pc = 0x4fc8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 0));
    // 0x4fc8e0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x4fc8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x4fc8e4: 0x84e40006  lh          $a0, 0x6($a3)
    ctx->pc = 0x4fc8e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x4fc8e8: 0x2a260002  slti        $a2, $s1, 0x2
    ctx->pc = 0x4fc8e8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4fc8ec: 0x84e30008  lh          $v1, 0x8($a3)
    ctx->pc = 0x4fc8ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4fc8f0: 0x84e5000a  lh          $a1, 0xA($a3)
    ctx->pc = 0x4fc8f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x4fc8f4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4fc8f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4fc8f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4fc8f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4fc8fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4fc8fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4fc900: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4fc900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4fc904: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4fc904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x4fc908: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4fc908u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4fc90c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4fc90cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4fc910: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4fc910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4fc914: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4fc914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x4fc918: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x4fc918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4fc91c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x4fc91cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x4fc920: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x4FC920u;
    {
        const bool branch_taken_0x4fc920 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC920u;
        // 0x4fc924: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc920) {
            ctx->pc = 0x4FC960u;
            goto label_4fc960;
        }
    }
    ctx->pc = 0x4FC928u;
    // 0x4fc928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4fc928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fc92c: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4FC92Cu;
    {
        const bool branch_taken_0x4fc92c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4FC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC92Cu;
        // 0x4fc930: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc92c) {
            ctx->pc = 0x4FC948u;
            goto label_4fc948;
        }
    }
    ctx->pc = 0x4FC934u;
    // 0x4fc934: 0x84e60018  lh          $a2, 0x18($a3)
    ctx->pc = 0x4fc934u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x4fc938: 0x24e4000c  addiu       $a0, $a3, 0xC
    ctx->pc = 0x4fc938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x4fc93c: 0xc13f0da  jal         func_4FC368
    ctx->pc = 0x4FC93Cu;
    SET_GPR_U32(ctx, 31, 0x4FC944u);
    ctx->pc = 0x4FC940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FC93Cu;
    // 0x4fc940: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FC368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FC368u, 0x4FC93Cu, 0x4FC944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FC944u;
label_4fc944:
    // 0x4fc944: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x4fc944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_4fc948:
    // 0x4fc948: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4fc948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc94c: 0x24a5cf60  addiu       $a1, $a1, -0x30A0
    ctx->pc = 0x4fc94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954848));
    // 0x4fc950: 0xc13f1c4  jal         func_4FC710
    ctx->pc = 0x4FC950u;
    SET_GPR_U32(ctx, 31, 0x4FC958u);
    ctx->pc = 0x4FC954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FC950u;
    // 0x4fc954: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FC710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FC710u, 0x4FC950u, 0x4FC958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FC958u;
label_4fc958:
    // 0x4fc958: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4FC958u;
    {
        const bool branch_taken_0x4fc958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc958) {
            ctx->pc = 0x4FC98Cu;
            goto label_4fc98c;
        }
    }
    ctx->pc = 0x4FC960u;
label_4fc960:
    // 0x4fc960: 0x84e60018  lh          $a2, 0x18($a3)
    ctx->pc = 0x4fc960u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x4fc964: 0x24e4000c  addiu       $a0, $a3, 0xC
    ctx->pc = 0x4fc964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x4fc968: 0xc13f0da  jal         func_4FC368
    ctx->pc = 0x4FC968u;
    SET_GPR_U32(ctx, 31, 0x4FC970u);
    ctx->pc = 0x4FC96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FC968u;
    // 0x4fc96c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FC368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FC368u, 0x4FC968u, 0x4FC970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FC970u;
label_4fc970:
    // 0x4fc970: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4fc970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4fc974: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4FC974u;
    {
        const bool branch_taken_0x4fc974 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4FC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC974u;
        // 0x4fc978: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc974) {
            ctx->pc = 0x4FC98Cu;
            goto label_4fc98c;
        }
    }
    ctx->pc = 0x4FC97Cu;
    // 0x4fc97c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4fc97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc980: 0x24a5cf20  addiu       $a1, $a1, -0x30E0
    ctx->pc = 0x4fc980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954784));
    // 0x4fc984: 0xc13f1c4  jal         func_4FC710
    ctx->pc = 0x4FC984u;
    SET_GPR_U32(ctx, 31, 0x4FC98Cu);
    ctx->pc = 0x4FC988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FC984u;
    // 0x4fc988: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FC710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FC710u, 0x4FC984u, 0x4FC98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FC98Cu;
label_4fc98c:
    // 0x4fc98c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4fc98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4fc990: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4fc990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4fc994: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x4fc994u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc998: 0x1aa00074  blez        $s5, . + 4 + (0x74 << 2)
    ctx->pc = 0x4FC998u;
    {
        const bool branch_taken_0x4fc998 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x4FC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC998u;
        // 0x4fc99c: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc998) {
            ctx->pc = 0x4FCB6Cu;
            goto label_4fcb6c;
        }
    }
    ctx->pc = 0x4FC9A0u;
    // 0x4fc9a0: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x4fc9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
    // 0x4fc9a4: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x4fc9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x4fc9a8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4fc9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4fc9ac: 0x2472c748  addiu       $s2, $v1, -0x38B8
    ctx->pc = 0x4fc9acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952776));
    // 0x4fc9b0: 0x3c014441  lui         $at, 0x4441
    ctx->pc = 0x4fc9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17473 << 16));
    // 0x4fc9b4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x4fc9b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x4fc9b8: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x4fc9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x4fc9bc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x4fc9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4fc9c0: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x4fc9c0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x4fc9c4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x4fc9c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc9c8: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x4fc9c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4fc9cc: 0x26560004  addiu       $s6, $s2, 0x4
    ctx->pc = 0x4fc9ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4fc9d0: 0x26540008  addiu       $s4, $s2, 0x8
    ctx->pc = 0x4fc9d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x4fc9d4: 0x2653000c  addiu       $s3, $s2, 0xC
    ctx->pc = 0x4fc9d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x4fc9d8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4fc9d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fc9dc: 0x0  nop
    ctx->pc = 0x4fc9dcu;
    // NOP
label_4fc9e0:
    // 0x4fc9e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fc9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4fc9e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4fc9e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4fc9e8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4fc9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4fc9ec: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x4fc9ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4fc9f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fc9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4fc9f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4fc9f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4fc9f8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x4fc9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x4fc9fc: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x4fc9fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4fca00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fca00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4fca04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4fca04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4fca08: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x4fca08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4fca0c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x4fca0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x4fca10: 0xdaf00000  lqc2        $vf16, 0x0($s7)
    ctx->pc = 0x4fca10u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4fca14: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x4fca14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4fca18: 0xdbc50010  lqc2        $vf5, 0x10($fp)
    ctx->pc = 0x4fca18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x4fca1c: 0xdbc60020  lqc2        $vf6, 0x20($fp)
    ctx->pc = 0x4fca1cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x4fca20: 0xdbc70030  lqc2        $vf7, 0x30($fp)
    ctx->pc = 0x4fca20u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x4fca24: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x4fca24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4fca28: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x4fca28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4fca2c: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x4fca2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4fca30: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x4fca30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x4fca34: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x4fca34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x4fca38: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x4fca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4fca3c: 0x191900  sll         $v1, $t9, 4
    ctx->pc = 0x4fca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x4fca40: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4fca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4fca44: 0x737821  addu        $t7, $v1, $s3
    ctx->pc = 0x4fca44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4fca48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fca48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4fca4c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x4fca4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4fca50: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x4fca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4fca54: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x4fca54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x4fca58: 0x724821  addu        $t1, $v1, $s2
    ctx->pc = 0x4fca58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4fca5c: 0x2484c748  addiu       $a0, $a0, -0x38B8
    ctx->pc = 0x4fca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952776));
    // 0x4fca60: 0x765021  addu        $t2, $v1, $s6
    ctx->pc = 0x4fca60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x4fca64: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x4fca64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4fca68: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x4fca68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x4fca6c: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x4fca6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4fca70: 0x2484c750  addiu       $a0, $a0, -0x38B0
    ctx->pc = 0x4fca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952784));
    // 0x4fca74: 0x29020000  slti        $v0, $t0, 0x0
    ctx->pc = 0x4fca74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fca78: 0x745821  addu        $t3, $v1, $s4
    ctx->pc = 0x4fca78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4fca7c: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x4fca7cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x4fca80: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x4fca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4fca84: 0x81083  sra         $v0, $t0, 2
    ctx->pc = 0x4fca84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 2));
    // 0x4fca88: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x4fca88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x4fca8c: 0x30487fff  andi        $t0, $v0, 0x7FFF
    ctx->pc = 0x4fca8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4fca90: 0x3c020085  lui         $v0, 0x85
    ctx->pc = 0x4fca90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)133 << 16));
    // 0x4fca94: 0x2442c74c  addiu       $v0, $v0, -0x38B4
    ctx->pc = 0x4fca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952780));
    // 0x4fca98: 0x1e0882d  daddu       $s1, $t7, $zero
    ctx->pc = 0x4fca98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fca9c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x4fca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4fcaa0: 0x29027000  slti        $v0, $t0, 0x7000
    ctx->pc = 0x4fcaa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)28672) ? 1 : 0);
    // 0x4fcaa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fcaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4fcaa8: 0x24046fff  addiu       $a0, $zero, 0x6FFF
    ctx->pc = 0x4fcaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28671));
    // 0x4fcaac: 0x82400a  movz        $t0, $a0, $v0
    ctx->pc = 0x4fcaacu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x4fcab0: 0x28c40033  slti        $a0, $a2, 0x33
    ctx->pc = 0x4fcab0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x4fcab4: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x4fcab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x4fcab8: 0x335c02a  slt         $t8, $t9, $s5
    ctx->pc = 0x4fcab8u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x4fcabc: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x4fcabcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcac0: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x4fcac0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcac4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x4fcac4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x4fcac8: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fcac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4fcacc: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x4fcaccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x4fcad0: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x4fcad0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcad4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x4fcad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x4fcad8: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fcad8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4fcadc: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x4fcadcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4fcae0: 0x0  nop
    ctx->pc = 0x4fcae0u;
    // NOP
    // 0x4fcae4: 0x0  nop
    ctx->pc = 0x4fcae4u;
    // NOP
    // 0x4fcae8: 0x46003083  div.s       $f2, $f6, $f0
    ctx->pc = 0x4fcae8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[2] = ctx->f[6] / ctx->f[0];
    // 0x4fcaec: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4FCAECu;
    {
        const bool branch_taken_0x4fcaec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FCAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCAECu;
        // 0x4fcaf0: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcaec) {
            ctx->pc = 0x4FCB50u;
            goto label_4fcb50;
        }
    }
    ctx->pc = 0x4FCAF4u;
    // 0x4fcaf4: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x4fcaf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x4fcaf8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fcaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fcafc: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x4fcafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x4fcb00: 0x2442ced0  addiu       $v0, $v0, -0x3130
    ctx->pc = 0x4fcb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954704));
    // 0x4fcb04: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4fcb04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x4fcb08: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x4fcb08u;
    { uint32_t bits = FAST_READ32(0x56CED0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4fcb0c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4fcb0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4fcb10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4fcb10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4fcb14: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4fcb14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4fcb18: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x4fcb18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x4fcb1c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x4fcb1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x4fcb20: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fcb20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4fcb24: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x4fcb24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4fcb28: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fcb28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4fcb2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4fcb2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4fcb30: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x4fcb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4fcb34: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4fcb34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4fcb38: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x4fcb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x4fcb3c: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4fcb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4fcb40: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4fcb40u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4fcb44: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x4fcb44u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x4fcb48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4FCB48u;
    {
        const bool branch_taken_0x4fcb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FCB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCB48u;
        // 0x4fcb4c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcb48) {
            ctx->pc = 0x4FCB64u;
            goto label_4fcb64;
        }
    }
    ctx->pc = 0x4FCB50u;
label_4fcb50:
    // 0x4fcb50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4fcb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fcb54: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x4fcb54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x4fcb58: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x4fcb58u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x4fcb5c: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x4fcb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x4fcb60: 0xade50000  sw          $a1, 0x0($t7)
    ctx->pc = 0x4fcb60u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 5));
label_4fcb64:
    // 0x4fcb64: 0x5700ff9e  bnel        $t8, $zero, . + 4 + (-0x62 << 2)
    ctx->pc = 0x4FCB64u;
    {
        const bool branch_taken_0x4fcb64 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fcb64) {
            ctx->pc = 0x4FCB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FCB64u;
            // 0x4fcb68: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FC9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fc9e0;
        }
    }
    ctx->pc = 0x4FCB6Cu;
label_4fcb6c:
    // 0x4fcb6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4fcb6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fcb70:
    // 0x4fcb70: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x4fcb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4fcb74: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x4fcb74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4fcb78: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x4fcb78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4fcb7c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x4fcb7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4fcb80: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x4fcb80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4fcb84: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x4fcb84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x4fcb88: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x4fcb88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4fcb8c: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x4fcb8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x4fcb90: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x4fcb90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4fcb94: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x4fcb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x4fcb98: 0x3e00008  jr          $ra
    ctx->pc = 0x4FCB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FCB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCB98u;
        // 0x4fcb9c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FCB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FCBA0u;
}
