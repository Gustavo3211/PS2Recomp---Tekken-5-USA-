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

// Function: sub_002210B0
// Address: 0x2210b0 - 0x221300
void sub_002210B0_0x2210b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002210B0_0x2210b0");
#endif

    switch (ctx->pc) {
        case 0x221100u: goto label_221100;
        case 0x221138u: goto label_221138;
        case 0x221148u: goto label_221148;
        case 0x221170u: goto label_221170;
        case 0x221188u: goto label_221188;
        case 0x2211a4u: goto label_2211a4;
        case 0x2211b0u: goto label_2211b0;
        case 0x2211b8u: goto label_2211b8;
        case 0x2211c8u: goto label_2211c8;
        case 0x2211f0u: goto label_2211f0;
        case 0x221220u: goto label_221220;
        case 0x221290u: goto label_221290;
        case 0x2212d0u: goto label_2212d0;
        default: break;
    }

    ctx->pc = 0x2210b0u;

    // 0x2210b0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2210b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2210b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2210b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2210b8: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x2210b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x2210bc: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x2210bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x2210c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2210c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210c4: 0xffb70108  sd          $s7, 0x108($sp)
    ctx->pc = 0x2210c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 23));
    // 0x2210c8: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x2210c8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    // 0x2210cc: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x2210ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x2210d0: 0x26e38858  addiu       $v1, $s7, -0x77A8
    ctx->pc = 0x2210d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936664));
    // 0x2210d4: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x2210d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x2210d8: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x2210d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x2210dc: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x2210dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x2210e0: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x2210e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x2210e4: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2210e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2210e8: 0xe7b40118  swc1        $f20, 0x118($sp)
    ctx->pc = 0x2210e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2210ec: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2210ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x2210f0: 0x10820077  beq         $a0, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2210F0u;
    {
        const bool branch_taken_0x2210f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2210F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210F0u;
        // 0x2210f4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210f0) {
            ctx->pc = 0x2212D0u;
            goto label_2212d0;
        }
    }
    ctx->pc = 0x2210F8u;
    // 0x2210f8: 0xc088408  jal         func_221020
    ctx->pc = 0x2210F8u;
    SET_GPR_U32(ctx, 31, 0x221100u);
    ctx->pc = 0x2210FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210F8u;
    // 0x2210fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221020u, 0x2210F8u, 0x221100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221100u;
label_221100:
    // 0x221100: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x221100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x221104: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x221104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221108: 0x27b500b0  addiu       $s5, $sp, 0xB0
    ctx->pc = 0x221108u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x22110c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x22110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221110: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x221110u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x221114: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x221114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x221118: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x221118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x22111c: 0x6ba200c7  ldl         $v0, 0xC7($sp)
    ctx->pc = 0x22111cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x221120: 0x6fa200c0  ldr         $v0, 0xC0($sp)
    ctx->pc = 0x221120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x221124: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x221124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x221128: 0xb2a20007  sdl         $v0, 0x7($s5)
    ctx->pc = 0x221128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22112c: 0xb6a20000  sdr         $v0, 0x0($s5)
    ctx->pc = 0x22112cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x221130: 0xc08eaea  jal         func_23ABA8
    ctx->pc = 0x221130u;
    SET_GPR_U32(ctx, 31, 0x221138u);
    ctx->pc = 0x221134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221130u;
    // 0x221134: 0xaea30008  sw          $v1, 0x8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABA8u, 0x221130u, 0x221138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221138u;
label_221138:
    // 0x221138: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x221138u;
    {
        const bool branch_taken_0x221138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221138) {
            ctx->pc = 0x22113Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221138u;
            // 0x22113c: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x221158u;
            goto label_221158;
        }
    }
    ctx->pc = 0x221140u;
    // 0x221140: 0xc090c22  jal         func_243088
    ctx->pc = 0x221140u;
    SET_GPR_U32(ctx, 31, 0x221148u);
    ctx->pc = 0x243088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243088u, 0x221140u, 0x221148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221148u;
