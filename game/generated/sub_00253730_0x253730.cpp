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

// Function: sub_00253730
// Address: 0x253730 - 0x2539a0
void sub_00253730_0x253730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253730_0x253730");
#endif

    switch (ctx->pc) {
        case 0x253784u: goto label_253784;
        case 0x253794u: goto label_253794;
        case 0x2537c8u: goto label_2537c8;
        case 0x2537e8u: goto label_2537e8;
        case 0x2537f4u: goto label_2537f4;
        case 0x253838u: goto label_253838;
        case 0x253848u: goto label_253848;
        case 0x253890u: goto label_253890;
        case 0x2538acu: goto label_2538ac;
        case 0x2538d0u: goto label_2538d0;
        case 0x2538d8u: goto label_2538d8;
        case 0x253938u: goto label_253938;
        case 0x253954u: goto label_253954;
        case 0x25396cu: goto label_25396c;
        default: break;
    }

    ctx->pc = 0x253730u;

    // 0x253730: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x253730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x253734: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x253734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x253738: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x253738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x25373c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x25373cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253740: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x253740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x253744: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x253744u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253748: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x253748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x25374c: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x25374cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x253750: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x253750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x253754: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x253754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x253758: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x253758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x25375c: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x25375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x253760: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x253760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x253764: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x253764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x253768: 0x24493278  addiu       $t1, $v0, 0x3278
    ctx->pc = 0x253768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 12920));
    // 0x25376c: 0x89230003  lwl         $v1, 0x3($t1)
    ctx->pc = 0x25376cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x253770: 0x99230000  lwr         $v1, 0x0($t1)
    ctx->pc = 0x253770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x253774: 0xaba300a3  swl         $v1, 0xA3($sp)
    ctx->pc = 0x253774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x253778: 0xbba300a0  swr         $v1, 0xA0($sp)
    ctx->pc = 0x253778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25377c: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x25377Cu;
    SET_GPR_U32(ctx, 31, 0x253784u);
    ctx->pc = 0x253780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25377Cu;
    // 0x253780: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x25377Cu, 0x253784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253784u;
label_253784:
    // 0x253784: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x253784u;
    {
        const bool branch_taken_0x253784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253784) {
            ctx->pc = 0x253788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253784u;
            // 0x253788: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25379Cu;
            goto label_25379c;
        }
    }
    ctx->pc = 0x25378Cu;
    // 0x25378c: 0xc08f110  jal         func_23C440
    ctx->pc = 0x25378Cu;
    SET_GPR_U32(ctx, 31, 0x253794u);
    ctx->pc = 0x23C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C440u, 0x25378Cu, 0x253794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253794u;
label_253794:
    // 0x253794: 0x12820075  beq         $s4, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x253794u;
    {
        const bool branch_taken_0x253794 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x253798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253794u;
        // 0x253798: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253794) {
            ctx->pc = 0x25396Cu;
            goto label_25396c;
        }
    }
    ctx->pc = 0x25379Cu;
label_25379c:
    // 0x25379c: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x25379Cu;
    {
        const bool branch_taken_0x25379c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2537A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25379Cu;
        // 0x2537a0: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25379c) {
            ctx->pc = 0x253970u;
            goto label_253970;
        }
    }
    ctx->pc = 0x2537A4u;
    // 0x2537a4: 0x6a30006  bgezl       $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2537A4u;
    {
        const bool branch_taken_0x2537a4 = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x2537a4) {
            ctx->pc = 0x2537A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2537A4u;
            // 0x2537a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2537C0u;
            goto label_2537c0;
        }
    }
    ctx->pc = 0x2537ACu;
    // 0x2537ac: 0x151827  nor         $v1, $zero, $s5
    ctx->pc = 0x2537acu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 21)));
    // 0x2537b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2537b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2537b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2537B4u;
    {
        const bool branch_taken_0x2537b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2537B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537B4u;
        // 0x2537b8: 0x628804  sllv        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2537b4) {
            ctx->pc = 0x2537CCu;
            goto label_2537cc;
        }
    }
    ctx->pc = 0x2537BCu;
    // 0x2537bc: 0x0  nop
    ctx->pc = 0x2537bcu;
    // NOP
label_2537c0:
    // 0x2537c0: 0xc08f580  jal         func_23D600
    ctx->pc = 0x2537C0u;
    SET_GPR_U32(ctx, 31, 0x2537C8u);
    ctx->pc = 0x2537C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537C0u;
    // 0x2537c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D600u, 0x2537C0u, 0x2537C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537C8u;
