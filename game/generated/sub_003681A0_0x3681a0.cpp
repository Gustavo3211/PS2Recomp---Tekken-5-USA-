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

// Function: sub_003681A0
// Address: 0x3681a0 - 0x368538
void sub_003681A0_0x3681a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003681A0_0x3681a0");
#endif

    switch (ctx->pc) {
        case 0x3681dcu: goto label_3681dc;
        case 0x368278u: goto label_368278;
        case 0x3682a8u: goto label_3682a8;
        case 0x3682d0u: goto label_3682d0;
        case 0x3682e0u: goto label_3682e0;
        case 0x36830cu: goto label_36830c;
        case 0x368340u: goto label_368340;
        case 0x368368u: goto label_368368;
        case 0x368378u: goto label_368378;
        case 0x368428u: goto label_368428;
        case 0x368434u: goto label_368434;
        case 0x368440u: goto label_368440;
        case 0x3684a8u: goto label_3684a8;
        case 0x3684c4u: goto label_3684c4;
        case 0x3684d8u: goto label_3684d8;
        case 0x3684e8u: goto label_3684e8;
        default: break;
    }

    ctx->pc = 0x3681a0u;

    // 0x3681a0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3681a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3681a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3681a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3681a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3681a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3681ac: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3681acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3681b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3681b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3681b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3681b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3681b8: 0x2c840030  sltiu       $a0, $a0, 0x30
    ctx->pc = 0x3681b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x3681bc: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x3681bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x3681c0: 0x24636478  addiu       $v1, $v1, 0x6478
    ctx->pc = 0x3681c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25720));
    // 0x3681c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3681c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3681c8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3681C8u;
    {
        const bool branch_taken_0x3681c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3681CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3681C8u;
        // 0x3681cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3681c8) {
            ctx->pc = 0x3681E8u;
            goto label_3681e8;
        }
    }
    ctx->pc = 0x3681D0u;
    // 0x3681d0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3681d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3681d4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3681D4u;
    SET_GPR_U32(ctx, 31, 0x3681DCu);
    ctx->pc = 0x3681D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3681D4u;
    // 0x3681d8: 0x24847b00  addiu       $a0, $a0, 0x7B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3681D4u, 0x3681DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3681DCu;
label_3681dc:
    // 0x3681dc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3681DCu;
    {
        const bool branch_taken_0x3681dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3681E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3681DCu;
        // 0x3681e0: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3681dc) {
            ctx->pc = 0x368234u;
            goto label_368234;
        }
    }
    ctx->pc = 0x3681E4u;
    // 0x3681e4: 0x0  nop
    ctx->pc = 0x3681e4u;
    // NOP
label_3681e8:
    // 0x3681e8: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x3681e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3681ec: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x3681ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3681f0: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3681f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3681f4: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x3681f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3681f8: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x3681f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3681fc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x3681fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x368200: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368204: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x368204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x368208: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x368208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x36820c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x36820cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x368210: 0xb0640013  sdl         $a0, 0x13($v1)
    ctx->pc = 0x368210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x368214: 0xb464000c  sdr         $a0, 0xC($v1)
    ctx->pc = 0x368214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x368218: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x368218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x36821c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x36821cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x368220: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x368220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x368224: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x368224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x368228: 0xb064001f  sdl         $a0, 0x1F($v1)
    ctx->pc = 0x368228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36822c: 0xb4640018  sdr         $a0, 0x18($v1)
    ctx->pc = 0x36822cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x368230: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x368230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_368234:
    // 0x368234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x368234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368238: 0x3e00008  jr          $ra
    ctx->pc = 0x368238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368238u;
        // 0x36823c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368240u;
    // 0x368240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x368240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x368244: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x368244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x368248: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x368248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36824c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x36824cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x368250: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x368250u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x368254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368258: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x368258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x36825c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x36825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x368260: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x368260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368264: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x368264u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x368268: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x368268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x36826c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x36826cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x368270: 0xc0da49a  jal         func_369268
    ctx->pc = 0x368270u;
    SET_GPR_U32(ctx, 31, 0x368278u);
    ctx->pc = 0x368274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368270u;
    // 0x368274: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369268u, 0x368270u, 0x368278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368278u;