label_221148:
    // 0x221148: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x221148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22114c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x22114cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x221150: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x221150u;
    {
        const bool branch_taken_0x221150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221150u;
        // 0x221154: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221150) {
            ctx->pc = 0x221164u;
            goto label_221164;
        }
    }
    ctx->pc = 0x221158u;
label_221158:
    // 0x221158: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x221158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22115c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22115cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x221160: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x221160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_221164:
    // 0x221164: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x221164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221168: 0xc091346  jal         func_244D18
    ctx->pc = 0x221168u;
    SET_GPR_U32(ctx, 31, 0x221170u);
    ctx->pc = 0x22116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221168u;
    // 0x22116c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244D18u, 0x221168u, 0x221170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221170u;
label_221170:
    // 0x221170: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x221170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221174: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x221174u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x221178: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x221178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22117c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22117cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221180: 0xc091368  jal         func_244DA0
    ctx->pc = 0x221180u;
    SET_GPR_U32(ctx, 31, 0x221188u);
    ctx->pc = 0x221184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221180u;
    // 0x221184: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244DA0u, 0x221180u, 0x221188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221188u;
label_221188:
    // 0x221188: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x221188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x22118c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x22118cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x221190: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x221190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x221194: 0x8c8488d0  lw          $a0, -0x7730($a0)
    ctx->pc = 0x221194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936784)));
    // 0x221198: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x221198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22119c: 0xc0915e4  jal         func_245790
    ctx->pc = 0x22119Cu;
    SET_GPR_U32(ctx, 31, 0x2211A4u);
    ctx->pc = 0x2211A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22119Cu;
    // 0x2211a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245790u, 0x22119Cu, 0x2211A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211A4u;
label_2211a4:
    // 0x2211a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2211a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211a8: 0xc08835a  jal         func_220D68
    ctx->pc = 0x2211A8u;
    SET_GPR_U32(ctx, 31, 0x2211B0u);
    ctx->pc = 0x2211ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2211A8u;
    // 0x2211ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220D68u, 0x2211A8u, 0x2211B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211B0u;
label_2211b0:
    // 0x2211b0: 0xc088394  jal         func_220E50
    ctx->pc = 0x2211B0u;
    SET_GPR_U32(ctx, 31, 0x2211B8u);
    ctx->pc = 0x2211B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2211B0u;
    // 0x2211b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220E50u, 0x2211B0u, 0x2211B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211B8u;
label_2211b8:
    // 0x2211b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2211b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2211bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211c0: 0xc0883c4  jal         func_220F10
    ctx->pc = 0x2211C0u;
    SET_GPR_U32(ctx, 31, 0x2211C8u);
    ctx->pc = 0x2211C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2211C0u;
    // 0x2211c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F10u, 0x2211C0u, 0x2211C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211C8u;
label_2211c8:
    // 0x2211c8: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x2211c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x2211cc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2211ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2211d0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2211d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2211d4: 0x3c110015  lui         $s1, 0x15
    ctx->pc = 0x2211d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)21 << 16));
    // 0x2211d8: 0x26315f10  addiu       $s1, $s1, 0x5F10
    ctx->pc = 0x2211d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24336));
    // 0x2211dc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2211dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2211e0: 0x24768858  addiu       $s6, $v1, -0x77A8
    ctx->pc = 0x2211e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x2211e4: 0x249523b0  addiu       $s5, $a0, 0x23B0
    ctx->pc = 0x2211e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 9136));
    // 0x2211e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2211e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2211ec: 0x0  nop
    ctx->pc = 0x2211ecu;
    // NOP
label_2211f0:
    // 0x2211f0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2211f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2211f4: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2211f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2211f8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2211f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2211fc: 0x460ca034  c.lt.s      $f20, $f12
    ctx->pc = 0x2211fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221200: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x221200u;
    {
        const bool branch_taken_0x221200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221200) {
            ctx->pc = 0x221204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221200u;
            // 0x221204: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221250u;
            goto label_221250;
        }
    }
    ctx->pc = 0x221208u;
    // 0x221208: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x221208u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x22120c: 0x2852021  addu        $a0, $s4, $a1
    ctx->pc = 0x22120cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x221210: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x221210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x221214: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x221214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x221218: 0xc0881da  jal         func_220768
    ctx->pc = 0x221218u;
    SET_GPR_U32(ctx, 31, 0x221220u);
    ctx->pc = 0x22121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221218u;
    // 0x22121c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220768u, 0x221218u, 0x221220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221220u;