label_2537c8:
    // 0x2537c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2537c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2537cc:
    // 0x2537cc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2537ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2537d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2537d4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2537d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2537d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2537dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537e0: 0xc0984ce  jal         func_261338
    ctx->pc = 0x2537E0u;
    SET_GPR_U32(ctx, 31, 0x2537E8u);
    ctx->pc = 0x2537E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537E0u;
    // 0x2537e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261338u, 0x2537E0u, 0x2537E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537E8u;
label_2537e8:
    // 0x2537e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2537e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537ec: 0xc095324  jal         func_254C90
    ctx->pc = 0x2537ECu;
    SET_GPR_U32(ctx, 31, 0x2537F4u);
    ctx->pc = 0x2537F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537ECu;
    // 0x2537f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C90u, 0x2537ECu, 0x2537F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537F4u;
label_2537f4:
    // 0x2537f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2537f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537f8: 0x1240005c  beqz        $s2, . + 4 + (0x5C << 2)
    ctx->pc = 0x2537F8u;
    {
        const bool branch_taken_0x2537f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2537FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537F8u;
        // 0x2537fc: 0x27be0080  addiu       $fp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2537f8) {
            ctx->pc = 0x25396Cu;
            goto label_25396c;
        }
    }
    ctx->pc = 0x253800u;
    // 0x253800: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x253800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x253804: 0xc6ec0010  lwc1        $f12, 0x10($s7)
    ctx->pc = 0x253804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x253808: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x253808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x25380c: 0xc6ed0018  lwc1        $f13, 0x18($s7)
    ctx->pc = 0x25380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x253810: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x253810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x253814: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x253814u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x253818: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25381c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25381cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x253820: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x253820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253824: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x253824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x253828: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x253828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x25382c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x25382cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x253830: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x253830u;
    SET_GPR_U32(ctx, 31, 0x253838u);
    ctx->pc = 0x253834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253830u;
    // 0x253834: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x253830u, 0x253838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253838u;
label_253838:
    // 0x253838: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x253838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x25383c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x25383cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253840: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x253840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_253848:
    // 0x253848: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x253848u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25384c: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x25384cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x253850: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x253850u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x253854: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x253854u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x253858: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x253858u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x25385c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x25385cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x253860: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x253860u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x253864: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x253864u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x253868: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x253868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x25386c: 0x0  nop
    ctx->pc = 0x25386cu;
    // NOP
    // 0x253870: 0x0  nop
    ctx->pc = 0x253870u;
    // NOP
    // 0x253874: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x253874u;
    {
        const bool branch_taken_0x253874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x253878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253874u;
        // 0x253878: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253874) {
            ctx->pc = 0x253848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253848;
        }
    }
    ctx->pc = 0x25387Cu;
    // 0x25387c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x25387cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x253880: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x253880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253884: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x253884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253888: 0xc08f596  jal         func_23D658
    ctx->pc = 0x253888u;
    SET_GPR_U32(ctx, 31, 0x253890u);
    ctx->pc = 0x25388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253888u;
    // 0x25388c: 0x24530047  addiu       $s3, $v0, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D658u, 0x253888u, 0x253890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253890u;
label_253890:
    // 0x253890: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x253890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x253894: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x253894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x253898: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x253898u;
    {
        const bool branch_taken_0x253898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253898u;
        // 0x25389c: 0x27b60004  addiu       $s6, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253898) {
            ctx->pc = 0x2538B8u;
            goto label_2538b8;
        }
    }
    ctx->pc = 0x2538A0u;
    // 0x2538a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2538a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538a4: 0xc09159a  jal         func_245668
    ctx->pc = 0x2538A4u;
    SET_GPR_U32(ctx, 31, 0x2538ACu);
    ctx->pc = 0x2538A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538A4u;
    // 0x2538a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245668u, 0x2538A4u, 0x2538ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538ACu;
label_2538ac:
    // 0x2538ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2538ACu;
    {
        const bool branch_taken_0x2538ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2538B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538ACu;
        // 0x2538b0: 0x3231ffff  andi        $s1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538ac) {
            ctx->pc = 0x2538BCu;
            goto label_2538bc;
        }
    }
    ctx->pc = 0x2538B4u;
    // 0x2538b4: 0x0  nop
    ctx->pc = 0x2538b4u;
    // NOP
