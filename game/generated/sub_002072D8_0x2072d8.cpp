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

// Function: sub_002072D8
// Address: 0x2072d8 - 0x207518
void sub_002072D8_0x2072d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002072D8_0x2072d8");
#endif

    switch (ctx->pc) {
        case 0x20732cu: goto label_20732c;
        case 0x207340u: goto label_207340;
        case 0x20739cu: goto label_20739c;
        case 0x2073c0u: goto label_2073c0;
        case 0x2073c8u: goto label_2073c8;
        case 0x2073f0u: goto label_2073f0;
        case 0x207410u: goto label_207410;
        case 0x207420u: goto label_207420;
        case 0x207434u: goto label_207434;
        case 0x2074a8u: goto label_2074a8;
        case 0x2074b0u: goto label_2074b0;
        default: break;
    }

    ctx->pc = 0x2072d8u;

    // 0x2072d8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2072d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2072dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2072dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2072e0: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x2072e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x2072e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2072e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2072e8: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x2072e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x2072ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2072ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2072f0: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x2072f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x2072f4: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x2072f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x2072f8: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x2072f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x2072fc: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x2072fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x207300: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x207300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x207304: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x207304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x207308: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x207308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x20730c: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x20730cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x207310: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x207310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x207314: 0x8e620894  lw          $v0, 0x894($s3)
    ctx->pc = 0x207314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2196)));
    // 0x207318: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x207318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x20731c: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x20731cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x207320: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x207320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x207324: 0xc081dea  jal         func_2077A8
    ctx->pc = 0x207324u;
    SET_GPR_U32(ctx, 31, 0x20732Cu);
    ctx->pc = 0x207328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207324u;
    // 0x207328: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2077A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2077A8u, 0x207324u, 0x20732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20732Cu;
label_20732c:
    // 0x20732c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20732cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x207330: 0x2449b530  addiu       $t1, $v0, -0x4AD0
    ctx->pc = 0x207330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948144));
    // 0x207334: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x207334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x207338: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x207338u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20733c: 0x0  nop
    ctx->pc = 0x20733cu;
    // NOP
label_207340:
    // 0x207340: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x207340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x207344: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x207344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x207348: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x207348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x20734c: 0x1033821  addu        $a3, $t0, $v1
    ctx->pc = 0x20734cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x207350: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x207350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207354: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x207354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x207358: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x207358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20735c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x20735cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x207360: 0x2a460006  slti        $a2, $s2, 0x6
    ctx->pc = 0x207360u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x207364: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x207364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x207368: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x207368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20736c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x207370: 0x78430070  lq          $v1, 0x70($v0)
    ctx->pc = 0x207370u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x207374: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x207374u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x207378: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x207378u;
    {
        const bool branch_taken_0x207378 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x20737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207378u;
        // 0x20737c: 0x7ce30000  sq          $v1, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207378) {
            ctx->pc = 0x207340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207340;
        }
    }
    ctx->pc = 0x207380u;
    // 0x207380: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x207380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x207384: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x207384u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x207388: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x207388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x20738c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20738Cu;
    {
        const bool branch_taken_0x20738c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20738c) {
            ctx->pc = 0x207390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20738Cu;
            // 0x207390: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2073A8u;
            goto label_2073a8;
        }
    }
    ctx->pc = 0x207394u;
    // 0x207394: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x207394u;
    SET_GPR_U32(ctx, 31, 0x20739Cu);
    ctx->pc = 0x1FC470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC470u, 0x207394u, 0x20739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20739Cu;
label_20739c:
    // 0x20739c: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x20739Cu;
    {
        const bool branch_taken_0x20739c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2073A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20739Cu;
        // 0x2073a0: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20739c) {
            ctx->pc = 0x2074E4u;
            goto label_2074e4;
        }
    }
    ctx->pc = 0x2073A4u;
    // 0x2073a4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2073a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2073a8:
    // 0x2073a8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2073a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2073ac: 0x245eb548  addiu       $fp, $v0, -0x4AB8
    ctx->pc = 0x2073acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948168));
    // 0x2073b0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2073b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2073b4: 0x27b70060  addiu       $s7, $sp, 0x60
    ctx->pc = 0x2073b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2073b8: 0x27b40130  addiu       $s4, $sp, 0x130
    ctx->pc = 0x2073b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2073bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2073bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2073c0:
    // 0x2073c0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2073c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2073c4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2073c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2073c8:
    // 0x2073c8: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x2073c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2073cc: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2073ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2073d0: 0x2e38821  addu        $s1, $s7, $v1
    ctx->pc = 0x2073d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2073d4: 0x3a38021  addu        $s0, $sp, $v1
    ctx->pc = 0x2073d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2073d8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2073d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2073dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2073dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2073e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2073e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2073e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2073e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2073e8: 0xc081b82  jal         func_206E08
    ctx->pc = 0x2073E8u;
    SET_GPR_U32(ctx, 31, 0x2073F0u);
    ctx->pc = 0x2073ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073E8u;
    // 0x2073ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206E08u, 0x2073E8u, 0x2073F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073F0u;
label_2073f0:
    // 0x2073f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2073F0u;
    {
        const bool branch_taken_0x2073f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2073F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073F0u;
        // 0x2073f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073f0) {
            ctx->pc = 0x207400u;
            goto label_207400;
        }
    }
    ctx->pc = 0x2073F8u;
    // 0x2073f8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2073f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2073fc: 0xafb50140  sw          $s5, 0x140($sp)
    ctx->pc = 0x2073fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 21));