label_221220:
    // 0x221220: 0x8ec20054  lw          $v0, 0x54($s6)
    ctx->pc = 0x221220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x221224: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x221224u;
    {
        const bool branch_taken_0x221224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221224u;
        // 0x221228: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221224) {
            ctx->pc = 0x221238u;
            goto label_221238;
        }
    }
    ctx->pc = 0x22122Cu;
    // 0x22122c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x22122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x221230: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x221230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x221234: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x221234u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_221238:
    // 0x221238: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221238u;
    {
        const bool branch_taken_0x221238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221238u;
        // 0x22123c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221238) {
            ctx->pc = 0x221250u;
            goto label_221250;
        }
    }
    ctx->pc = 0x221240u;
    // 0x221240: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x221240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221244: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x221244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221248: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x221248u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22124c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x22124cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_221250:
    // 0x221250: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x221250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x221254: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x221254u;
    {
        const bool branch_taken_0x221254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221254u;
        // 0x221258: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221254) {
            ctx->pc = 0x2211F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2211f0;
        }
    }
    ctx->pc = 0x22125Cu;
    // 0x22125c: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x22125cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x221260: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x221260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221264: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x221264u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x221268: 0x26105ed0  addiu       $s0, $s0, 0x5ED0
    ctx->pc = 0x221268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24272));
    // 0x22126c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x22126cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x221270: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x221270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221274: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x221274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221278: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x221278u;
    {
        const bool branch_taken_0x221278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221278) {
            ctx->pc = 0x22127Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221278u;
            // 0x22127c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2212C8u;
            goto label_2212c8;
        }
    }
    ctx->pc = 0x221280u;
    // 0x221280: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x221280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x221284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221288: 0xc0881da  jal         func_220768
    ctx->pc = 0x221288u;
    SET_GPR_U32(ctx, 31, 0x221290u);
    ctx->pc = 0x22128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221288u;
    // 0x22128c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220768u, 0x221288u, 0x221290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221290u;
label_221290:
    // 0x221290: 0x26e28858  addiu       $v0, $s7, -0x77A8
    ctx->pc = 0x221290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936664));
    // 0x221294: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x221294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x221298: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221298u;
    {
        const bool branch_taken_0x221298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221298u;
        // 0x22129c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221298) {
            ctx->pc = 0x2212B0u;
            goto label_2212b0;
        }
    }
    ctx->pc = 0x2212A0u;
    // 0x2212a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2212a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2212a4: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x2212a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x2212a8: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2212a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2212ac: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2212acu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2212b0:
    // 0x2212b0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2212B0u;
    {
        const bool branch_taken_0x2212b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2212B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212B0u;
        // 0x2212b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2212b0) {
            ctx->pc = 0x2212C8u;
            goto label_2212c8;
        }
    }
    ctx->pc = 0x2212B8u;
    // 0x2212b8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2212b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2212bc: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2212bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2212c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2212c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2212c4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2212c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2212c8:
    // 0x2212c8: 0xc090f5a  jal         func_243D68
    ctx->pc = 0x2212C8u;
    SET_GPR_U32(ctx, 31, 0x2212D0u);
    ctx->pc = 0x2212CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2212C8u;
    // 0x2212cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243D68u, 0x2212C8u, 0x2212D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212D0u;
label_2212d0:
    // 0x2212d0: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x2212d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2212d4: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x2212d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2212d8: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x2212d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2212dc: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x2212dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2212e0: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x2212e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2212e4: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x2212e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2212e8: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x2212e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2212ec: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x2212ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2212f0: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2212f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2212f4: 0xc7b40118  lwc1        $f20, 0x118($sp)
    ctx->pc = 0x2212f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2212f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2212F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2212FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2212F8u;
        // 0x2212fc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2212F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221300u;
}