label_2538b8:
    // 0x2538b8: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x2538b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_2538bc:
    // 0x2538bc: 0x8ba900a3  lwl         $t1, 0xA3($sp)
    ctx->pc = 0x2538bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x2538c0: 0x9ba900a0  lwr         $t1, 0xA0($sp)
    ctx->pc = 0x2538c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x2538c4: 0xaac90003  swl         $t1, 0x3($s6)
    ctx->pc = 0x2538c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2538c8: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2538C8u;
    {
        const bool branch_taken_0x2538c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2538CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538C8u;
        // 0x2538cc: 0xbac90000  swr         $t1, 0x0($s6) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538c8) {
            ctx->pc = 0x253944u;
            goto label_253944;
        }
    }
    ctx->pc = 0x2538D0u;
label_2538d0:
    // 0x2538d0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2538d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538d4: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2538d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2538d8:
    // 0x2538d8: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x2538d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2538dc: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x2538dcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2538e0: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x2538e0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2538e4: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x2538e4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2538e8: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x2538e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x2538ec: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2538ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2538f0: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x2538f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x2538f4: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x2538f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x2538f8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2538f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2538fc: 0x0  nop
    ctx->pc = 0x2538fcu;
    // NOP
    // 0x253900: 0x0  nop
    ctx->pc = 0x253900u;
    // NOP
    // 0x253904: 0x1450fff4  bne         $v0, $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x253904u;
    {
        const bool branch_taken_0x253904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x253908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253904u;
        // 0x253908: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253904) {
            ctx->pc = 0x2538D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2538d8;
        }
    }
    ctx->pc = 0x25390Cu;
    // 0x25390c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x25390cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x253910: 0xa7b30008  sh          $s3, 0x8($sp)
    ctx->pc = 0x253910u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x253914: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x253914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253918: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x253918u;
    {
        const bool branch_taken_0x253918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253918u;
        // 0x25391c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253918) {
            ctx->pc = 0x253938u;
            goto label_253938;
        }
    }
    ctx->pc = 0x253920u;
    // 0x253920: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x253920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253924: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x253924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253928: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x253928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25392c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x25392cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253930: 0xc094c2a  jal         func_2530A8
    ctx->pc = 0x253930u;
    SET_GPR_U32(ctx, 31, 0x253938u);
    ctx->pc = 0x253934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253930u;
    // 0x253934: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2530A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2530A8u, 0x253930u, 0x253938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253938u;
label_253938:
    // 0x253938: 0x118842  srl         $s1, $s1, 1
    ctx->pc = 0x253938u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x25393c: 0x1620ffe4  bnez        $s1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x25393Cu;
    {
        const bool branch_taken_0x25393c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x253940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25393Cu;
        // 0x253940: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25393c) {
            ctx->pc = 0x2538D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2538d0;
        }
    }
    ctx->pc = 0x253944u;
label_253944:
    // 0x253944: 0x6a00009  bltz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x253944u;
    {
        const bool branch_taken_0x253944 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x253948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253944u;
        // 0x253948: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253944) {
            ctx->pc = 0x25396Cu;
            goto label_25396c;
        }
    }
    ctx->pc = 0x25394Cu;
    // 0x25394c: 0xc08f58a  jal         func_23D628
    ctx->pc = 0x25394Cu;
    SET_GPR_U32(ctx, 31, 0x253954u);
    ctx->pc = 0x253950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25394Cu;
    // 0x253950: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D628u, 0x25394Cu, 0x253954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253954u;
label_253954:
    // 0x253954: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x253954u;
    {
        const bool branch_taken_0x253954 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x253958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253954u;
        // 0x253958: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253954) {
            ctx->pc = 0x25396Cu;
            goto label_25396c;
        }
    }
    ctx->pc = 0x25395Cu;
    // 0x25395c: 0x26850002  addiu       $a1, $s4, 0x2
    ctx->pc = 0x25395cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x253960: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x253960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253964: 0xc08f4d4  jal         func_23D350
    ctx->pc = 0x253964u;
    SET_GPR_U32(ctx, 31, 0x25396Cu);
    ctx->pc = 0x253968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253964u;
    // 0x253968: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D350u, 0x253964u, 0x25396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25396Cu;
label_25396c:
    // 0x25396c: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x25396cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_253970:
    // 0x253970: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x253970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x253974: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x253974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x253978: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x253978u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x25397c: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x25397cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x253980: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x253980u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x253984: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x253984u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x253988: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x253988u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25398c: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x25398cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x253990: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x253990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x253994: 0x3e00008  jr          $ra
    ctx->pc = 0x253994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253994u;
        // 0x253998: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25399Cu;
    // 0x25399c: 0x0  nop
    ctx->pc = 0x25399cu;
    // NOP
    ctx->pc = 0x2539a0u;
}