label_368278:
    // 0x368278: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x368278u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36827c: 0xc78096ac  lwc1        $f0, -0x6954($gp)
    ctx->pc = 0x36827cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x368280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368284: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x368284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368288: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x368288u;
    {
        const bool branch_taken_0x368288 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x36828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368288u;
        // 0x36828c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368288) {
            ctx->pc = 0x3682A0u;
            goto label_3682a0;
        }
    }
    ctx->pc = 0x368290u;
    // 0x368290: 0xc78096b0  lwc1        $f0, -0x6950($gp)
    ctx->pc = 0x368290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368294: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x368294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368298: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x368298u;
    {
        const bool branch_taken_0x368298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368298u;
        // 0x36829c: 0x3c02001d  lui         $v0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368298) {
            ctx->pc = 0x3682E8u;
            goto label_3682e8;
        }
    }
    ctx->pc = 0x3682A0u;
label_3682a0:
    // 0x3682a0: 0xc0da494  jal         func_369250
    ctx->pc = 0x3682A0u;
    SET_GPR_U32(ctx, 31, 0x3682A8u);
    ctx->pc = 0x3682A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3682A0u;
    // 0x3682a4: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369250u, 0x3682A0u, 0x3682A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3682A8u;
label_3682a8:
    // 0x3682a8: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x3682a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x3682ac: 0x24666460  addiu       $a2, $v1, 0x6460
    ctx->pc = 0x3682acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 25696));
    // 0x3682b0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3682b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3682b4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3682b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3682b8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3682b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3682bc: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x3682bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3682c0: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x3682c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3682c4: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x3682c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1D6468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D6468u, _value); } while (0);
    // 0x3682c8: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x3682C8u;
    SET_GPR_U32(ctx, 31, 0x3682D0u);
    ctx->pc = 0x3682CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3682C8u;
    // 0x3682cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x3682C8u, 0x3682D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3682D0u;
label_3682d0:
    // 0x3682d0: 0x26107b38  addiu       $s0, $s0, 0x7B38
    ctx->pc = 0x3682d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31544));
    // 0x3682d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3682d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3682d8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3682D8u;
    SET_GPR_U32(ctx, 31, 0x3682E0u);
    ctx->pc = 0x3682DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3682D8u;
    // 0x3682dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3682D8u, 0x3682E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3682E0u;
label_3682e0:
    // 0x3682e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3682E0u;
    {
        const bool branch_taken_0x3682e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3682e0) {
            ctx->pc = 0x368304u;
            goto label_368304;
        }
    }
    ctx->pc = 0x3682E8u;
label_3682e8:
    // 0x3682e8: 0x24456460  addiu       $a1, $v0, 0x6460
    ctx->pc = 0x3682e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25696));
    // 0x3682ec: 0x6a070007  ldl         $a3, 0x7($s0)
    ctx->pc = 0x3682ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3682f0: 0x6e070000  ldr         $a3, 0x0($s0)
    ctx->pc = 0x3682f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3682f4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3682f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3682f8: 0xb0a70007  sdl         $a3, 0x7($a1)
    ctx->pc = 0x3682f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3682fc: 0xb4a70000  sdr         $a3, 0x0($a1)
    ctx->pc = 0x3682fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x368300: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x368300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_368304:
    // 0x368304: 0xc0da49a  jal         func_369268
    ctx->pc = 0x368304u;
    SET_GPR_U32(ctx, 31, 0x36830Cu);
    ctx->pc = 0x368308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368304u;
    // 0x368308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369268u, 0x368304u, 0x36830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36830Cu;
label_36830c:
    // 0x36830c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36830cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368310: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x368310u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x368314: 0xc78096b4  lwc1        $f0, -0x694C($gp)
    ctx->pc = 0x368314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368318: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x368318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36831c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x36831cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368320: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x368320u;
    {
        const bool branch_taken_0x368320 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x368324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368320u;
        // 0x368324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368320) {
            ctx->pc = 0x368338u;
            goto label_368338;
        }
    }
    ctx->pc = 0x368328u;
    // 0x368328: 0xc78096b8  lwc1        $f0, -0x6948($gp)
    ctx->pc = 0x368328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36832c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x36832cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368330: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x368330u;
    {
        const bool branch_taken_0x368330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x368334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368330u;
        // 0x368334: 0x3c02001d  lui         $v0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368330) {
            ctx->pc = 0x368380u;
            goto label_368380;
        }
    }
    ctx->pc = 0x368338u;
label_368338:
    // 0x368338: 0xc0da494  jal         func_369250
    ctx->pc = 0x368338u;
    SET_GPR_U32(ctx, 31, 0x368340u);
    ctx->pc = 0x36833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368338u;
    // 0x36833c: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369250u, 0x368338u, 0x368340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368340u;
