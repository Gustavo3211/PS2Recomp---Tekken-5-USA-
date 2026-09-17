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

// Function: sub_00363868
// Address: 0x363868 - 0x363950
void sub_00363868_0x363868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363868_0x363868");
#endif

    switch (ctx->pc) {
        case 0x36389cu: goto label_36389c;
        case 0x3638e4u: goto label_3638e4;
        case 0x36390cu: goto label_36390c;
        default: break;
    }

    ctx->pc = 0x363868u;

    // 0x363868: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x363868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x36386c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36386cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363870: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x363870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x363874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x363874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x363878: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x363878u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36387c: 0x2410006b  addiu       $s0, $zero, 0x6B
    ctx->pc = 0x36387cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x363880: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x363880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x363884: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x363884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x363888: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x363888u;
    {
        const bool branch_taken_0x363888 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x36388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363888u;
        // 0x36388c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363888) {
            ctx->pc = 0x3638A8u;
            goto label_3638a8;
        }
    }
    ctx->pc = 0x363890u;
    // 0x363890: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x363890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x363894: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x363894u;
    SET_GPR_U32(ctx, 31, 0x36389Cu);
    ctx->pc = 0x363898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363894u;
    // 0x363898: 0x248478c8  addiu       $a0, $a0, 0x78C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x363894u, 0x36389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36389Cu;
label_36389c:
    // 0x36389c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x36389Cu;
    {
        const bool branch_taken_0x36389c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3638A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36389Cu;
        // 0x3638a0: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36389c) {
            ctx->pc = 0x363938u;
            goto label_363938;
        }
    }
    ctx->pc = 0x3638A4u;
    // 0x3638a4: 0x0  nop
    ctx->pc = 0x3638a4u;
    // NOP
label_3638a8:
    // 0x3638a8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3638a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3638ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3638acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3638b0: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x3638b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x3638b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3638b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3638b8: 0x0  nop
    ctx->pc = 0x3638b8u;
    // NOP
    // 0x3638bc: 0x0  nop
    ctx->pc = 0x3638bcu;
    // NOP
    // 0x3638c0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3638c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x3638c4: 0x0  nop
    ctx->pc = 0x3638c4u;
    // NOP
    // 0x3638c8: 0x0  nop
    ctx->pc = 0x3638c8u;
    // NOP
    // 0x3638cc: 0x460c0004  c1          0xC0004
    ctx->pc = 0x3638ccu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3638d0: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x3638d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3638d4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3638D4u;
    {
        const bool branch_taken_0x3638d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3638d4) {
            ctx->pc = 0x3638D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3638D4u;
            // 0x3638d8: 0x46140042  mul.s       $f1, $f0, $f20 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3638E8u;
            goto label_3638e8;
        }
    }
    ctx->pc = 0x3638DCu;
    // 0x3638dc: 0xc04754c  jal         func_11D530
    ctx->pc = 0x3638DCu;
    SET_GPR_U32(ctx, 31, 0x3638E4u);
    ctx->pc = 0x11D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D530u, 0x3638DCu, 0x3638E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3638E4u;
label_3638e4:
    // 0x3638e4: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x3638e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3638e8:
    // 0x3638e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3638e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3638ec: 0xc4a0be80  lwc1        $f0, -0x4180($a1)
    ctx->pc = 0x3638ecu;
    { uint32_t bits = FAST_READ32(0x45BE80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3638f0: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x3638f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x3638f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3638f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3638f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3638F8u;
    {
        const bool branch_taken_0x3638f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3638FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3638F8u;
        // 0x3638fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3638f8) {
            ctx->pc = 0x363908u;
            goto label_363908;
        }
    }
    ctx->pc = 0x363900u;
    // 0x363900: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x363900u;
    {
        const bool branch_taken_0x363900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363900u;
        // 0x363904: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363900) {
            ctx->pc = 0x363934u;
            goto label_363934;
        }
    }
    ctx->pc = 0x363908u;
label_363908:
    // 0x363908: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x363908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_36390c:
    // 0x36390c: 0x2882006c  slti        $v0, $a0, 0x6C
    ctx->pc = 0x36390cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x363910: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x363910u;
    {
        const bool branch_taken_0x363910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363910u;
        // 0x363914: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363910) {
            ctx->pc = 0x363934u;
            goto label_363934;
        }
    }
    ctx->pc = 0x363918u;
    // 0x363918: 0x24a2be80  addiu       $v0, $a1, -0x4180
    ctx->pc = 0x363918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950528));
    // 0x36391c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x36391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x363920: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x363920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363924: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x363924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363928: 0x4502fff8  bc1fl       . + 4 + (-0x8 << 2)
    ctx->pc = 0x363928u;
    {
        const bool branch_taken_0x363928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363928) {
            ctx->pc = 0x36392Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363928u;
            // 0x36392c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36390Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36390c;
        }
    }
    ctx->pc = 0x363930u;
    // 0x363930: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_363934:
    // 0x363934: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x363934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363938:
    // 0x363938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36393c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36393cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x363940: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x363940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x363944: 0x3e00008  jr          $ra
    ctx->pc = 0x363944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363944u;
        // 0x363948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36394Cu;
    // 0x36394c: 0x0  nop
    ctx->pc = 0x36394cu;
    // NOP
    ctx->pc = 0x363950u;
}