label_207400:
    // 0x207400: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x207400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207404: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x207404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207408: 0xc084784  jal         func_211E10
    ctx->pc = 0x207408u;
    SET_GPR_U32(ctx, 31, 0x207410u);
    ctx->pc = 0x20740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207408u;
    // 0x20740c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x207408u, 0x207410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207410u;
label_207410:
    // 0x207410: 0xe7b4013c  swc1        $f20, 0x13C($sp)
    ctx->pc = 0x207410u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x207414: 0xe7b40134  swc1        $f20, 0x134($sp)
    ctx->pc = 0x207414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x207418: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x207418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20741c: 0x0  nop
    ctx->pc = 0x20741cu;
    // NOP
label_207420:
    // 0x207420: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x207420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x207424: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x207424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x207428: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x207428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20742c: 0xc084774  jal         func_211DD0
    ctx->pc = 0x20742Cu;
    SET_GPR_U32(ctx, 31, 0x207434u);
    ctx->pc = 0x207430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20742Cu;
    // 0x207430: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x20742Cu, 0x207434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207434u;
label_207434:
    // 0x207434: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x207434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x207438: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x207438u;
    {
        const bool branch_taken_0x207438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207438u;
        // 0x20743c: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207438) {
            ctx->pc = 0x207420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207420;
        }
    }
    ctx->pc = 0x207440u;
    // 0x207440: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x207440u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x207444: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x207444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x207448: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x207448u;
    {
        const bool branch_taken_0x207448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207448u;
        // 0x20744c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207448) {
            ctx->pc = 0x2073C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2073c8;
        }
    }
    ctx->pc = 0x207450u;
    // 0x207450: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x207450u;
    {
        const bool branch_taken_0x207450 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x207454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207450u;
        // 0x207454: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207450) {
            ctx->pc = 0x20746Cu;
            goto label_20746c;
        }
    }
    ctx->pc = 0x207458u;
    // 0x207458: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x207458u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x20745c: 0x2ac20064  slti        $v0, $s6, 0x64
    ctx->pc = 0x20745cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x207460: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x207460u;
    {
        const bool branch_taken_0x207460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207460) {
            ctx->pc = 0x207464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207460u;
            // 0x207464: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2073C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2073c0;
        }
    }
    ctx->pc = 0x207468u;
    // 0x207468: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x207468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_20746c:
    // 0x20746c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20746Cu;
    {
        const bool branch_taken_0x20746c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20746Cu;
        // 0x207470: 0x27b00120  addiu       $s0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20746c) {
            ctx->pc = 0x2074A8u;
            goto label_2074a8;
        }
    }
    ctx->pc = 0x207474u;
    // 0x207474: 0x86620148  lh          $v0, 0x148($s3)
    ctx->pc = 0x207474u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x207478: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x207478u;
    {
        const bool branch_taken_0x207478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207478u;
        // 0x20747c: 0x27a200c0  addiu       $v0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207478) {
            ctx->pc = 0x207498u;
            goto label_207498;
        }
    }
    ctx->pc = 0x207480u;
    // 0x207480: 0x8662009e  lh          $v0, 0x9E($s3)
    ctx->pc = 0x207480u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 158)));
    // 0x207484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207488: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x207488u;
    {
        const bool branch_taken_0x207488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x207488) {
            ctx->pc = 0x20748Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207488u;
            // 0x20748c: 0xa6630166  sh          $v1, 0x166($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 358), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207494u;
            goto label_207494;
        }
    }
    ctx->pc = 0x207490u;
    // 0x207490: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x207490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_207494:
    // 0x207494: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x207494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_207498:
    // 0x207498: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x207498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20749c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20749cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2074a0: 0xc084784  jal         func_211E10
    ctx->pc = 0x2074A0u;
    SET_GPR_U32(ctx, 31, 0x2074A8u);
    ctx->pc = 0x2074A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074A0u;
    // 0x2074a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2074A0u, 0x2074A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2074A8u;
label_2074a8:
    // 0x2074a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2074a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2074ac: 0x0  nop
    ctx->pc = 0x2074acu;
    // NOP
label_2074b0:
    // 0x2074b0: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x2074b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2074b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2074b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2074b8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2074b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2074bc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2074bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2074c0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2074c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2074c4: 0x2a450006  slti        $a1, $s2, 0x6
    ctx->pc = 0x2074c4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2074c8: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2074C8u;
    {
        const bool branch_taken_0x2074c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2074CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074C8u;
        // 0x2074cc: 0x7c6205d0  sq          $v0, 0x5D0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 1488), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074c8) {
            ctx->pc = 0x2074B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2074b0;
        }
    }
    ctx->pc = 0x2074D0u;
    // 0x2074d0: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x2074d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x2074d4: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x2074d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x2074d8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2074d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2074dc: 0x7e620650  sq          $v0, 0x650($s3)
    ctx->pc = 0x2074dcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 1616), GPR_VEC(ctx, 2));
    // 0x2074e0: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x2074e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_2074e4:
    // 0x2074e4: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x2074e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2074e8: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x2074e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2074ec: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x2074ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2074f0: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x2074f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2074f4: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x2074f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2074f8: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x2074f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2074fc: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x2074fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x207500: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x207500u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x207504: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x207504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x207508: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x207508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20750c: 0x3e00008  jr          $ra
    ctx->pc = 0x20750Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20750Cu;
        // 0x207510: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20750Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207514u;
    // 0x207514: 0x0  nop
    ctx->pc = 0x207514u;
    // NOP
    ctx->pc = 0x207518u;
}