label_368340:
    // 0x368340: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x368340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x368344: 0x2464646c  addiu       $a0, $v1, 0x646C
    ctx->pc = 0x368344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25708));
    // 0x368348: 0x6a460007  ldl         $a2, 0x7($s2)
    ctx->pc = 0x368348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x36834c: 0x6e460000  ldr         $a2, 0x0($s2)
    ctx->pc = 0x36834cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x368350: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x368350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x368354: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x368354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x368358: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x368358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36835c: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x36835cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1D6474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D6474u, _value); } while (0);
    // 0x368360: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x368360u;
    SET_GPR_U32(ctx, 31, 0x368368u);
    ctx->pc = 0x368364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368360u;
    // 0x368364: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x368360u, 0x368368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368368u;
label_368368:
    // 0x368368: 0x26107b70  addiu       $s0, $s0, 0x7B70
    ctx->pc = 0x368368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31600));
    // 0x36836c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36836cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368370: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x368370u;
    SET_GPR_U32(ctx, 31, 0x368378u);
    ctx->pc = 0x368374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368370u;
    // 0x368374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x368370u, 0x368378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368378u;
label_368378:
    // 0x368378: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x368378u;
    {
        const bool branch_taken_0x368378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368378u;
        // 0x36837c: 0x3c03001d  lui         $v1, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368378) {
            ctx->pc = 0x3683A0u;
            goto label_3683a0;
        }
    }
    ctx->pc = 0x368380u;
label_368380:
    // 0x368380: 0x2443646c  addiu       $v1, $v0, 0x646C
    ctx->pc = 0x368380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25708));
    // 0x368384: 0x6a250007  ldl         $a1, 0x7($s1)
    ctx->pc = 0x368384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x368388: 0x6e250000  ldr         $a1, 0x0($s1)
    ctx->pc = 0x368388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x36838c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x36838cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x368390: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x368390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x368394: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x368394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x368398: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x368398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x36839c: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x36839cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
label_3683a0:
    // 0x3683a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3683a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3683a4: 0x24636448  addiu       $v1, $v1, 0x6448
    ctx->pc = 0x3683a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25672));
    // 0x3683a8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3683a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3683ac: 0x6a840007  ldl         $a0, 0x7($s4)
    ctx->pc = 0x3683acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3683b0: 0x6e840000  ldr         $a0, 0x0($s4)
    ctx->pc = 0x3683b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3683b4: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x3683b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3683b8: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x3683b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3683bc: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x3683bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3683c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3683c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3683c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3683c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3683c8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x3683c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x3683cc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3683ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3683d0: 0x6a640007  ldl         $a0, 0x7($s3)
    ctx->pc = 0x3683d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3683d4: 0x6e640000  ldr         $a0, 0x0($s3)
    ctx->pc = 0x3683d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3683d8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x3683d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3683dc: 0xb0640013  sdl         $a0, 0x13($v1)
    ctx->pc = 0x3683dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3683e0: 0xb464000c  sdr         $a0, 0xC($v1)
    ctx->pc = 0x3683e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3683e4: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x3683e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x3683e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3683e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3683ec: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3683ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3683f0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3683f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3683f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3683F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3683F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3683F4u;
        // 0x3683f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3683F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3683FCu;
    // 0x3683fc: 0x0  nop
    ctx->pc = 0x3683fcu;
    // NOP
    // 0x368400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x368404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368408: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x368408u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x36840c: 0x26106428  addiu       $s0, $s0, 0x6428
    ctx->pc = 0x36840cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25640));
    // 0x368410: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x368410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x368414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x368414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x368418: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x368418u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x36841c: 0xe60c000c  swc1        $f12, 0xC($s0)
    ctx->pc = 0x36841cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D6434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D6434u, _value); } while (0); }
    // 0x368420: 0xc0da27a  jal         func_3689E8
    ctx->pc = 0x368420u;
    SET_GPR_U32(ctx, 31, 0x368428u);
    ctx->pc = 0x368424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368420u;
    // 0x368424: 0x26317a20  addiu       $s1, $s1, 0x7A20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 31264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3689E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3689E8u, 0x368420u, 0x368428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368428u;
label_368428:
    // 0x368428: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x368428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x36842c: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x36842Cu;
    SET_GPR_U32(ctx, 31, 0x368434u);
    ctx->pc = 0x368430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36842Cu;
    // 0x368430: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x36842Cu, 0x368434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368434u;
label_368434:
    // 0x368434: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x368434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368438: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x368438u;
    SET_GPR_U32(ctx, 31, 0x368440u);
    ctx->pc = 0x36843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368438u;
    // 0x36843c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x368438u, 0x368440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368440u;
label_368440:
    // 0x368440: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x368448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36844c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36844cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368450: 0x3e00008  jr          $ra
    ctx->pc = 0x368450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368450u;
        // 0x368454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368458u;
    // 0x368458: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x368458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x36845c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36845cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368460: 0x3e00008  jr          $ra
    ctx->pc = 0x368460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368460u;
        // 0x368464: 0xe46c6438  swc1        $f12, 0x6438($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 25656), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368468u;
    // 0x368468: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x368468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x36846c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36846cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368470: 0x3e00008  jr          $ra
    ctx->pc = 0x368470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368470u;
        // 0x368474: 0xe46c6430  swc1        $f12, 0x6430($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 25648), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368478u;
    // 0x368478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36847c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x36847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x368480: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x368480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x368484: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x368484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368488: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x368488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36848c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36848cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368490: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x368490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x368494: 0x24455098  addiu       $a1, $v0, 0x5098
    ctx->pc = 0x368494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20632));
    // 0x368498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36849c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3684a0: 0xc04a520  jal         func_129480
    ctx->pc = 0x3684A0u;
    SET_GPR_U32(ctx, 31, 0x3684A8u);
    ctx->pc = 0x3684A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3684A0u;
    // 0x3684a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129480u, 0x3684A0u, 0x3684A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3684A8u;
label_3684a8:
    // 0x3684a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3684a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3684ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3684acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3684b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3684B0u;
    {
        const bool branch_taken_0x3684b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3684B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3684B0u;
        // 0x3684b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3684b0) {
            ctx->pc = 0x3684D0u;
            goto label_3684d0;
        }
    }
    ctx->pc = 0x3684B8u;
    // 0x3684b8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3684b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3684bc: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3684BCu;
    SET_GPR_U32(ctx, 31, 0x3684C4u);
    ctx->pc = 0x3684C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3684BCu;
    // 0x3684c0: 0x24847ba8  addiu       $a0, $a0, 0x7BA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3684BCu, 0x3684C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3684C4u;
label_3684c4:
    // 0x3684c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3684c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3684c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3684C8u;
    {
        const bool branch_taken_0x3684c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3684CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3684C8u;
        // 0x3684cc: 0x34420028  ori         $v0, $v0, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3684c8) {
            ctx->pc = 0x3684ECu;
            goto label_3684ec;
        }
    }
    ctx->pc = 0x3684D0u;
label_3684d0:
    // 0x3684d0: 0xc0d7a62  jal         func_35E988
    ctx->pc = 0x3684D0u;
    SET_GPR_U32(ctx, 31, 0x3684D8u);
    ctx->pc = 0x3684D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3684D0u;
    // 0x3684d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E988u, 0x3684D0u, 0x3684D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3684D8u;
label_3684d8:
    // 0x3684d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3684D8u;
    {
        const bool branch_taken_0x3684d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3684DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3684D8u;
        // 0x3684dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3684d8) {
            ctx->pc = 0x3684ECu;
            goto label_3684ec;
        }
    }
    ctx->pc = 0x3684E0u;
    // 0x3684e0: 0xc0d7c74  jal         func_35F1D0
    ctx->pc = 0x3684E0u;
    SET_GPR_U32(ctx, 31, 0x3684E8u);
    ctx->pc = 0x3684E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3684E0u;
    // 0x3684e4: 0x96240000  lhu         $a0, 0x0($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F1D0u, 0x3684E0u, 0x3684E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3684E8u;
label_3684e8:
    // 0x3684e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3684e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3684ec:
    // 0x3684ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3684ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3684f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3684f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3684f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3684f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3684f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3684f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3684fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3684FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3684FCu;
        // 0x368500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3684FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368504u;
    // 0x368504: 0x0  nop
    ctx->pc = 0x368504u;
    // NOP
    // 0x368508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36850c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x368510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x368510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368514: 0x80d7ac2  j           func_35EB08
    ctx->pc = 0x368514u;
    ctx->pc = 0x368518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368514u;
    // 0x368518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EB08u, 0x368514u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36851Cu;
    // 0x36851c: 0x0  nop
    ctx->pc = 0x36851cu;
    // NOP
    // 0x368520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x368524: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x368524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x368528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x368528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36852c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36852cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368530: 0x80d7ade  j           func_35EB78
    ctx->pc = 0x368530u;
    ctx->pc = 0x368534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368530u;
    // 0x368534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EB78u;
    sub_0035EB78_0x35eb78(rdram, ctx, runtime); return;
    ctx->pc = 0x368538u;
}
